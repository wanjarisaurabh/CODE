//optimal
int addhelp (Node * temp){

    if(temp == nullptr ){
        return 1;
    }
    int carry = addhelp(temp -> next);
    temp -> data += carry ;
    if(temp -> data < 10  )return 0;
    
    temp -> data =0 ;
    return 1;
    
}
Node *addOne(Node *head)
{
    // Write Your Code Here.
    int carry = addhelp(head);
    if(carry == 1){
        Node * newNode = new Node (1);
        newNode -> next = head;
        head = newNode;

    }
    return head;
}
