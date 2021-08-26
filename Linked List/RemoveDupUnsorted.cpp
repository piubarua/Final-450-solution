//remove duplicates from an unsorted linked list

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

class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     unordered_map<int,int>map;
     Node* curr=head;
     Node* prev=NULL;
     
     while(curr!=NULL){
         if(map.count(curr->data)!=0)
         {
             prev->next=curr->next;
             Node* toDelete=curr;
             curr=prev->next;
             delete toDelete;
         }
         else{
             map[curr->data]=1;
             prev=curr;
             curr=curr->next;
         }
     }
     return head;
    }
};
