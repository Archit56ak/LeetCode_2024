/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) 
    {
        //Brute Force Method 
        // //Length of whole linked list
        // ListNode *temp = head;
        // ListNode *midNode = head;
        // int len = 0,index = 0;
        // while(temp != NULL)
        // {
        //     len++;
        //     temp=temp->next;
        // }
        // //Calculate the middle node Index
        // index = (len/2)+1;
        // for(int i=1;i<index;i++)
        // {
        //     midNode = midNode->next;
        // }
        // return midNode;
        
        
        ListNode *fast = head;
        ListNode *slow = head;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        
        return slow;
    }
};