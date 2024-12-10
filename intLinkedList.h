#ifndef INT_LINKED_LIST_H
#define INT_LINKED_LIST_H

#include "unorderedLinkedList.h"

class intLinkedList : public unorderedLinkedList<int>
{
public:
    void splitEvensOddsList(intLinkedList &evensList, intLinkedList &oddsList);
};

void intLinkedList::splitEvensOddsList(intLinkedList &evensList, intLinkedList &oddsList)
{
    nodeType<int> *current = this->first;

    // Reset the original list
    this->first = nullptr;
    this->last = nullptr;
    this->count = 0;

    while (current != nullptr)
    {
        nodeType<int> *nextNode = current->link; // Save the next node
        current->link = nullptr; // Disconnect the current node

        // Add the node to the appropriate list
        if (current->info % 2 == 0)
        {
            if (evensList.first == nullptr)
            {
                evensList.first = evensList.last = current;
            }
            else
            {
                evensList.last->link = current;
                evensList.last = current;
            }
            evensList.count++;
        }
        else
        {
            if (oddsList.first == nullptr)
            {
                oddsList.first = oddsList.last = current;
            }
            else
            {
                oddsList.last->link = current;
                oddsList.last = current;
            }
            oddsList.count++;
        }

        current = nextNode; // Move to the next node
    }
}

#endif
