local LoadingScene = {}


function LoadingScene.new()
    local scene = p2d.Scene:new()
    local events = require "support/events"
    register_event_listeners(events.listeners)
    
    
    -- actors
    local logo
    local label
    local expanded = false
    
    
    -- called when the scene first
    function scene:init()
        -- add the logo
        local logo_tex = load_texture("logo.png")
        p2d.TextureCache.cache_texture(logo_tex)
        
        logo = p2d.Actor:new(p2d.TextureCache.get_cached_texture("logo.png"), 300, 300)
        logo.scale = 1
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
        if event.payload.stage == "ended" then
            local scale
            if expanded then
                scale = 1
            else
                scale = 2
            end
            expanded = not expanded
            
            tween_to(logo, {time=750, x=event.payload.x, y=event.payload.y, scale=scale, transition=tween.ELASTIC})
        end
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