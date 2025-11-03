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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        set<int>s(nums.begin(),nums.end());
        ListNode*curr=head;
        ListNode* prev=nullptr;
        while(curr!=nullptr){
            if(s.find(curr->val)==s.end()){
                prev=curr;
                curr=curr->next;
            }
            else{
                if(curr==head){
                    (head->next==nullptr)?head=nullptr:head=head->next;
                    curr=curr->next;
                }
                else{
                    prev->next=curr->next;
                    ListNode* temp=curr;
                    curr=curr->next;
                    temp->next=nullptr;
                    delete(temp);
                }
            }
        }
        return head;
    }
};