all: PerformanceTest.exe

PerformanceTest.exe: Entry.cpp Entry.cpp Entry.h MyPQSort.h PerformanceTest.cpp PriorityQueue.h PriorityQueueImpl.cpp PriorityQueueImpl.h
	g++ -std=c++11 *.cpp -o PerformanceTest.exe
