#include <bits/stdc++.h>

using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
} *head;

void creater()
{
    head = new ListNode;
    ListNode *ptr = head;
    int n;
    cin >> n;
    while (n)
    {
        cin >> ptr->val;
        if (--n)
        {
            ptr->next = new ListNode;
            ptr = ptr->next;
        }
    }
}

void printer(ListNode *ptr = head)
{
    while (ptr)
    {
        cout << ptr->val << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

void deleter()
{
    while (head)
    {
        ListNode *temp = head;
        head = head->next;
        delete temp;
    }
}

ListNode *middleNode(ListNode *head)
{
    ListNode *ptr1 = head;
    ListNode *ptr2 = head;
    // int i = 0;
    while (ptr1 && ptr1->next)
    {
        ptr1 = ptr1->next->next;
        // i++;
        // if(i%2) ptr2 = ptr2->next;
        ptr2 = ptr2->next;
    }
    return ptr2;
}

int main()
{
    creater(); // Takes number of elements to insert into the list from user, then takes those elements input from user too

    ListNode *ptr = middleNode(head);

    printer(ptr);
    deleter();
    return 0;
}