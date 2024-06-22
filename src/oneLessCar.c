#include "../include/headerA3.h"

void oneLessCar (a3Car ** headLL, int whichOne){
    /*
    - iterate through the linked list and use counter
    - if counter is equal to whichOne, delete the linked list
    - set */

    a3Car *temp = *headLL; //temp var for iteration initalized
    a3Car *past = *headLL; //temp var for one node behind initalized both initialized to have headLL value

    int counter = 1; //counter set to one
    int val = 0; // variable to help us store node info set to 0

    if (headLL == NULL){ //checks if headLL is NULL
        printf("Error head is null");
    }

    while (temp != NULL){ // condiion for if LL isn't null

        if (whichOne == 1){ //if the desired LL is the first one
            *headLL = temp->nextCar; //headLL moves to next node
            val = temp->carId; //val keeps car Id to print later
            free(temp); // node is freed
        }
        else if(whichOne == counter){ // if desired node isnt the first one

            while (past != temp - 1){ // while the past var is not one node behind temp
                past = past->nextCar; //catch up to it
            }

            val = temp->carId; //val keeps car Id to print later
            past->nextCar = past->nextCar->nextCar; //past node is set to point to next node
            free(temp); // current node is freed
        }

        temp = temp->nextCar; //iteration continues
        counter++; //counter goes up by 1
        
    }
    printf("Car [ID: %d] removed\n", val); //prints the carId of node deleted
}