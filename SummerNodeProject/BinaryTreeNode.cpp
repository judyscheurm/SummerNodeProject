//
//  BinaryTreeNode.cpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/28/16.
//  Copyright © 2016 Scheurman, Judy. All rights reserved.
//

#include "BinaryTreeNode.hpp"


template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode() : DataNode<Type>()
{
    parent = nullptr;
    leftChild = nullptr;
    rightChild = nullptr;
}

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode(Type data) : DataNode<Type>(data)
{
    //this->setNodeData(data); This is not needed because of "DataNode<Type>(data)" above
    parent = nullptr;
    leftChild = nullptr;
    rightChild = nullptr;
    
}

//getters
template <class Type>
BinaryTreeNode<Type>* BinaryTreeNode<Type> :: getLeftChild()
{
    return leftChild;
}

template <class Type>
BinaryTreeNode<Type>* BinaryTreeNode<Type> :: getRightChild()
{
    return rightChild;
}

template <class Type>
BinaryTreeNode<Type>* BinaryTreeNode<Type> :: getParent()
{
    return parent;
}

//setters

template <class Type>
void BinaryTreeNode<Type> :: setLeftChild (BinaryTreeNode<Type> * leftChild)
{
    this->leftChild = leftChild;
}

template <class Type>
void BinaryTreeNode<Type> :: setRightChild (BinaryTreeNode<Type> * rightChild)
{
    this->rightChild = rightChild;
}

template <class Type>
void BinaryTreeNode<Type> :: setParent (BinaryTreeNode<Type> * parent)
{
    this->parent = parent;
}