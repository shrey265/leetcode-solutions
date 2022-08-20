
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        ListNode* prev=head;
        unordered_map<int,int> m;
        while(temp!=NULL){
            if(m.find(temp->val)!=m.end()){
                prev->next =temp->next;
                temp = temp->next;
            }
            else{
                m[temp->val]=1;
                prev = temp;
                temp=temp->next;
            }
            
        }
        return head;
    }
};