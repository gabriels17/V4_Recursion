#ifndef LISTOPERATIONS_H
#define LISTOPERATIONS_H

#include <iostream>
#include <cstddef>
#include "listnode.h"

class ListOperations
{
    public:
        ListOperations();
        virtual ~ListOperations();

        static ListNode* reverseList(ListNode *head);

        static void printList(ostream& out, ListNode *head);
        static void deleteList(ListNode *head);

    protected:

    private:
};

#endif // LISTOPERATIONS_H
