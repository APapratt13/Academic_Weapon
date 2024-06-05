package lab05.jesusTheSavior.GREJS.edibleShit;

import java.util.Comparator;
import java.util.function.Predicate;

public class EdibleQualityChecker {
	 public static Predicate<Edible> edibleNotOlderThanThatIsOfType(
		      Integer maxAge, EdibleType type
		  ){
		 return new Predicate<Edible>() {
			
			@Override
			public boolean test(Edible t) {
				if(t.getAge()<=maxAge && t.getType().equals(type) ) {
				return true;
				}else {
					return false;
				}
			}
		};
		
	 }
	 public static Comparator<Edible> maxAgeComparator(){
		 return (f1,f2)->f1.getAge().compareTo(f2.getAge());}
	 public static Comparator<Edible> nameComparator(){
		 return(f1,f2)->f1.getName().compareTo(f2.getName());
	 }
	 
}
