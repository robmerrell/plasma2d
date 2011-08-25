package.path = package.path .. ";" .. p2d.script_path .. "/?.lua"

-- requires
local tables = require "support/tables"


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
function load_texture(texture_name)
    local tex = p2d.Texture:new()
    local path = p2d.system.resource_paths.images .. "/" .. texture_name
    if tex:load_texture(texture_name, path) then print("Error loading " .. texture_name) end -- TODO: err instead of print
    return tex
end
