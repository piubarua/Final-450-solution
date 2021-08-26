//remove duplicates from a sorted linked list

#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

Node *removeDuplicates(Node *head)
{
 // your code goes here
 Node* curr=head->next;
 Node* prev=head;
 while(curr!=NULL)
 {
     if(prev->data==curr->data)
     {
         prev->next=prev->next->next;
         curr=prev->next;
     }
     else{
         prev=curr;
         curr=curr->next;
     }
 }
 return head;
}