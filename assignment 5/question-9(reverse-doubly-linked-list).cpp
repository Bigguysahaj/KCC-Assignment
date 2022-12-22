DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {
    DoublyLinkedListNode* temp = llist;
    DoublyLinkedListNode* last = NULL;

    while(temp!=NULL){
        // proper swap of temp(head) and last(NULL or last)
        last = temp->prev;
        temp->prev = temp->next;
        temp->next = last;
        temp = temp->prev;
    }
    if (last !=NULL){
        llist = last->prev;
    }
    return llist;
}
