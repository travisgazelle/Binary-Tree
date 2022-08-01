#include <iostream>
#include "BinaryTree.h"

using namespace std;

int main()
{
	// To define a new tree to test with other values,
	// Simply create a new instance of class BinaryTree and insert
	// Values with the insertNode() member function

    BinaryTree tree;

    cout << "Pre-Order: ";

    tree.insertNode(6);
    tree.insertNode(2);
    tree.insertNode(8);
    tree.insertNode(1);
    tree.insertNode(4);
    tree.insertNode(7);
    tree.insertNode(9);
    tree.insertNode(3);
    tree.insertNode(5);

    tree.displayPreOrder();

    return 0;
}
