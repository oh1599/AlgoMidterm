#include <stdio.h>
using namespace std;
class Node
{
public:
  char data;
  Node *left;
  Node *right;
  Node(char ch)
  {
    data = ch;
  }
};
class Tree
{
public:
  Node *root;
};
void inOrder(Node *root)
{
  if(root == NULL)
    return ;
  else
  {
    inOrder(root->left);
    printf("%c ",root->data);
    inOrder(root->right);
  }
}
void preOrder(Node *root)
{
    if(root == NULL)
      return;
    else
    {
      printf("%c ",root->data);
      preOrder(root->left);
      preOrder(root->right);
    }
}
void postOrder(Node *root)
{
  if(root == NULL)
    return;
  else
  {
    postOrder(root->left);
    postOrder(root->right);
    printf("%c ",root->data);
  }
}
int main(void)
{
  Tree *tree = new Tree();
  Node *nodeA = new Node('A');
  Node *nodeB = new Node('B');
  Node *nodeC = new Node('C');
  Node *nodeD = new Node('D');
  Node *nodeE = new Node('E');
  Node *nodeF = new Node('F');
  Node *nodeG = new Node('G');
  tree->root = nodeA;
  tree->root->left = nodeB;
  tree->root->right = nodeC;
  nodeB->left=nodeD;
  nodeD->right=nodeG;
  nodeC->left=nodeE;
  nodeC->right=nodeF;

  inOrder(nodeA);
  printf("\n");
  preOrder(nodeA);
  printf("\n");
  postOrder(nodeA);
  printf("\n");
}
