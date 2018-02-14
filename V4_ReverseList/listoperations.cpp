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
    if (head->next == NULL)
    {
        return head;
    }

    else
    {
        ListNode* t = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return t;
    }
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
