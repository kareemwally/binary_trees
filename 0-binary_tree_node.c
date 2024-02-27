#include "binary_trees.h"
/**
 * binary_tree_node - Function
 * Description: that function to create a node in Binary tree
 * @parent: the parent to the node to be created
 * @value: the data to be hold in node
 * Return: pointer to node (success) Or NULL(fail)
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *res;

	res = malloc(sizeof(binary_tree_t));
	if (res == NULL || !(value))
	{
		return (NULL);
	}
	res->n = value;
	res->parent = parent;
	res->left = NULL;
	res->right = NULL;
	return (res);
}
