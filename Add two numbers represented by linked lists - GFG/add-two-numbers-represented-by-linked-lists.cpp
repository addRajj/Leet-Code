//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/


class Solution
{   private:
    struct Node* reverse(struct Node* head){
        if(head==NULL || head->next==NULL){
            return head; 
        }
        Node* prev=NULL;
        Node* current=head;
        Node* forward=NULL;
        while(current!=NULL){
            forward=current->next;
            current->next=prev;
            prev=current;
            current=forward;
        }
        return prev;
    }
    void insertattail(struct Node* &head,struct Node* &tail,int data){
     struct Node* temp=new Node(data);
     if(head==NULL){
         head=temp;
         tail=temp;
         return;
     }
     else {
         tail->next=temp;
         tail=temp;
         
     }
     
     
        
    }
    ////////////////////////////////////////////////////////////
    struct Node* add(struct Node* first,struct Node* second){
        struct Node* anshead=NULL;
        struct Node* anstail=NULL;
        
        int carry=0;
    while(first!=NULL && second!=NULL){
        int sum=carry+ first->data + second->data;
        int digit=sum%10;
      
        insertattail(anshead,anstail,digit);
        carry=sum/10;
        first=first->next;
        second=second->next;
    }
    while(first!=NULL){
        int sum=carry+first->data;
          int digit=sum%10;
      
        insertattail(anshead,anstail,digit);
         carry=sum/10;
         first=first->next;
    }
     while(second!=NULL){
        int sum=carry+second->data;
          int digit=sum%10;
      
        insertattail(anshead,anstail,digit);
         carry=sum/10;
         second=second->next;
    }
    while(carry!=0){
      int sum=carry;
          int digit=sum%10;
      
        insertattail(anshead,anstail,digit);
         carry=sum/10;
         
    }
    return anshead;
    }
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {  // step1:reverse both the linked list
        struct Node* newNode1=reverse(first);
        struct Node* newNode2=reverse(second);
        
        //step2:add element of the both linked list
        struct Node* addhead=add(newNode1,newNode2);
        
        // step3: reverse the answer linked list
        struct Node* final=reverse(addhead);
        return final;
        
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends