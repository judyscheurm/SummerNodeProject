//
//  SummerList.cpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/27/16.
//  Copyright © 2016 Scheurman, Judy. All rights reserved.
//

#include "SummerList.hpp"
#include <assert.h>

template <class Type>
SummerList<Type> :: SummerList()
{
    size = 0;
    front = nullptr;
    end = nullptr;
}

template <class Type>
void SummerList<Type> :: addAtIndex(int index, Type data)
{
    assert (index >= 0 && index <= size);
    // Different from arrat - we can include the end.
    DataNode<Type> * indexPointer = front;
    
    //Create a node.
    DataNode<Type> * newNode = new DataNode<Type>(data);
    
    if(index==0)
    {
        newNode->setNodePointer(indexPointer);
        front = newNode;
    }
    else if(index == size - 1)
    {
        end->setNodePointer(newNode);
        end = newNode;
    }
    else
    {
        //Get to the spot before the spot I am adding to.
        for(int position = 0; position < index - 1; position++)
        {
            indexPointer = indexPointer->getNodePointer();
        }
     
        
        //point newNode to the address of indexPointers next node
        //newNode->setNodePointer(indexPointer->getNodePointer());
        //the line of code prior is the same as the 2 following lines of code
        DataNode<Type> *temp = indexPointer->getNodePointer();
        newNode->setNodePointer(temp);
        
        //Setting indexPointer to point the newNodes address
        indexPointer->setNodePointer(newNode);

    }
}
