#include <stdlib.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
/* binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)*/
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98); /*                              (98) -> parent      */
                                               /*                   /       \             */
    root->left = binary_tree_node(root, 12); /*                  (12) lP    (402) RP*/
    
    root->left->left = binary_tree_node(root->left, 6); /*       /  \       /    \        */
    root->left->right = binary_tree_node(root->left, 16);/*    (6)  (16)  (256)  (512)    */
    
    root->left->left->left = binary_tree_node(root->left->left, 20);
    root->left->left->right = binary_tree_node(root->left->left, 21);

    root->right = binary_tree_node(root, 402);
    root->right->left = binary_tree_node(root->right, 256);
    root->right->right = binary_tree_node(root->right, 512);

    binary_tree_print(root);
    return (0);
}