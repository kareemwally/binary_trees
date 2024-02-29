#include "binary_trees.h"
/**
 * binary_tree_height - Function
 * Description: to count the height of a tree
 * @tree: pointer to root node
 * Return: (size_t)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}
	else if (tree->right == NULL && tree->left == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height > right_height)
	{
		return ((left_height + 1));
	}
	else
	{
		return ((right_height + 1));
	}
}
