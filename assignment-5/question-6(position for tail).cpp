
int getNode(SinglyLinkedListNode* llist, int pos) {
    SinglyLinkedListNode* temp = llist;
    
    int cnt =0;
    while(temp!=NULL){
        temp = temp->next;
        cnt++;
    }
    
    int len = cnt-pos;
    temp=llist;
    
    int i=0;
    while(temp!=NULL){
        if (len-1 == i){
            return temp->data;
        }
        temp=temp->next;
        i++;
    }
    return 0;
}
