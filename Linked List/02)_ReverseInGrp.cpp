//Reverse a linked list in group of given size

#include <bits/stdc++.h>
using namespace std;
struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;

class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        int counter=k;
        node* prev=NULL;
        node* curr=head;
        node* next=NULL;
        while(counter-- && curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        if(head!=NULL)
        head->next=reverse(next,k);
        return prev;
    }
};