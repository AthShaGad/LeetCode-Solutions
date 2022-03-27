/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){

   int len=0;
    struct ListNode*p=head;
    while(p!=NULL)
    {
        len++;
        p=p->next;
    }
    p=head;
    int x=len-n;
    if(x==0)
    {
        head=head->next;
        return head;
    }
    while(x!=1) 
    {
        p=p->next;
        x--;
    }
    p->next=p->next->next;
    return head;
}