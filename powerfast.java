import java.io.*;
class powerfast
{
    public int fastExpo(int x, int n)
    {
        if(n==0)
        return 1;
        if( n %2 != 0 ) //binary operation to check if n is odd or even
        return x*fastExpo(x,n-1);
        else
        {
            int y = fastExpo(x,n/2);
            return y*y;
        }
    }
}