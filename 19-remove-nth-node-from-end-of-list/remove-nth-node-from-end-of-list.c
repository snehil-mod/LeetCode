#include <stdlib.h>
//Definition for singly-linked list.
// struct ListNode {
//     int data;
//     struct ListNode *next;
// };
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* temp = head;
    int count = 0;
    if(n == 0 || head == NULL){
        return head;
    }
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    temp = head;
    if(count == n){
        temp = head->next;
        free(head);
        return temp;
    }
    int val = count - n;
    for(int i =1; i<val; i++){
        temp = temp->next;
    }
    struct ListNode * del = temp->next;
    temp->next = del->next;
    free(del);
    return head;
}