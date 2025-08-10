// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number of Lines : ";
//     cin>>n;
    
   
   
// Q1

// Q2
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i+1;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // } 

// Q3
    //   for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<char(j+64);
    //     }
    //     cout<<endl;
    //   }    


// Q4
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         if(i%2==0) cout<<char(j+64);
    //         else cout<<j;
    //     }
    //     cout<<endl;
    // }

// Q5 
    //  int m=2*n-1;
    // for(int i=1;i<=m;i++){
    //     if(i<=n){
    //     for(int j=1;j<=i;j++) cout<<"*";
    //      }
    //      else{
    //         i=i-n;
    //         for(int k=n-i;k>=1;k--) cout<<"*";
    //      }

    //            cout<<endl; 
    // }

            //    CORREXT SOLUTION
//          int m=2*n-1;
//     for(int i=1;i<=m;i++){
//             if(i<=n) {
//                 for(int j=1;j<=i;j++) cout<<"*";
//             }
//             else {
//                 int k=m-i+1;
//                 for(int j=1;j<=k;j++) cout<<"*";
//                 }
//         cout<<endl;
// } 
           






// Q6
    //  int m;
    //  cout<<"Enter Number Of Coloumns : ";
    //  cin>>m;  
    //  for(int i=1;i<=n;i++){
    //     for(int j=1;j<=m;j++){
    //         if(i==1||i==n||j==1||j==m){
    //             cout<<"*";
    //         }
    //         else cout<<" ";
    //     }
    //     cout<<endl;
    //  }         
         

//Q7 
     //Rhombus  

    //  for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i+1;j++) cout<<" ";
    //     for(int k=1;k<=n;k++) cout<<"*";
    //     cout<<endl;
    //  }

//Q8 
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++) cout<<j;
    //     cout<<endl;
    // }    

//Q9
    // for(int i=1;i<=n;i++){
    // for(int j=1;j<=n-i+1;j++) cout<<" ";
    // for(int k=1;k<=i;k++) cout<<char(k+64);
    // cout<<endl;
    // }

//Q10
    // for(int i=1;i<=n;i++){
    // for(int j=i;j>=1;j--) cout<<j;
    // cout<<endl;
    // }    

//Q11


            // sheet 2 Pattern Printing ///


 //Q1
    //   for(int i=1;i<=n;i++){
    // for(int j=n-i;j>=1;j--) cout<<" ";
    // for(int k=1;k<=2*i-1;k++) cout<<k;
    // cout<<endl;
    // }    

//Q2 
    // for(int i=1;i<=n;i++){
    // for(int j=n-i;j>=1;j--) cout<<" ";
    // for(int k=1;k<=2*i-1;k++) cout<<char(k+64);
    // cout<<endl;
    // }  

//Q3 
    //    for(int i=1;i<=n;i++){
    //    for(int j=1;j<=n-i+1;j++) cout<<" ";
    //    for(int k=i;k>=1;k--) cout<<char(k+64);
    //    for(int l=2;l<=i;l++) cout<<char(l+64);
        
    //     cout<<endl;
    //  }   


//Q4 
    //  int m=2*n-1;
    
    //  for(int l=1;l<=m;l++) cout<<char(l+64);
    //  cout<<endl; 
    // for(int i=2;i<=n;i++){   
    //  for(int j=1;j<=n-i+1;j++)cout<<char(j+64);
    //  for(int k=1;k<=2*i-1;k++)cout<<" ";
    //  for(int z=  ) cout<<char(z+64);
    //  cout<<endl;
     
     
    //  }       

//Q5 
    //  int m=2*n-1;
    
    //  for(int l=1;l<=m;l++) cout<<l;
    //  cout<<endl; 
    // for(int i=2;i<=n;i++){   
    //  for(int j=1;j<=n-i+1;j++)cout<<j;
    //  for(int k=1;k<=2*i-1;k++)cout<<" ";
    //  for(int z=n-i+1;z>=1;z--) cout<<z;
    //  cout<<endl;
     
     
    //  }

// //  Q6
//         int m=n-1;
//     for(int i=1;i<=m;i++){
//         for(int j=1;j<=i-1;j++) cout<<" ";
//         for(int k=1;k<=1;k++) cout<<"*";
//         for(int l=1;l<=2*n-2*i-1;l++) cout<<" ";
//         for(int m=1;m<=1;m++)cout<<"*";
//         cout<<endl;
//     }   
//     for(int o=1;o<=n-1;o++) cout<<" ";
//     cout<<"*";

// Q7  AADHA HI PADHA THA QUESTION KA PATTERN AUR USI K SOLVE KAR DIYA MAINE HENCE SHEET SE COMPARE MAT KARNA WAISE BAHUT MEHNAT LAGTI HAI ISSE KANR ME APPRECIATE ROHIT!!!1
    //  int m;
    //  cout<<"enter number of spaces in between Plus 1 : ";
    //  cin>>m;
    //  for(int o=1;o<=n-1;o++) cout<<" ";
    //  cout<<"*";
    //  cout<<endl;
    //  for(int i=1;i<=n;i++){
    //     if(i<=n-1){
    //         for(int j=1;j<=n-i-1;j++) cout<<" ";
    //         for(int k=1;k<=1;k++) cout<<"*";
    //         for(int l=1;l<=2*i-1;l++) cout<<" ";
    //         for(int k=1;k<=1;k++) cout<<"*";
    //         cout<<endl;
    //     }
    //     else{
            
    //         for(int z=1;z<=1;z++) cout<<" ";
    //         for(int y=1;y<=1;y++) cout<<"*";
    //         for(int x=1;x<=2*(n-2)-1;x++) cout<<" ";
    //         for(int y=1;y<=1;y++) cout<<"*";
            
    //     }
    //  }

// Q8
   // EASY HAI

 //Q9

         // BADA BHAYANKAR QUESTION THA YE BUT MAINE KHUD KAR LIYA MAJA AA GAYA ISSE KARKE SALA JYADA HI SAMAJDAAR HO GAYA HU PATA NAHI KAHI PROCODER 1 ST YEAR ME HI NAA BAN JAU;//
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of Lines : ";
    cin>>n;
    
     int m=2*n-1;
    for(int z=1;z<=n;z++) cout<<" ";
    cout<<"*"<<endl;
    for(int x=1;x<=m;x++){
        if(x==n){
            for(int i=1;i<=m+2;i++) cout<<"*";
        }
        if(x<n) {int i=x;
        
        
        for(int j=1;j<=n-i;j++) cout<<" ";
        cout<<"*";
        for(int k=1;k<=i-1;k++) cout<<" ";
        cout<<"*";
        for(int k=1;k<=i-1;k++) cout<<" ";
        cout<<"*";
        
        //for(int l=1;l<=i;l++) cout<<" ";

        }
        else if(x>n){
            int i=m+1-x;
            for(int o=1;o<=n-i;o++) cout<<" ";
            cout<<"*";
            for(int k=1;k<=i-1;k++) cout<<" ";
            cout<<"*";
            for(int k=1;k<=i-1;k++) cout<<" ";
            cout<<"*";
            }
            cout<<endl;
         }
         for(int z=1;z<=n;z++) cout<<" ";
             for(int k=1;k<=i;k++) cout<<"*";
                   for(int j=1;j<=2*n-2*i-1;j++) cout<<" ";
                   for(int k=1;k<=i;k++) cout<<"*";

               }
               cout<<endl;
           }
         cout<<"*"<<endl;  
} 

    // Q10
            // for(int x=1;x<=2*n;x++){
            //     if(x==n || x==n+1){
            //         for(int o=1;o<=2*n-1;o++) cout<<"*";
            //     }
            //     if(x<n){
            //         int i=x;
            //         for(int k=1;k<=i;k++) cout<<"*";
            //         for(int j=1;j<=2*n-2*i-1;j++) cout<<" ";
            //         for(int k=1;k<=i;k++) cout<<"*";
            //     }
            //     else if(x>n+1){
            //         int i=2*n-x+1;
            //          for(int k=1;k<=i;k++) cout<<"*";
            //         for(int j=1;j<=2*n-2*i-1;j++) cout<<" ";
            //         for(int k=1;k<=i;k++) cout<<"*";}

            //         cout<<endl;
            // }
           
      

// Q11 hojaayega!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!//

}



