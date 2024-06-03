package lab05.jesusTheSavior.ROKO;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.stream.Stream;

public class Main1 {

    public static void main(String[] args) {
        Superhero captainAmerica = new Superhero("Steve Rogers", "Captain America",
                Arrays.asList(new String[]{"Red Skull"}));
        Superhero hulk = new Superhero("Bruce Banner", "Hulk",
                Arrays.asList(new String[]{"Abomination", "Thanos"}));
        Superhero ironMan = new Superhero("Tony Stark", "Iron Man",
                Arrays.asList(new String[]{"Thanos"}));

        List<Superhero> avengers = new ArrayList<Superhero>();
        avengers.add(captainAmerica);
        avengers.add(hulk);
        avengers.add(ironMan);

        System.out.println("Superheroes who are fighting only one supervillain named Red Skull:");
        Stream<Superhero> filtered1 = avengers.stream().filter(Solution.superheroesFightingOnlySupervillain("Red Skull"));
        for (Superhero superhero : filtered1.toArray(Superhero[]::new)) {
            System.out.println(superhero.getAlias());
        }

        System.out.println("\nSuperheroes who have more than one word in their alias:");
        Stream<Superhero> filtered2 = avengers.stream().filter(Solution.superheroesWithMoreThanOneWordInAlias());
        for (Superhero superhero : filtered2.toArray(Superhero[]::new)) {
            System.out.println(superhero.getAlias());
        }
    }

}