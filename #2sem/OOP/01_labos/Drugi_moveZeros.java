package Labosa_01;

public class Drugi_moveZeros {

	public static void main(String[] args) {
		int someArray[] = new int[] {0, 67, -2, 0, -15, 0};
		int resultArray[] = moveZeros(someArray);
		for(int element: resultArray) {
			System.out.print(element + " ");
		}
	}
	
	public static int[] moveZeros(int[] brojevi) {
		int[] pomaknuto = new int[brojevi.length];
		
		for(int j=0; j<brojevi.length; j++) {
			pomaknuto[j]=0;
		}
		
		int br=0;
		int i;
		for (i=0; i<brojevi.length; i++) {
			if (brojevi[i] == 0) {
				br ++;
			}else {
				pomaknuto[i-br]=brojevi[i];
			}
		}
		
		return pomaknuto;
		
	}
}
