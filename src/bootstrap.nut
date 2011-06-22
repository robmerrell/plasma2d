/**
 * puts
 * Print a string and append a newline character
 * params: string message
 * returns: none
 */
function puts(str) print(str + "\n")


/**
 * require
 * Load a file
 * params: string filename
 * returns: none
 */
// TODO: try cnut before assuming nut
p2d_system["loaded_files"] <- {}
function require(filename) {
    if (filename in p2d_system["loaded_files"]) return
    
    local filepath = p2d_system["script_base_path"] + "/" + filename + ".nut"
    dofile(filepath)
    p2d_system["loaded_files"][filename] <- true
}


// Factory functions for the classes that need them
function ActorFactory(image, x, y) {
    local actor = ::Actor()
    actor.setImage(image)
    actor.setXY(x, y)    
    return actor
}


// run the config file
require("config")


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