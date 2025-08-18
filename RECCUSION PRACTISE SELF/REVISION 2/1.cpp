#include<iostream>
#include<vector>
#include<string>
using namespace std;
//  Print numbers from 1 to N (increasing order).
// void print1ton(int n){
//     if(n==0) return;
//     print1ton(n-1);
//     cout<<n<<" ";
// }
// int main(){
//     int n;
//     cout<<"Enter your number: ";
//     cin>>n;
//     print1ton(n);
// }

// Print numbers from N to 1 (decreasing order)
// void printnto1(int n){
//     if(n==0) return;
//     cout<<n<<" ";
//     printnto1(n-1);
// }
// int main(){
//     int n;
//     cout<<"Enter your number: ";
//     cin>>n;
//     printnto1(n);
// }

// Sum of first N natural numbers.
// int Sum(int n){
//     if(n==0) return 0;
//     return n+Sum(n-1);
// }
// int main(){
//     int n;
//     cout<<"Enter your number: ";
//     cin>>n;
//     cout<<Sum(n);
// }

// Factorial of a number N.
// int fact(int n){
//     if(n==0|| n==1) return n;
//     else return n*fact(n-1);
// }
// int main(){
//     int n;
//     cout<<"Enter your number: ";
//     cin>>n;
//     cout<<fact(n);
// }

// Nth Fibonacci number.
// int fibo(int n){
//     if(n==1 || n==0) return n;
//     else return fibo(n-1)+fibo(n-2);
// }
// int main(){
//     int n;
//     cout<<"Enter the index of fibo: ";
//     cin>>n;
//     cout<<fibo(n);
// }

// Check if a number is palindrome (using recursion)

// By conversion to string
// bool palindrome(string s,int start,int last){
//     if(start>=last) return true;
//     if(s[start]!=s[last]) return false;
//     return palindrome(s,start+1,last-1);
// }
// int main(){
//     int n;
//     cout<<"Enter your number: ";
//     cin>>n;
//     string s=to_string(n);
//     cout<<palindrome(s,0,s.size()-1);
// }
// without conversion to string
int reverse(int n,int rev){
    if(n==0) return rev;
    return reverse(n/10,rev*10+n%10);
}
bool palindrome(int n){
    return n==reverse(n,0);
}
int main(){
    int n;
    cout<<"Enter your number: ";
    cin>>n;
    cout<<palindrome(n);
}
