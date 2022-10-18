DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) {
    DoublyLinkedListNode* pemt = llist;
    DoublyLinkedListNode* temp = new DoublyLinkedListNode(data);
    
    while(pemt!=NULL){
        
        if (pemt->data >=data){
            // for case front
            temp->next= pemt;
            temp->prev = NULL;
            pemt->prev = temp;
            pemt = temp;
            
            return pemt;
        }
        
        if (pemt->next == NULL){
            // for case back
            temp->next = NULL;
            temp->prev = pemt;
            pemt->next = temp; 
            return llist;
        }
        
        if (pemt->next->data >= data ){
            // for case middle
            
            temp->next= pemt->next;
            pemt->next->prev = temp;
    
            pemt->next = temp;
            
            temp->prev= pemt;
            
            return llist;   
        }
        pemt= pemt->next;
    }
    return 0;
}
