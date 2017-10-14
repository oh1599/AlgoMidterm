#include <stdio.h>
class Tree
{
public:
  node *root;
}
class Node
{
  char data;
  node *left;
  node *right;
  Node(char ch)
  {
    data = ch;
  }
}
int main(void)
{
  Tree *tree = new Tree();
  Node *node1 = new Node('A');
  Node *node2 = new Node('B');
  Node *node3 = new Node('C');
  Node *node4 = new Node('D');
  Node *node5 = new Node('E');
  Node *node6 = new Node('F');
  Node *node7 = new Node('G');
}
