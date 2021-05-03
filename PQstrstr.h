#include <iostream>
#include "PriorityQueue.h"
#include "Node.h"
#include <vector>

#ifndef __PRIORITYQUEUEIMPLE_H__
#define __PRIORITYQUEUEIMPLE_H__ 
class PQstr : public PriorityQueue<std::string, std::string>
{
private:
    // linked list of ConcreteEntry
    int len = 0;
    Node<std::string>* head;
    Node<std::string>* tail;
    // std::vector<ConcreteEntry> v;
public:
    int size() const;
    bool isEmpty() const;
    void insert(const ConcreteEntry& e);
	const ConcreteEntry& min() const throw(QueueEmpty);
	ConcreteEntry& removeMin() throw(QueueEmpty);
    // void print() const;
};

#endif