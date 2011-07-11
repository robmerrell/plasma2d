class LoadingScene extends Scene {
    logo = 0
    instructions = 0
    texture_count = 0
    loaded_textures = 0
    
    constructor() {
        base.constructor()
        
        // load the logo image and add it to the scene
        logo = ::ActorFactory("logo.png", 256, 128)
        logo.setAnchor(0.5, 0.5)
        logo.setDimensions(256, 128)
        addToScene(logo)
        
        // slap the instructions label on the scene
        // TODO: labels are jacked, they need to be polished
//        instructions = ::LabelFactory("0.123456789", "fps", 200, 500)
//        addToScene(instructions)
        
        // listen for an event that fires after we have displayed the
        // logo image for the first time. Now we want to start preloading
        // all of our other assets
        on("sceneUpdate", loadTextures.bindenv(this))
        on("textureLoaded", updateLoadedMessage.bindenv(this))
        on("touch", onTouch.bindenv(this))
    }
    
    function loadTextures(event) {
        // we only want this event to fire once. We only want to load the textures once and it
        // is a very expensive event. It should be used sparingly.
        ignore("sceneUpdate")
        
        // Textures that we want to load. You shouldn't always load all textuers
        // at the beginning of the game. If you have a lot of textures you may want consider
        // loading only the required textures before each level.
        local textures = ["logo.png"]
        texture_count = textures.len()
        
        // iterate through the textures and load each one, when the texture is loaded
        // emit the textureLoaded custom event
        foreach (texture in textures) {
            ::preloadTexture(texture, function(texture_name) {
                ::emitEvent("textureLoaded")
            })
        }
    }
    
    function updateLoadedMessage(event) {
        loaded_textures++
    }
    
    function onTouch(event) {
        if (event.payload.stage == "began") {
            logo.setXY(event.payload.x, event.payload.y)
        } else if (event.payload.stage == "moved") {
            logo.setXY(event.payload.current_x, event.payload.current_y)
        }
    }
}
