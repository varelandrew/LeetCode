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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode ans(0);
        ListNode *p = &ans;
        int num = 0;
        
        while(l1 || l2 || num)
        {
            if(l1)
            {
                num += l1->val;
                l1 = l1->next;
            }
            if(l2)
            {
                num += l2->val;
                l2 = l2->next;
            }
            
            p->next = new ListNode(num %10);
            num /= 10;
            p = p->next;
        }
        return ans.next;
    }
};