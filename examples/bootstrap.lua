package.path = package.path .. ";" .. p2d.script_path .. "/?.lua"

-- requires
local tables = require "support/tables"


-- Provide cleaner access to the binding helpers
p2d.Director = {}
p2d.Director.get_current_scene = function()
    return p2d.BindingHelpers.Director_getCurrentScene()
end

p2d.Director.play_scene = function(scene)
    return p2d.BindingHelpers.Director_playScene(scene)
end
