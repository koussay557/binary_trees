#include "binary_trees.h"
/**
* @tree: is a pointer to the root node of the tree to count the number of leaves.
* Return: number of leaves in a binary tree otherwise 0
* binary_tree_leaves - counts the leaves in a binary tree
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    size_t k = 0;

    if (tree = NULL)
        return (0);
    if (tree->left == NULL && tree-> right == NULL)
        return(1);
    k = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
    return(k);
}
