#ifndef _CPSC2232_NODE_
#define _CPSC2232_NODE_
#include "ConcreteEntry.h"
// using namespace std;
template<typename E>
class Node
{
  public:
    
  	E entry="";
  	Node<E>* left=nullptr;
	Node<E>* right=nullptr;
};

#endif