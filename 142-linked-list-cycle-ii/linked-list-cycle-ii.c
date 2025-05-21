/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 typedef struct ListNode node;
struct ListNode *detectCycle(struct ListNode *head) {
    if(head == NULL || head->next == NULL) return NULL;

    node* slow = head;
    node* fast = head;

    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            // node* temp = head;
            // while(slow!=temp){
            //     slow = slow->next;
            //     temp = temp->next;
            // }
            // return temp;
            fast = head;
            while(slow!=fast){
                slow = slow->next;
                fast = fast->next;
            }
            return fast;
        }
    }
    return NULL;
}