#include "binary_trees.h"
/**
 * binary_tree_is_full - Function
 * Describe: to determine whether it's full or not
 * @tree: pointer to root node
 * Return: (int)
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int r_res, l_res;

	if (tree == NULL)
		return (0);
	else if (tree->right == NULL && tree->left == NULL)
		return (1);
	else if (tree->left != NULL && tree->right != NULL)
		return(binary_tree_is_full(tree->right)
			&& binary_tree_is_full(tree->left));
	return (0);
}
