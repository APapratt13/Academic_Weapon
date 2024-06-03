package lab05.jesusTheSavior;

import java.util.Collection;
import java.util.LinkedList;
import java.util.List;
import java.util.function.Function;
import java.util.function.Predicate;

class CollectionUtil {

    public static <T, R> List<R> myFilterMap(Collection<T> coll, Predicate<T> pred, Function<T, R> fun){
        R res = null;
        List<R> result = new LinkedList<>();
        if(coll.isEmpty()){
            return new LinkedList<>();
        }
        for(T t : coll){
            if(t == null){
                throw new NullPointerException("Null element");
            }
            if(pred.test(t)){
                res = fun.apply(t);
                result.add(res);
            }
        }
        
        if(res == null){
            return new LinkedList<>();
        }
        
        return result;
    }
}