class LoadingScene extends Scene {
    // textures
    logo_tex = null
    
    // game objects
    logo = 0
    instructions = 0
    
    constructor() {
        base.constructor()
        
        // load the logo image and add it to the scene
        logo_tex = ::loadTexture("logo.png")
        
        logo = ::ActorFactory(logo_tex, 200, 300)
        logo.setAnchor(0.5, 0.5)
        addToScene(logo)
        
        // slap the instructions label on the scene
        // TODO: labels are jacked, they need to be polished
//        instructions = ::LabelFactory("0.123456789", "fps", 200, 500)
//        addToScene(instructions)
        
        // listen for an event that fires after we have displayed the
        // logo image for the first time. Now we want to start preloading
        // all of our other assets
        on("sceneUpdate", loadTextures.bindenv(this))
        on("touch", onTouch.bindenv(this))
    }
    
    function loadTextures(event) {
        // we only want this event to fire once. We only want to load the textures once and it
        // is a very expensive event. It should be used sparingly.
        ignore("sceneUpdate")
    }
    
    function onTouch(event) {
        if (event.payload.stage == "began") {
            logo.setXY(event.payload.x, event.payload.y)
        } else if (event.payload.stage == "moved") {
            logo.setXY(event.payload.current_x, event.payload.current_y)
        }
    }
}
