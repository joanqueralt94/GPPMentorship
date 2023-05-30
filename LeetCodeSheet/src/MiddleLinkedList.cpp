#include "MiddleLinkedList.h"

ListNode* MiddleLinkedList::middleNode(ListNode* head)
{
    ListNode* copy = head;
    int counter = 0;
    while (copy != nullptr)
    {
        copy = copy->next;
        ++counter;
    }

    counter *= 0.5f;

    int pos = 0;
    while (head != nullptr)
    {
        if (pos == counter)
        {
            return head;
        }
        head = head->next;
        ++pos;
    }

    return nullptr;
}
