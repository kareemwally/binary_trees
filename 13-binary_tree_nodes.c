#include "binary_trees.h"
/**
 * binary_tree_nodes - Function
 * Description: counting the nodes with at least 1 child
 * @tree: pointer to root node
 * Return: (size_t)
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	if (tree->parent != NULL && (tree->left != NULL || tree->right != NULL))
		return (1);
	return (binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right));
}
