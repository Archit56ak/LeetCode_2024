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
        //Length of whole linked list
        ListNode *temp = head;
        ListNode *midNode = head;
        int len = 0,index = 0;
        while(temp != NULL)
        {
            len++;
            temp=temp->next;
        }
        
        index = (len/2)+1;
        for(int i=1;i<index;i++)
        {
            midNode = midNode->next;
        }
        return midNode;
    }
};