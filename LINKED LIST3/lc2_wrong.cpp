// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// #include <algorithm>
// class Solution {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         vector<long long>v1,v2;
//         ListNode* temp1=l1;
//         ListNode* temp2=l2;
//         if(l1==NULL && l2==NULL) return NULL;
//         long long x1=0;
//         long long x2=0;
//         while(temp1){
//             v1.push_back(temp1->val);
//             temp1=temp1->next;
//         }
//         while(temp2){
//             v2.push_back(temp2->val);
//              temp2=temp2->next;
//         }
//         reverse(v1.begin(),v1.end());
//         reverse(v2.begin(),v2.end());
//         for(int i=0;i<v1.size();i++){
//             x1+=v1[i]*pow(10,v1.size()-1-i);
//         }

//         for(int i=0;i<v2.size();i++){
//             x2+=v2[i]*pow(10,v2.size()-1-i);
//         }
//         long long r=x1+x2;
//         ListNode* c=new ListNode(-1);
//         ListNode* tc=c;
//         if(r==0){
//             ListNode* temp=new ListNode(0);
//             tc->next=temp;
//             tc=tc->next;
//             tc->next=NULL;
//             return c->next;
//         }
//         while(r>0){
//             long long z=r%10;
//             ListNode* temp=new ListNode(z);
//             tc->next=temp;
//             tc=tc->next;
//             r=r/10;
//         }
//         tc->next=NULL;
//         return c->next;

//     }
// };