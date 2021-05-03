#include "PriorityQueue.h"
#include "PriorityQueueImpl.h"
#include "MethodMustBeImplemented.h"
#include "Node.h"
#include <iostream>
#include "Comparator.h"
using namespace std;

int PriorityQueueImpl::size() const
{
	return len;
}

bool PriorityQueueImpl::isEmpty() const
{
	
	return len==0;
}

void PriorityQueueImpl::insert(const std::string& e, Node<std::string>*& n)
{	
	if (n==nullptr){
		// cout<<"---------------------"<<endl;
		n=new  Node<std::string>();
		// cout<<n<<endl;


		n->entry=e;
		// n->left=nullptr;
		// n->right=nullptr;
		len++;



	}
	else if (e.compare(n->entry)<0){
		this->insert(e, n->left);
	}
	else {
		this->insert(e, n->right);

	}
}

const string PriorityQueueImpl::min() const throw(QueueEmpty)
{
	if (len==0){
		QueueEmpty QE;
		throw QE ;
	}
	else{
		Node<string>* n=head;
		
		
		while(n->left!=nullptr){
			n=n->left;
		}
		return n->entry;
	}

}

Node<string>& PriorityQueueImpl::removeMin(Node<string>*& n) throw(QueueEmpty)
{
	if (n==nullptr){
		QueueEmpty QE;
		throw QE ;
	}
	else{
		if (n->left!=nullptr){
			return removeMin( n->left);
		}
		else {
			Node<string>* r=n;
			n=n->right;
			len--;
			return *r;
		}
	}
}

// void PriorityQueueImpl::print(){
// 	if (len<1){
// 		cout<<"nothing in the list"<<endl;
// 	}
// 	else{
// 		Node* n=head;

// 		for (int i=0; i< len)
// 	}
// }
