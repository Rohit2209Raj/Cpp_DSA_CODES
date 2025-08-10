#include<iostream>
using namespace std;
int fact(int n){
    if(n==0 || n==1) return 1;
     else return n*fact(n-1);
 }
// int fact(int n){
//     int f=1;
//     for(int i=2;i<=n;i++){
//         f*=i;
//     }
//     return f;
// }
void factupto(int n){
      for(int i=1;i<=n;i++){
        cout<<"fact of "<<i<<" is"<< fact(i)<<endl;
      }
}
int main(){
    int n;
    cout<<"enter your number: ";
    cin>>n;
    cout<<fact(n);

}