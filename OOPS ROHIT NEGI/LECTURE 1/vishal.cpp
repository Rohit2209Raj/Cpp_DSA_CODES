#include <iostream>
#include <string>
using namespace std;


class question;
class exam{
    string name ;
    int rollNo , marks =0;
    int qArr[3];
   
    public:
    exam(string name , int rollNo )
    {
        this->name = name;
        this->rollNo = rollNo;

    }
    void startTest()
    {
        cout<<"What is sum of 2 + 2 \n";
        cin>>qArr[0];
        cout<<"How many state are parsent in india\n";
        cin>>qArr[1];
        cout<<"What is the unemloyment rate in india in percentage\n";
        cin>>qArr[2];

    } 
    void showResult(question);

 
};
class question{
    
    int questioArr[3];

    public:
    question(int q1,int q2,int q3){
        questioArr[0] = q1;
        questioArr[1] = q2;
        questioArr[2] = q3;
    }
    friend class exam;

};
void exam :: showResult(question obj)
{
    for(int i=0 ; i<3 ;i++)
    {
        if(qArr[i] == obj.questioArr[i]){
            marks +=10;
        }
        else{
            marks -=1;
        }
        
    }
    cout<<"You get "<<marks<<" out of 30\n";
}

int main()
{
    int roll ;
     string name; 
     string start;
     cout<<"Enter your name\n";
     cin>>name;
     cout<<"Enter your Roll number\n";
     cin>>roll;
    exam student(name , roll);
    question Q(4,28,7);

    cout<<"If you want to Start the exam Enter yes\n";
    cin>>start;

    if(start == "yes"){
        student.startTest();
        student.showResult(Q);

}
}