//File: Stack.h
//Author: Jairun Diemert
//Class: COP3530
//Project: Class work
//Description: This is the header file for the Stack class

#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

class Stack
 {
  int  data;
  Stack *next;
	Stack *previous;
	Stack *currNodePtr;
	Stack *newNodePtr;
	Stack *head = NULL;
	Stack *tail = NULL;  //nullptr for C++11

  public :
  Stack(){};
  void  create();
  void  insert();
  int   del();
  void  display();
	void  size();
	void  displayBackward();
	void  searchList();
	void  replace();
	void  push();
	int   peek();
};


#endif 
