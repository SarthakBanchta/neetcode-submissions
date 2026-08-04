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
        if(head == nullptr) return head;
        
        ListNode* temp = head;
        int size = 0;
        while(temp != nullptr){
            size++;
            temp = temp->next;
        }
        ListNode dummy(0,head);
        ListNode* curr = &dummy;
        int k = size - n;
        for(int i = 0; i < k;i++){
            curr = curr->next;
        }
        ListNode* toDelete = curr->next;
        curr->next = curr->next->next;
        delete toDelete;

        return dummy.next;
    }
};
