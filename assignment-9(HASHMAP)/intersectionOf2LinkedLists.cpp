/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp = headA;
        ListNode *pemt = headB;
        ListNode *fast = temp;
        ListNode *slow = temp;
        int count=0;
        while(fast && fast->next){
            
            fast = fast->next->next;
            slow = slow->next;
            count++;
        }
        int lenA = count*2;

        fast = pemt;
        slow = pemt;
        count =0;

        while(fast && fast->next){
            
            fast = fast->next->next;
            slow = slow->next;
            count++;
        }

        int lenB = count*2;

        cout<<lenA<<" "<<lenB<<endl;
        return temp;
    }

};
