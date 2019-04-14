#include<iostream>
using namespace std;
struct node{
  int data;
  node *next;
};
node *top=NULL;

void pushStack(int databaru){
  node *baru=new node;
  baru->data=databaru;
  baru->next=top;
  top=baru;
}
