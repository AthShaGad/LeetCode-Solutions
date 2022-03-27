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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*p=list1;
        ListNode*q=list2;
        ListNode*list3=NULL;
        ListNode*r=list3;
        while(p!=NULL && q!=NULL)
        {
            if(p->val<q->val)
            {
                ListNode*temp=(ListNode*)malloc(sizeof(ListNode));
                temp->val=p->val;
                temp->next=NULL;
                if(list3==NULL)
                {
                    list3=temp;
                    r=list3;
                }
                else
                {
                    r->next=temp;
                    r=r->next;
                }
                p=p->next;
            }
            else
            {
                ListNode*temp=(ListNode*)malloc(sizeof(ListNode));
                temp->val=q->val;
                temp->next=NULL;
                if(list3==NULL)
                {
                    list3=temp;
                    r=list3;
                }
                else
                {
                    r->next=temp;
                    r=r->next;
                }
                q=q->next;
            }
        }
        if(p==NULL)
        {
            while(q!=NULL)
            {
               ListNode*temp=(ListNode*)malloc(sizeof(ListNode));
                temp->val=q->val;
                temp->next=NULL;
               if(list3==NULL)
                {
                    list3=temp;
                    r=list3;
                }
                else
                {
                    r->next=temp;
                    r=r->next;
                }
                q=q->next; 
            }
        }
        else if(q==NULL)
        {
            while(p!=NULL)
            {
            ListNode*temp=(ListNode*)malloc(sizeof(ListNode));
                temp->val=p->val;
                temp->next=NULL;
                if(list3==NULL)
                {
                    list3=temp;
                    r=list3;
                }
                else
                {
                    r->next=temp;
                    r=r->next;
                }
                p=p->next;
            }
        }
        return list3;
    }
};