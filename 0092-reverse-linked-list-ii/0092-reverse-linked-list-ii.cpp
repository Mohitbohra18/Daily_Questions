class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head;

        stack<int> st;
        ListNode* temp = head;
        int pos = 1;

        // Step 1: Push values from left to right
        while (temp != NULL) {
            if (pos >= left && pos <= right) {
                st.push(temp->val);
            }
            temp = temp->next;
            pos++;
        }

        // Step 2: Replace values from left to right
        temp = head;
        pos = 1;

        while (temp != NULL) {
            if (pos >= left && pos <= right) {
                temp->val = st.top();
                st.pop();
            }
            temp = temp->next;
            pos++;
        }

        return head;
    }
};