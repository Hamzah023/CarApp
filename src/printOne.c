#include "../include/headerA3.h"

void printOne (struct car * headLL, int whichOne){
    /*
    - iterate through the linked list with a counter
    - if counter == the value of whichOne, then print the information of the function
    - */

    a3Car *temp = headLL; // temp var to iterate has value of headLL, *headLL just for iterating, **headLL means that you need to change the function in some way
    int counter = 0; //counter set to 0

    if (headLL == NULL){ // if headLL is null
        printf("Head is empty\n"); //prints that head is empty
    }

    while (temp != NULL){ //while iteration variable not null
        counter++; //counter goes up
        if (counter == whichOne){ //if counter is same as whichOne, means that this is desired LL node user wants to print
            printf("    Car id: %d\n",temp->carId); //prints information of node
            printf("    Model: %s\n",temp->model);
            printf("    Type: %s\n",temp->type); 
            printf("    Price: %.2lf\n",temp->price);
            printf("    Year of Manufacture: %d\n",temp->year); 
        }
        temp = temp->nextCar; //temp goes to next node in LL
    }
    
}