/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    if(head == NULL || head->next == NULL) return head;

    struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->val = -1;
    dummy->next = head;

    struct ListNode* prev = dummy;
    while(head!=NULL && head->next!=NULL){
        struct ListNode* first = head;
        struct ListNode* second = head->next;

        prev->next = second;
        first->next = second->next;
        second->next = first;

        prev = first;
        head = first->next;
    }
    head = dummy->next;
    free(dummy);
    return head;
}