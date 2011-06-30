class LoadingScene extends Scene {
    logo = 0
    
    constructor() {
        base.constructor()
        
        logo = ::ActorFactory("img_test.png", 300, 200)
        logo.setAngle(30.0)
        logo.setScale(3)
        logo.setAnchor(0.5, 0.5)
        addObject(logo)
        
        on("custom_event", this.handleCustomEvent)
        ::emitEvent("custom_event")
        
        on("touch", this.onTouch)
    }
    
    function handleCustomEvent(event) {
        ::puts("in custom event")
    }
    
    function onTouch(event) {
        ::puts(event.payload.stage)
        if (event.payload.stage == "began") {
            ::puts(event.payload.x + ", " + event.payload.y)
        }
    }

}