local LoadingScene = {}

function LoadingScene.new()
    local scene = p2d.Scene:new()
    
    -- called when the scene first 
    function scene:init()
        local logo_tex = load_texture("logo.png")
        print(logo_tex:get_native_width())
        print(logo_tex:get_native_height())
        -- local logo = ActorFactory(logo_tex, 100, 100)
    end
    
    return scene
end

return LoadingScene