SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    SinglyLinkedListNode* temp = llist;
    
    int cnt=0;
    if (llist->next==NULL){
        return NULL;
    }
    while(temp != NULL){
        if(position == 0){
            return llist->next;
        }
        if (cnt == position-1){
            temp->next = temp->next->next;
        }
        temp = temp->next;
        cnt++;
    }
    

    return llist;
}
