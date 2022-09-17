class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp=head;
        ListNode* pre =new ListNode();
        pre->next=head;
        pre->val=0;
        while(temp!=NULL){
            if(temp->val==val){
                if(temp==head){
                    pre->next=temp->next;
                    temp=temp->next;
                    head=temp;
                }
                else{
                   pre->next=temp->next;
                   temp=temp->next;
                 
                }
                
            }
            else{
               pre=temp;
               temp=temp->next; 
            }
        }
        return head;
    }
};