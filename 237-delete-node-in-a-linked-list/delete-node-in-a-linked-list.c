/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    // struct ListNode* temp = node->next->next;
    // node->val = node->next->val;
    // node->next = temp;
    //The above code is used if freeing the memory is not required.
    struct ListNode* temp = node->next;
    node->val = temp->val;
    node->next = temp->next;
    free(temp);
}