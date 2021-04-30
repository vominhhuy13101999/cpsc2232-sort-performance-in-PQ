# # all: PerformanceTest.exe
# all: PerformanceTest
# # PerformanceTest.exe: Entry.h MyPQSort.h PerformanceTest.cpp PriorityQueue.h PriorityQueueImpl.cpp PriorityQueueImpl.h
# PerformanceTest:
# 	g++ -std=c++14 PriorityQueueImpl.cpp test.cpp -o PerformanceTest.exe



all: PerformanceTest
# PerformanceTest.exe: Entry.h MyPQSort.h PerformanceTest.cpp PriorityQueue.h PriorityQueueImpl.cpp PriorityQueueImpl.h
PerformanceTest:
	g++ -std=c++14 PriorityQueueImpl.cpp PriorityQueueTest.cpp -o PerformanceTest.exe