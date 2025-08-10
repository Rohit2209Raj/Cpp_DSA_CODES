#include<iostream>
using namespace std;
int main(){
    int g[]={7,8,9,10};
    int s[]={5,6,7,8};
    int gs=sizeof(g)/sizeof(g[0]);
    int ss=sizeof(s)/sizeof(s[0]);
    int count=0;
    int j;
    int k=0;
    for(int i=0;i<gs;i++){
        j=k;
        while(j<ss){
            if(g[i]<=s[j]){
                count++;
                k=j+1;
                break;

            }
            else {
                j++;
                //k++;
        }
    }

    }

    cout<<count;
}