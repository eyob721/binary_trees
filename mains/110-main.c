#include "../binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	binary_tree_t *root = NULL;
	int bst;

	binary_tree_print(root);
	bst = binary_tree_is_bst(root);
	printf("Is NULL bst: %d\n", bst);

	root = binary_tree_node(NULL, 98);
	binary_tree_print(root);
	bst = binary_tree_is_bst(root);
	printf("Is %d bst: %d\n", root->n, bst);

	root->left = binary_tree_node(root, 12);
	root->right = binary_tree_node(root, 128);
	root->left->right = binary_tree_node(root->left, 54);
	root->right->right = binary_tree_node(root, 402);
	root->left->left = binary_tree_node(root->left, 10);

	binary_tree_print(root);
	bst = binary_tree_is_bst(root);
	printf("Is %d bst: %d\n", root->n, bst);
	bst = binary_tree_is_bst(root->left);
	printf("Is %d bst: %d\n", root->left->n, bst);

	root->right->left = binary_tree_node(root->right, 97);
	binary_tree_print(root);
	bst = binary_tree_is_bst(root);
	printf("Is %d bst: %d\n", root->n, bst);

	binary_tree_delete(root);
	return (0);
}
