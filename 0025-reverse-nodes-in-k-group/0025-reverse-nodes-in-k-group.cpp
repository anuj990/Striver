class Solution {
public:
    ListNode* getKthNode(ListNode* temp, int k) {
        k -= 1;
        while (temp != NULL && k > 0) {
            k--;
            temp = temp->next;
        }
        return temp;
    }

    ListNode* reverseLL(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr != NULL) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prevLast = NULL;

        while (temp != NULL) {
            ListNode* KthNode = getKthNode(temp, k);

            if (KthNode == NULL) {
                if (prevLast) prevLast->next = temp;
                break;
            }

            ListNode* nextNode = KthNode->next;
            KthNode->next = NULL;

            reverseLL(temp);

            if (temp == head) {
                head = KthNode;
            } else {
                prevLast->next = KthNode;
            }

            prevLast = temp;
            temp = nextNode;
        }

        return head;
    }
};