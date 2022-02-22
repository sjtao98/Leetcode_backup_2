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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* p1 = head;
        ListNode* p2 = head;
        int k = 0;
        while(k <= n){
            if(p1 != NULL)
                p1 = p1->next;
            else
                return head->next;
            k++;
        }
        while(p1!=NULL){
            p1 = p1->next;
            p2 = p2->next;
        }
        p2->next = p2->next->next;
        return head;
    }
};