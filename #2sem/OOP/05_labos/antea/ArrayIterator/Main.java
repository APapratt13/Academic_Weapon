package Labos_05.ArrIterator;

import java.util.Iterator;

public class Main {
	public static void main(String[] args) {
		int array[] = new int[10];
		for (int i = 0; i < array.length; i++) {
		    array[i] = i*10;
		}

		Iterator<Integer> iterator = new ArrayIterator(array);
		while(iterator.hasNext())
		    System.out.println(iterator.next());
	}
}
