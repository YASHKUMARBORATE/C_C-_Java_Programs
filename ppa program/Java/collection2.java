import java.util.*;

public class collection2 {
   public static void main(String[] args) {
    ArrayList<String>aobj = new ArrayList<String>();

    aobj.add("ppa");
    aobj.add("lb");
    aobj.add("ppa++");
    aobj.add("lb++");
    
    for(String str : aobj)
    {
        System.out.println(str);
    }
   } 
}
