 import java.net.*;
 import java.io.*;

 class client {
    public static void main(String[] args) throws Exception 
    {
        System.out.println("client appication is running....");

        Socket sobj = new Socket("localhost",2100);

        PrintStream ps = new PrintStream(sobj.getOutputStream());
    BufferedReader br1 = new BufferedReader(new InputStreamReader(sobj.getInputStream()));
    BufferedReader br2 = new BufferedReader(new InputStreamReader(System.in));
String str1,str2;
while(!(str1 = br2.readLine()).equals("end"))
{
    ps.println(str1);
    str2 = br1.readLine();
    System.out.println("enter massager for client:");
    System.out.println("srever say"+str2);
}
System.out.println("thank you for using marvellos massanger...");
}
}
