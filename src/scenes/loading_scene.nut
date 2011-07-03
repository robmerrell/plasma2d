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
        on("nextFrame", this.loadTextures)
        on("textureLoaded", this.updateLoadedMessage)
    }
    
    function loadTextures(event) {
        // all of the textures that we want to load. You shouldn't always load all textuers
        // at the beginning of the game. If you have a lot of textures you may want consider
        // loading only the required textures before each level.
        local textures = [
            "button1.png"
        ]
        texture_count = textures.len()
        
        // iterate through the textures and load each one, when the texture is loaded
        // emit the textureLoaded custom event
        foreach (texture in textures) {
            ::loadTexture("texture", {
                function onComplete() {
                    ::emitEvent("textureLoaded")
                }
            })
        }
    }
    
    function updateLoadedMessage(event) {
        loaded_textures++
    }
}
