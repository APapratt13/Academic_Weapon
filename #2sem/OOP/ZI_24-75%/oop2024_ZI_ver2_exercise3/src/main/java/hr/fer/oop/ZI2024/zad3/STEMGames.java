package hr.fer.oop.ZI2024.zad3;


import java.util.*;

public class STEMGames {
    private List<Student> students = new ArrayList<>();

    STEMGames(){}

    public void addStudent(String name, int pointsEng, int pointsMath) {
        students.add(new Student(name, pointsEng, pointsMath));
    }

    public List<Student> getStudents(){
        return students;
    }

    public int getTopEngStudentCount(int threshold){
        return (int) students.stream().filter(s -> s.getPointsEng()>= threshold).count();
    }

    public int getTopMathStudentCount(int threshold){
        return (int) students.stream().filter(s -> s.getPointsMath()>= threshold).count();
    }

    public int getTopTotalStudentCount(int threshold){
        return (int) students.stream().filter(s -> s.getTotalPoints()>= threshold).count();
    }

    public Map<String, List<String>> getTopStudents(){
        int engTreshold = 95;
        int mathTreshold = 95;
        int totalTreshold = 190;

        Map<String, List<String>> topStudents = new HashMap<>();

        List<String> eng = new ArrayList<>();
        List<String> math = new ArrayList<>();
        List<String> total = new ArrayList<>();

        eng = students.stream().filter(s -> s.getPointsEng()>= engTreshold).map(s->s.getName()).toList();
        math = students.stream().filter(s -> s.getPointsMath()>= mathTreshold).map(s->s.getName()).toList();
        total = students.stream().filter(s -> s.getTotalPoints()>= totalTreshold).map(s->s.getName()).toList();
                //collect(Collectors.toList());
        topStudents.put("eng", eng);
        topStudents.put("math", math);
        topStudents.put("total", total);
        return topStudents;
    }
}
