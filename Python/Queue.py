from queue import Queue
 
# Initializing a queue
queue = Queue(maxsize = 5)
 
print(queue.qsize())
 
# Adding of element to queue
queue.put('apples')
queue.put('banana')
queue.put('carrot')
 
# Removing element from queue
print("\nElements dequeued from the queue")
print(queue.get())
print(queue.get())
print(queue.get())
 
# Return Boolean for Empty
print("\nEmpty: ", queue.empty())
 
 