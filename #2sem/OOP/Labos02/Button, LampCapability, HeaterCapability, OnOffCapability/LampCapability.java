class LampCapability implements OnOffCapability{
     private Lamp lamp;

    public LampCapability(Lamp lamp) {
        this.lamp = lamp;
    }

    @Override
    public void turnOn(boolean state) {
        if(state)lamp.light();
        else lamp.dark();
    }
}
