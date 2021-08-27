//Write a function that moves the last element to the front in a given Singly Linked List. 
//For example, if the given Linked List is 1->2->3->4->5, then the function should change the list to 5->1->2->3->4.

#include <bits/stdc++.h>
using namespace std;

class Node 
{ 
    public:
    int data; 
    Node *next; 
}; 

void moveToFront(Node **head) 
{ 
    /* If linked list is empty, or 
    it contains only one node, 
    then nothing needs to be done,
    simply return */
    if (*head == NULL || (*head)->next == NULL) 
        return; 
  
    /* Initialize second last
    and last pointers */
    Node *secLast = NULL; 
    Node *last = *head; 
  
    /*After this loop secLast contains
    address of second last node and 
    last contains address of last node in Linked List */
    while (last->next != NULL) 
    { 
        secLast = last; 
        last = last->next; 
    } 
  
    /* Set the next of second last as NULL */
    secLast->next = NULL; 
  
    /* Set next of last as head node */
    last->next = *head; 
  
    /* Change the head pointer
    to point to last node now */
    *head = last; 
} 
  