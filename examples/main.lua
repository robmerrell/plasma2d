local LoadingScene = require "scenes/loading_scene"

local loading_scene = LoadingScene.new()
loading_scene:init()

p2d.Director.play_scene(loading_scene)