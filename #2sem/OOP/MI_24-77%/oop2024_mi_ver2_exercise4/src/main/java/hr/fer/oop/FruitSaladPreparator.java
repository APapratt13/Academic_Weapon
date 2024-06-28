package hr.fer.oop;

public class FruitSaladPreparator extends MealPreparator <Fruit>{
	
	FruitSaladPreparator(){
	}
	
	public Meal prepare(Fruit a, Fruit b) {
		
		int P = a.getProtein() + b.getProtein();
		int C = a.getCarbs() + b.getCarbs();
		int F = a.getFat() + b.getFat();
		
		String name = "FRUIT SALAD with " + a.getName()+" and " + b.getName();		
		return new Meal(name, P, C, F);
	}
	
}
