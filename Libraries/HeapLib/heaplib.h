/* This header file contains the global variable and function declarations for Min Heap and Max Heap operations */ 

#include<stdio.h>

//GLOBAL HEAP VARIABLES
int len,heapsize;

//DISPLAY HEAP
void display_heap(int[]);

//MAX HEAP
void max_heapify(int[],int);
void build_maxheap(int[]);
void maxheap_sort(int[]);

//MIN HEAP
void min_heapify(int[],int);
void build_minheap(int []);
void minheap_sort(int[]);
