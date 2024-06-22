#include "../include/headerA3.h"

void noMoreCars (a3Car ** headLL){

    a3Car *temp = *headLL; //temp variables to help delete node
    a3Car *helper = NULL;

    if (*headLL == NULL){ //if headLL is null
        printf("Error head is null"); //print message
    }
    

    while (temp != NULL){ // whilst LL not empty
        helper = temp->nextCar; //helper goes one node ahead
        free(temp); //temp is freed
        temp = helper; // temp moves one node ahead to delete that one too
    }
    *headLL = NULL; //head is set to null to not cause problems
    printf("All removed. Linked list is now empty\n"); //print statement that confirms to deletion
}