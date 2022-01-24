#include<iostream>
using namespace std;

struct book
{
char bookn[20];
char author[20];
int pages;
};
void display(book);
int main()
{ 
struct book b1={"oops","abcd",100};
struct book b2;
display(b1);
return 0;
}
void display(book b)
{
cout<<"\n"<<b.bookn<<"\t"<<b.author<<"\t"<<b.pages;
}
