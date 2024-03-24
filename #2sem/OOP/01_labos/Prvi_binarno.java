package Labosa_01;

import java.util.Scanner;

public class Prvi_binarno {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Unesi broj: ");
		int number = sc.nextInt();
		
		String binarno = decToBin(number);
		
		for(int i=0; i<binarno.length(); i++) {
			System.out.printf("%c", binarno.charAt(i));
		}
		
		//System.out.printf("Binarno je to: %s"+decToBin(number));
		
		sc.close();
	}
	
	public static String decToBin(int number) {
		StringBuilder b = new StringBuilder();
		
		
		while(number != 1) {
			if (number %2 == 1) {
				b.append(1);
			}else if (number %2 == 0) {
				b.append(0);
			}
			number = number/2;
		}
		b.append(1);
		b.reverse();
		
		
		String ret = b.toString();
		return ret;
	
	}

}
