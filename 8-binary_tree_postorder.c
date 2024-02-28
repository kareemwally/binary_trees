#include "binary_trees.h"
/**
 * binary_tree_postorder - Function
 * Description: to operate trees' values postorder
 * @tree: pointer to root node
 * @func: a function to operate on each node's value
 * Return: VOID
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL || tree == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
