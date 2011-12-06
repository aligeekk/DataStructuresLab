/**
* This header file contains the function declarations for handling Hash Table (with collision resolution using "Chaining" method) related operations 
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define m 26

//Structure that defines a node in a Hash Table chain
struct Node{
		char *data;							//the data to be stored in the Hash Table
		struct Node *next;					//pointer to the next node in the chain
	};

struct Node *NIL;							//to be used as NULL pointer

void insertData(struct Node **,char *);					//inserts the input data
int hashData(char);						//applies the hashing function on the input data (on data[0] actually)
void allocateNode(struct Node **);			//allocates memory to a node at runtime
/*void deleteData(struct Node *)*/
void displayData(struct Node *);			//displays the chains corresponding to each hash table slot