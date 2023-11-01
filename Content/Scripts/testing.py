import unreal_engine as ue

ue.log('Hello i am a Python module')

class Hero:

    # this is called on game start
    def begin_play(self):
        ue.log('Begin Play on Hero class')
        
    # this is called at every 'tick'    
    def tick(self, delta_time):
        text_render_component = ue.find_class('TextRenderComponent')
        component = self.uobject.get_component_by_type(text_render_component)
        # component.set_property('Text', "hi")
        component.call('SetText %s' % "hello")
        # # get current location
        # location = self.uobject.get_actor_location()
        # # increase Z honouring delta_time
        # location.z += 100 * delta_time
        # # set new location
        # self.uobject.set_actor_location(location)