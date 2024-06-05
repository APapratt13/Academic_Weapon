package lab05.jesusTheSavior.GREJS.gardenPlants;

import java.util.List;
import java.util.function.BiConsumer;
import java.util.function.BiFunction;

public class Task {
	public static BiConsumer<Garden, List<Plant>> saveDeliveredPlantsFunction(){
		
		/*
		return new BiConsumer<Garden, List<Plant>>() {
			
			@Override
			public void accept(Garden t, List<Plant> u) {
				List<Plant> gp= t.getPlants();
				for(Plant p:u) {

					boolean in=false;
					for(Plant p2:gp) {
						
						if(p2.equals(p)) {
							in=true;
						}
						
					}
					if(!in) {
						gp.add(p);
						t.setPlants(gp);
					}
				}
			}
		};}*/
		return (t,u)->{
//			if(u!=null) {
//				
//			
//				List<Plant> gp= t.getPlants();
//				for(Plant p:u) {
//
//					boolean in=false;
//					for(Plant p2:gp) {
//						if(p2.equals(p)) {
//							in=true;
//						}
//						
//					}
//					if(in==false) {
//						gp.add(p);
//						t.setPlants(gp);
//					}
//				
//			}
				
			};
	}
		
	
	public static BiFunction<Garden, Garden, Integer> numberOfSamePlantsFunction(){
		return new BiFunction<Garden, Garden, Integer>() {
			
			@Override
			public Integer apply(Garden t, Garden u) {
				int v=0;
				for(Plant p : t.getPlants()) {
					for(Plant p2 : u.getPlants()) {
						if(p.equals(p2)) {
							v++;
						}
						
						}
						
					}
				return v;
			}
		};
	}
}