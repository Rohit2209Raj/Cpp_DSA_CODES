#include<iostream>
using namespace std;
int main(){
    // star triangle
    int n;
    cout<<"enter your number of rows:";
    cin>>n;
     
   //  for(int i=1;i<=n;i++){
   //     for(int j=1;j<=n;j++){
   //       if(j>(n-i)){
   //          cout<<"*";
   //     }
   //     else{
   //       cout<<" ";
   //     }
   //  //    cout<<i;
       
   //  }
   //  cout<<endl;


   //  }

   // gajab kaam kar raha hai aaj to tu //








   // method -2 by RAGHAV SIR
   // loop inside loop inside loop

   // for(int i=1;i<=n;i++){
   //    for(int j=1;j<=n-i;j++){
   //       cout<<" ";
   //    }
   //    for(int k=1;k<=i;k++){
   //       cout<<"*";
   //    }
   //    cout<<endl;
   // }
    



    // method 3 BR RAGHAV SIR KA UNDERSTANDING
    // easiest solution

    for(int i=1;i<=n;i++){
       for(int j=1;j<=n;j++){
         if(i+j>=(n+1)){
            cout<<"*";
       }
       else{
         cout<<" ";  
       }
    //    cout<<i;
       
    }
    cout<<endl;


    }
}

