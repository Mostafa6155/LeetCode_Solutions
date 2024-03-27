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
    ListNode* removeZeroSumSublists(ListNode* head) {
    vector<int> v;
    ListNode* i=head;
    while (i != NULL){
        v.push_back(i->val);
        i=i->next;
    }
    for (int j = 0; j < v.size(); j++) {
        long long sum=0;
        if (v[j]==0){
            v.erase(v.begin()+j,v.begin()+j+1);
            j--;
        }else {
            sum+=v[j];
            for (int k = j + 1; k < v.size(); ++k) {
                sum += v[k];
                if (sum == 0) {
                    v.erase(v.begin() + j, v.begin() + k + 1);
                    j--;
                    break;
                }
            }
        }
    }
    ListNode* it=new ListNode;
    ListNode* beg=it;
    it->val=0;
    for (int j = 0; j < v.size(); ++j) {
        ListNode* input=new ListNode;
        input->val=v[j];
        it->next=input;
        it=input;
    }
    it->next=NULL;
    return beg->next;
}
};