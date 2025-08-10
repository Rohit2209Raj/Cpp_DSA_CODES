// class Solution {
//     public:
//         ListNode* reverseList(ListNode* head) {
//             ListNode* p=NULL;
//             ListNode* c=head;
//             ListNode* n=head;
    
//             while(c){
//                 n=c->next;
//                 c->next=p;
//                 p=c;
//                 c=n;
//             }
//             return p;
            
//         }
//     };




// reccursive


// class Solution {
//     public:
//         ListNode* reverseList(ListNode* head) {
//             if(head==NULL || head->next==NULL) return head;
//             ListNode* nhead=reverseList(head->next);
//             head->next->next=head;;
//             head->next=NULL;
//             return nhead;
            
//         }
//     };
    
    
    
    