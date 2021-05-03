#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include <thread>         // std::this_thread::sleep_for

using namespace std;
using namespace std::chrono;

#include "PriorityQueue.h"
#include "MyPQSort.h"

/*
 * DO NOT ALTER THIS CODE!
 */
const int TIMES_TO_TEST = 10;
double worst;
double best;
double average;

bool isSorted(vector<string> sortedStrings);
vector<string> getNRandomStrings(int N);
string generateOneRandomString();

void TimeForSortingNStrings(int N) 
{
		
	MyPQSort mySort;
	double totalTime ;
		
	for (int i = 0; i < TIMES_TO_TEST; i++) 
	{
		vector<string> stringsToSort = getNRandomStrings(N);
		high_resolution_clock::time_point startTime = high_resolution_clock::now();
		vector<string> sortedStrings = mySort.Sort(stringsToSort);
		std::this_thread::sleep_for (std::chrono::seconds(1));
		high_resolution_clock::time_point endTime = high_resolution_clock::now();
		duration<double> time_span = duration_cast<duration<double> >(endTime - startTime);
		double thisTime = time_span.count();
		totalTime += thisTime;
			
		if (worst < thisTime) {
			worst = thisTime;
		}
		if (best > thisTime) {
			best = thisTime;
		}
				
		if (!isSorted(sortedStrings)) 
		{
			throw "This list of strings is not sorted.";
		}
	}
				
	average = totalTime / TIMES_TO_TEST;		
}
	
bool isSorted(vector<string> sortedStrings)
{		
	for (int i = 1; i < sortedStrings.size(); i++)
	{
		if (sortedStrings[i-1].compare(sortedStrings[i]) >= 0) 
		{
				return false;
		}
	}
		
	return true;
}

vector<string> getNRandomStrings(int N) 
{
	vector<string> returnValue(N);
	for (int i=0; i<N; i++) 
	{
		returnValue[i] = generateOneRandomString();
	}
	return returnValue;
}

// Taken from: https://stackoverflow.com/questions/440133/how-do-i-create-a-random-alpha-numeric-string-in-c	
void gen_random(char *s, size_t len) {
     for (size_t i = 0; i < len; ++i) {
         int randomChar = rand()%(26+26+10);
         if (randomChar < 26)
             s[i] = 'a' + randomChar;
         else if (randomChar < 26+26)
             s[i] = 'A' + randomChar - 26;
         else
             s[i] = '0' + randomChar - 26 - 26;
     }
     s[len] = 0;
 }

string generateOneRandomString() 
{
    char myString[100];
    gen_random(myString, 10);
    string returnValue(myString);
    return returnValue;
}

int main()
{
	vector<int> lengthsToTest = {1, 10, 100, 1000, 10000, 100000, 1000000};
		
	for (int idx=0; idx < lengthsToTest.size(); idx++ )
	{
		best = 1000;
		worst = -10.0;
		average = 0.0;
		int length = lengthsToTest[idx];
		try
		{
			TimeForSortingNStrings(length);
			cout << length << "," << best << "," << average << "," << worst << endl;
		}
		catch (const char* error) {
			cerr << error << endl;
			return 1;
		}
	}

	return 0;
}
