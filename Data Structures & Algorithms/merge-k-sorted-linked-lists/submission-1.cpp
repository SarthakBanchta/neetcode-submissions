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
    ListNode* merge(ListNode* l1, ListNode* l2){
        ListNode dummy(0);
        ListNode* r = &dummy;

        while(l1 && l2){
            if(l1->val <= l2->val){
                r->next = l1;
                l1 = l1->next;
            }else{
                r->next = l2;
                l2 = l2->next;
            }
            r = r->next; 
        }

        r->next = l1? l1 : l2;
        return dummy.next;

    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int interval = 1;
        if(lists.empty()) return nullptr;

        int n = lists.size();
        while(interval < n){
            for(int i = 0; i +interval < n; i += interval*2){
                lists[i] = merge(lists[i],lists[i+interval]);
            }
            interval *= 2;
        }
        return lists[0];
        
    }
};
