class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* list;
        ListNode* result;
        if(list1==NULL && list2==NULL)
            return NULL;
        else if (list1!=NULL && list2==NULL)
            return list1;
        else if (list1==NULL && list2!=NULL)
            return list2;
            
        if(list1->val < list2->val){
            list = list1;
            list1=list1->next;
        }
        else{
            list = list2;
            list2=list2->next;
        }
        result = list;
        while(list1!=NULL || list2!=NULL){
            if(list1==NULL){
                list->next=list2;
                list2=list2->next;
            }
            else if(list2==NULL){
                list->next=list1;
                list1=list1->next;
            }
            else{
                if(list1->val < list2->val){
                    list->next = list1;
                    list1= list1->next;
                }
                else{
                    list->next = list2;
                    list2=list2->next;
                }
            }
            list = list->next;
        }
        return result;
    }
};S