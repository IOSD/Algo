#include <bits/stdc++.h>

using namespace std;

char * solve(int year)
{
    char * date = new char[20];
    int dd=0,mm=0,yy=year;
    int days=256;
    if(yy<1918)  //for julian
    {
        int ordinary [12]={31,28,31,30,31,30,31,31,30,31,30,31};
        int leap [12]={31,29,31,30,31,30,31,31,30,31,30,31};


        if(year%4==0)
        {
            for(int i=0;i<12;i++)
            {
                if (days/leap[i]==0)
                {
                    dd=days;
                    mm=i+1;
                    break;
                }
                else
                {
                    days=days-leap[i];
                }


            }

        }
        else
        {
            for(int i=0;i<12;i++)
            {
                if (days/ordinary[i]==0)
                {
                    dd=days;
                    mm=i+1;
                    break;
                }
                else
                {
                    days=days-ordinary[i];
                }


            }
        }


    }
    else if (yy==1918) //for transition
    {

        int ordinary [12]={31,15,31,30,31,30,31,31,30,31,30,31};


            for(int i=0;i<12;i++)
            {
                if (days/ordinary[i]==0)
                {
                    if(i==1)
                   {
                        dd=days+13;
                    }
                    dd=days;
                    mm=i+1;
                    break;
                }
                else
                {
                    days=days-ordinary[i];
                }


            }



    }
    else   // for geogian
    {
         int ordinary [12]={31,28,31,30,31,30,31,31,30,31,30,31};
        int leap [12]={31,29,31,30,31,30,31,31,30,31,30,31};

        //cout<<"llll";
        if((year%4==0&&year%100!=0)||year%400==0)
        {
            for(int i=0;i<12;i++)
            {
                if (days/leap[i]==0)
                {
                    dd=days;
                    mm=i+1;
                    break;
                }
                else
                {
                    days=days-leap[i];
                }


            }

        }
        else
        {

            for(int i=0;i<12;i++)
            {
                if (days/ordinary[i]==0)
                {
                    dd=days;
                    mm=i+1;
                    break;
                }
                else
                {
                    days=days-ordinary[i];
                }


            }
        }


    }
    if (dd/10==0)
    {
        date[0]='0';
        date[1]='0'+dd;
    }
    else
    {
        date[0]='0'+dd/10;
        date[1]='0'+dd%10;
    }
    date[2]='.';
    if (mm/10==0)
    {
        date[3]='0';
        date[4]='0'+mm;
    }
    else
    {
        date[3]='0'+mm/10;
        date[4]='0'+mm%10;
    }
    date[5]='.';
    date[9]='0'+yy%10;
    yy/=10;
    date[8]='0'+yy%10;
    yy/=10;
    date[7]='0'+yy%10;
    yy/=10;
    date[6]='0'+yy;
    date[10]='\0';

    return date;

}

int main() {
    int year;
    cin >> year;
    char * result = solve(year);
    cout << result << endl;
    return 0;
}
