//continous subsets
#include<iostream>
using namespace std;
// int main(){
//     int arr[]={1,2,3,4};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){ // index
//         for(int k=i;k<n;k++){ // number of subset for each index
//             for(int j=i;j<k+1;j++){
//                 cout<<arr[j];
//             }
//             cout<<endl;
//         }
//     }
// }

int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<j+1;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
}


