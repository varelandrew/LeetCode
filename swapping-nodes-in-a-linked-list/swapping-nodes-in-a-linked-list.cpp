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
    ListNode* swapNodes(ListNode* head, int k) 
    {
        ListNode* value1 = head;
        ListNode* value2 = head;
        ListNode* firstK = NULL;
        
        k--;
        while(k > 0)
        {
            value1 = value1->next;
            k--;
        }
        
        firstK = value1;
        value1 = value1->next;
        
        while(value1 != NULL)
        {
            value1 = value1->next;
            value2 = value2->next;
        }
        swap(value2->val, firstK->val);
        return head;
    }
};