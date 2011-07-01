class LoadingScene extends Scene {
    logo = 0
    
    constructor() {
        base.constructor()
        
        logo = ::ActorFactory("img_test.png", 300, 200)
        logo.setAngle(30.0)
        logo.setScale(3)
        logo.setAnchor(0.5, 0.5)
        addObject(logo)
        
        on("custom_event", function(event) {
           ::puts("local custom")
        })
        
        ::emitEvent("custom_event")
        
        on("touch", this.onTouch)
    }
    
    function handleCustomEvent(event) {
        ::puts("in custom event")
    }
    
    function onTouch(event) {
        if (event.payload.stage == "began") {
            ::puts(event.payload.stage + " " + event.payload.x + ", " + event.payload.y)
        } else if (event.payload.stage == "ended") {
            ::puts(event.payload.stage + " " + event.payload.x + ", " + event.payload.y)
        } else if (event.payload.stage == "moved") {
            ::puts(event.payload.stage + " " + event.payload.previous_x + ", " + event.payload.previous_y)
            ::puts(event.payload.stage + " " + event.payload.current_x + ", " + event.payload.current_y)
        }
    }

}