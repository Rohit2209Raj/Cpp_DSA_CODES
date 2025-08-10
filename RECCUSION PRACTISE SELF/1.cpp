#include<iostream>
#include<math.h>
#include<vector>
#include<climits>
using namespace std;
//Print numbers from 1 to N (increasing order).
// void print1ton(int n){
//     if(n==1){
//         cout<<"Base case hit: "<<endl;
//         cout<<n<<endl;
//         return;
//     }
//     cout<<"Enter with num: "<<n<<endl;
//     print1ton(n-1);
//     cout<<"Returning to print"<<n<<endl;
// }
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     print1ton(n);
// }

//Print numbers from N to 1 (decreasing order).
// void printnto1(int n){
//     if(n==1){
//         cout<<"Base case hit.."<<endl;
//         cout<<n<<endl;
//         return;
//     }
//     cout<<" Enter with num: "<<n<<endl;
//     cout<<n<<endl;
//     printnto1(n-1);
//     cout<<"returning to print: "<<n<<endl;
// }
// int main(){
//     int n;
//     cout<<"Enter n:";
//     cin>>n;
//     printnto1(n);
// }

//Sum of first N natural numbers.
// int sum1ton(int n){
//     cout<<"Enter with num: "<<n<<endl;
//     if(n==0){
//         cout<<"Base case hit: ";
//         return 0;
//     }
//     return n+sum1ton(n-1);
// }
// int main(){
//     int n;
//     cout<<"Enter n:";
//     cin>>n;
//     cout<<sum1ton(n);
// }

// Nth Fibonacci number.
// int fibo(int n){
//     cout<<"  Entering with num: "<<n<<endl;
//     if(n==2){
//         cout<<"Base case hit..."<<endl;
//         return 1;
//     }
//     if(n==1){
//         cout<<"Base case hit..."<<endl;
//         return 0;
//     }
//     return fibo(n-1)+fibo(n-2);
// }
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     cout<<fibo(n);
// }

//Power function (a^b) using recursion.
// int power(int a,int b){
//     cout<<"Entering with base: "<<a<<" and power: "<<b<<endl;
//     if(b==1){
//         cout<<"Base case hit.."<<endl;
//         return a;
//     }
//     return a*power(a,b-1);
// }
// int main(){
//     int a,b;
//     cout<<"Enter Base and Power: ";
//     cin>>a>>b;
//     cout<<power(a,b);
// }

// Count the number of digits in a number.
// int numdig(int n){
//     cout<<"Entering with number: "<<n<<endl;
//     if(n==0){
//         cout<<"Base case hit.."<<endl;
//         return 0;
//     }
//     return 1+numdig(n/10);
// }
// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     if(n==0) cout<<1;
//     else cout<<numdig(n);
// }

// Sum of digits of a number.
// int sod(int n){
//     cout<<"Entering with number: "<<n<<endl;
//     if(n/10==0){
//         cout<<"Base case hit for n= "<<n<<endl;
//         return n;
//     }
//     cout<<"returning with n= "<<n<<" n%10= "<<n%10<<endl;
//     return sod(n/10)+n%10;
    
// }
//     int main(){
//         int n;
//         cout<<"Enter number: ";
//         cin>>n;
//         cout<<sod(n);

//     }

//Reverse a number using recursion.
// int rev(int n,int z){
//     cout<<"Entering with number: "<<n<<" amd reversed num: "<<z<<endl;
//     if(n/10==0){
//         cout<<"Base case hit with n= "<<n<<endl;
//         return n+z*10;
//     }
//     z=n%10+z*10;
//     cout<<"z= "<<z<<endl;
//     rev(n/10,z);

// }
// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     cout<<"Revesed: "<<rev(n,0)<<endl;
    
// }

//Check if a number is palindrome (using recursion).
// int rev(int n,int z){
//     if(n/10==0) return n+z*10;
//     z=n%10+z*10;
//     //return rev(n/10,z);
//     rev(n/10,z); // we write return when need results via backtracking
//                  // otherwise its your wish
// }
// bool ispalindrome(int n){
//     if(n==rev(n,0)) return true;
//     else return false;
// }
// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     cout<<ispalindrome(n);
// }

// Print “Hello World” N times using recursion.
// void print(const string& s,int n){
//     //cout<<"Entering with num: "<<n<<endl;
//     if(n==0)return;
//     cout<<s<<endl;
//     print(s,n-1);
// }
// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     string s="Hello World!";
//     print(s,n);
// }

// Print the sum of numbers from 1 to N (using parameter in recursion)
// int add(int n,int sum){
//     cout<<"Entering with number: "<<n<<" and sum: "<<sum<<endl;
//     sum+=n;
//     if(n==1){
//         cout<<"Base case hit...."<<endl;
//         return sum;
//     }
//     return add(n-1,sum);
// }
// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     cout<<add(n,0);
// }

// // Find the product of first N natural numbers (like factorial, but using recursion 
// //differently).
// int mul(int n,int prod){
//     cout<<"Entering with number: "<<n<<endl;
//     prod*=n;
//     if(n==1){
//         cout<<"Base case hit...";
//         return prod;
//     }
//     return mul(n-1,prod);
    
// }
// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     cout<<mul(n,1);
// }

// Find the sum of squares of first N natural numbers.
// int sqsum(int n,int sum){
//     cout<<"Entering with number: "<<n<<endl;
//     sum+=(n*n);
//     if(n==1){
//         cout<<"Base case hit..."<<endl;
//         return sum;
//     }
//     return sqsum(n-1,sum);

// }
// int main(){
//     int n;
//     cout<<"Enter number:";
//     cin>>n;
//     cout<<sqsum(n,0);
// }

// int sqsum(int n){
//     cout<<"Entering with number: "<<n<<endl;
//     if(n==1){
//         cout<<"Base case hit..."<<endl;
//         return 1;
//     }
//     return (n*n)+sqsum(n-1);

// }
// int main(){
//     int n;
//     cout<<"Enter number:";
//     cin>>n;
//     cout<<sqsum(n);
// }

// Print all odd numbers from 1 to N recursively.

// int sqsum(int n,int sum){
//     cout<<"Entering with number: "<<n<<endl;
//     sum+=(n*n*n);
//     if(n==1){
//         cout<<"Base case hit..."<<endl;
//         return sum;
//     }
//     return sqsum(n-1,sum);

// }
// int main(){
//     int n;
//     cout<<"Enter number:";
//     cin>>n;
//     cout<<sqsum(n,0);
// }

// int sqsum(int n){
//     cout<<"Entering with number: "<<n<<endl;
//     if(n==1){
//         cout<<"Base case hit..."<<endl;
//         return 1;
//     }
//     return (n*n*n)+sqsum(n-1);

// }
// int main(){
//     int n;
//     cout<<"Enter number:";
//     cin>>n;
//     cout<<sqsum(n);
// }

// Print all even numbers from 1 to N recursively.
// void printe(int n){
//     cout<<"Entering with num: "<<n<<endl;
//     if(n==2){
//         cout<<"Base case hit..."<<endl;
//         cout<<n<<endl;
//         return;
//     }
//     printe(n-1);
//     if(n%2==0)cout<<n<<endl;

// }
// int main(){
//     int n;
//     cout<<"Entering with number: ";
//     cin>>n;
//     printe(n);
// }

// Print all odd numbers from 1 to N recursively.
// void printe(int n){
//     cout<<"Entering with num: "<<n<<endl;
//     if(n<=1){
//         cout<<"Base case hit..."<<endl;
//         cout<<1<<endl;
//         return;
//     }
//     printe(n-1);
//     if(n%2!=0)cout<<n<<endl;

// }
// int main(){
//     int n;
//     cout<<"Entering with number: ";
//     cin>>n;
//     printe(n);
// // }

// // Print a countdown from N to 0 with a custom message
// void print(int n,string& msg){
//     cout<<"Entering with number: "<<n<<endl;
//     if(n==0){
//         cout<<"Countdown over   BOOM!!!!!!!!!!!"<<endl;
//         return;
//     }
//     cout<<msg <<" "<<n<<endl;
//     print(n-1,msg);
// }
// int main(){
//     int n;
//     string msg;
//     cout<<"Enter number: ";
//     cin>>n;
//     cin.ignore();
//     cout<<"Enter msg: ";
//     getline(cin,msg);
//     print(n,msg);
// }

// // Find the product of digits of a number.
// int pod(int n){
//     cout<<"Entering with number: "<<n<<endl;
//     if(n/10==0){
//         cout<<"Base case hit....."<<endl;
//         return n;
//     }
//     return (n%10)*pod(n/10);
// }
// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     cout<<pod(n);
// }

// Count how many times a specific digit (like 5) appears in a number.
// int num5(int n,int count){
//     cout<<"Entering with number: "<<n<<endl;
//     if(n%10==5) count++;
//     if(n/10==0){
//         cout<<"Base case hit"<<endl;
//         return count;
//     }
//     return num5(n/10,count);
// }
// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     cout<<num5(n,0);
// }

// int num5(int n){
//     cout<<"Entering with number: "<<n<<endl;
//     if(n==0){
//         cout<<"Base case hit"<<endl;
//         return 0;
//     }
//     return ((n%10==5) ? 1:0)+num5(n/10);
// }
// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     cout<<num5(n);
// }

// // Check if a number is prime using recursion.
// bool prime(int n,int div){
//     cout<<"Entering num with div "<<div<<endl;
//     if(div>sqrt(n)){
//         cout<<"Base case hit..."<<endl;
//         return true;
//     }
//     if(n%div==0){
//         return false;
//     }
//     else return prime(n,div+1);
// }
// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     cout<<prime(n,2);
// }

// // Find nth triangular number (sum of first n natural numbers).
// int trinum(int n){
//     cout<<"Entering with number: "<<n<<endl;
//     if(n==1){
//         cout<<"Base case hit"<<endl;
//         return 1;
//     }

// return n+trinum(n-1);
// }
// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     cout<<trinum(n);
// }

// Find the nth harmonic number recursively.
// double harn(int n){
//     cout<<"Entering with number: "<<n<<endl;
//     if(n==1){
//         cout<<"Base case hit...."<<endl;
//         return 1;
//     }
//     return (1.0/n)+harn(n-1);
// }
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     cout<<harn(n);
// }

// Convert decimal number to binary recursively
// vector<int> binary(int n,vector<int>&sol){
//     cout<<"Entering with num "<<n<<endl;
//     if(n==0){
//         cout<<"BAse case hit...."<<endl;
//         return sol;
//     }
//     sol.push_back(n%2);
//     return binary(n/2,sol);
// }
// int main(){
//     int n;
//     cout<<"Enter decimal number: ";
//     cin>>n;
//     vector<int>sol;
//     binary(n,sol);
//     for(int i=sol.size()-1;i>=0;i--){
//         cout<<sol[i];
//     }
// }

// Find the sum of an arithmetic series recursively.
// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;

// }














































































































































































































































/////////////////////////////////////// Array/Vector Recursion (Level 2)/////////////////////////////////
//Check if an array is sorted.
// bool issort(int arr[],int idx,int size,int max){
//     cout<<"Entering with ele: "<<idx<<endl;
//     if(idx==size){
//         cout<<"Base case hit..."<<endl;
//         return true;
//     }
//     if(arr[idx]<max) return false;
//     else max=arr[idx];
//     return issort(arr,idx+1,size,max);

// }
// int main(){
//     int arr[]={1,2,3,4,5,3,7};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<issort(arr,1,n,arr[0]);
// }

// Find the maximum element in an array.
// int maxf(int arr[],int idx,int size,int max){
//     cout<<"Entering with ele: "<<idx<<endl;
//     if(idx==size){
//         cout<<"Base case hit...";
//         return max;
//     }
//     if(arr[idx]>max){
//         max=arr[idx];
//     }
//     return maxf(arr,idx+1,size,max);
// }
// without parameter
// int maxf(int arr[],int idx,int size){
//     cout<<"Entering with ele: "<<idx<<endl;
//     if(idx==size-1){
//         cout<<"Base case hit...";
//         return arr[idx];
//     }
//     int maxinrest=max(arr[idx],maxf(arr,idx+1,size));
//     return maxinrest;
// }
// int main(){
//     int arr[]={1,2,5,3,4,9,6,7};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<maxf(arr,0,n);
// }

// Find the first occurrence of a key in an array.
// int fok(int arr[],int size,int idx,int k){
//     cout<<"Entering with ele: "<<idx<<endl;
//     if(idx==size){
//         cout<<"Base case hit..."<<endl;
//         return -1;
//     }
//     if(arr[idx]==k) return idx;
//     else return fok(arr,size,idx+1,k);
// }
// int main(){
//     int arr[]={1,2,5,3,4,9,6,7};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int k;
//     cout<<"Enter key: ";
//     cin>>k;
//     cout<<fok(arr,n,0,k);
// }


// Find the last occurrence of a key in an array.
// int fok(int arr[],int size,int idx,int k){
//     cout<<"Entering with ele: "<<idx<<endl;
//     if(idx<0){
//         cout<<"Base case hit..."<<endl;
//         return -1;
//     }
//     if(arr[idx]==k) return idx;
//     else return fok(arr,size,idx-1,k);
// }
// int main(){
//     int arr[]={1,2,5,3,4,9,6,7};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int k;
//     cout<<"Enter key: ";
//     cin>>k;
//     cout<<fok(arr,n,n-1,k);
// }

// Reverse an array recursively.
//void rev(int arr[]){

//}
// int main(){
//     int arr[]={1,2,5,6,7,8,9,2};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     rev(arr);

// }


// Print all elements of an array recursively.
// void print(int arr[],int idx,int size){
//     //cout<<"Entering with ele: "<<idx<<endl;
//     if(idx==size){
//         //cout<<"Base case hit...."<<endl;
//         return;
//     }
//     cout<<arr[idx]<<" ";
//     print(arr,idx+1,size);
// }
// int main(){
//     int arr[]={1,2,3,4,5,6,7};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     print(arr,0,n);
// }

// // Calculate the sum of elements in an array recursively.
// int sumarr(int arr[],int idx,int size){
//     if(idx==size-1){
//         return arr[size-1];
//     }
//     return arr[idx]+sumarr(arr,idx+1,size);

// }
// int main(){int arr[]={1,2,3,4,5,6,7};
// int n=sizeof(arr)/sizeof(arr[0]);
// cout<<sumarr(arr,0,n);
// }

//  Count how many times a given element appears in an array
// int sumarr(int arr[],int idx,int size,int count,int k){
//     if(idx==size){
//         return count;
//     }
//     if(arr[idx]==k) count++;
//     return sumarr(arr,idx+1,size,count,k);
// }
// int main(){int arr[]={1,2,3,4,5,6,7,1,1,2};
// int n=sizeof(arr)/sizeof(arr[0],0);
// int k;
// cout<<"Enter element: ";
// cin>>k;
// cout<<sumarr(arr,0,n,0,k);
// }

// // Print array elements from left to right and then right to left recursively.
// void print(int arr[],int idx,int size){
//     //cout<<"Entering with ele: "<<idx<<endl;
//     if(idx==size){
//         //cout<<"Base case hit...."<<endl;
//         cout<<endl;
//         return;
//     }
//     cout<<arr[idx]<<" ";
//     print(arr,idx+1,size);
//     cout<<arr[idx]<<" ";
// }
// int main(){
//     int arr[]={1,2,3,4,5,6,7};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     print(arr,0,n);
// }

// Find the index of the maximum element recursively.
// int maxeleidx(int arr[],int idx,int size,int maxidx){
//     if(idx==size) return maxidx;
//     if(arr[idx]>arr[maxidx]) maxidx=idx;
//     return maxeleidx(arr,idx+1,size,maxidx);
// }
// int main(){
//     int arr[]={1,2,3,4,8,6,5,4};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<maxeleidx(arr,1,n,0);
// }

// // Replace all occurrences of a specific value in an array.
// void replace(int arr[],int idx,int size,int k,int l){
//     if(idx==size){
//         return;
//     }
//     if(arr[idx]==k) arr[idx]=l;
//     replace(arr,idx+1,size,k,l);
// }
// int main(){
//     int arr[]={1,2,3,4,5,4,3,2,1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int k;
//     cout<<"Enter the element: ";
//     cin>>k;
//     int l;
//     cout<<"Enter the change: ";
//     cin>>l;
//     replace(arr,0,n,k,l);
//     for(int i=0;i<n;i++) cout<<arr[i]<<" ";
// }

// Insert an element at a specific position in an array.
// void insertat(vector<int>&v,int ele,int idx,int val){
//     if(ele==idx-1){
//         v.push_back(val);
//         return;
//     }
//     int x=v[ele];
//     v.pop_back();
//     insertat(v,ele-1,idx,val);
//     v.push_back(x);

// }
// int main(){
//     vector<int>v;
//     v.push_back(10);
//     v.push_back(20);
//     v.push_back(30);
//     v.push_back(40);
//     v.push_back(50);
//     v.push_back(60);
//     for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
//     cout<<endl;
//     int idx;
//     cout<<"Enter idx: ";
//     cin>>idx;
//     int val;
//     cout<<"Enter val: ";
//     cin>>val;
//     insertat(v,v.size()-1,idx,val);
//     cout<<endl;
//     for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
// }

// // Merge two sorted arrays recursively.
// void merge(int arr1[],int arr2[],int n1,int n2,int idx1,int idx2,int arr3[],int idx3){
//         if(idx1==n1){
//             if(idx2==n2) return;
            
//             arr3[idx3]=arr2[idx2];
//             merge(arr1,arr2,n1,n2,idx1,idx2+1,arr3,idx3+1);
//         }
//         if(idx2==n2){
//             if(idx1==n1) return;
//             arr3[idx3]=arr1[idx1];
//             merge(arr1,arr2,n1,n2,idx1+1,idx2,arr3,idx3+1);
//         }
//         if(arr1[idx1]>arr2[idx2]){
//             arr3[idx3]=arr2[idx2];
//             merge(arr1,arr2,n1,n2,idx1,idx2+1,arr3,idx3+1);
//         }
//         else{
//             arr3[idx3]=arr1[idx1];
//             merge(arr1,arr2,n1,n2,idx1+1,idx2,arr3,idx3+1);
//         }
// }
// int main(){
//     int arr1[]={1,2,3,4,5,6,7};
//     int arr2[]={7,8,9,10,11,12,13};
//     int n1=sizeof(arr1)/sizeof(arr1[0]);
//     int n2=sizeof(arr2)/sizeof(arr2[0]);
//     int arr3[n1+n2];
//     merge(arr1,arr2,n1,n2,0,0,arr3,0);
//     for(int i=0;i<n1+n2;i++){
//         cout<<arr3[i]<<" ";
//     }
// }

// Find the second largest element in an array recursively.
// int maxf2(int arr[],int idx,int size,int max,int max2){
//     if(idx==size){
//         return max2;
//     }
//     if(arr[idx]>max2 && arr[idx]<max){
//         max2=arr[idx];
//     }
//     return maxf2(arr,idx+1,size,max,max2);

// }
// int maxf1(int arr[],int idx,int size,int max){
//     if(idx==size){
//         return maxf2(arr,0,size,max,INT_MIN);
//     }
//     if(arr[idx]>max){
//         max=arr[idx];
//     }
//     return maxf1(arr,idx+1,size,max);
// }
// int main(){
//     int arr[]={1,2,5,3,4,9,6,7};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<maxf1(arr,0,n,INT_MIN);
// }











 
