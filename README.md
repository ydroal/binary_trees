# C - Binary trees

Binary Tree is a special datastructure used for data storage purposes.  
A binary tree has a special condition that each node can have a maximum of two children.  
And It has the benefits of both an ordered array and a linked list as search 
is as quick as in a sorted array and insertion or deletion operation are as fast as in linked list.
We are learning this datastructure in C.  


## Requirements
* All files were compiled on Ubuntu 20.04 LTS using gcc,  using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* This code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

## General

- What is a binary tree  

	One of a type of data structure in which each node has at most two children.  
	A binary tree is typically used for efficient searching, insertion, and deletion operations.

- What is the difference between a binary tree and a Binary Search Tree  

	A binary tree is a tree data structure and a Binary Search Tree (BST) is 
	a specific type of binary tree that has the property that for each node, 
	all the elements in its left subtree are less than the node, and 
	all the elements in its right subtree are greater than the node. 
	This ordering property allows for efficient searching, insertion, and deletion operations.
	We can say  that a binary tree is a general concept, while a Binary Search Tree is
	a specific type of binary tree that has a specific ordering property. 

- What is the possible gain in terms of time complexity compared to linked lists  

	Searching for an element in a linked list requires traversing the list from the beginning, 
	which takes linear time, O(n), in the worst case.
	A binary search tree is a more efficient data structure for searching,
	insertion, and deletion operations than a linked list. 
	Because of the ordering property in a BST, the search can be done in logarithmic time, 
	O(log n), in the worst case. a well-balanced BST will have much better performance 
	than an unordered linked list.

- What are the depth, the height, the size of a binary tree  
	__depth__: the number of edges from the root to specific node.  
		    (not necessarily to the leaf node)  
	__height__: the number of edges on the longest path from the root to a leaf.  
	__size___: number of nodes in the tree

- What are the different traversal methods to go through a binary tree  
	
	There are three main ways to traverse a binary tree: in-order, pre-order, and post-order.  
	__In-order traversal__: visits the left subtree, then the root, and finally the right subtree.  
	__Pre-order traversal__: visits the root, then the left subtree, and finally the right subtree.  
	__Post-order traversal__: visits the left subtree, then the right subtree, and finally the root.  
- What is a complete, a full, a perfect, a balanced binary tree  

	__complete binary tree__: every level, except the last level, is completely filled and  
				  all nodes are as far left as possible.  
	__full binar tree__: every node has either 0 or 2 children.  
			    (In other words, every node except leaf nodes has two children)  
	__perfect binary tree__: a full binary tree in which all leaf nodes are at the same level.  
	__balanced binary tree__: height of the left and right subtrees of every node differ by at most 1.  

	![complete_binary_tree](https://user-images.githubusercontent.com/62082691/212327735-559c7b65-af67-4fa5-96c5-544bc5e65473.jpg)

## Data Structure and types for binary trees

### Basic Binary Tree
```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

### Binary Search Tree
```
typedef struct binary_tree_s bst_t;
```

### AVL Tree
```
typedef struct binary_tree_s avl_t;
```

### Max Binary Heap
```
typedef struct binary_tree_s heap_t;
```

## Tasks
__0. Write a function that creates a binary tree node__

File: 0-binary_tree_node.c


__1. Write a function that inserts a node as the left-child of another node__

File: 1-binary_tree_insert_left.c


__2. Write a function that inserts a node as the right-child of another node__

File: 2-binary_tree_insert_right.c


__3. Write a function that deletes an entire binary tree__

File: 3-binary_tree_delete.c


__4. Write a function that checks if a node is a leaf__ 

Note: if a node has no children.(if (node->left == NULL && node->right == NULL))  
File: 4-binary_tree_is_leaf.c

__5. Write a function that checks if a given node is a root__

Note: if a givenm node has parent. (if (node->parent == NULL))
File: 5-binary_tree_is_root.c

__6. Write a function that goes through a binary tree using pre-order traversal__.

Note: root - Left Subtree - Right Subtree
File: 6-binary_tree_preorder.c

__7. Write a function that goes through a binary tree using in-order traversal__

Note: Left Subtree - root - Right Subtree
File: 7-binary_tree_inorder.c

__8. Write a function that goes through a binary tree using post-order traversal__

Note: Left Subtree - Right Subtree - root
File: 8-binary_tree_postorder.c

__9. Write a function that measures the height of a binary tree__.

Note: should return 0 as the height of a leaf node is always 0. 
File: 9-binary_tree_height.c

__10. Write a function that measures the depth of a node in a binary tree__

File: 10-binary_tree_depth.c

__11. Write a function that measures the size of a binary treei__

File: 11-binary_tree_size.c

__12. Write a function that counts the leaves in a binary tree__ 

File: 12-binary_tree_leaves.c

__13. Write a function that counts the nodes with at least 1 child in a binary tree__

File: 13-binary_tree_nodes.c

__14. Write a function that measures the balance factor of a binary tree__ 

14-binary_tree_balance.c

__15. Write a function that checks if a binary tree is full__ 

15-binary_tree_is_full.c

__16. Write a function that checks if a binary tree is perfect__ 

File: 16-binary_tree_is_perfect.c

__17. Write a function that finds the sibling of a node__

File: 17-binary_tree_sibling.c

__18. Write a function that finds the uncle of a node__

File: 18-binary_tree_uncle.c

## Repo
* GitHub repository: binary_trees

