/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    if(head == NULL || head->next == NULL) return head;
    struct ListNode* temp = head;
    int len = 0;
    while(temp->next!=NULL){
        temp = temp->next;
        len++;
    }
    len++;
    temp->next = head; //made the list circular
    k = k%len;
    int newLen = len - k;
    struct ListNode* newTail = temp;
    for(int i = 0; i < newLen; i++){
        newTail = newTail->next;
    }
    head = newTail->next;
    newTail->next = NULL;
    return head;
}