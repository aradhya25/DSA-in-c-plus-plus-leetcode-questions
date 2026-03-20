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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        unordered_map<ListNode*, int> mp;

        // store nodes of list A
        ListNode* temp = headA;
        while(temp != NULL){
            mp[temp] = 1;
            temp = temp->next;
        }

        // check nodes of list B
        temp = headB;
        while(temp != NULL){
            if(mp.find(temp) != mp.end()){
                return temp;
            }
            temp = temp->next;
        }

        return NULL;
    }
};