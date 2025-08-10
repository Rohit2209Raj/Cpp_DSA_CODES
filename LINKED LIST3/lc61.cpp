// class Solution {
//     public:
//         ListNode* rotateRight(ListNode* head, int k) {
//             ListNode* temp=head;
//             int size=0;
//             ListNode* lidx=NULL;
//             while(temp!=NULL){
//                 lidx=temp;
//                 size++;
//                 temp=temp->next;
//             }
//             if(size==0 || size==1) return head;
//             if(k>size) k=k%size;
//             if(k==0 || k==size) return head;
//             temp=head;
//             for(int i=0;i<size-k-1;i++) temp=temp->next;
//             ListNode* newh=NULL;
//             newh=temp->next;
//             temp->next=NULL;
//             lidx->next=head;
//             return newh;
//     }
//     };