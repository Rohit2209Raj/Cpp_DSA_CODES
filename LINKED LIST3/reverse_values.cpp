// class Solution {
//     public:
//         ListNode* getIdx(int x,ListNode* head){
//             ListNode* temp=head;
//             for(int i=0;i<x;i++){
//                 temp=temp->next;
//             }
//             return temp;
//         }
//         ListNode* reverseList(ListNode* head) {
//             if(head==NULL || head->next==NULL) return head;
//             ListNode* rhead=head;
//             int size=0;
//             ListNode* temp=head;
//             while(temp!=NULL){
//                 size++;
//                 temp=temp->next;
//             }
//             temp=head;
//             int i=0;
//             int j=size-1;
//             while(j>i){
//                 swap(getIdx(i,head)->val,getIdx(j,head)->val);
//                 i++;
//                 j--;
//             }
//             return head;
            
//         }
//     };
    
    