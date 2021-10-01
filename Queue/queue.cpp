// Introduction to Queue
// Queues are a type of container adaptors which operate in a first in first out (FIFO) type of arrangement. Elements are inserted at the back (end) and are deleted from the front. Queues use an encapsulated object of deque or list 
// (sequential container class) as its underlying container, providing a specific set of member functions to access its elements.


/*
Methods of Priority Queue :
1. empty() – This method checks whether the priority_queue container is empty or not. If it is empty, return true, else false. It does not take any parameter.
syntax  :   p1.empty()    
2.size() – This method gives the number of elements in the priority queue container. It returns the size in an integer. It does not take any parameter.
syntax :   p2.size() 
3. push() – This method inserts the element into the queue. Firstly, the element is added to the end of the queue, and simultaneously elements reorder themselves with priority. It takes value in the parameter.
syntax :  p3.push(value)    
4.pop() –  This method  delete the top element (highest priority) from the priority_queue. It does not take any parameter.
syntax :  p3.pop()
5.swap() – This method swaps the elements of a priority_queue with another priority_queue of the same size and type. It takes the priority queue in a parameter whose values need to be swapped.
syntax :  p3.swap(p1) 
6.top() – This method gives the top element from the priority queue container. It does not take any parameter.
syntax :  p3.top()  
7.emplace() – This method adds a new element in a container at the top of the priority queue. It takes value in a parameter.
syntax :  p3.emplace(value)   

*/
// Queue in Standard Template Library (STL)
#include <iostream>
#include <queue>

using namespace std;

// Print the queue
void showq(queue<int> gq)
{
	queue<int> g = gq;
	while (!g.empty()) {
		cout << '\t' << g.front();
		g.pop();
	}
	cout << '\n';
}

// Driver Code
int main()
{
	queue<int> gquiz;
	gquiz.push(10);
	gquiz.push(20);
	gquiz.push(30);

	cout << "The queue gquiz is : ";
	showq(gquiz);

	cout << "\ngquiz.size() : " << gquiz.size();
	cout << "\ngquiz.front() : " << gquiz.front();
	cout << "\ngquiz.back() : " << gquiz.back();

	cout << "\ngquiz.pop() : ";
	gquiz.pop();
	showq(gquiz);

	return 0;
}

/* Output: 
The queue gquiz is :     10    20    30

gquiz.size() : 3
gquiz.front() : 10
gquiz.back() : 30
gquiz.pop() :     20    30


*/