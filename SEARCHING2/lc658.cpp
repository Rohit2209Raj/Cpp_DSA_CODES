#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;
int main(){
    int arr[]={1,2,3,4,6,7,8,9,10};
    int target;
    cout<<"ENTER TARGET: ";
    int n=sizeof(arr)/sizeof(arr[0]);
    cin>>target;
    int k;
    cout<<"ENTER NUMBER OF ADJACENTS: ";
    cin>>k;
    int lo=0;
    int hi=n-1;
    bool flag=false;
    int ans=-1;
    vector<int>v;
    if(target<arr[0]) {
        for(int i=0;i<k;i++) v.push_back(arr[i]);
    }
    else if(target>arr[n-1]){
        for(int i=n-1;i>=n-k;i--) v.push_back(arr[i]);
    }
    else{
    while(hi>=lo){
        int mid=(hi+lo)/2;
        if(arr[mid]==target) {
            ans=mid;
            v.push_back(arr[mid]);
            flag=true;
            break;
        }
        else if(arr[mid]<target){

             lo=mid+1;
        }

        else hi=mid-1;
    }



    if(flag==true){
        int ub=ans+1;
        int lb=ans-1;
        for(int i=0;i<k-1;i++){
            if(lb<0) {
                v.push_back(arr[ub]) ;
                ub++;
            }

            else if(ub>n-1){
                v.push_back(arr[lb]);
                lb--;
            }

            
        else if(abs(target-arr[ub])<abs(target-arr[lb])){
            v.push_back(arr[ub]);
            ub++;
        }
        else if(abs(target-arr[ub])==abs(target-arr[lb])){
            v.push_back(arr[lb]);
            lb--;
        }
        else {
            v.push_back(arr[lb]);
            lb--;
        }
    }
}
    

      else{  
              
             int ub=lo;
             int lb=hi;
             for(int i=0;i<k;i++){
                if(lb<0) {
                    v.push_back(arr[ub]) ;
                    ub++;
                }
    
                else if(ub>n-1){
                    v.push_back(arr[lb]);
                    lb--;
                }
    
                
            else if(abs(target-arr[ub])<abs(target-arr[lb])){
                v.push_back(arr[ub]);
                ub++;
            }
            else if(abs(target-arr[ub])==abs(target-arr[lb])){
                v.push_back(arr[lb]);
                lb--;
            }
            else {
                v.push_back(arr[lb]);
                lb--;
            }
        }
             
      }






    }




   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    for(int ele: v){
        cout<<ele<<" ";
    }
    }
