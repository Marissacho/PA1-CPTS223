#include <fstream>
#include <iostream>
#include "linkedlist.h"
using namespace std;


template<typename t, typename d>
Linked_List<t,d>::Linked_List(){
head=nullptr;
node=0;
}

template<typename t, typename d>
Linked_List<t,d>::~Linked_List(){
while (head){
removeNode();
}
}

template<typename t, typename d>
void Linked_List<t,d>:: insertAtFront(const t& command, const d& description){
Node<t,d>*newNode= new Node<t,d>;
newNode->command=command;
newNode->description=description;
newNode->next=head;
head=newNode;
node++;
}

template<typename t, typename d>
int Linked_List<t,d>:: removeNode(){
if(head==nullptr){
std::cout<<"list is empty"<<std::endl;
return -1;
}
Node<t,d>*temp=head;
head=head->next;
delete temp;
node--;
return 0;
}

template<typename t, typename d>
void Linked_List<t,d>:: outfile(const string& file_c){
std::ofstream file(file_c);
if(!file.is_open()){
cout<<"file not opened"<<endl;
return;
}
Node<t,d>*current=head;
while(current !=nullptr){
file<<current->command<<","<<current->description<<std::endl;
current=current->next;
}
file.close();
}
(only part of my code was able to upload havign computer difficulties but i did not make this
  code in cmake so I will come to office hours to show my program)
