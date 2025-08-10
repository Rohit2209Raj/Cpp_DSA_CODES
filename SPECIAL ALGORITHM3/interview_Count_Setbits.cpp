#include<iostream>
using namespace std;
int count_Setbits(int n){
   int count=0;
   while(n>0){
    count++;
    n=((n)&(n-1));
   }
   return count;
}
int main(){
    //cout<<((20)&(21));
    cout<<count_Setbits(21);

}