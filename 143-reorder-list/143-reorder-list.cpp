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
    void reorderList(ListNode* head) {
        
        deque<int>q;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            q.push_back(temp->val);
            temp=temp->next;
        }
        int i=0;
        ListNode* head1=new ListNode(NULL);
        ListNode* temp1=head1;
        while(q.size()!=0)
        {
            if(i%2==0)
            {
                temp1->next=new ListNode(q.front());
                q.pop_front();
            }
            else
            {
                temp1->next=new ListNode(q.back());
                q.pop_back();
            }
            temp1=temp1->next;
            i++;
        }
        ListNode* temp2=head1->next;
        ListNode* temp3=head;
        while(temp2!=NULL)
        {
            temp3->val=temp2->val;
            temp2=temp2->next;
            temp3=temp3->next;
        }
    }
};