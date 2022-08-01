#include <iostream>
#include "BinaryTree.h"
using namespace std;

void BinaryTree::insert(TreeNode *&nodePtr, TreeNode *&newNode)
{
    if (nodePtr == nullptr)
        nodePtr = newNode;

    else if (newNode->value <= nodePtr->value)
        insert(nodePtr->left, newNode);

    else
        insert(nodePtr->right, newNode);
}

void BinaryTree::insertNode(int num)
{
    TreeNode *newNode = nullptr;

    newNode = new TreeNode;
    newNode->value = num;
    newNode->left = newNode->right = nullptr;
    insert(root, newNode);
}

void BinaryTree::displayPreOrder(TreeNode *nodePtr) const
{
    if (nodePtr)
    {
        cout << nodePtr->value << ", ";
        displayPreOrder(nodePtr->left);
        displayPreOrder(nodePtr->right);
    }
}
