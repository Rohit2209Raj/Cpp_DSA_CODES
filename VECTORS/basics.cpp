#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v; 
    // do not use [] while inserting;
    v.push_back(69);
    cout<<v.size()<<endl;  // kitne elements hai;
    cout<<v.capacity()<<endl; // kitne space hai;
    v.push_back(68);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(12);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(23);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    // v[0]=13;  // Chalega hi nahi kyuki jab tak puhback nahi hota tab tak to yeh 0rth index hi nahi bani hai memory space me;
    // v[1]=23;
    // v[2]=33;
    // v[3]=43;
    
     // for updation / and accesing you can use [];
    for(int i=0;i<=3;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<sizeof(v);


}