
import java.util.*;

public class collection4 {
   public static void main(String[] args) {
    Hashtable<String,Integer> hobj = new Hashtable<String,Integer>();

    hobj.put("ppa",2000);
    hobj.put("lb",3000);
    hobj.put("lb++",3000);
    hobj.put("paa++",2300);
    
    System.out.println(hobj.get("ppa"));

   } 
}
