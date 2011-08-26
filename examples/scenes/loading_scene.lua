local LoadingScene = {}


function LoadingScene.new()
    local scene = p2d.Scene:new()
    local events = require "support/events"
    register_event_listeners(events.listeners)
    
    -- called when the scene first
    function scene:init()
        -- add the logo
        local logo_tex = load_texture("logo.png")
        local logo = ActorFactory(logo_tex, 200, 100)
        self:add_to_scene(logo)
        
        -- with environment
        events.on("custom", self.handle_custom, self)
        emit("custom", "payload")
        
        events.on("without", something)
        emit("without", "my payload")
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

return LoadingScene