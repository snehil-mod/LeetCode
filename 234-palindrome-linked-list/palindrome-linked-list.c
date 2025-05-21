/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head){
    struct ListNode* prev = NULL;
    struct ListNode* curr = head;
    while(curr!=NULL){
        struct ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool isPalindrome(struct ListNode* head) {
    struct ListNode* temp = head;
    int count = 0;
    while(temp!=NULL){
        temp = temp->next;
        count++;
    }
    int steps = count/2;
    struct ListNode* midptr = head;
    for(int i=0; i<steps; i++){
        midptr = midptr->next;
    }
    if(count%2 != 0){
        midptr = midptr->next;
    }
    temp = head;
    struct ListNode* secondHalf = reverseList(midptr);
    for(int i = 0; i<steps; i++){
        if(temp->val != secondHalf->val) return false;
        temp = temp->next;
        secondHalf = secondHalf->next;
    }
    return true;
}