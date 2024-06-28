package hr.fer.oop.ZI2024.zad1;

import java.io.BufferedInputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.nio.file.*;
import java.nio.file.attribute.BasicFileAttributes;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class MyFileVisitor extends SimpleFileVisitor<Path> implements FileVisitor<Path> {

    public MyFileVisitor() {}
    private List<Item> items = new ArrayList<>();

    public List<Item> getItems() {
        return items;
    }

    public double getTotalPrice(){
        double sum = 0;
        for (Item item : items) {
            sum += item.getQuantity()* item.getPrice();
        }
        return sum;
    }

    public int getTotalQuantity(){
        int sum = 0;
        for (Item item : items) {
            sum += item.getQuantity();
        }
        return sum;

    }

    @Override
    public FileVisitResult visitFile(Path file, BasicFileAttributes attrs) throws IOException {
        Path path = file.toAbsolutePath();
        if (file.getFileName().toString().endsWith(".txt")) {
            try (Scanner sc = new Scanner(file.toFile())){
                while (sc.hasNextLine()) {

                    String[] lines = sc.nextLine().split("#");

                    if (lines.length != 3){
                        return FileVisitResult.CONTINUE;
                    }
                    items.add(new Item(lines[0], Integer.parseInt(lines[1]), Double.parseDouble(lines[2])));
                }
            }

        }

        return FileVisitResult.CONTINUE;
    }

}
