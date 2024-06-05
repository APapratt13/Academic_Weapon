package lab05.jesusTheSavior.GREJS.gardenPlants;

import java.util.*;

public class Garden {
	
	private String ime;
	private List<Plant> plants = new LinkedList<>();
	
	public Garden(String ime, List<Plant> plants) {
		super();
		this.ime = ime;
		this.plants = plants;
	}

	public String getIme() {
		return ime;
	}

	public List<Plant> getPlants() {
		return plants;
	}
	
	
	
}
