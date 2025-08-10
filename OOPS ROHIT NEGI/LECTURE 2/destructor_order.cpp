#include<iostream>
using namespace std;
class a{
    int val;
    public:
    a(int val){
        this->val=val;
        cout<<val<<" constructr"<<endl;
    }
    ~a(){
        cout<<val<<" destructor"<<endl;
    }
};
int main(){
    a obj1(1);
    a obj2(2);
    a obj3(3);
    a obj4(4);
    a obj5(5);
}