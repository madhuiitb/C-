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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* new_list= new ListNode(0, head);;
        ListNode* current = new_list;
        ListNode* temp = head;
        while(temp)
        {
            if(val==temp->val)
            {
               current->next=temp->next;
              //  if(temp->next)
              //  {
              //      current->next=temp->next;
              //  }
             //   else
              //  {
              //      current->next = NULL;
              //  }  
            }
            else
            {
                current=temp;
            }
            temp=temp->next;
        }
     return new_list->next;   
    }
};
