local LoadingScene = {}

function LoadingScene.new()
    local scene = p2d.Scene:new()
    
    -- called when the scene first
    function scene:init()
        -- add the logo
        local logo_tex = load_texture("logo.png")
        local logo = ActorFactory(logo_tex, 200, 100)
        self:add_to_scene(logo)
        
        --
    end
    
    return scene
end

return LoadingScene