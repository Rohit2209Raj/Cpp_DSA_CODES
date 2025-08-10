#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
   vector<int> v;
   v.push_back(17);
   v.push_back(2);
   v.push_back(39);
   v.push_back(23);
   v.push_back(199);
   v.push_back(0);

//    Q1

//    int x;
//    cout<<"enter the element: ";
//    cin>>x;
//    int count=0;
//    for(int i=0;i<=v.size()-1;i++){
//       if(v[i]>x) count++;
//    }

//    cout<<count;

// Q2


// int max=INT_MIN;
// int smax=INT_MIN;
// int tmax=INT_MIN;

// for(int i=0;i<=v.size()-1;i++){
//     if(v[i]>max) max=v[i];
// }
// for(int j=0;j<=v.size()-1;j++){
//     if(v[j]>smax && v[j]!=max) smax=v[j];
// }
// for(int k=0;k<=v.size()-1;k++){
//     if(v[k]>tmax && v[k]!=max && v[k]!=smax) tmax=v[k];
// }


//  Q3

// cout<<max<<" "<<smax<<" "<<tmax;
// bool flag=true;
// for(int i=0;i<=v.size()-1;i++){
//     if(v[i-1]>v[i]) {
//         flag=false;
//         break;
//     }
// }

// if(flag==true) cout<<"sorted";
// if(flag==false) cout<<"Unsorted";

// Q4
// int esum;
// int osum;
// for(int i=0;i<=v.size()-1;i++){      // NAHI SOLVE HO RAHA HAI YE;
//     if(i%2==0) esum+=v[i];
//     else osum+=v[i];
// }
// cout<<"*******"<<esum-osum<<"******";


// Q5

// for(int i=0;i<=v.size()-1;i++){      // NAHI SOLVE HO RAHA HAI YE;
//     if(i%2==0) v[i]+=10;
//     else  v[i]*=2;
//  }

//  for(int i=0;i<=v.size()-1;i++){
//     cout<<v[i]<<" ";
//  }



// Q6

//    vector<int> v;
//    v.push_back(17);
//    v.push_back(39);
//    v.push_back(39);
//    v.push_back(199);
//    v.push_back(0);
//    v.push_back(199);
//    v.push_back(17);
//    for(int i=0;i<=v.size()-1;i++){
//     for(int j=i;j<=v.size()-1;j++){
//         if(v[i]==v[j]) 
//     }
//    }


// Q7 PALINDROEM array
int i=0;
int j=v.size()-1;
bool flag;
while(i<=j){
    if(v[i]!=v[j]) flag=false;
    else flag=true;
}

if(flag==true) cout<<"Palindrome";
else cout<<"NOT PALINDROME";
}










