/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){
    
    if (head == NULL) {
        return head;
    }
    
    struct ListNode* current = (struct ListNode*)calloc(1,sizeof(struct ListNode));;
    current->next = head;
    head = current;
    while (current->next != NULL) {
        if (current->next->val == val && current->next->next == NULL) {
            current->next = NULL;
        }
        
        else if (current->next->val == val) {
            current->next = current->next->next;
        }
        
        else {
            current = current->next;
        }
    }
    
    return head->next;
}
