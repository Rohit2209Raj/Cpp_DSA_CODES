#include<iostream>
using namespace std;
class Student{
public:
string name;
int roll;
float cgpa;
Student(string n,int r,float c){
    name=n;
    roll=r;
    cgpa=c;
}
void display(){
    cout<<name<<" "<<roll<<" "<<cgpa<<endl;
}
};
int main(){
 Student* ptr=new Student("ramesh",28,52.65);
 ptr->display();
}
