bool has_cycle(SinglyLinkedListNode* head) {

    SinglyLinkedListNode* temp = head;
    SinglyLinkedListNode* pemt = head;
    
    while(temp && pemt && pemt->next){
        // if(temp->flag == 1){
        //     return 1;
        // }
        temp = temp->next;
        pemt = pemt->next->next;
        if (temp == pemt){
            return 1;
        }
    }
    return 0;
}
