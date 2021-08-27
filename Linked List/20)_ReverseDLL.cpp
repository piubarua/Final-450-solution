//program to reverse a doubly linked list

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};

Node* reverseDLL(Node * head)
{
    //Your code here
    while(head){
        Node* next=head->next;
        head->next=head->prev;
        head->prev=next;
        if(head->prev==NULL)
        break;
        
        head=head->prev;
    }
    return head;
}