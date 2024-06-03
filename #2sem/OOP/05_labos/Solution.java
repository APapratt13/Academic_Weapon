package lab05.jesusTheSavior;

import java.util.function.Predicate;

class Solution {

    static Predicate<Pokemon> pokemonWithAllMovesStrongerThan(int power)   {
        return new Predicate<Pokemon>() {
            @Override
            public boolean test(Pokemon pokemon) {
                int counter = 0;
                int numOfMoves = pokemon.getMoves().size();

                for (Move move : pokemon.getMoves()) {
                    if (move.getPower() > power)
                        counter++;
                }

                return counter == numOfMoves;
            }
        };
    }

    static Predicate<Pokemon> pokemonWithSpecificMove(Move move)    {
        return new Predicate<Pokemon>() {
            @Override
            public boolean test(Pokemon pokemon) {
                return pokemon.getMoves().contains(move);
            }
        };
    }
}