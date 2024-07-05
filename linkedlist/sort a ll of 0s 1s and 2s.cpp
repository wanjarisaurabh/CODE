//optimal ---- coding ninja 
Node* sortList(Node *head){
    // Write your code here.
    //creating two dummt node 
    Node * zerohead = new Node(-1);
    Node * onehead = new Node(-1);
    Node *twohead = new Node(-1);

Node * zero = zerohead;
    Node * one = onehead;
    Node * two = twohead;


    Node *temp = head;
    while(temp!= nullptr){
        if(temp ->data == 0){
            zero -> next = temp ;
            zero = temp ;

        }
        else if (temp -> data == 1){
            one -> next = temp ;
            one = temp;

        }
        else {
            two -> next = temp ;
            two = temp ;

        }
        temp = temp -> next;

    }
zero -> next = (onehead->next ) ? ( onehead -> next) : (twohead -> next);//if onehead is not there 
// there than point to two 
one -> next = twohead -> next;
two -> next = nullptr;

Node * newhead = zerohead -> next;

delete zerohead;
delete onehead;
delete twohead;

return newhead;


}