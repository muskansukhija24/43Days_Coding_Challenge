class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        stack<ListNode*> stk1;
        stack<ListNode*> stk2;
        ListNode *p=headA;
        while(p!=NULL){
            stk1.push(p);
            p=p->next;
        }
        p = headB;
        while(p!=NULL){
            stk2.push(p);
            p=p->next;
        }

        ListNode *intersectionNode = NULL;

        // Compare elements from the top of both stacks
        while (!stk1.empty() && !stk2.empty()) {
            if (stk1.top() == stk2.top()) {
                // Keep track of the last matching node
                intersectionNode = stk1.top(); 
                stk1.pop();
                stk2.pop();
            } else {
                // As soon as they mismatch, the intersection chain ends
                break; 
            }
        }

        return intersectionNode; 
    }
};
