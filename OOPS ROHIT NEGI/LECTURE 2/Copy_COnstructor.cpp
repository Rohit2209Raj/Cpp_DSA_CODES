#include<iostream>
using namespace std;
class a{
    string name;
    int age;
    public:
    a(){
        name="Jatin";
        age=100;
    }
    a(string name,int age){
        this->name=name;
        this->age=age;
    }
    a(a&obj){
        name=obj.name; //copy constructor is also self created
        age=obj.age;
    }
    void display(){
        cout<<name<<" "<<age<<endl;
    }
};
int main(){
  a obj1;
  a obj2("rohit",26);
  a obj3(obj2);
  a obj4=obj3;
  obj1.display();
  obj2.display();
  obj3.display();
  obj4.display();
}