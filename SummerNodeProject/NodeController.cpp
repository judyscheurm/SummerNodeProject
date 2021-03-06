//
//  NodeController.cpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/26/16.
//  Copyright © 2016 Scheurman, Judy. All rights reserved.
//

#include "NodeController.hpp"
#include "DataNode.cpp"
#include "SummerArray.cpp"
#include "BinaryTree.cpp"
#include <string>
#include <iostream>
#include "HashTable.cpp"

using namespace std;
void NodeController :: tryNodes()
{
    DataNode<int> numberNode;
    DataNode<string> wordNode;
    cout << "before" << endl;
    cout << numberNode.getNodeData() << endl;
    cout << "after" << endl;
    numberNode.setNodeData(231);
    cout << numberNode.getNodeData() << endl;
}

void NodeController :: tryArray()
{
    SummerArray<int> testArray(3);
    //int derpy[3];
}

void NodeController :: tryTree()
{
    BinaryTree<int> sampleTree;
    cout << "The tree is this big: " << sampleTree.getSize() << endl;
    sampleTree.insert(7);
    sampleTree.insert(5);
    cout << "The tree is this big: " << sampleTree.getSize() << endl;
    sampleTree.insert(213);
    sampleTree.insert(-123);
    cout << "The tree is this big: " << sampleTree.getSize() << endl;
    sampleTree.insert(5);
    sampleTree.insert(123124);
    sampleTree.insert(0);
    cout << "The tree is this big: " << sampleTree.getSize() << endl;
    
    
    cout << "The in order traversal" << endl;
    sampleTree.inOrderTraversal(sampleTree.getRoot());
    cout << endl;
    
    cout << "The pre order traversal" << endl;
    sampleTree.preOrderTraversal(sampleTree.getRoot());
    cout << endl;
    
    cout << "The post order traversal" << endl;
    sampleTree.postOrderTraversal(sampleTree.getRoot());
    cout << endl;
    
}



void NodeController :: tryHash()
{
    HashTable<int> numbersInHash;
    numbersInHash.add(123);
    numbersInHash.add(3458);
    
    cout << "Current content " << endl;
    numbersInHash.displayContents();
    
    numbersInHash.add(123167);
    numbersInHash.add(864);
    numbersInHash.add(8463);
    numbersInHash.add(1375);
    
    cout << "Current content " << endl;
    numbersInHash.displayContents();
    
}

void NodeController :: start()
{
    tryHash();
}
