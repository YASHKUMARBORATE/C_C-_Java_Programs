public class command {
    public static void main(String[] args)
     {
        System.out.println("number of command line argument are:"+args.length);
        int i = 0;
        for(i=1;i<args.length;i++)
        {
            System.out.println(args[i]);
        }
    }
}
