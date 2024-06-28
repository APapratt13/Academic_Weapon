package hr.fer.oop.ZI2024.zad2;

import java.util.Comparator;
import java.util.Objects;

public class ChessPlayer implements Comparable<ChessPlayer> {
    @Override
    public int compareTo(ChessPlayer other) {

        return this.lastname.compareTo(other.lastname)+
                this.firstname.compareTo(other.firstname);
    }

    private String firstname;
    private String lastname;
    private Country country; //države su pobrojane u enumeraciji Country koja je već implementirana
    private int rating;
    private int birthyear;

    public String getFirstname() {
        return firstname;
    }

    public String getLastname() {
        return lastname;
    }

    public Country getCountry() {
        return country;
    }

    public int getRating() {
        return rating;
    }

    public int getBirthyear() {
        return birthyear;
    }

    public ChessPlayer(String firstname, String lastname, Country country, int rating, int birthyear){
        this.firstname = firstname;
        this.lastname = lastname;
        this.country = country;
        this.rating = rating;
        this.birthyear = birthyear;
    }

    public String toString() {
        return String.format("(%s) %s %s %d: %d", country, firstname, lastname, birthyear, rating);
    }

    //Implementirati dodatne metode koje su potrebne da bi se klasa ChessPlayer
    // mogla ispravno koristiti u Javinim kolekcijama (ArrayList, HashSet, TreeSet).??hmm


    //Ne mogu postojati dva šahista s istim imenom, prezimenom
    // i ratingom. Međutim mogu postojati dva šahista koji imaju
    // isto ime i prezime, ali onda ne mogu imati isti rating

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;
        ChessPlayer that = (ChessPlayer) o;

        return rating == that.rating &&
                Objects.equals(firstname, that.firstname) &&
                Objects.equals(lastname, that.lastname);
    }

    @Override
    public int hashCode() {
        return Objects.hash(firstname, lastname, rating);
    }

    //Definirati prirodni komparator koji će šahiste sortirati prvo po prezimenu
    // (od manjeg prema većem),
    //public static final Comparator<ChessPlayer> BY_LASTNAME = Comparator.comparing(ChessPlayer::getLastname);
    public static final Comparator<ChessPlayer> BY_LASTNAME = ChessPlayer::compareTo;

    // zatim po imenu (od manjeg prema većem)
    //public static final Comparator<ChessPlayer> BY_FIRSTNAME = Comparator.comparing(ChessPlayer::getFirstname).reversed();
    public static final Comparator<ChessPlayer> BY_FIRSTNAME = ChessPlayer::compareTo;
    // i na kraju po ratingu (od većeg prema manjem).
    //public static final Comparator<ChessPlayer> BY_RATING = Comparator.comparing(ChessPlayer::getRating).reversed();
    public static final Comparator<ChessPlayer> BY_RATING = ChessPlayer::compareTo;
}
