package lab05.jesusTheSavior.GREJS.edibleShit;

import java.util.Objects;

public class Edible {

	private EdibleType type;
	private String name;
	private Integer age;

	public Edible(EdibleType type, String name, Integer age) {
		this.type = type;
		this.name = name;
		this.age = age;
	}

	public EdibleType getType() {
		return type;
	}

	public String getName() {
		return name;
	}

	public Integer getAge() {
		return age;
	}

	@Override
	public int hashCode() {
		return Objects.hash(type, name, age);
	}

	@Override
	public boolean equals(Object obj) {
		
		if(this == obj) {
			return true;
		}
		if (obj == null || getClass() != obj.getClass()) {
			return false;
		}
		
		Edible edible = (Edible) obj;
		return type == edible.type &&
				Objects.equals(name, edible.name) &&
				Objects.equals(age, edible.age);
	}

	@Override
	public String toString() {
		
		final StringBuffer sb = new StringBuffer("Edible{");
		
		sb.append("name='").append(name).append('\'');
		sb.append('}');
		
		return sb.toString();
		
	}
	
	
	
}
