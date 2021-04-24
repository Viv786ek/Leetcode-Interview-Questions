class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL)return l2;
        if(l2==NULL)return l1;
        ListNode*dummy=new ListNode(20);
        ListNode*t=dummy;
        while(l1 && l2){
            if(l1->val<l2->val){
                ListNode*temp=new ListNode(l1->val);
                t->next=temp;
                t=temp;
                l1=l1->next;
            }
            else {
                ListNode*temp=new ListNode(l2->val);
                t->next=temp;
                t=temp;
                l2=l2->next;
            }
        }
        if(l1)t->next=l1;
        if(l2)t->next=l2;
        return dummy->next;
        
        
    }
};
