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
    vector<int> ListToVector(ListNode *node)
    {
        vector<int> v;
        while(node!=NULL)
        {
            int a = node->val;
            v.push_back(a);
            node = node->next;
        }
        return v;
    }
    
    bool isPalindrome(ListNode* head) 
    {
        // vector<int> temp = ListToVector(head);
        // int n = temp.size();
        // for(int i=0;i<(n/2);i++)
        // {
        //     if(temp[i] != temp[n-i-1])
        //         return false;
        // }
        // return true;
         stack<int> stack;
        ListNode* curr = head;
        while (curr) {
            stack.push(curr->val);
            curr = curr->next;
        }
        curr = head;
        while (curr && curr->val == stack.top()) {
            stack.pop();
            curr = curr->next;
        }
        return curr == nullptr;
    }
};