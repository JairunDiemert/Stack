//Code for Stack List functions
//main.cpp
//Jairun Diemert

#include <iostream>
#include<stdlib.h>
using namespace std;

#include "Stack.h"

int main()
{
    std::cout << "\n========================================================================" << std::endl;
    std::cout << " Welcome to the world of Linked Lists! \n" << std::endl;
    std::cout << " This program creates a single linked list and allows operation on the list." << std::endl;
    std::cout << "\n The single linked list created will just have a single, integer type data in it." << std::endl;
    
    Stack nodeBox;
    while(1)
    {
         std::cout<<"\n\n---------- Menu --------- \n";
         std::cout<<"\n Create Stack          - 1\n\n Push element          - 2\n\n Pop first element     - 3 \n\n Display Stack Forward - 4\n\n Peek at top           - 5\n\n Exit                  - 6";
         std::cout<<"\n------------------------- \n";
         int userChoice;
         std::cout<<"\n Please enter your choice (1-5): ";
         std::cin>>userChoice;
         switch(userChoice)
         {
           case 1: nodeBox.create();
		   break;
           case 2 :nodeBox.push();
		   break;
           case 3: nodeBox.del();
		   break;
           case 4: nodeBox.display();
		   break;
			 		 case 5: nodeBox.peek();
		   break;
			 		 case 9: nodeBox.displayBackward();
		   break;
			 		 case 7: nodeBox.searchList();
		   break;
			     case 8: nodeBox.replace();
		   break;
           case 6: std::cout << "\n\n\n ." << std::endl;
                   std::cout << " .." << std::endl;
                   std::cout << " ..." << std::endl;
                   std::cout << " Thanks for using this program. Now ending the program... \n\n" << std::endl;
                   exit(0);
        } //end switch
    } //end while
  
    return 0;
} //end main()
