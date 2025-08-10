#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={{0,1,2},{3,4,5},{6,7,8}}; // Teen array ka array banaya hai jiska size 3 hai;
    int arr2[3][3]={0,1,2,3,4,5,6,7,8};
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<=2;j++){
    //         cin>>arr[i][j];
    //     }
    // }

    //  declaration ke waqt coloumn ka size dena compuslory hai;
    for(int i=0;i<3;i++){
        for(int j=0;j<=2;j++){
            cout<<arr[i][j]<<" "; 
        }
         cout<<endl;
    }
}