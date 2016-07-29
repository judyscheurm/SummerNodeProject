//
//  HashTable.hpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/29/16.
//  Copyright © 2016 Scheurman, Judy. All rights reserved.
//

#ifndef HashTable_hpp
#define HashTable_hpp

#include "HashNode.cpp"

template <class Type>
class HashTable
{
private:
    long capacity;
    long size;
    double efficiencyPercentage;
    HashNode<Type>* front;
    
    bool isPrime(int sampleNumber);
    void resize();
    long nextPrime(long current);
    long findPosition(Type data);
    long handleCollision (Type data, long currentPosition);
public:
    HashTable();
    void add(Type data);
    bool remove(Type data);
    void displayContents();
};

#endif /* HashTable_hpp */
