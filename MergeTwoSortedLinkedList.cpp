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
    ListNode* sort(ListNode* list1, ListNode* list2)
    {
        ListNode* tmp1 = list1;
        ListNode* tmp2 = list2;
        if(list1==NULL) return list2;
        else if(list2==NULL) return list1;
        else if(list1==NULL && list2==NULL) return list1;
        while(list1->next!=NULL)
        {
            list1=list1->next;
        }
        list1->next=list2;
        return list1;
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL) return list2;
        else if(list2==NULL) return list1;
        else if(list1==NULL && list2==NULL) return list1;
         ListNode* result = sort(list1,list2);
         for(ListNode* i=list1; i->next!=NULL; i=i->next)
    {
        for(ListNode* j=i->next; j!=NULL; j=j->next)
        {
            if(i->val>j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
         return list1;
    }
};