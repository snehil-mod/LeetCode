/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* temp1, struct ListNode* temp2) {
    if (temp1 == NULL) return temp2;
    if (temp2 == NULL) return temp1;
    
    struct ListNode* head = NULL;
    struct ListNode* tail = NULL;
    if(temp1->val < temp2->val){
        head = tail = temp1;
        temp1 = temp1->next;
    }
    else{
        head = tail = temp2;
        temp2 = temp2->next;
    }
    while(temp1 != NULL && temp2!= NULL){
        if(temp1->val < temp2->val){
            tail->next = temp1;
            temp1 = temp1->next;
        }
        else{
            tail->next = temp2;
            temp2 = temp2->next;
        }
        tail = tail->next;
    }
    while(temp1 != NULL){
        tail->next = temp1;
        temp1=temp1->next;
        tail=tail->next;
    }
    while(temp2 != NULL){
        tail->next = temp2;
        temp2=temp2->next;
        tail=tail->next;
    }
    return head;
}