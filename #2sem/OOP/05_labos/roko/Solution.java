package lab05.jesusTheSavior.ROKO;

import java.util.function.Predicate;

class Solution {
    
    private static class superVillianPredicate implements Predicate<Superhero> {
        private String SuperVillian;
        
        public superVillianPredicate(String superVillian) {
            SuperVillian = superVillian;
        }

        @Override
        public boolean test(Superhero t) {
            return t.getSupervillains().size() == 1 ? t.getSupervillains().contains(SuperVillian): false;
        }
        
    }
    
    private static class superVillianPredicate2 implements Predicate<Superhero> {

        public superVillianPredicate2() {
        }

        public boolean test(Superhero t) {
            return t.getAlias().contains(" ");
        }
        
    }
    
    public static Predicate<Superhero> superheroesFightingOnlySupervillain(String supervillain) {
        superVillianPredicate sup = new superVillianPredicate(supervillain);
        return sup::test;
    }
    
    public static Predicate<Superhero> superheroesWithMoreThanOneWordInAlias() {
        superVillianPredicate2 sup = new superVillianPredicate2();
        return sup::test;
    }
}