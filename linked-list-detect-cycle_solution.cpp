/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.
*/
struct Node {
        int data;
        struct Node* next;
    }
#include<iostream>
#include<map>
using namespace std;
// Complete this function
// Do not write the main method
bool has_cycle(Node* head) {
    map<Node*,int> visited;
    Node* temp=head;
    while(temp!=NULL)
    {
        if(visited[temp]==1)
        {
            return true;
        }
        else
        {
            visited[temp]=1;
        }
        temp=temp->next;
    }
    return false;
}