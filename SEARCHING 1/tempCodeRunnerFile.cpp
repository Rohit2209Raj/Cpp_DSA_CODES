 while(hi>=lo){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==target){
            if(arr[mid-1]!=target){
                cout<<mid;
                flag=true;
                break;
            }
            else{
                hi=mid-1;
            }
        }
        else if(arr[mid]<target) lo=mid+1;
        else hi=mid-1;
    }
    if(flag==false) cout<<-1;
    