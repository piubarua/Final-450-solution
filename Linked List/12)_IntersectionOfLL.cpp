//Intersection point of two Linked list

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

int getCount(Node* head){
    int count=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}

int getIntersection(Node* head1, Node* head2, int d){
    Node* curr1=head1;
    Node* curr2=head2;
    for(int i=0;i<d;i++){
        curr1=curr1->next;
    }
    while(curr1!=NULL && curr2!=NULL){
        if(curr1==curr2)
        return curr1->data;
        curr1=curr1->next;
        curr2=curr2->next;
    }
    return 0;
}

int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    int c1=getCount(head1);
    int c2=getCount(head2);
    int d;
    if(c1>c2){
        d=c1-c2;
        return getIntersection(head1,head2,d);
    }
    else{
        d=c2-c1;
        return getIntersection(head2,head1,d);
    }
    return 0;
}


