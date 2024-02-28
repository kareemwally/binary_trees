#include "binary_trees.h"
/**
 * binary_tree_preorder - Function
 * Description: function to print tree in pre_order
 * @tree: pointer to root node
 * @func: a function to be implemented on node's value
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL)
{
	return ;
}
func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}
