#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};
int main(){
    Node* n1=new Node(72);
    Node* n2=new Node(73);          
    Node* n3=new Node(74);
    n1->next=n2;
    n2->next=n3;    
    Node* temp=n1;

    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
/*
Output:
72 73 74
*/