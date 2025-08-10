
           /// CODE IS CORRECT BUT TIME COMPLEXITY IS NOT GOOD////


// #include <unordered_set>
// class Solution {
// public:
//     ListNode* sortList(ListNode* head) {
//         if(head==NULL) return NULL;
//         unordered_set<ListNode*> used;
//         ListNode* mark=new ListNode(-999);
//         ListNode* mark2=mark;
//         ListNode* temp=head;
//         int size=0;
//         while(temp!=NULL){
//             size++;
//             temp=temp->next;
//         }
//         temp=head;
//         while(size>0){
//             ListNode* maxnode=new ListNode(INT_MAX);
//             temp=head;
//             ListNode* lst=NULL;
//             ListNode* mnext=NULL;
//             while(temp!=NULL){
//                 bool flag=true;
//                 if (used.find(temp) != used.end()) {  
//                     temp = temp->next;
//                     continue;
//                 }
//                 if(temp->val < maxnode->val){
//                     lst=temp;
//                     mnext=temp;
//                     maxnode->val=temp->val;
//                 }
//                 temp=temp->next;
//             }
//             used.insert(lst);
//             mark2->next=mnext;
//             mark2=mark2->next;
//             size--;
//         }
//         return mark->next;
//     }
// };