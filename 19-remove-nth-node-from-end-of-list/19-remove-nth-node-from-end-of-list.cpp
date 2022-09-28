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
int length(ListNode* head)
{
    int count=0;
    ListNode* temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int l1=length(head);
        int g=l1-n;
        int count=0;
        ListNode* temp=head;
        if(g==0)
        {
            return head->next;    
        }
       
        else
        {
            while(count<(g-1) && temp!=NULL)
            {
                count++;
                temp=temp->next;
            }
            ListNode* todelte=temp->next;
            temp->next=temp->next->next;
            delete todelte;
        }
        
        return head;
        
        
    }
};