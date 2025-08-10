#include<iostream>
using namespace std;
class c{
    string name;
    int* balance;
    public:
    c(string name,int bal){
        this->name=name;
        balance=new int;
        *balance=bal;
    }
    ~c(){ // releases dynamic memeory location
        delete balance;
        cout<<name<<endl;
    }
};
int main(){
  c obj1("Rohit",5000);
  c obj2("jatin",15000);
}