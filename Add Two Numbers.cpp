
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum=0, carry=0;
        ListNode* new_node= new ListNode();
        ListNode* prev = new_node;
        ListNode* temp ;
        while(l1!=NULL && l2!=NULL){
            
                sum = (l1->val + l2->val + carry);
                if(sum>9)
                    carry=1;
                else 
                    carry=0;
                sum=sum%10;
                
                temp = new ListNode();
                temp->val = sum;
                prev->next = temp;
                prev = temp;
                l2=l2->next;
                l1=l1->next;
            
        }
        if(l1!=NULL){
            while(l1!=NULL){
                sum = l1->val + carry;
                if(sum>9)
                    carry=1;
                else 
                    carry=0;
                sum=sum%10;
                temp=new ListNode();
                temp->val = sum;
                prev->next = temp;
                prev=temp;
                l1=l1->next;
            }
        }
        if(l2!=NULL){
            while(l2!=NULL){
                sum = l2->val + carry;
                if(sum>9)
                    carry=1;
                else 
                    carry=0;
                sum=sum%10;
                temp=new ListNode();
                temp->val = sum;
                prev->next = temp;
                prev=temp;
                l2=l2->next;
            }
        }
        if(carry==1){
            temp=new ListNode();
            temp->val = 1;
            prev->next = temp;}
        return new_node->next;
    }
};