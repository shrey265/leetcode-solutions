
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* listA = headA;
        ListNode* listB = headB;
        int a=0,b=0;
        while(listA!=NULL){
            a++;
            listA=listA->next;
        }
        while(listB!=NULL){
            b++;
            listB=listB->next;
        }  
        listA = headA;
        listB = headB;
       if(b>a){
           for(int i=0;i<b-a;i++)
               listB=listB->next;
       }
        else{
           for(int i=0;i<a-b;i++)
               listA=listA->next;
       }
        while(listA!=listB){
            listA=listA->next;
            listB=listB->next;
        }
        return listA;
    }
    
};