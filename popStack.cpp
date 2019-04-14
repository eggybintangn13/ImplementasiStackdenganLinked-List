#include<iostream>
using namespace std;
struct node{
  int data;
  node* next;
};
node *top=NULL;

void popStack(){
  node *pop;
  if(top=NULL){
    return;
  }
  pop=top;
  top=top->next;
  delete pop;
}
