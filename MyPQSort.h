/*
 * IMPLEMENT YOUR SORT USING YOUR PRIORITY QUEUE HERE
 */
#include <string>
#include <vector>
#include "Node.h"
#include "PriorityQueueImpl.h"
#include "algorithm"
#include <iostream>

using namespace std;

class MyPQSort 
{
public:	
	PriorityQueueImpl myQueue;

	vector<string> Sort(vector<string>& stringListToSort) 
	{		
		// sort(stringListToSort.begin(),stringListToSort.end(),less<string>());
		// return stringListToSort;
		int len=stringListToSort.size();
		vector<string> store;
		for(string i:stringListToSort){
			myQueue.insert(i,myQueue.head);
		}
		for (int i=0; i<len; i++){
			string a=myQueue.removeMin(myQueue.head).entry;
			// cout<<a<<endl;
			store.push_back(a);
		}

		return store;
	}
	
};
