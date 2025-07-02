#include<iostream>
using namespace std;

//body of structure
struct book{
    int bookId;
    char bookName[20];
    float price;
};
int display(book b);
book input();
//main function.
void main(){
   struct book b1;
    b1=input();
    display(b1);
}

//creating function for show output
int display(book b){
    cout<<b.bookId<<" "<<b.bookName<<b.price<<endl;
}

//creating function for take input from the user.
book input(){
    book b;
    cout<<"Enter book id, name and price"<<endl;
    cin>>b.bookId>>b.bookName>>b.price;
    return b;
}