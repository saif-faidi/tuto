#ifndef TREE_H
#define TREE_H
#include "stdio.h"

/* this BST (bnasic binary tree)            : in binary tree we start counting levels from top to down
1- full/strictly binary tree                : every node must have 2 childrens except the leaf node 
2- incomplete/almost complete binary tree   : all the nodes must have 2 childrens except the last and the second last node and should be
                                              filled from left to right (we can't find a node with only a right leaf)
3- complete/perfect binary tree             : all nodes must have 2 childrens in all levels (except leaf) and in each level there should be 2^L nodes (where L is the level) 
4- left scewed binary tree                  : every node must have only a left node 
5- right scewed binary tree                 : every node must have only a right node 

the searching methods in a binary tree are : 
  -Breadth First Traversal (Or Level Order Traversal)
  -Depth First Traversals
      Inorder Traversal   (Left-Root-Right)
      Preorder Traversal  (Root-Left-Right)
      Postorder Traversal (Left-Right-Root)
*/
struct Binary
{ 
  int id ;
  struct Binary *left,*right;
};

typedef struct Binary Binary ;


void init(Binary *node ,int id, Binary*left, Binary*right );
void print_dfs(Binary*node);
void print_bfs(Binary*node);

/*  EXAMPLE tree bfs and dfs test 
    Binary root         = {.id= 1,.left= NULL, .right = NULL };
    Binary left         = {.id= 2,.left= NULL, .right = NULL };
    Binary right        = {.id= 3,.left= NULL, .right = NULL };
    Binary left_left    = {.id= 4,.left= NULL, .right = NULL };
    Binary left_right   = {.id= 5,.left= NULL, .right = NULL };
    Binary right_left   = {.id= 6,.left= NULL, .right = NULL };
    Binary right_right  = {.id= 7,.left= NULL, .right = NULL };

    root.left   = &left;
    root.right  = &right;
    left.left   = &left_left ;
    left.right  = &left_right ; 
    right.left  = &right_left ; 
    right.right = &right_right ;
    //print_dfs(&root);
    print_bfs(&root);
    */

#endif //TREE_H