/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
//     public:
//         ListNode* removeNthFromEnd(ListNode* head, int n) {
//             int size=0;
//             ListNode* temp=head;
//             ListNode*tail=NULL;
//             while(temp!=NULL){
//                 size++;
//                 tail=temp;
//                 temp=temp->next;
//             }
//             if(size==n) {
//                 head=head->next;
//                 return head;
//             }
//             int m=size-n+1;
//             int idx=m-1;
//             temp=head;
//             for(int i=0;i<idx-1;i++){
//                 temp=temp->next;
//             }
//             temp->next=temp->next->next;
//             return head;
    
     
    
    
//     }
//     };
// 