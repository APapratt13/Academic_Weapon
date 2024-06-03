package lab05.jesusTheSavior.ROKO;

import java.util.Collection;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import java.util.NoSuchElementException;

class Itertools{
    
    private static class ChainIterator<T> implements Iterator<T> {
        
        List<T> it = new LinkedList<>();
        int count = 0;
        
        public ChainIterator(List<T> it) {
            this.it = it;
        }

        @Override
        public boolean hasNext() {
            return count < it.size();
        }

        @Override
        public T next() {
            if(!hasNext()) throw new NoSuchElementException();
            count++;
            return it.get(count - 1);
            
        }
        
    }
    
    private static class ChainIterable<T> implements Iterable<T> {
        List<T> it = new LinkedList<>();
        public ChainIterable(Iterable<T> ...iterables) {
            for(Iterable<T> it : iterables) {
                this.it.addAll((Collection<? extends T>) it);
            }
        }
        
        
        @Override
        public Iterator<T> iterator() {
            return new ChainIterator(it);
        }
    }
    
    public static <T> Iterable<T> chain(Iterable<T> ...iterables ) {
        return new ChainIterable<T>(iterables);
    }
}