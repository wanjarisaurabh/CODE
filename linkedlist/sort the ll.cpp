//tortoise nad hair algoritham 

ListNode * findMiddle(ListNode * head){
    ListNode* slow = head;//do dry and run on position it does not match 
    ListNode * fast = head -> next;//for even condition 
    while(fast != null && fast -> next != null){
        slow = slow -> next;
        fast = fast -> next -> next;
        }
    return slow;
    }

    ListNode * merger(ListNode * list1 , ListNode * list2){

        ListNode* demmyListNode = new ListNode(-1);
        ListNode* temp = dummyListNode;
        while(list1 != null && list2 != null){
            if(list1 -> data < list2 -> data){
                temp -> next = list1; 
                temp = list1;
                list1 = list1 -> next;
            }
            else {
                temp -> next = list2;
                temp = list2;
                list2 = list2 -> next;
            }


            }
            if(list1 ) temp -> next = list1;
            else temp -> next = list2;
            return dummyListNode -> next;
    }

ListNode * sortll(ListNode * head){
    if(head == nullptr || head -> next == nullptr){
        return head;
    }
    ListNode * middle = findMiddle(head);
    ListNode *  right = middle -> next;
   middle -> next = nullptr;
   ListNode * left = head;
   left = sortll(left);
   right = sortll(right);
   return mergeTwolist (left, right);

   }