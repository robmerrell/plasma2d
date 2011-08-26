local LoadingScene = {}


function LoadingScene.new()
    local scene = p2d.Scene:new()
    local events = require "support/events"
    register_event_listeners(events.listeners)
    
    
    -- actors
    local logo
    
    
    -- called when the scene first
    function scene:init()
        -- add the logo
        local logo_tex = load_texture("logo.png")
        logo = ActorFactory(logo_tex, 200, 100)
        logo:set_anchor(0.5, 0.5)
        self:add_to_scene(logo)
        
        -- with environment
        events.on("custom", self.handle_custom, self)
        emit("custom", "payload")
        
        events.on("without", something)
        emit("without", "my payload")
        
        -- system events
        events.on("touch", self.handle_touch, self)
    end
    
    
    function scene:handle_touch(event)
        if event.payload.stage == "began" then
            logo:set_coords(event.payload.x, event.payload.y)
        elseif event.payload.stage == "moved" then
            logo:set_coords(event.payload.current_x, event.payload.current_y)
        end
    end
    
    
    function scene:handle_custom(event)
        print("in handle custom")
        print(table.inspect(event))
    end
    
    
    return scene
end

-- Event handlers
function something(e)
    print("in something")
    print(table.inspect(e))
end

function touch(e)
    print("in touch " .. e.payload.stage)
end

return LoadingScene