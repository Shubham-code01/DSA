#include <iostream>
using namespace std;

class node
{
    public:

  int data;
  node *next;
  //constructor
  node(int value){
    data=value;
    next=NULL;
  }
  

};
int main(){
  // dyanmic memory allocation
  // pointer banao
  node *head; // head bss name ha pointer ka jo static memory ha stack me
  head =new node(4); // now node will create in heap and adress store in head pointer.
  

  cout<<head->data;
}