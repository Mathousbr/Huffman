#!/bin/sh 
gcc -c compress.c -o compress.o
gcc -c decompress.c -o decompress.o
gcc -c hashTable.c -o hashTable.o
gcc -c huffmanTree.c -o huffmanTree.o
gcc -c interface.c -o interface.o
gcc -c main.c -o main.o
gcc -c priorityQueue.c -o priorityQueue.o
gcc -c utilities.c -o utilities.o
gcc compress.o decompress.o hashTable.o huffmanTree.o interface.o main.o priorityQueue.o utilities.o -o executable
exit
