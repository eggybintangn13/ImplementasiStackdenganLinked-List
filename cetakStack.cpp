#include<iostream>
using namespace std;
struct node{
  int data;
  node *next;
};
node *top=NULL;

bool isEmpty(){
  return(top==NULL);
}

void cetakStack(){
  node *bantu=top;
  if(!isEmpty()){
    do{
    cout<<bantu->data<<endl;
    bantu=bantu->next;
  }
    while(bantu!=NULL);
  }
  else{
    cout<<"Stack masih Kosong"<<endl;
  }
}
