//check if the Linked list is circular or not

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
    Node (int x){
        data=x;
        next=NULL;
    }
};

bool circular(Node* head){
    if(head==NULL)
    return 1;
    Node* temp=head;
    while(temp!=NULL)
    {
        if(temp->next==head)
        return 1;
        temp=temp->next;
    }
    return 0;
}