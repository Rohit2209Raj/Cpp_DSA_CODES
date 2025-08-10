#include<iostream>
#include<vector>
using namespace std;
int main(){
    int nums[]={1,2,2,3,3,3,3,4,4,5,8,9};
    int n=sizeof(nums)/sizeof(nums[0]);
    int target ;
    cout<<"ENTER THE TARGET: ";
    cin>>target;
    int lo=0;
    int hi=n-1;
    bool flag=false;
    int n = nums.size();
    int lo = 0;
    int hi = n - 1;
    vector<int> v;
    bool flag=false;
    while (hi >= lo) {
        int mid=lo+(hi-lo)/2;
       if(nums[mid]==target){
        if(nums[mid-1]!=target){
            v.push_back(mid);
            flag=true;
            break;
        }
        else hi=mid-1;
       }
       else if(nums[mid]<target) lo=mid+1;
       else hi=mid-1;
}
    if(flag==false) v.push_back(-1);

    lo=0;
    hi=n-1;
    flag=false;
    while(hi>=lo){
          int mid=lo+(hi-lo)/2;

        if(nums[mid]==target){
            if(nums[mid+1]!=target){
                v.push_back(mid);
                flag=true;
                break;
            }
            else lo=mid+1;
        }
        else if(nums[mid]<target) lo=mid+1;
        else hi=mid-1;

    }
    if(flag==false) v.push_back(-1);

return v;
}
    
}


/// KHUD SE KIYA HAI MAINE////
