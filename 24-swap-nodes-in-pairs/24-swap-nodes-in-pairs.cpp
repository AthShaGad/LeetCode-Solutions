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
    ListNode* swapPairs(ListNode* head) {
        ListNode*p=head;
        ListNode*q=NULL;
        if(head==NULL||head->next==NULL)
            return head;
        while(p!=NULL)
        {
            q=p->next;
            if(p==head)
            {
                p->next=q->next;
                q->next=p;
                head=q;
            }
            else
            {
                ListNode*temp=head;
                while(temp->next!=p)
                    temp=temp->next;
                if(p->next==NULL)
                    return head;
                p->next=q->next;
                q->next=p;
                temp->next=q;
            }
            
            p=p->next;
        }
        return head;
    }
};