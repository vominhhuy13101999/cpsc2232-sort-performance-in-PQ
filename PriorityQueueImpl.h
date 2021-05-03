#include <iostream>
#include "PriorityQueue.h"
#include "ConcreteEntry.h"
#include "Comparator.h"
#include "Node.h"
#include <vector>
#include <string>

#ifndef __PRIORITYQUEUEIMPLE_H__
#define __PRIORITYQUEUEIMPLE_H__ 
class PriorityQueueImpl : public PriorityQueue<std::string, std::string>
{
private:
    // linked list of ConcreteEntry


    // std::vector<ConcreteEntry> v;
public:
    int len = 0;
    Node<std::string>* head=nullptr;
    Comparator C;
    int size() const;
    bool isEmpty() const;
    void insert(const std::string& e, Node<std::string>*& n);
	const std::string min() const throw(QueueEmpty);
	Node<std::string>& removeMin(Node<std::string>*& n) throw(QueueEmpty);
    // void print() const;
};

#endif
