package lab05.jesusTheSavior.GREJS.gardenPlants;

class Plant {
    private String latinName; // latin name for the plant
    private String croName; // croatian name for the plant
    
    public Plant(String latinName, String croName) {
        super();
        this.latinName = latinName;
        this.croName = croName;
    }
    
    
    public String getLatinName() {
		return latinName;
	}


	public void setLatinName(String latinName) {
		this.latinName = latinName;
	}


	public String getCroName() {
		return croName;
	}


	public void setCroName(String croName) {
		this.croName = croName;
	}


	@Override
    public String toString() {
        return "Plant [latinName=" + latinName + ", croName=" + croName + "]";
    }


	@Override
	public int hashCode() {
		return latinName.hashCode();
	}


	@Override
	public boolean equals(Object obj) {
		if(!(obj instanceof Plant)) {
			return false;
		}
		Plant other=(Plant) obj;
		return this.getLatinName().equals(other.getLatinName());
	}	
	
}