//
//  NodeController.cpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/26/16.
//  Copyright © 2016 Scheurman, Judy. All rights reserved.
//

#include "NodeController.hpp"
#include "DataNode.cpp"
#include <string>
#include <iostream>

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
void NodeController :: start()
{
    tryNodes();
}