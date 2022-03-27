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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode*p=head, *prev=NULL;
        while(p!=NULL)
        {
            if(p->val==val)
            {
                if(p==head)
                {
                    head=p->next;
                    p=head;
                }
                else
                {
                    prev->next=p->next;
                    p=prev->next;
                }
            }
            else
            {
                prev=p;
                if(prev!=NULL)
                    p=p->next;
            }
        }
        return head;
    }
};