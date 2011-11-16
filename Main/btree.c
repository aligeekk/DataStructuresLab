/**
* Sample main program to find single source shortest path using Bellman Ford and Dijkstra's algorithms 

*This program uses the following Libraries. Uncomment these libraries in the file MAKEFILE before running this program (refer to MAKEFILE for instructions on executing this program) -

*	gcc -c ../Libraries/ShPathLib/shpathlib.c


*/

#include "../Libraries/BTreeLib/btreelib.h"

main()
{
	// main
	int ch,keyvalue;
	root = allocateNode();
	root -> n = 0;
	root -> leaf = 1;
	do {
		printf("------------------- Menu -------------------\n");
		printf(" 1. Insert\n");
		printf(" 2. Display\n");
		printf("    Enter your choice : ");
		scanf("%d",&ch);
		switch(ch){
			case 1: {
					printf("Enter the key value: ");
					scanf("%d",&keyvalue);
					btreeInsert(keyvalue);
					break;
					}
			case 2: {
					struct node *tmp;
					tmp = root;
					display(tmp);
					break;
					}
		}
	}while (ch<3);
}

