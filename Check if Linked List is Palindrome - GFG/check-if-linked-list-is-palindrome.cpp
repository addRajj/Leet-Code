//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        if(head==NULL || head->next==NULL){
            return 1;
        }
        Node *sl = head;
        Node *ft = head->next;
        
        while(ft!=NULL){
            ft = ft->next;
            if(ft!=NULL){
                ft= ft->next;
                sl = sl->next;
            }
        }
        
        Node *cur = sl->next;
        sl->next = NULL;
        
        Node *pre = NULL;
        
        while(cur!=NULL){
            Node *nxtNode = cur->next;
            cur->next= pre;
            pre = cur;
            cur = nxtNode;
        }
        
        Node *cur1 = head;
        Node *cur2 = pre;
        
        while(cur2!=NULL){
            if(cur1->data != cur2->data){
                return 0;
            }
            else{
                cur1 = cur1->next;
                cur2 = cur2->next;
            }
        }
        return 1;
        
        
    }
};




//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends