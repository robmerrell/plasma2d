/**
 * puts
 * Print a string and append a newline character
 * params: string message
 * returns: none
 */
function puts(str) print(str + "\n")

/**
 * Factory functions for the classes that need them
 */
function ActorFactory(image, x, y) {
    local actor = ::Actor()
    actor.setImage(image)
    actor.setXY(x, y)    
    return actor
}

// run the config file and play the first the scene
//::game_config <- require("config.nut")


class LogoScene extends Scene {
    logo = 0
    
    constructor() {
        base.constructor()

        logo = ::ActorFactory("img_test.png", 300, 500)
        addObject(logo)
    }
    
}

logo_scene <- LogoScene()
::director.playScene(logo_scene)