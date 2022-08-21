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
    
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head;
        
        priority_queue<int, vector<int>, greater<int>> q;
        while(head){
            q.push(head->val);
            head = head->next;
        }
        
        ListNode* dummy = new ListNode();
        ListNode* p = dummy;
        while(!q.empty()){
            p->next = new ListNode(q.top());
            q.pop();
            p = p->next;
        }
        
        return dummy->next;
    }
};