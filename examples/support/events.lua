local EventMixin = {}

EventMixin.listeners = {}

function EventMixin.on(event_type, cb, environment)
    if not table.contains(EventMixin.listeners, event_type) then
        EventMixin.listeners[event_type] = {}
    end

    table.insert(EventMixin.listeners[event_type], {callback=cb, environment=environment})
end

function EventMixin.ignore(event_type)
    if table.contains(EventMixin.listeners, event_type) then
        EventMixin.listeners[event_type] = nil
    end
end

return EventMixin



-- p2d.events = {}
-- p2d.events.listeners = {}
-- 
-- function on(event_type, cb)
--     if not table.contains(p2d.events.listeners, event_type) then
--         p2d.events.listeners[event_type] = {}
--     end
--     
--     p2d.events.listeners[event_type].insert(cb)
-- end
-- 
-- function ignore(event_type)
--     if table.contains(p2d.events.listeners, event_type) then
--         p2d.events.listeners[event_type] = null
--         -- for _, cb in ipairs(p2d.events.listeners[event_type]) do
--         -- end
--         -- for _, value in pairs(table) do
--         --   if value == element then
--         --     return true
--         --   end
--         -- end
--     end
-- end

-- function Scene:on
-- end
-- 
-- function Scene:ignore
-- end

-- class Scene extends Scene {
--     function on(event_type, cb) {
--         if (!(event_type in ::p2d_system["listeners"]))
--             ::p2d_system["listeners"][event_type] <- []
--             
--         ::p2d_system["listeners"][event_type].push({"cb": cb, "owner": this, "environment": this})
--     }
--     
--     function ignore(event_type) {
--         if (event_type in ::p2d_system["listeners"]) {
--             for (local i = 0; i < ::p2d_system["listeners"][event_type].len(); i++) {
--                 if (::p2d_system["listeners"][event_type][i]["owner"] == this)
--                     ::p2d_system["listeners"][event_type].remove(i)
--             }
--         }
--     }
-- }
-- 
-- function processEvents() {
--     for (local i = 0; i < ::p2d_system["events"].len(); i++) {
--         local event_type = ::p2d_system["events"][i].event_type
--         foreach (listener in ::p2d_system["listeners"][event_type]) {
--             listener.cb(p2d_system["events"][i])
--         }
--     }
--     
--     // empty the event queue. Assume that all events were processed
--     // for a frame. This won't be the case after I solidify the
--     // event architecture
--     ::p2d_system["events"] = []
-- }
-- 
-- function emitEvent(event_type, event_payload={}) {
--     ::p2d_system["events"].push({"event_type": event_type, "payload": event_payload})
-- }