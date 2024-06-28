package hr.fer.oop;

public class Calculator{
	
	public static double score(Computer komp) {
		
		if (Desktop.class == komp.getClass()) {
			return (komp.getModel().length() +komp.gigahertz()*1000)/2;
		
		}else if(Laptop.class == komp.getClass()) {
			Laptop l = (Laptop)komp;
			return (l.getBatteryCapacity()+komp.gigahertz())/2;
		}
		
		return 0;
	}
}
