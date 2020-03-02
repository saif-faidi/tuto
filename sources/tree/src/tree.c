#include "tree.h"

void init(Binary *node ,int id, Binary*left, Binary*right )
{
 node->id = id; 
 node->left = left ; 
 node->right = right;
}

void print_dfs(Binary*node)
{
    if(node == NULL)
    {
        return;
    }
    printf("id is : %d\n",node->id);
    print_dfs(node->left);
    print_dfs(node->right);
}

void print_bfs(Binary*node)
{
    Binary* tab[10];
    static unsigned char  index= 0;
    static char last_treated = 0 ; 
    tab[index] = node;
    
    while(last_treated <= index)
    {
        
        Binary*loc_node  = tab[last_treated++];
        printf("id is : %d\n",loc_node->id); 
        
        if (loc_node->left !=NULL)
        {
            tab[++index] = loc_node-> left; 
        }
        if (loc_node->right !=NULL)
        {
            tab[++index] = loc_node-> right;
        }
    }
}
