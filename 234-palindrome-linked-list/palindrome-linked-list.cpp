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
    bool isPalindrome(ListNode* head) {
        if(head==NULL){
            return false;
        }
        if(head->next==NULL){
            return true;
        }
        ListNode*temp=head;
        int len=0;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        temp=head;
        int arr[len];
        for(int i=0;i<len;i++){
            arr[i]=temp->val;
            temp=temp->next;
        }
        temp=head;
        bool flag=false;
        for(int i=len-1;i>=0;i--){
            if(arr[i]==temp->val){
                flag=true;
            }else{
                flag=false;
                break;
            }
            temp=temp->next;
        }
        return flag;
    }
};