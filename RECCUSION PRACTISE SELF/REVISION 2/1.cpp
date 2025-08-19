#include<iostream>
#include<vector>
#include<string>
#include<math.h>
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
// int reverse(int n,int rev){
//     if(n==0) return rev;
//     return reverse(n/10,rev*10+n%10);
// }
// bool palindrome(int n){
//     return n==reverse(n,0);
// }
// int main(){
//     int n;
//     cout<<"Enter your number: ";
//     cin>>n;
//     cout<<palindrome(n);
// }

// Print “Hello World” N times using recursion.
// void print(int n){
//     if(n==0) return;
//     cout<<"Rohit"<<endl;
//     print(n-1);
// }
// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     print(n);
// }
// Print the sum of numbers from 1 to N (using parameter in recursion)
// int sum(int n,int add){
//     if(n==0) return add;
//     return sum(n-1,add+n);
// }
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     cout<<sum(n,0);
// }

//  Find the product of first N natural numbers (like factorial, but using recursion differently).
// int prod(int n,int mul){
//     if(n<=1) return mul;
//     return prod(n-1,mul*n);
// }
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     cout<<prod(n,1);
// }

// // Find the sum of squares of first N natural numbers.
// int sqsum(int n){
//     if(n==0) return 0;
//     return n*n+sqsum(n-1);
// }
// int main(){
//     int n;
//     cout<<"Enter your number: ";
//     cin>>n;
//     cout<<sqsum(n);
// }

// Find the sum of cubes of first N natural numbers.
// int sqsum(int n){
//     if(n==0) return 0;
//     return n*n*n+sqsum(n-1);
// }
// int main(){
//     int n;
//     cout<<"Enter your number: ";
//     cin>>n;
//     cout<<sqsum(n);
// }

// Print all even numbers from 1 to N recursively.
// void print(int n){
//     if(n==0) return;
//     print(n-1);
//     if(n%2==0)cout<<n<<" ";
// }
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     print(n);
// }

// . Print all odd numbers from 1 to N recursively

// void print(int n){
//     if(n==0) return;
//     print(n-1);
//     if(n%2!=0)cout<<n<<" ";
// }
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     print(n);
// }

// Print a countdown from N to 0 with a custom message
// void countDown(int n,string s){
//     if(n==0){
//         cout<<"BOOM!!!!!!!!!!";
//         return ;
//     }
//     cout<<s<<" "<<n<<" seconds."<<endl;
//     countDown(n-1,s);
// }
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     string msg="HELLO";
//     countDown(n,msg);
// }

//  Find the product of digits of a number
// int Prod(int n,int mul){
//     if(n<10) return n*mul;
//     else return Prod(n/10,mul*(n%10));
// }
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     cout<<Prod(n,1);
// }

// Count how many times a specific digit (like 5) appears in a number.
// int cal(int n,int k){
//     if(n==0) return k;
//     if(n%10==5) return cal(n/10,k+1);
//     else return cal(n/10,k);
// }
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     cout<<cal(n,0);
// }

//  Check if a number is prime using recursion.

// bool isprime(int n,int i){
//     if(i==n) return true;
//     if(n==2) return true;
//     if(n%i==0) return false;
//     if(i*i > n) return true;
//     else return isprime(n,1+i);
// }
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     cout<<isprime(n,2);
// }

// // Find nth triangular number (sum of first n natural numbers).
// int triangular(int n){
//     if(n==1) return 1;
//     else return n+triangular(n-1);
// }
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     cout<<triangular(n);
// }

// Find the nth harmonic number recursively
// float harmonic(float n){
//     cout<<"Entering funcwith with n= "<<n<<endl;
//     if(n==1) return 1.00;
//     return (1/n) + harmonic(n-1);
// }
// int main(){
//     float n;
//     cout<<"Enter harmonic term n: ";
//     cin>>n;
//     cout<<harmonic(n);
// }

// Convert binary number to decimal recursively
// int bin(int n,int i){
//     if(n==0) return 0;
//     return  (n%10)*i+bin(n/10,i*2);
// }
// int main(){
//     int n;
//     cout<<"Enter binary number: ";
//     cin>>n;
//     cout<<bin(n,0);
// }

// Convert decimal number to bin recursively
int bin(int n,int i){
    if(n==0) return 0;
    return  (n%10)*pow(2,i)+bin(n/10,i+1);
}
int main(){
    int n;
    cout<<"Enter decimal number: ";
    cin>>n;
    cout<<bin(n,0);
}
