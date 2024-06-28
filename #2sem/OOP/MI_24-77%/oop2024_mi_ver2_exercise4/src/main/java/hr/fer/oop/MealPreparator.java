package hr.fer.oop;

public class MealPreparator <T extends Nutritional> implements Preparator<Fruit,T,Meal>{
	
	MealPreparator (){
	}

	@Override
	public Meal prepare(Fruit a,T b) {
		
		int P = a.getProtein() + b.getProtein();
		int C = a.getCarbs() + b.getCarbs();
		int F = a.getFat() + b.getFat();
		
		return new Meal(P, C, F);
	}
	
	
}
