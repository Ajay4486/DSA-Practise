/*Given a linked list consisting of L nodes and given a number N. The task is to find the Nth node from the end of the linked list.

Example 1:
Input:
N = 2
LinkedList: 1->2->3->4->5->6->7->8->9
Output: 8
Explanation: In the first example, there
are 9 nodes in linked list and we need
to find 2nd node from end. 2nd node
from end is 8.


Example 2:
Input:
N = 5
LinkedList: 10->5->100->5
Output: -1
Explanation: In the second example, there
are 4 nodes in the linked list and we
need to find 5th from the end. Since 'n'
is more than the number of nodes in the
linked list, the output is -1.
*/

//Function to find the data of nth node from the end of a linked list.
class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
         // Check if n is greater than the length of the linked list
        int length = 0;
        Node *temp = head;
        while (temp != NULL) {
            length++;
            temp = temp->next;
       }

    if (n > length) {
        // Handle the case where n is greater than the length
        return -1; 
    }
    Node *fast = head;
    Node *slow = head;
                   
    for(int i=0;i<n;i++)
    {
        fast = fast->next;
    }
                   
    while(fast!=NULL){
       fast = fast->next;
       slow = slow->next;
   }
                   
    return slow->data;
    }
};
