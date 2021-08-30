//Program to check whether a singly linked list is palindrome or not

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

Node* reverse(Node* head){
    Node* curr=head;
    Node* prev=NULL;
    Node* next=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
    return head;
}

bool isPalindrome(Node* head){
    Node* fast=head;
    Node* slow=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    fast=head;
    slow=reverse(slow);
    while(slow!=NULL){
        if(fast->data!=slow->data)
        return 0;
        slow=slow->next;
        fast=fast->next;
    }
    return 1;
}