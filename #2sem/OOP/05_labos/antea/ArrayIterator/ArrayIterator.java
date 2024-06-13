package Labos_05.ArrIterator;

import java.util.*;

class ArrayIterator implements Iterator<Integer>{
	
	private int[] polje;
	private int br=0;
	
	public ArrayIterator(int[] polje) {
		this.polje = polje;
	}

	@Override
	public boolean hasNext() {
		if (polje==null) {
			return false;
		}
		return br < polje.length;
	}

	@Override
	public Integer next() {
		if(!hasNext()) {
			throw new NoSuchElementException();
		}
		
		br++;
		return polje[br-1];
	}
	
}
