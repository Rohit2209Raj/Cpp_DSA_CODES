#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool square(int x){
    int num=sqrt(x);
    //cout<<num;
    if((num*num)==x) return true;
     else return false;
}
int main(){
    int c;
    cout<<"ENTER THE NUMBER: ";
    cin>>c;
    int arr[c+1];
    for(int i=0;i<=c;i++){
        arr[i]=i;
    }
    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;
     int lo=0;
     int hi=c;
     while(hi>=lo){
       if(square(hi) && square(lo)) return true;
       else if(square(lo)) {
        hi=sqrt(hi) * sqrt(hi);
        lo=c-hi;
    }
   
    

}