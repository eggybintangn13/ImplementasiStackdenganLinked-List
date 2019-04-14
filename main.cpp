//Eggy Bintang Negara 1817051013//

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

void popStack(){
node *pop;
  if(top==NULL){
    return;
  }
  pop=top;
  top=top->next;
  delete pop;
}

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
    cout<<"Stack masih kosong"<<endl;
  }
}

void menu(){
  char backtomenu;
  int pilih,x,nilai;
  do{
    cout<<endl<<"=================================="<<endl;
 	  cout<<"==========|Menu Pilihan|=========="<<endl;
 	  cout<<"=================================="<<endl;
	  cout<<"|        1. Push Stack           |"<<endl;
	  cout<<"|        2. Pop Stack            |"<<endl;
	  cout<<"|        3. Cetak Stack          |"<<endl;
	  cout<<"=================================="<<endl;
	  cout<<"Masukkan Pilihan : ";
	  cin>>pilih;
    switch(pilih){
      case 1:
        cout<<"Masukkan banyaknya stack yang ingin di push : ";
        cin>>x;
        for(int i=0;i<x;i++){
          cout<<"Masukkan nilai ke "<<i+1<<" = ";
          cin>>nilai;
          pushStack(nilai);
        }
        break;
      case 2:
        cout<<"Masukkan banyaknya stack yang ingin di pop : ";
        cin>>x;
        for(int i=0;i<x;i++){
          popStack();
        }
        break;
      case 3:
        cetakStack();
        break;
      default:
        cout<<"Pilihan tidak tersedia"<<endl;
        break;
    }
    cout<<endl<<"=================================="<<endl;
    cout<<"Kembali ke Menu? o/O"<<endl;
    cin>>backtomenu;
  }
  while(backtomenu=='o'||'O');
}

int main(){
  menu();
  return 0;
}
