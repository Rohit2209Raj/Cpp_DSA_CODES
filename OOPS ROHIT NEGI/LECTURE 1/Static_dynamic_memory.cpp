#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
};
int main(){
    student *obj=new student;
   // (*obj).name="rohit";
   obj->name="jatin";
}