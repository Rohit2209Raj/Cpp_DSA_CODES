#include<iostream>
#include<algorithm>

using namespace std;

void Bubble_Sort(int array[] , int size , int i , int j){
    //Base case 
    if(i==size-1) return;
    if(j==size-1) {
        Bubble_Sort(array , size , i + 1 , 0);
        return;
    }

    if(array[j] > array[j + 1]) {
        swap(array[j] , array[j + 1]);
     }
    Bubble_Sort(array, size, i, j + 1);
}

int main(){
    int array[] = {2, 3, 1};
    Bubble_Sort(array , 3 , 0 , 0);
    for(int i = 0 ; i < 3; i++) cout<<array[i]<<" ";
}