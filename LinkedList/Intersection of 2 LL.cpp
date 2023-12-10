/*Given two linked lists sorted in increasing order, create a new linked list representing the intersection of the two linked lists. The new linked list should be made with without changing the original lists.

Note: The elements of the linked list are not necessarily distinct.

Example 1:

Input:
LinkedList1 = 1->2->3->4->6
LinkedList2 = 2->4->6->8
Output: 2 4 6
Explanation: For the given two
linked list, 2, 4 and 6 are the elements
in the intersection.

Example 2:
Input:
LinkedList1 = 10->20->40->50
LinkedList2 = 15->40
Output: 40*/



/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *a=headA, *b=headB;
        while(a!=b)
        {
            if(a==NULL)a=headB;
            else a=a->next;

            if(b==NULL)b=headA;
            else b=b->next;
        }
        return b;
    }
};