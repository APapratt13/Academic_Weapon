package lab05.jesusTheSavior;

import java.util.Objects;

class Player {

    private String firstName;
    private String lastName;
    private int rating;

    public Player(String firstName, String lastName, int rating) {
        this.firstName = firstName;
        this.lastName = lastName;
        this.rating = rating;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;
        Player player = (Player) o;
        return Objects.equals(firstName, player.firstName) && Objects.equals(lastName, player.lastName);
    }

    @Override
    public int hashCode() {
        return Objects.hash(firstName, lastName);
    }
}