package.path = package.path .. ";" .. p2d.script_path .. "/?.lua"

-- requires
local tables = require "support/tables"

-- events
p2d.events = {}
p2d.events.listeners = {}
p2d.events.queue = {}
function register_event_listeners(listeners)
    table.insert(p2d.events.listeners, listeners)
end

function emit(event_type, payload)
    table.insert(p2d.events.queue, {event_type=event_type, payload=payload})
end

function process_events()
    for _, event in ipairs(p2d.events.queue) do
        for _, listener in ipairs(p2d.events.listeners) do
            if listener[event.event_type] then
                if listener[event.event_type][1].environment then
                    listener[event.event_type][1].callback(listener[event.event_type][1].environment, event)
                else
                    listener[event.event_type][1].callback(event)
                end
            end
        end
    end
    
    -- empty the event queue. Assume that all events were processed
    -- for a frame. This won't bet the case after I solidify the
    -- event arch
    p2d.events.queue = {}   
end

-- event proxies
function event_proxy_touches_began(x, y, tap_count)
    emit("touch", {
        stage = "began",
        x = x,
        y = y,
        tap_count = tap_count
    })
end

function event_proxy_touches_ended(x, y, tap_count)
    emit("touch", {
        stage = "ended",
        x = x,
        y = y,
        tap_count = tap_count
    })
end

function event_proxy_touches_moved(previous_x, previous_y, current_x, current_y)
    emit("touch", {
        stage = "moved",
        previous_x = previous_x,
        previous_y = previous_y,
        current_x = current_x,
        current_y = current_y,
    })
end

-- set resource paths for assets: textures, fonts
p2d.system = {}
p2d.system.resource_paths = {}

function set_resource_path(type, path)
    p2d.system.resource_paths[type] = path
end


-- Provide cleaner access to the binding helpers
p2d.Director = {}
p2d.Director.get_current_scene = function()
    return p2d.BindingHelpers.Director_getCurrentScene()
end

p2d.Director.play_scene = function(scene)
    return p2d.BindingHelpers.Director_playScene(scene)
end


-- Factories
function load_texture(texture_name, resource)
    if resource == nil then
        resource = "images"
    end
    
    local tex = p2d.Texture:new()
    local path = p2d.system.resource_paths[resource] .. "/" .. texture_name
    
    if tex:load_texture(texture_name, path) == false then 
        print("Error loading " .. texture_name) -- TODO: use err instead of print and show SOIL_last_result
    end
    
    return tex
end

function load_bitmap_font(font_name, texture)
    local path = p2d.system.resource_paths.fonts .. "/" .. font_name .. ".fnt"
    local bitmap_font = p2d.BitmapFont:new()
    bitmap_font:set_font_texture(texture)
    bitmap_font:load_font(font_name, path)

    return bitmap_font
end