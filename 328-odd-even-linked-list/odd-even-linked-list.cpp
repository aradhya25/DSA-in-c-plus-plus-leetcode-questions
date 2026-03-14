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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL) return head;

        ListNode* temp = head;
        int len = 0;

        while(temp != NULL){
            len++;
            temp = temp->next;
        }

        vector<int> arr;

        temp = head;
        while(temp != NULL){
            arr.push_back(temp->val);
            if(temp->next == NULL) break;
            temp = temp->next->next;
        }

        temp = head->next;
        while(temp != NULL){
            arr.push_back(temp->val);
            if(temp->next == NULL) break;
            temp = temp->next->next;
        }

        temp = head;
        int i = 0;
        while(temp != NULL){
            temp->val = arr[i];
            temp = temp->next;
            i++;
        }

        return head;
    }
};