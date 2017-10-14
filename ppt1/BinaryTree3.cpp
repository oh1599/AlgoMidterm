#include <stdio.h>
using namespace std;
class Node
{
public:
  int w;
  Node *left;
  Node *right;
  Node(int a)
  {
    w = a;
  }
};
int sumOfWeight(Node *root)
{
  if(root == NULL)
    return 0;
  else
  {
    return sumOfWeight(root->left)+sumOfWeight(root->right)+root->w;
  }
}
int maxPathWeight(Node *root)
{
  if(root ==NULL)
    return 0;
  else
  {
    int left,right;
    left = maxPathWeight(root->left);
    right = maxPathWeight(root->right);
    return root->w + (left>=right ? left:right);
  }
}
int main(void)
{
  Node *root = new Node(6);
  Node *nodeB = new Node(2);
  Node *nodeC = new Node(1);
  Node *nodeD = new Node(4);
  Node *nodeE = new Node(9);
  Node *nodeF = new Node(7);
  Node *nodeG = new Node(3);
  root->left = nodeB;
  root->right = nodeC;
  nodeB->left=nodeD;
  nodeD->right=nodeG;
  nodeC->left=nodeE;
  nodeC->right=nodeF;
  printf("sumOfweight : %d\n",sumOfWeight(root));
  printf("maxPathWeight : %d\n",maxPathWeight(root));
}
