// #include<iostream>
// using namespace std;
// void printsol(int n,char from,char via,char dest){
//     if(n==0) return;
//     printsol(n-1,from,dest,via);
//     cout<<from<<" -> "<<dest<<endl;
//     printsol(n-1,via,from,dest);
// }
// int main(){
//     int n;
//     cout<<"Enter number of rings: ";
//     cin>>n;
//     printsol(n,'A','B','C');
// }
// #include<iostream>
// using namespace std;
// void hanoi(int n,char start,char via,char end){
//     if(n==0) return;
//     hanoi(n-1,start,end,via);
//     cout<<start<<" -> "<<end<<endl;
//     hanoi(n-1,via,start,end);
// }
// int main(){
//     int n;
//     cout<<"Enter number of rings: ";
//     cin>>n;
//     hanoi(n,'A','B','C');
// }
// #include<iostream>
// #include<climits>
// using namespace std;
// int maxele(int arr[],int n,int idx){
//     if(idx==n)return INT_MIN;
//     return max(arr[idx],maxele(arr,n,idx+1));
// }
// int main(){
//     int arr[]={1,2,3,9,6,4,7};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<maxele(arr,n,0);
// }

// #include<iostream>
// #include<string>
// using namespace std;
// void removeC(string s,string sol,int idx){
//     if(idx==s.size()){
//         cout<<sol;
//         return;
//     }
//     char ch=s[idx];
//     if(ch=='r') removeC(s,sol,idx+1);
//     else removeC(s,sol+ch,idx+1);
// }
// int main(){
    // string s;
    // cout<<"Enter string: ";
    // getline(cin,s);
    // cout<<s<<endl;
    // removeC(s,"",0);
// }

// #include<iostream>
// #include<string>
// using namespace std;
// void subsets(string s,string sol,int idx){
//     if(idx==s.size()){
//         cout<<sol<<endl;
//         return;
//     }
//     subsets(s,sol,idx+1);
//     char ch=s[idx];
//     subsets(s,sol+ch,idx+1);
// }
// int main(){
//     string s;
//     cout<<"Enter string: ";
//     getline(cin,s);
//     //cout<<s<<endl;
//     subsets(s,"",0);
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// void subset(vector<int>v,vector<int>sol,int idx,vector<vector<int>>&ans){
//     if(idx==v.size()){
//         ans.push_back(sol);
//         return ;
//     }
//     subset(v,sol,idx+1,ans);
//     int x=v[idx];
//     sol.push_back(x);
//     subset(v,sol,idx+1,ans);
// }
// int main(){
//     vector<int>v={1,2,3};
//     vector<int>sol;
//     vector<vector<int>> ans;
//     subset(v,sol,0,ans);
//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[i].size();j++){
//             cout<<ans[i][j];
//         }
//         cout<<endl;
//     }
// }

