// class Solution {
//     public:
//         vector<int> nodesBetweenCriticalPoints(ListNode* head) {
//             vector<int>idx;
//             vector<int>sol;
//             ListNode* temp=head;
//             int size=0;
//             while(temp){
//                 size++;
//                 temp=temp->next;
//             }
//             if(size<4) {
//                 sol.push_back(-1);
//                 sol.push_back(-1);
//                 return sol;
//             }
//             // temp=head;
//             ListNode* lst=head;
//             temp=head->next;
//             int z=0;
//             while(temp && temp->next!=NULL){
//                 z++;
//                 if(temp->val>lst->val && temp->val>temp->next->val){
//                     idx.push_back(z);
//                 }
//                 else if(temp->val<lst->val && temp->val<temp->next->val){
//                     idx.push_back(z);
//                 }
//                 lst=temp;
//                 temp=temp->next;
//             }
//             if(idx.size()<2){
//                 sol.push_back(-1);
//                 sol.push_back(-1);
//                 return sol;
//             }
//             if(idx.size()==2){
//                 sol.push_back(idx[1]-idx[0]);
//                 sol.push_back(idx[1]-idx[0]);
//                 return sol;
//             }
//             int md=0;
//             int mindis=INT_MAX;
//             for(int i=idx.size()-1;i>0;i--){
//                 md=idx[i]-idx[i-1];
//                 mindis=min(md,mindis);
//                 md=0;
//             }
//             sol.push_back(mindis);
//             sol.push_back(idx[idx.size()-1]-idx[0]);
//             return sol;
//         }
//     };