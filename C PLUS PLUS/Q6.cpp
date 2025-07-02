#include<iostream>
using namespace std;

struct students{
    int rollNo;
    char Name[100];
    int Marks;

    void input(){
        cout<<"Enter rollNo, Name, and Marks"<<endl;
        cin>>rollNo>>Name>>Marks;
    }

    void output(){
        cout<<"\n"<<rollNo<<" "<<Name<<" "<<Marks;
    }

};

int main(){
struct students s1;
s1.input();
s1.output();
}
