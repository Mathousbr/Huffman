typedef struct huffmanTree hTree;
typedef struct priorityQueue pQueue;						//Priority Queue struct
struct priorityQueue {
	hTree *head;
	int size;
};

pQueue* createPQueue();										//Create Priority Queue
hTree* createNode(char byte, int frequency);				//Create a new node
void enqueueNode(pQueue *queue, char byte, int frequency);	//Create and add a new node in ascending order
void enqueueParentNode(pQueue *queue, hTree *node);			//Add a node in ascending order
hTree* dequeueNode(pQueue *queue);							//Dequeue the head of priority queue
int pQueueEmpty(pQueue *queue);								//Verify if priority queue has empty
void constructPQueue(pQueue *queue, int frequencyTable[]);	//Construct Priority Queue using the frequency table
