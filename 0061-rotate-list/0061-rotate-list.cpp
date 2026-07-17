class Solution {
public:
    ListNode* findNthNode(ListNode* temp, int k) {
        int cnt = 1;
        while(temp != NULL) {
            if(cnt == k) return temp;
            cnt++;
            temp = temp->next;
        }
        return nullptr;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL || k == 0) return head;

        int len = 1;
        ListNode* tail = head;

        while(tail->next != NULL) {
            tail = tail->next;
            len++;
        }

        k = k % len;

        if(k == 0) return head;

        tail->next = head;

        ListNode* newLastNode = findNthNode(head, len - k);

        head = newLastNode->next;
        newLastNode->next = NULL;

        return head;
    }
};