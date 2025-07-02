//function
#include<iostream>
using namespace std;
int main()
{
    int sum(int, int=0 );
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    cout<<"sum is: "<<sum(a,b)<<endl;

}

int sum(int x,int y)
{
    return(x+y);
}