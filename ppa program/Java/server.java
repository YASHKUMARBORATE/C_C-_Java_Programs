 import java.net.*;
 import java.io.*;
 class server {
    public static void main(String[] args) throws Exception{
        System.err.println("server appication is running....");

        ServerSocket  ssobj = new ServerSocket(2100);
        System.out.println("srever is waiting for client");

        Socket sobj = ssobj.accept();
        System.out.println(("client gets connected..."));

       PrintStream ps = new PrintStream(sobj.getOutputStream());
    BufferedReader br1 = new BufferedReader(new InputStreamReader(sobj.getInputStream()));
    BufferedReader br2 = new BufferedReader(new InputStreamReader(System.in));

    String str1,str2;
    while(!(str1 = br2.readLine()).equals("end"))
    {
        System.out.print(str1);
        str2 = br1.readLine();
        System.out.println("srever say"+str2);

    }

}
 }
