#include <stdio.h>
#include <stdlib.h>
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
int size(Node *root)
{
  if(root == NULL)
    return 0;
  else
    return ( size(root->left) + size(root->right) + 1);
}
int height(Node *root)
{
  if(root == NULL)
	 return -1;
	else
  {
    if(height(root->left) > height(root->right))
      return height(root->left) + 1;
    else
      return height(root->right)+1;
  }
}
void mirror(Node *root)
{
  if(root == NULL)
    return;
  else
  {
    Node *temp = new Node('Z');
    //Swap
    temp=root->right;
    root->right=root->left;
    root->left=temp;
    //
    mirror(root->left);
    mirror(root->right);
  }
}
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
int main(void)
{
  Node *root = new Node('A');
  Node *nodeB = new Node('B');
  Node *nodeC = new Node('C');
  Node *nodeD = new Node('D');
  Node *nodeE = new Node('E');
  Node *nodeF = new Node('F');
  Node *nodeG = new Node('G');
  root->left = nodeB;
  root->right = nodeC;
  nodeB->left=nodeD;
  nodeD->right=nodeG;
  nodeC->left=nodeE;
  nodeC->right=nodeF;

  //mirror(root);
  //inOrder(root);
  printf("size : %d\n",size(root));
  printf("height : %d\n",height(root));
}
