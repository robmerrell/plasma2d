class LoadingScene extends Scene {
    logo = 0
    texture_count = 0
    loaded_textures = 0
    
    constructor() {
        base.constructor()
        
        // Load the logo image and add it to the scene
        logo = ::ActorFactory("img_test.png", 300, 200)
        addToScene(logo)
        
        // Listen for an event that fires after we have displayed the
        // logo image for the first time. Now we want to start preloading
        // all of our other assets
        on("sceneUpdate", loadTextures.bindenv(this))
        on("textureLoaded", this.updateLoadedMessage.bindenv(this))
    }
    
    function loadTextures(event) {
        // we only want this event to fire once. We only want to load the textures once and it
        // is a very expensive event. It should be used sparingly.
        ignore("sceneUpdate")
        
        // Textures that we want to load. You shouldn't always load all textuers
        // at the beginning of the game. If you have a lot of textures you may want consider
        // loading only the required textures before each level.
        local textures = ["img_test.png", "img_test.bmp"]
        texture_count = textures.len()
        
        // iterate through the textures and load each one, when the texture is loaded
        // emit the textureLoaded custom event
        foreach (texture in textures) {
            ::preloadTexture(texture, function(texture_name) {
                ::puts(texture_name)
                ::emitEvent("textureLoaded")
            })
        }
    }
    
    function updateLoadedMessage(event) {
        loaded_textures++
    }
}
