#ifndef
#include <fstream>
#include <iostream>

using namespace std;

template<typename t, typename d>

class Node{
private:
t command;
d description;
Node*next;
};

template<typename t, typename d>
class Linked_List{
private:
Node<t,d>*head;
size_1 node;

public:
void playGame();
void removeCommand(t&command);
void addCommand(const t&command, d& description);
bool commandfinder(const t&s_Command);
void outfile(const string& file);
int removeNode();
void insertAtFront(const t& command, const d& description);
~Linked_List();
Linked_List();
};
#endif
