package hr.fer.oop.ZI2024.zad3;

public class Student {

    private String name;
    private int pointsEng;
    private int pointsMath;

    public Student(String name, int pointsEng, int pointsMath) {
        this.name = name;
        this.pointsEng = pointsEng;
        this.pointsMath = pointsMath;
    }

    public int getTotalPoints(){
        return pointsEng + pointsMath;
    }

    public String getName() {
        return name;
    }

    public int getPointsEng() {
        return pointsEng;
    }

    public int getPointsMath() {
        return pointsMath;
    }


}
