/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*>my_set;
        while(head!=NULL)
        {
            if(my_set.find(head)!=my_set.end()) return head;
            my_set.insert(head);
            head=head->next;
        }
        return NULL;
    }
};