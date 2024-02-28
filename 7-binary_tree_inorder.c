#include "binary_trees.h"
/**
 * binary_tree_inorder - Function
 * Description: to operate trees' values inorder
 * @tree: pointer to root node
 * @func: a function to operate on each node's value
 * Return: VOID
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL || tree == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
