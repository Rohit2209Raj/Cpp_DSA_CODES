#include<iostream>
using namespace std;
// void hanoi(int n,char a,char b,char c){
//     if(n==0) return;
//     hanoi(n-1,a,c,b);
//     cout<<a<<" -> "<<c<<endl;
//     hanoi(n-1,b,a,c);
// }
// void hanoi(int n,int a,int b,int c){
//     if(n==0) return;
//     hanoi(n-1,a,c,b);
//     cout<<a<<" -> "<<c<<endl;
//     hanoi(n-1,b,a,c);
// }
// void hanoi(int n,int start,int help ,int dest){  // mera solution hai///
//     if(n==1) {
//       cout<<start<<" -> "<<dest<<endl;
//       return;
//   }
//     hanoi(n-1,start,dest,help);
//     hanoi(1,start,help,dest);
//     hanoi(n-1,help,start,dest);
// }





void hanoi(int n,int a,int b,int c){
    if(n==0) return;
    hanoi(n-1,a,c,b);
    cout<<a<<" -> "<<c<<endl;
    hanoi(n-1,b,a,c);
}
int main(){
    int n;
    cout<<"Enter number of rings: ";
    cin>>n;
    hanoi(n,1,2,3);
}

