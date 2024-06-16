// Code 
// Definition for a binary tree node.
/*
struct TreeNode 
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
*/
class Solution 
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        ListNode* ptr1 = headA;
        ListNode* ptr2 = headB;

        while (ptr1 != ptr2) 
        {
            if (!ptr1) 
                ptr1 = headB;
            else 
                ptr1 = ptr1->next;
            if (!ptr2) 
                ptr2 = headA;
            else 
                ptr2 = ptr2->next;
        }
        return ptr1;
    }
};
