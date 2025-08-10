#include<iostream>
#include<string>
using namespace std;
class a{
    string name;
    int age;
    public:
    int *roi;
    // if we have made a default constructor
    a(){
        cout<<"Default constructor: "<<endl;
        name="Jatin";
        age=100;
    }
    a(string name,int age){
        cout<<"parameterised constructor: "<<endl;
        this->name=name;
        this->age=age;
        roi=new int[100];
    }
    a(string name){
        cout<<"Semi parameterised constructor: "<<endl;
        this->name=name;
        age=50;
    }
    // inline a(string name,int age): name(name),age(age){}
    void display(){
        cout<<name<<" "<<age<<endl;
    }
};
int main(){
    a obj1("rohit",26);
    a obj2;
    a obj3("rahul");
    obj1.display();
    obj2.display();
    obj3.display();



}