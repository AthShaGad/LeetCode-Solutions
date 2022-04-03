/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode*pres=head;
        ListNode*prev=NULL;
        if(head==NULL)
            return head;
        while(pres!=NULL&&pres->next!=NULL)
        {
            if(pres->val==pres->next->val)
            {
                while(pres->next!=NULL&&pres->val==pres->next->val)
                    pres=pres->next;
                if(prev==NULL)
                {
                    head=pres->next;
                    pres=head;
                }
                else
                {
                    prev->next=pres->next;
                    if(prev->next!=NULL)
                        pres=prev->next;
                }
            }
            else
            {
                prev=pres;
                pres=pres->next;
            }
        }
        return head;
    }
};