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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
     ListNode* p1=list1;
    ListNode* p2=list2;
    ListNode* n_head=new ListNode(0);
    ListNode* last=n_head;
    while (p1!= nullptr && p2!= nullptr){
        if (p1->val < p2->val){
            last->next=p1;
            p1=p1->next;
        }
        else{
            last->next=p2;
            p2=p2->next;
        }
        last=last->next;
    }
    while (p1 != nullptr){
        last->next=p1;
        last=last->next;
        p1=p1->next;
    }
    while (p2 != nullptr){
        last->next=p2;
        last=last->next;
        p2=p2->next;
    }
    last->next= nullptr;
    return n_head->next;
}
};