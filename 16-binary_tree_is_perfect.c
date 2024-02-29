#include "binary_trees.h"

/**
 * binary_tree_height - Calculate the height of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_balance - Calculate the balance factor of a binary tree node
 * @tree: Pointer to the node to calculate the balance factor
 * Return: Balance factor of the node, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
/**
 * binary_tree_is_perfect - Function
 * Description: to determine if tree is perfect or not
 * @tree: pointer to root node
 * Return: (int)
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_balance(tree) == 0)
		return (1);
	else
		return (0);
}
