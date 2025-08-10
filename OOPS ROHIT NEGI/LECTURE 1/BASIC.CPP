#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int age;
    int roll;
    string grade;
    public:
    void getdata(){
        cout<<"Enter name: ";
        cin.ignore();
        getline(cin,name);
        // cout<<"Enter age: ";
        // cin>>age;
        cout<<"Enter roll: ";
        cin>>roll;
        cout<<"Enter grade: ";
        cin>>grade;
    }
    void setage(int x){
        if(x<=0) {
            cout<<"Invalid age.....";
            return;
        }
        age=x;
        
    }
    string getgrade(int pin){
        if(pin==321){
            cout<<"Here is grade: "<<grade;
        }
        else cout<<"Invalid pin...";
    }
    void display(){
        cout<<name<<endl<<age<<endl<<roll<<endl<<grade;
    }
};
int main(){
    Student s1;
    s1.getdata();
    s1.setage(20);
    //s1.display();
    s1.getgrade(3215645121);
}