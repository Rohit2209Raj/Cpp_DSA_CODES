#include<iostream>
#include<cmath>
#include<vector>
#include<string>
using namespace std;

                                 /////   SHEET-1   /////
/// Q1


// int sumodd(int a,int b,int sum){
//     if(a>b)  return sum;
//     if(a%2!=0) {
//      sum+=a;
//      a+=2;
//      sumodd(a,b,sum);
//      }
//      else {
//         a+=1;
//         sumodd(a,b,sum);

//      }
// }
// int main(){
//     int a;
//     cout<<"enter 1st number: ";
//     cin>>a;
//     int b;
//     cout<<"enter 2nd number: ";
//     cin>>b;
//     cout<<sumodd(a,b,0); // parametrirised
// }

/// Q2
// int steps(int n){
//     if(n==0) return 0;
//     if(n==1) return 1;
//     if(n==2) return 2;
//     if(n==3) return 3;
     
//     return steps(n-1)+steps(n-2)+ steps(n-3);
// }
// int main(){
//     int n;
//     cout<<"Enter number of stairs: ";
//     cin>>n;
//    cout<<steps(n);
// }

// Q3
// int check(int n,int m){
//     if((pow(2,m))>n) return 0;
//      if((pow(2,m))==n) return 1;
//      return check(n,m+1);
// }
// bool check(int n){
//     if((n%2)!=0) return false;
//     if(n==2) return true;
//     return check(n/2);

// }
// int main(){
//     int n;
//     cout<<"Enter your number: ";
//     cin>>n;
//     //int k=check(n,1);
//     //cout<<k;
//     cout<<check(n);

// }

                      //// SHEET 1/////
 
// Q1
// int calodd(int a,int b,int sum){
//     if(a>b) {
//         return sum;
//     };
//     if(a%2!=0){
//         sum+=a;
//         return calodd(a+2,b,sum);
//     }
//     else return calodd(a+1,b,sum);
    
// }
// int calodd(int a,int b){
//     if(a>=b) return b;
//     if(a%2!=0) return a+calodd(a+2,b);
//     else return a+calodd(a+1,b);
// }
// int main(){
//     int a,b;
//     cout<<"Enter first number: ";
//     cin>>a;
//     cout<<"enter second number: ";
//     cin>>b;
//     int sum=0;
//     cout<<calodd(a,b);
// }    


// Q2
// int stairs(int n){
//     if(n<1) return 0;
//     if(n==1) return 1;
//     if(n==2) return 2;
//     if(n==3) return 3;
//     return stairs(n-1) + stairs(n-2);
// } 
// int main(){
//     int n;
//     cout<<"Enter number of Stairs: ";
//     cin>>n;
//     cout<<stairs(n);
// }

// Q3
// int ifpower(int n){
//     if(n==1) return 1;
//     // int x=n/2;
//     // if(2*x!=n) return 0;
//     if(n%2!=0) return 0;
//     else return ifpower(n/2);
// }
// int main(){
//     int n;
//     cout<<"Enter your number: ";
//     cin>>n;
//     cout<<ifpower(n);
// }


                                    // sheet 2//

// Q1
// void revarr(int arr[],int n){
//     if(n==0) return ;
//     cout<<arr[n-1]<<" ";
//     revarr(arr,n-1);
// }
// int main(){
// int arr[]={5,1,3,0,4,9,6};
// int n=sizeof(arr)/sizeof(arr[0]);
// revarr(arr,n);
// }

// Q2
// int search(int arr[],int n,int x){
//     if(n==0) return -1;
//     if(arr[n-1]==x) return n-1;
//     else return search(arr,n-1,x);
// }
// int main(){
// int arr[]={5,1,3,0,4,9,6};
// int n=sizeof(arr)/sizeof(arr[0]); 
// int x;
// cout<<"Enter the element to search: ";
// cin>>x;
// cout<<search(arr,n,x);
// }

// Q4
// void sumtri(int arr[],int n){
//     if(n==0) return;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int brr[n-1];
//     for(int i=0;i<n-1;i++) brr[i]=arr[i]+arr[i+1];
//     sumtri(brr,n-1);
// }
// int main(){
//     int arr[]={5,4,3,2,1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     sumtri(arr,n);
// //two array use kar ke dekhna///

//}

// Q3 
// void countAndsay(int n,string s,vector<int>v){


// }
// int main(){
//     int n;
//     cout<<"enter your number: ";
//     cin>>n;
//     string s;
//     vector<int>v;
//     countAndsay(n,"",v);
// }


                         ////////  SHEET 3///////
// Q1
// void rev(int n,int z){
//    if(n==0) {
//     cout<<z;
//     return;
//    };
//     z= (z*10+n%10);
//    rev(n/10,z);
// }
// int rev(int n,int z){
//     if(n==0) return z;
//     z= (z*10+n%10);
//     return rev(n/10,z);
//  }
// int main(){
//     int n;
//     cout<<"enter your number: ";
//     cin>>n;
//     cout<<rev(n,0);
//     /*
//     int rev_num = 0; 
//     while (num > 0) { 
//         rev_num = rev_num * 10 + num % 10; 
//         num = num / 10; 
//     } 
//     return rev_num; 
//     */
// } 

// Q2
// void seq(vector<int>v,int k,vector<vector<int>>&finalsol,vector<int>temp,int idx){
//     if(idx==v.size()){
//         finalsol.push_back(temp);
//         return;
//     }
//     int x=v[idx];
//     seq(v,k,finalsol,temp,idx+1);
//     temp.push_back(x);
//     seq(v,k,finalsol,temp,idx+1);
// }
// int main(){
//     int n;
//     cout<<"Enter your number: ";
//     cin>>n;
//     int k;
//     cout<<"Enter the number of seq: ";
//     cin>>k;
//     vector<int>v(n);
//     for(int i=0;i<n;i++) v[i]=i+1;
//     vector<vector<int>>finalsol;
//     vector<int>temp;
//     seq(v,k,finalsol,temp,0);
//     for(int i=0;i<finalsol.size();i++){
//         if(finalsol[i].size()==k)for(int j=0;j<finalsol[i].size();j++){
//            cout<<finalsol[i][j];
//         }
//         cout<<endl;
//     }
//}

// Q3




