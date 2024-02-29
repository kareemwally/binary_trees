#include "binary_trees.h"
/**
 * binary_tree_uncle - Function
 * Description: it gets sibling of the parent node or NULL
 * @node: node to get its uncle
 * Return: pointer to uncle (success) or NULL(fail)
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL
		|| node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent
		&& node->parent->parent->right != NULL)
		return (node->parent->parent->right);
	if (node->parent->parent->right == node->parent
		&& node->parent->parent->left != NULL)
		return (node->parent->parent->left);
	return (NULL);
}
