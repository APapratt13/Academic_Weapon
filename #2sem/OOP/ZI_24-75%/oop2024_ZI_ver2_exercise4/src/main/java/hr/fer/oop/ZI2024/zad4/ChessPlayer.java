package hr.fer.oop.ZI2024.zad4;

import java.util.*;
import java.util.function.Predicate;
import java.util.stream.Stream;

public class ChessPlayer {
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

    @Override
    public int hashCode() {
        return Objects.hash(firstname, lastname, rating);
    }

    //Definirati prirodni komparator koji će šahiste sortirati prvo po prezimenu
    // (od manjeg prema većem),
    public static final Comparator<ChessPlayer> BY_LASTNAME = Comparator.comparing(ChessPlayer::getLastname);

    // zatim po imenu (od manjeg prema većem)
    public static final Comparator<ChessPlayer> BY_FIRSTNAME = Comparator.comparing(ChessPlayer::getFirstname);

    // i na kraju po ratingu (od većeg prema manjem).
    public static final Comparator<ChessPlayer> BY_RATING = Comparator.comparing(ChessPlayer::getRating).reversed();

    //4.zad
    public static final Comparator<ChessPlayer> BY_BIRTHYEAR = Comparator.comparing(ChessPlayer::getBirthyear).reversed();
    List<ChessPlayer> lplayers = new ArrayList<>();
    public static Stream<ChessPlayer> getGoodChessPlayers(List<ChessPlayer> lplayers, int ratingthreshold){
        return lplayers.stream().filter(p -> p.getRating() > ratingthreshold).sorted(BY_BIRTHYEAR);
    }//radi

    public static double getAvgRating(Stream<ChessPlayer> cpstream, Country country){
        double suma =0;
        suma = (cpstream.filter(p->p.getCountry()==country).mapToDouble(p->p.getRating()).sum())/cpstream.filter(p->p.getCountry()==country).count();
        return suma;
    }//javlja grešku

    public static String getFilteredPlayers(Stream<ChessPlayer> cpstream, Predicate<ChessPlayer> filter){
        return cpstream.filter(filter).toString();
    }//javlja grešku

    public static Map<Country, Integer> getMaxRatingForCountry(Stream<ChessPlayer> cpstream){
        //ključ država, a vrijednost je najveći rating nekog igrača iz te države
        Map<Country, Integer> maxRating = new HashMap<>();

        return maxRating;
    }//ne da mi se iskreno
}
