local LoadingScene = {}

function LoadingScene.new()
    local scene = p2d.Scene:new()
    
    -- called when the scene first 
    function scene:init()
        local logo_tex = load_texture("logo.png")
    end
    
    return scene
end

return LoadingScene