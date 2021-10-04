
/* 
cpp program to implement queue using two stacks.
Time complexities:
enqueue : O(n)
dequeue : O(1)
display : O(n)
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;


class Queue{
	public:
		stack<int>s1;
		stack<int>s2;
		
		void enqueue(int n)
		{
			while(!s1.empty())
			{
				s2.push(s1.top());
				s1.pop();	
			}	
			
			s1.push(n);
			while(!s2.empty())
			{
				s1.push(s2.top());
				s2.pop();
			}
		}
		
		void dequeue()
		{
			if(s1.empty())
			{
				cout<<"queue already empty, invalid operation\n\n";
				return;
			}
			
			s1.pop();
			
		}
		
		void display()
		{
			while(!s1.empty())
			{
				cout<<s1.top()<<" ";
				s2.push(s1.top());
				s1.pop();
			}
			
			cout<<endl;
			
			
			while(!s2.empty())
			{
				s1.push(s2.top());
				s2.pop();
			}
		}
		
		
};



int main()
{
	Queue q;
	
	// sample runs
	q.enqueue(2);
	q.enqueue(3);
	q.display();
	q.dequeue();
	q.display();
	return 0;
}
