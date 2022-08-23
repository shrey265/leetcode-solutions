class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        ListNode* temp = head;
        int len=0, pos=1;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        if(len==1 || len==0)
            return true;
        temp=head;
        ListNode* prev=NULL;
        ListNode* ahead=NULL;
        
        while(pos<len/2){
            temp=temp->next;
            pos++;
        }
        prev=NULL;
        temp=temp->next;
       
         while(temp!=NULL){
             ahead=temp->next;
             temp->next = prev;
             prev = temp;
             temp = ahead;
         }   
           
        
        ListNode* front= head;
        ListNode* back = prev;
        cout << front->val << ' ' << prev->val;
        int count=1;
       while(count<=len/2){
           if(front==NULL || back==NULL)
               break;
            if(front->val!=back->val)
                return false;
            front=front->next;
            back=back->next; 
            count+=1;
        }  
        return true;    
    }
};