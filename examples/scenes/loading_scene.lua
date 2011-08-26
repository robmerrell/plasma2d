local LoadingScene = {}

function LoadingScene.new()
    local scene = p2d.Scene:new()
    
    -- called when the scene first
    function scene:init()
        local logo_tex = load_texture("logo.png")
        
        local actor = p2d.Actor:new()
        actor:set_coords(100, 100)
        actor:set_texture(logo_tex)
        
        self:add_to_scene(actor)
    end
    
    return scene
end

return LoadingScene