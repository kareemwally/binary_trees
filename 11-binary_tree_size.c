#include "binary_trees.h"
/**
 * binary_tree_size - Function
 * Description: get the number of nodes in tree
 * @tree: pointer to root node
 * Return: (size_t)
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
