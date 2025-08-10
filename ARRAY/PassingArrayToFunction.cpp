#include<iostream>
using namespace std;
// Both int* a and int a[] behave identically. They both point to the first element of the array,
// and the compiler treats them as a pointer to int.


void display(int *a,int size){  // technicaly it is (int* a,int size)
     // Here a[]==arr[]  both points to same array
                        //  Reason is we are sending arr address(By reference)
                        // Because arr is address of arr
                        // cout<<arr=cout<<&arr;
                        // if doubt then cout<<arr;
                        //  it will give address;
        for(int i=0;i<=4;i++){
            cout<<a[i]<<" ";  // same as cout<<*(a+i)<<" ";
        }
        cout<<endl;
}
void change(int* b,int size){    // Here b[]==arr[]  both points to same array
     b[0]=100;
}
int main(){
     int arr[]={1,2,4,7,4};
     int size=sizeof(arr)/sizeof(arr[0]);
     display(arr,size);  // We usialyy send array lenght also;
     change(arr,size);
     display(arr,size);
    //  cout<<arr;
     

}