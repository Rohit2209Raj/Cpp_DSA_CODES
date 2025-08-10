#include<iostream>
using namespace std;
class area1{
    public:
    float area(int le,int br){
        return le*br;
    }
    float area(int r){
        char ch;
        cout<<"enter wheter circle or sq: ";
        cin>>ch;
        if(ch=='s') return r*r;
        else return 3.14*r*r;
    }
};
int main(){
  area1 obj1;
  cout<<"rect: "<<obj1.area(5,2)<<endl;
  cout<<"sq: "<<obj1.area(5);
}