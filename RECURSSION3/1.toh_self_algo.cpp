#include<iostream>
using namespace std;
void hanoi(int n,char from,char via,char to){
    //cout<<"Entering with n: "<<n<<" from: "<<from<<" via: "<<via<<" to: "<<to<<endl;

    if(n==0){
        //cout<<"----------------------------------------"<<endl;
        //cout<<"Base case hit with from: "<<from<<" via: "<<via<<" to: "<<to<<endl;
        //cout<<"----------------------------------------"<<endl;
        return;
    }

    hanoi(n-1,from,to,via);
    cout<<from<<" -> "<<to<<endl;
    hanoi(n-1,via,from,to);
}
int main(){
    int n;
    cout<<"Enter number of rings: ";
    cin>>n;
    hanoi(n,'A','B','C');
}

/*             
A -> C
A -> B
C -> B
A -> C
B -> A
B -> C
A -> C
*/