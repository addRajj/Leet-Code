//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
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



// } Driver Code Ends
/* Following is the Linked list node structure */

/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

/*class Solution{ 
public:
    Node* reverse(Node* head)
    {
        Node* curr=head;
        Node* prev=NULL;
        Node* nextptr;
        while(curr!=NULL)
        {
            nextptr=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextptr;
        }
        return prev;
    }
    int length(Node* head)
    {
        Node* temp=head;
        int count=0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        return count;
    }
    void reorderList(Node* &head) {
        // Your code here
        
        // reverse bhi krege
        Node* head2=reverse(head);
        Node* temp=head;
        Node* temp2=head2;
        int l1=length(head);
       
        int c=0;
        Node* t=temp2;
        while(l1!=1)
        {
            
            if(c==0)
            {
                Node* tt=temp->next;
                
                temp->next=t;
            
                temp=temp->next;
                t=tt;
                //t=temp;
                c=1;
            }
            else
            {
                Node* tt=temp2->next;
                temp->next=t;
                temp2=temp2->next;
                t=tt;
                c=0;
            }
            l1--;
        }
        temp->next=NULL;
        //return head;
        
    }
};*/

/* Following is the Linked list node structure */

/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution{ 
public:
    void reorderList(Node* head) {
        // Your code here
        Node* fast = head->next;
        Node* slow = head;
        while(fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
        }
        Node* head1 = head;
        Node* head2 = slow->next;
        slow->next = NULL;
        head2 = reverse(head2);
        Node* newH = new Node(0);
        while(head1 || head2){
            if(head1){
                newH->next = head1;
                head1 = head1->next;
                newH = newH->next;
            }
            if(head2){
                newH->next = head2;
                head2 = head2->next;
                newH = newH->next;
            }
        }
        head = newH->next;
    }
    
    Node* reverse(Node* head){
        Node* current = head;
        Node* prev = NULL, *next = NULL;
        while (current != NULL) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        return prev;
    }
};


//{ Driver Code Starts.



/* Function to create a new Node with given data */
struct Node* newNode(int data) {
    struct Node* new_Node = new Node(data);
    new_Node->data = data;
    new_Node->next = NULL;
    return new_Node;
}

void printList(struct Node* Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {

        temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void) {
    int t, n, m, i, x;

    cin >> t;
    while (t--) {
        struct Node* temp, *head;
        cin >> n;
        cin >> x;
        head = new Node(x);
        temp = head;
        for (i = 0; i < n - 1; i++) {
            cin >> x;
            temp->next = new Node(x);
            temp = temp->next;
        }
        
        Solution ob;
        
        ob.reorderList(head);
        printList(head);
        freeList(head);
    }
    return 0;
}

// } Driver Code Ends