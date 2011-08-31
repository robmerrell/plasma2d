local LoadingScene = {}


function LoadingScene.new()
    local scene = p2d.Scene:new()
    local events = require "support/events"
    register_event_listeners(events.listeners)
    
    
    -- actors
    local logo
    local label
    
    
    -- called when the scene first
    function scene:init()
        -- add the logo
        local logo_tex = load_texture("logo.png")
        p2d.TextureCache.cache_texture(logo_tex)
        
        logo = p2d.Actor:new(p2d.TextureCache.get_cached_texture("logo.png"), 300, 300)
        logo.scale = 2
        logo:set_anchor(0.5, 0.5)
        self:add_to_scene(logo)
        
        -- add the label
        local fps_tex = load_texture("fps.png", "fonts")
        local bitmap_font = load_bitmap_font("fps", fps_tex)
        label = p2d.Label:new("0.987654321", bitmap_font, 200, 200)
        self:add_to_scene(label)
        
        -- system events
        events.on("touch", self.handle_touch, self)
        events.on("scene_update", self.scene_update, self)
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
    
    
    function scene:scene_update(event)
        label:set_text(p2d.Director.get_fps())
    end
    
    
    function scene:handle_custom(event)
        print("in handle custom")
        print(table.inspect(event))
    end
    
    
    return scene
end


return LoadingScene