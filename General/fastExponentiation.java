import java.util.Scanner;
public class fastExponentiation {
public long fastExpo(int a,int b)
{/*Case when power becomes 0*/
	if(b==0)
	return 1;
	/*odd case*/
	if(b%2!=0)
	{
		return fastExpo(a,b-1)*a;
	}
	else/*Even case*/
	{long f=fastExpo(a,b/2);
	return f*f;}
	}
public static void main(String args[]) {
Scanner sc=new Scanner(System.in);
int a=sc.nextInt();
int b=sc.nextInt();
/*Input taken**/
System.out.print(fastExpo(a,b));
sc.close();
}}
