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
        logo = p2d.Actor:new(logo_tex, 300, 300)
        logo.scale = 2
        logo:set_anchor(0.5, 0.5)
        self:add_to_scene(logo)
        
        local label = label_factory("0.123456789", "fps", 200, 200)
        self:add_to_scene(label)
        
        -- system events
        events.on("touch", self.handle_touch, self)
    end
    
    
    function scene:handle_touch(event)
        -- drag the logo when moving a finger
        if event.payload.stage == "began" then
            logo:set_coords(event.payload.x, event.payload.y)
        elseif event.payload.stage == "moved" then
            logo:set_coords(event.payload.current_x, event.payload.current_y)
        end
        
        print(logo.x .. ", " .. logo.y)
    end
    
    
    function scene:handle_custom(event)
        print("in handle custom")
        print(table.inspect(event))
    end
    
    
    return scene
end


return LoadingScene