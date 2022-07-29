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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        if(list1 == NULL)return list2;
        if(list2 == NULL)return list1;
        
        ListNode * dummy = new ListNode(0);
        ListNode * head = dummy;
        
        while(list1 && list2)
        {
            ListNode * newNode = new ListNode;
            if(list1->val <= list2->val)
            {
                newNode->val = list1->val;
                list1 = list1->next;
            }
            else
            {
                newNode->val = list2->val;
                list2 = list2->next;
            }   
            head->next = newNode;
            head = head->next;
        }
        
        if(list1)
        {
            while(list1)
            {
                ListNode * newNode = new ListNode(list1->val);
                head->next = newNode;
                head = head->next;
                list1 = list1->next;
            }
        }
        if(list2)
        {
            while(list2)
            {
                ListNode * newNode = new ListNode(list2->val);
                head->next = newNode;
                head = head->next;
                list2 = list2->next;
            }
        }
        
        return dummy->next;
    }
};