//function overloading. creating function more than one with the same is called funtion overloading.
#include<iostream> //declaretion of cin and cout objects.
using namespace std;
float area(int r);  //declaretion of function 1.
int area(int x,int y); //declaretion of function 2.
int main() //main function started from here.
{
int r;
cout<<"Enter radius of circle ";
cin>>r;
cout<<"area of circle is "<<area(r)<<endl;
int i,j;
cout<<"Enter l and b of rectangle ";
cin>>i>>j;
cout<<"area of rectangle is "<<area(i,j)<<endl;
}


//function deffinition 1
float area(int r){
    return(3.14*r*r);
}

//function deffinition 2
int area(int x,int y) {
    return(x*y);
}

