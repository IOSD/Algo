//MERGE SORT
//TIME COMPLEXITY-O(nlog(n))
#include<iostream>
using namespace std;
void selsort(int a[],int n)         //SELSORT TO ARRANGE INPUT OF ARRAY IN ASCENDING
{   for(int i=0;i<n;i++)            
    {   for(int j=i;j<n;j++)        //FOR LOOP FOR COMPARING I TH ELEMENT WITH EVERY OTHER SUCEEDING ELEMENT
            {   if(a[i]>a[j])
                {                   //SWAPPING OF VALUES
                    a[i]=a[i]+a[j];
                    a[j]=a[i]-a[j];
                    a[i]=a[i]-a[j];
                }
            }
    }
}
void merge_sort(int a[],int b[],int c[],int n1,int n2,int ch)//MERGE SORT TAKING ARGUMENT OF 3 ARRAY SIZE OF A & B AND CHOICE,
{   int i,j,k;
    if(ch==1)                               //CHECKING ASCENDING OR DESCENDING
    {   for(i=0,j=0,k=0;(k<(n1+n2))&&(i<n1)&&(j<n2);k++)          
        {   if(a[i]<b[j])       
            {   c[k]=a[i];      //SAVING VALUE OF ELEMENT DEPENDING ON WHICH IS SMALLER
                 i++;
            }
            else
            {    c[k]=b[j];
                 j++;
            }
        }
        if(i==n1)
        {   while((j!=n2)&&k<(n1+n2))
            {   c[k]=b[j];      //ADDING REMAINING VALUES
                j++;
                k++;
            }
        }
        else if(j==n2)
        {   while((i!=n1)&&k<(n1+n2))
            {   c[k]=a[i];      //ADDING REMAINING VALUES
                i++;
                k++;
            }
        }
    }
    else if(ch==2)          //DESCENDING
    {   for(i=n1-1,j=n2-1,k=0;(k<(n1+n2))&&(i>-1)&&(j>-1);k++)
        {   if(a[i]<b[j])
            {   c[k]=b[j];
                 j--;
            }
            else
            {   c[k]=a[i];
                i--;
            }
        }
        if(i==0)
        {   while((j!=0)&&k<(n1+n2))
            {   c[k]=b[j];
                j--;
                k++;
            }
        }
        else if(j==0)
        {   while((i!=0)&&k<(n1+n2))
            {   c[k]=a[i];
                i--;
                k++;
            }
        }

    }
}

int main()
{   int *a,*b,*c,n1,n2,ch;
    cout<<"Enter units in 1st array :";
    cin>>n1;
    a=new int[n1];
    for(int i=0;i<n1;i++)            //INPUT OF ARRAY 1
    {   
        cin>>a[i];
    }
    selsort(a,n1);                  //SORTING OF ARRAY 1
    
    cout<<"\n\n";
    cout<<"Enter units in 2st array :";
    cin>>n2;
    b=new int[n2];
    for(int i=0;i<n2;i++)            //INPUT OF ARRAY 2
    {   
        cin>>b[i];
    }
    selsort(b,n2);                  //SORTING OF ARRAY 2
    
    c=new int[(n1+n2)];             //DYNAMIC INIT. OF ARRAY 3
    cout<<"Enter Option 1-Ascending 2-Descending";
    cin>>ch;                        //INPUT OF CHOICE
    merge_sort(a,b,c,n1,n2,ch);     //CALLING OF merge)_sort
    for(int i=0;i<(n1+n2);i++)
    {   
        cout<<c[i]<<endl;         //PRINTING OF MODIFIED ARRAY
    }
    system("pause");
    delete a;
    delete b;
    delete c;
    return 0; 
}
