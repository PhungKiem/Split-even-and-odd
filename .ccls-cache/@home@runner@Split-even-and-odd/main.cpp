#include "intLinkedList.h"
#include <iostream>

using namespace std;

int main()
{
    intLinkedList list;
    intLinkedList evensList;
    intLinkedList oddsList;

    cout << "Enter integers ending with -999:" << endl;
    int value;
    while (cin >> value && value != -999)
    {
        list.insertLast(value);
    }

    // Display the original list
    cout << "list: ";
    for (auto it = list.begin(); it != list.end(); ++it)
        cout << *it << " ";
    cout << endl;

    // Split the list into evens and odds
    list.splitEvensOddsList(evensList, oddsList);

    // Display even numbers
    cout << "evensList: ";
    for (auto it = evensList.begin(); it != evensList.end(); ++it)
        cout << *it << " ";
    cout << endl;

    // Display odd numbers
    cout << "oddsList: ";
    for (auto it = oddsList.begin(); it != oddsList.end(); ++it)
        cout << *it << " ";
    cout << endl;

    return 0;
}