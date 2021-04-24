class Solution {
public:
    ListNode* reverseLL(ListNode* head)
{
ListNode* pre=NULL;
while(head!=NULL)
{
ListNode* next=head->next;
head->next=pre;
pre=head;
head=next;
}
return pre;
}

bool isPalindrome(ListNode* head) 
{
    if(head==NULL || head->next==NULL)
        return true;
    ListNode* slow=head, *fast=head;
    while(fast && fast->next)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    if(fast)
        slow=slow->next;
    fast=head;
    slow=reverseLL(slow);
    while(slow)
    {
        if(slow->val!=fast->val)
            return false;
        slow=slow->next;
        fast=fast->next;
    }
    return true;
}
    
};
