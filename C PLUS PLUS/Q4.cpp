//structure is collection of dissimilar elements.
//structure is a way to group variables.
//structure is a used to create data type.
#include<iostream>
using namespace std;
struct book{
    int bookid;
    char bookname[20];
    float price;
};

int main(){
     book b1{1,"c++ by Gautam",510.00};

    //  book b2;
    //  b2.bookid =2;
    //  strcpy(b2.bookname) = "C++ by Raj";
    //  b2.price =620.0;
cout<<"bookid"<<" "<<"bookname"<<" "<<"price"<<endl;
     cout<<b1.bookid<<" "<<b1.bookname<<" "<<b1.price<<endl;
    //  cout<<b2.bookid<<b2.bookname<<b2.price<<endl;
}
