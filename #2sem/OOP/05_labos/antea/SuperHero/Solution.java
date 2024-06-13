package Labos_05.Superheroj;

import java.util.function.Predicate;

public class Solution {
	
	private static class superVillianPredicate implements Predicate<Superhero> {
        private String SuperVillian;
        
        public superVillianPredicate(String superVillian) {
            SuperVillian = superVillian;
        }

        @Override
        public boolean test(Superhero t) {
            if(t.getSupervillains().contains(SuperVillian))
            	return true;
            return false;
        }
        
    }
    
    private static class superVillianPredicate2 implements Predicate<Superhero> {

        public superVillianPredicate2() {
        }

        public boolean test(Superhero t) {
            return !t.getAlias().contains(" ");
        }
        
    }
	
	public static Predicate<Superhero> superheroesFightingSupervillain(String supervillain) {
        superVillianPredicate sup = new superVillianPredicate(supervillain);
        return sup::test;
    }
    
    public static Predicate<Superhero> superheroesWithOnlyOneWordInAlias() {
        superVillianPredicate2 sup = new superVillianPredicate2();
        return sup::test;
    }
	
}
