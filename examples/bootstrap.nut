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


/**** Events *****/
p2d_system["events"] <- []
p2d_system["listeners"] <- {}

function processEvents() {
    for (local i = 0; i < ::p2d_system["events"].len(); i++) {
        local event_type = ::p2d_system["events"][i].event_type
        foreach (listener in ::p2d_system["listeners"][event_type]) {
            listener.cb(p2d_system["events"][i])
        }
    }
    
    // empty the event queue. Assume that all events were processed
    // for a frame. This won't be the case after I solidify the
    // event architecture
    ::p2d_system["events"] = []
}

function emitEvent(event_type, event_payload={}) {
    ::p2d_system["events"].push({"event_type": event_type, "payload": event_payload})
}

// event proxies
function eventProxyTouchesBegan(x, y, tap_count) {
    ::emitEvent("touch", {
        "stage": "began",
        "x": x,
        "y": y,
        "tap_count": tap_count
    })
}

function eventProxyTouchesEnded(x, y, tap_count) {
    ::emitEvent("touch", {
        "stage": "ended",
        "x": x,
        "y": y,
        "tap_count": tap_count
    })
}

function eventProxyTouchesMoved(previous_x, previous_y, current_x, current_y) {
    ::emitEvent("touch", {
        "stage": "moved",
        "previous_x": previous_x,
        "previous_y": previous_y,
        "current_x": current_x,
        "current_y": current_y
    })
}

function eventProxySceneUpdate() {
    ::emitEvent("sceneUpdate", {})
}

// This could be a bit hacky and may be unsupported in future versions of Squirrel.
// As it stands now version 3 allows you to redefine a class to add methods to it.
// I'm doing it this way to keep the event system logic in Squirrel while I'm still
// architecting it.
class Scene extends Scene {
    function on(event_type, cb) {
        if (!(event_type in ::p2d_system["listeners"]))
            ::p2d_system["listeners"][event_type] <- []
            
        ::p2d_system["listeners"][event_type].push({"cb": cb, "owner": this, "environment": this})
    }
    
    function ignore(event_type) {
        if (event_type in ::p2d_system["listeners"]) {
            for (local i = 0; i < ::p2d_system["listeners"][event_type].len(); i++) {
                if (::p2d_system["listeners"][event_type][i]["owner"] == this)
                    ::p2d_system["listeners"][event_type].remove(i)
            }
        }
    }
}


// Factory functions for the classes that need them
function ActorFactory(image, x, y) {
    local actor = ::Actor()
    actor.setImage(image)
    actor.setXY(x, y)    
    return actor
}

// run the config file, then run main to get the party started
game_config <- {}
require("config")
require("main")