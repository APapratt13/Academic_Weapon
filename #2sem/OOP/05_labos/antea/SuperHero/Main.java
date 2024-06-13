package Labos_05.Superheroj;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.stream.Stream;

public class Main {
	public static void main(String[] args) {
		Superhero captainAmerica = new Superhero("Steve Rogers", "Captain America",
		        Arrays.asList(new String[]{"Red Skull", "Thanos"}));
		Superhero hulk = new Superhero("Bruce Banner", "Hulk",
		        Arrays.asList(new String[]{"Abomination", "Loki", "Thanos"}));
		Superhero ironMan = new Superhero("Tony Stark", "Iron Man",
		        Arrays.asList(new String[]{"Mandarin", "Loki", "Thanos"}));

		List<Superhero> avengers = new ArrayList<Superhero>();
		avengers.add(captainAmerica);
		avengers.add(hulk);
		avengers.add(ironMan);

		System.out.println("Superheroes who are fighting a supervillain named Loki:");
		Stream<Superhero> filtered1 = avengers.stream().filter(Solution.superheroesFightingSupervillain("Loki"));
		for (Superhero superhero : filtered1.toArray(Superhero[]::new)) {
		    System.out.println(superhero.getAlias());
		}

		System.out.println("\nSuperheroes who have only one word in their alias:");
		Stream<Superhero> filtered2 = avengers.stream().filter(Solution.superheroesWithOnlyOneWordInAlias());
		for (Superhero superhero : filtered2.toArray(Superhero[]::new)) {
		    System.out.println(superhero.getAlias());
		}
	}
}
