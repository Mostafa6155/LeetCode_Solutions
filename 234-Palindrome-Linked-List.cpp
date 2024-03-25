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
    ListNode* it=head;
    deque<int> dq;
    while (it != nullptr){
        dq.push_back(it->val);
        it=it->next;
    }
    int i=0,j=dq.size()-1;
    while (i<=j){
        if (dq[i]!=dq[j]){
            return false;
        } else{
            i++;
            j--;
        }
    }
    return true;
}
};