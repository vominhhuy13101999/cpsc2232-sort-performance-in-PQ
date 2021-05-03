#include "PriorityQueue.h"
#include "PriorityQueueImpl.h"
#include "MethodMustBeImplemented.h"
#include "Node.h"
#include <iostream>
#include "Comparator.h"
using namespace std;

int  main(){
    PriorityQueueImpl pq;

    cout<<(pq.head==nullptr)<<endl;//true

    pq.insert("EE",pq.head);
    pq.insert("B",pq.head);
    pq.insert("D",pq.head);
    pq.insert("aAA",pq.head);
    pq.insert("AA",pq.head);
    pq.insert("C",pq.head);
    pq.insert("AAA",pq.head);
    pq.insert("A",pq.head);
    pq.insert("BB",pq.head);

    cout<<pq.size()<<endl;

    cout<<pq.min()<<endl;
    cout<<pq.removeMin(pq.head).entry<<endl;
    cout<<pq.size()<<endl;
	// cout<<"---------------------"<<endl;
    cout<<pq.min()<<endl;
    cout<<pq.removeMin(pq.head).entry<<endl;
    cout<<pq.size()<<endl;
	// cout<<"---------------------"<<endl;
    cout<<pq.min()<<endl;
    cout<<pq.removeMin(pq.head).entry<<endl;
    cout<<pq.size()<<endl;
	// cout<<"---------------------"<<endl;
    cout<<pq.min()<<endl;
    cout<<pq.removeMin(pq.head).entry<<endl;
    cout<<pq.size()<<endl;
	// cout<<"---------------------"<<endl;
    cout<<pq.min()<<endl;
    cout<<pq.removeMin(pq.head).entry<<endl;
    cout<<pq.size()<<endl;
	// cout<<"---------------------"<<endl;
    cout<<pq.min()<<endl;
    cout<<pq.removeMin(pq.head).entry<<endl;
    cout<<pq.size()<<endl;
	// cout<<"---------------------"<<endl;    
    // cout<<pq.head<<endl;
    cout<<pq.min()<<endl;
    cout<<pq.removeMin(pq.head).entry<<endl;
    cout<<pq.size()<<endl;
    // cout<<"---------------------"<<endl;    

    cout<<pq.min()<<endl;
    cout<<pq.removeMin(pq.head).entry<<endl;
    cout<<pq.size()<<endl;
	// cout<<"---------------------"<<endl;    

    cout<<pq.min()<<endl;
    cout<<pq.removeMin(pq.head).entry<<endl;
    cout<<pq.size()<<endl;
	// cout<<"---------------------"<<endl;    

    cout<<pq.min()<<endl;
    cout<<pq.removeMin(pq.head).entry<<endl;
    cout<<pq.size()<<endl;
	// cout<<"---------------------"<<endl;    



}