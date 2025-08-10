#include<iostream>
#include<vector>
using namespace std;
int main(){
//  int arr[3][3]={1,2,3,4,5,6,7,8,9};
//  for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//  }
//  cout<<endl;
//  for(int i=0;i<3;i++) for(int j=i;j<3;j++) swap(arr[i][j],arr[j][i]);
//  for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//  }

vector<vector<int>>matrix={{1,2,3},{4,5,6},{7,8,9}};
for(int i=0;i<matrix.size();i++){
    for(int j=i;j<matrix[i].size();j++)
    swap(matrix[i][j],matrix[j][i]);
}
for(int i=0;i<matrix.size();i++){
    for(int j=0;j<matrix[i].size();j++){
   cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
}
cout<<"SIZE: "<<matrix.size();
cout<<endl;
int j=0;
int k=matrix.size()-1;
int i=0;
while(i<matrix.size()){
    swap(matrix[i][j],matrix[i][k]);
    i++;
}
for(int i=0;i<matrix.size();i++){
    for(int j=0;j<matrix[i].size();j++){
   cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
}
}