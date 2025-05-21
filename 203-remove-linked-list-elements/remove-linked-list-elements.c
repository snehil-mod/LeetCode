/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    if(head == NULL) return head;

    struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->next = head;
    dummy->val = -1;
    struct ListNode* prev = dummy;
    struct ListNode* temp = head;
    while(temp!=NULL){
        if(temp->val == val){
            struct ListNode* curr = temp;
            prev->next = temp->next;
            temp = temp->next;
            free(curr);
        }
        else{
            prev = temp;
            temp = temp->next;
        }
    }
    head = dummy->next;
    free(dummy);
    return head;
}