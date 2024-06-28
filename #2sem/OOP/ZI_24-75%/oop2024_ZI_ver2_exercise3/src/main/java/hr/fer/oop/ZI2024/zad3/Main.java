package hr.fer.oop.ZI2024.zad3;

import java.util.List;
import java.util.Map;

public class Main {
    public static void main(String[] args) {
        STEMGames stemGames = new STEMGames();

        stemGames.addStudent("Jana Kralj", 93, 98);
        stemGames.addStudent("Ivan Pehar", 94, 90);
        stemGames.addStudent("Marko Horvat", 71, 77);
        stemGames.addStudent("Petar Medak", 92, 75);
        stemGames.addStudent("Lucija Rukavina", 69, 73);
        stemGames.addStudent("Jure Posavec", 90, 87);
        stemGames.addStudent("Maja Herceg", 87, 86);
        stemGames.addStudent("Luka Car", 85, 90);
        stemGames.addStudent("Karla Horvat", 95, 96);
        stemGames.addStudent("Martina Salamun", 69, 82);
        stemGames.addStudent("Tomislav Kolar", 73, 79);
        stemGames.addStudent("Nina Trnski", 77, 89);
        stemGames.addStudent("Zvonimir Novosel", 90, 89);
        stemGames.addStudent("Marta Knez", 91, 92);
        stemGames.addStudent("Filip Krolo", 86, 92);
        stemGames.addStudent("Ivana Mlinar", 99, 74);

        int topEngCount = stemGames.getTopEngStudentCount(95);
        int topMathCount = stemGames.getTopMathStudentCount(95);
        int topTotalCount = stemGames.getTopTotalStudentCount(190);

        System.out.println("Number of students with 95 or more in engineering: " + topEngCount);
        System.out.println("Number of students with 95 or more in mathematics: " + topMathCount);
        System.out.println("Number of students with 190 or more in total score : " + topTotalCount);

        Map<String, List<String>> topStudents = stemGames.getTopStudents();

        for (String k : topStudents.keySet()) {
            List<String> v = topStudents.get(k);
            System.out.println(k + ": " + v);
        }
    }
}
