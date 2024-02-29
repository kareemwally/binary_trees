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
	else if (tree->right != NULL && tree->left != NULL
			&& tree->parent != NULL)
		return (1);
	else
		return (0);
	r_res = binary_tree_is_full(tree->right);
	l_res = binary_tree_is_full(tree->left);
	return (l_res || r_res);
}
