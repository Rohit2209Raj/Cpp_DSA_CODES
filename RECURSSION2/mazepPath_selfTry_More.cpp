// #include<iostream>
// using namespace std;
// int num_Ways(int sc,int sr,int ec,int er){
//         if(sc==ec &&  sr==er) return 1;
//         if(sc>ec || sr>er || sc<0 || sr<0) return 0;
//         return num_Ways(sc+1,sr,ec,er) + num_Ways(sc,sr+1,ec,er) + num_Ways(sc-1,sr,ec,er)+ num_Ways(sc,sr-1,ec,er);
// }
// int main(){
//     int m;
//     cout<<"enter number of columns: ";
//     cin>>m;
//     int n;
//     cout<<"enter number of rows: ";
//     cin>>n;
//     int arr[m][n];
//     int ec;
//     cout<<"enter target column: ";
//     cin>>ec;
//     int er;
//     cout<<"enter target row: ";
//     cin>>er;
//     if(ec>=m || er>=n) {
//         cout<<"Invalid Entries.............";
//         return EXIT_FAILURE;
//     }
//     cout<<num_Ways(0,0,ec,er);
// }  backtracking use hogi????????????????????????????????