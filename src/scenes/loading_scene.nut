class LoadingScene extends Scene {
    logo = 0
    
    constructor() {
        base.constructor()
        
        logo = ::ActorFactory("img_test.png", 300, 500)
        logo.setAngle(30.0)
        logo.setScale(3)
        logo.setAnchor(0.5, 0.5)
        addObject(logo)
    }

}