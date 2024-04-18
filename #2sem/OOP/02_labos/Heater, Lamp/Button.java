class Button{
    private boolean state;
    private OnOffCapability capability;
    public Button(OnOffCapability capability) {
        this.capability = capability;
    }
    public void click(){
        state = !state;
        capability.turnOn(state);
    }
}
