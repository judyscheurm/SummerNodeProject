//
//  BinaryTreeNode.hpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/28/16.
//  Copyright © 2016 Scheurman, Judy. All rights reserved.
//

#ifndef BinaryTreeNode_hpp
#define BinaryTreeNode_hpp

#include <stdio.h>
#include "DataNode.hpp"

template <class Type>
class BinaryTreeNode : public DataNode<Type>
{
private:
    BinaryTreeNode<Type> * leftChild;
    BinaryTreeNode<Type> * rightChild;
    BinaryTreeNode<Type> * parent;
public:
    BinaryTreeNode<Type>();
    BinaryTreeNode<Type>(Type data);
    
    BinaryTreeNode<Type> * getLeftChild();
    BinaryTreeNode<Type> * getRightChild();
    BinaryTreeNode<Type> * getParent();
    
    void setRightChild(BinaryTreeNode<Type> * rightChild);
    void setLeftChild(BinaryTreeNode<Type> * leftChild);
    void setParent(BinaryTreeNode<Type> * parent);
};

#endif /* BinaryTreeNode_hpp */
