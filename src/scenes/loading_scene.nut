class LoadingScene extends Scene {
    logo = 0
    
    constructor() {
        base.constructor()
        
        logo = ::ActorFactory("img_test.png", 300, 500)
        addObject(logo)
    }

}