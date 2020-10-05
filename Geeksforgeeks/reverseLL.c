struct Node* reverseList(struct Node *head)
{
    // code here
    // return head of reversed list
    Node* current=head;
    Node* previous = NULL;
    Node* next = NULL;
    while(current!=NULL){
        next=current->next;
        current->next=previous;
        previous = current;
        current=next;
    }
    head=previous;
    return head;
}
