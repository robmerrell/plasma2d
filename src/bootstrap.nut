/**
 * puts
 * Print a string and append a newline character
 * params: string message
 * returns: none
 */
function puts(str) print(str + "\n")

// run the config file and play the first the scene

// run the main file
// require("main")

class LogoScene extends Scene {
    logo = 0
    
    constructor() {
        base.constructor()

        logo = ::Actor()
        logo.setImage("img_test.png")
        logo.setXY(100, 100)
        
        addObject(logo)
    }
    
}

logo_scene <- LogoScene()
::director.playScene(logo_scene)