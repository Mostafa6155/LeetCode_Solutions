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
    void reorderList(ListNode* head) {
    ListNode* it=head;
    ListNode* ite=head;
    vector<int> v;
    vector<int> copy;
    while (it != nullptr){
        v.push_back(it->val);
        it=it->next;
    }
    int j=v.size()-1;
    for (int i = 0; i <=j; i++,j--) {
        if (i==j){
            copy.push_back(v[i]);
        } else{
            copy.push_back(v[i]);
            copy.push_back(v[j]);
        }
    }
    for (int i = 0; i < v.size(); ++i) {
        ite->val=copy[i];
        ite=ite->next;
    }
}
};