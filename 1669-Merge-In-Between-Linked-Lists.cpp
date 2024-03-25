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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
    ListNode* it1=list1;
    for (int i = 1; i < a; ++i) {
        it1=it1->next;
    }
    ListNode* last=list1;
    for (int i = 0; i <= b; ++i) {
        last=last->next;
    }
    ListNode* it2=list2;
    while (it2->next!= nullptr){
        it2=it2->next;
    }
    it2->next=last;
    it1->next=list2;
    return list1;
}
};