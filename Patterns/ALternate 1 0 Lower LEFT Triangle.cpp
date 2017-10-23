#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;         //input n for number of rows
        for(i=1;i<=n;i++){   //iterate over n number of rows
            for(j=1;j<=i;j++){  //no of columns will be just equal to the row number
                if(i%2==0){     //choosing even row
                    if(j%2!=0){ //at odd column positions print 0
                    cout<<"0";
                    }
                    else{       //at even column positions print 1
                    cout<<"1";
                    }
                          }
                else{           //choosing odd row
                    if(j%2==0){ //at even column positions print 0
                    cout<<"0";
                    }
                    else{       //at odd column positions print 1
                    cout<<"1";
                        }
                    }
                            }
                    cout<<endl; ////cursor will move to new line after complete iterations of column loop
                          }
    return 0;
}

/*
at n=5 Output :

1
01
101
0101
10101

*/


