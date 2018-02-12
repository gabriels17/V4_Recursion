#include "listoperations.h"

ListOperations::ListOperations()
{
    //ctor
}

ListOperations::~ListOperations()
{
    //dtor
}

ListNode* ListOperations::reverseList(ListNode *head) {
    if(head == NULL){
        return NULL;
    }
    reverseList(head->next);
    cout << head->data << " ";
    return head;
}

void ListOperations::printList(ostream& out, ListNode *head) {
    while(head != NULL) {
        out << head->data << " ";
        head = head->next;
    }
    out << endl;
}

void ListOperations::deleteList(ListNode *head) {
    if(head != NULL) {
        deleteList(head->next);
        delete head;
    }
}
