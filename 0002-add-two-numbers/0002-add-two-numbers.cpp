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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*ans=new ListNode();
        ListNode* trav=ans;
        int carry=0;

        while(l1!=nullptr&&l2!=nullptr)
        {
            ListNode*newnode=new ListNode();
            trav->next=newnode;
            trav=newnode;
            trav->val=l1->val+l2->val+carry;
            if(trav->val>9)
            {
                carry=trav->val/10;
                trav->val=trav->val%10;
            }
            else
            {
                carry=0;
            }
           
            
            l1=l1->next;
            l2=l2->next;


        }
        while(l1!=nullptr)
        {
            ListNode*newnode=new ListNode();
            trav->next=newnode;
            trav=newnode;
          trav->val=l1->val+carry;
            if(trav->val>9)
            {
                carry=trav->val/10;
                trav->val=trav->val%10;
            }
            else
            {
                carry=0;
            }
            l1=l1->next;
            
        }
        while(l2!=nullptr)
        {
            ListNode*newnode=new ListNode();
            trav->next=newnode;
            trav=newnode;
          trav->val=l2->val+carry;
            if(trav->val>9)
            {
                carry=trav->val/10;
                trav->val=trav->val%10;
            }
            else
            {
                carry=0;
            }
            l2=l2->next;
        }
        if(carry!=0)
        {
            ListNode*newnode=new ListNode();
            trav->next=newnode;
            trav=newnode;
            trav->val=carry;

        }
        
        return ans->next;

    }
};