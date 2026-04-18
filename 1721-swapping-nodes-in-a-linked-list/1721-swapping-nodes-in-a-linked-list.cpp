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
    ListNode* swapNodes(ListNode* head, int k) {
        int n=0;
        int i=0;

        
       ListNode * n1=NULL;
       ListNode * n2=NULL;
        ListNode * cur=head;
        while(cur!=NULL)
        {
            n++;
           
            cur=cur->next;

        }
        if(n<k)
        {
            return head;
        }

        cur=head;

        while(cur!=NULL)
        {
            i++;
             if(i==k)
            {
               n1=cur;
            }
            if(i==n-k+1)
            {
                n2=cur;
            }
            cur=cur->next;
        }

        int temp=n1->val;
        n1->val=n2->val;
        n2->val=temp;

        return head;
        
    }
};