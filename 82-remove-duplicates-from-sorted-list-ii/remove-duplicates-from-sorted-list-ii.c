/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->val = -1;
    dummy->next = head;

    struct ListNode* prev = dummy;
    while(head!=NULL){
        if(head->next!=NULL && head->val == head->next->val){
            int dubval = head->val;
            while(head!=NULL && head->val == dubval){
                struct ListNode* temp = head;
                head = head->next;
                free(temp);
            }
            prev->next = head;
        }
        else{
            prev = head;
            head = head->next;
        }

    }
    struct ListNode* result = dummy->next;
    free(dummy);
    return result;
}