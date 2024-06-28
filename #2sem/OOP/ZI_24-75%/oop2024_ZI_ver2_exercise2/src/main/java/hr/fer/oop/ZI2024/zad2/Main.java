package hr.fer.oop.ZI2024.zad2;

import java.util.HashSet;
import java.util.List;
import java.util.Set;
import java.util.TreeSet;

public class Main {
    public static void main(String[] args) {
        List<ChessPlayer> lplayers = ChessPlayerData.loadChessPlayersSmall();
        ChessPlayer testplayer1 = new ChessPlayer("Goran", "Višnjić", Country.CROATIA, 1500, 1972);
        ChessPlayer testplayer2 = new ChessPlayer("Goran", "Višnjić", Country.CROATIA, 1700, 1972);

        System.out.println("\nPLAYERS (ListTest):");
        System.out.println(lplayers.contains(testplayer1) ? "true" : "false");
        System.out.println(lplayers.contains(testplayer2) ? "true" : "false");

        System.out.println("\nPLAYERS (HashSetTest):");
        Set<ChessPlayer> splayers1 = new HashSet<>(lplayers);
        System.out.println(splayers1.contains(testplayer1) ? "true" : "false");
        System.out.println(splayers1.contains(testplayer2) ? "true" : "false");

        System.out.println("\nPLAYERS (TreeSetTest):");
        Set<ChessPlayer> splayers2 = new TreeSet<>(lplayers);
        for (ChessPlayer player : splayers2) {
            System.out.println(player);
        }
    }
}
