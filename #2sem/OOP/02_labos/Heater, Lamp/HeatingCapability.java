class HeatingCapability implements OnOffCapability{
    private Heater heater;

    public HeatingCapability(Heater heater) {
        this.heater = heater;
    }
    @Override
    public void turnOn(boolean state) {
        if (state)heater.turnOn();
        else heater.turnOff();
    }
}
