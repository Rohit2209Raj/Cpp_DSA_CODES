#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool isprime(int n){
    if(n<=1) return false;
    for(int i=2;i<n;i++){
           if(n%i==0) return false;
    }
    return true;
}
int main(){
    int nums[]={2,4,3,7,10,6};
    int prod=1;
    for(int i=0;i<sizeof(nums);i++){
        cout<<nums[i]<<endl;
        prod*=nums[i];
    }
    cout<<"Product is : "<<prod<<endl;
    vector<int>v;
    for(int i=2;i<sqrt(prod);i++){
         if(isprime(i)){
            if(i!=sqrt(prod)){
                v.push_back(i);
               if(isprime(prod/i)) v.push_back(prod/i);
            }
            else v.push_back(i);
         }
    }
    cout<<endl<<"Number of distinct elements: "<<v.size();


}