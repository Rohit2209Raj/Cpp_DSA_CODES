#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v1;
    v1.push_back(0);
    v1.push_back(1);
    v1.push_back(7);
    v1.push_back(69);
    int n1=v1.size();
    for(int i=0;i<=v1.size()-1;i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    vector<int>v2;
    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(9);
    v2.push_back(10);
    v2.push_back(15);
    v2.push_back(38); 
    v2.push_back(100);
    int n2=v2.size();
    for(int i=0;i<=v2.size()-1;i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    vector<int>vf(n1+n2,0);
    int i=0;
    int j=0;
    int k=0;
    while((i<=(n1-1)) && (j<=(n2-1))){
        if(v1[i]<v2[j]){
             vf[k]=v1[i];
             i++; 
             k++;  
            }
        else if(v1[i]==v2[j]){
            vf[k]=v1[i];
            i++;
            k++;
            }
        else{
            vf[k]=v2[j];
            j++;
            k++;
        }    
    }
    cout<<i<<" "<<j;
    if(i==n1){
        while(j<=n2-1){
            vf[k]=v2[j];
            j++;
            k++;
        }
    }
    else{
        while(i<=n1-1){
            vf[k]=v1[i];
            i++;
            k++;
        }
    }
    cout<<endl;
    for(int o=0;o<=vf.size()-1;o++){
            cout<<vf[o]<<" ";
    }
}