#include <string>
using namespace std;

#ifndef __QUEUE_EMPTY_H__
#define __QUEUE_EMPTY_H__
class QueueEmpty
{
public:
	string error;
	QueueEmpty()
	{
		error = "The queue is empty.";
	}
};

#endif
