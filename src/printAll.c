#include "../include/headerA3.h"

void printAll (struct car * headLL){
    int count = 1; //initialized count
    struct car * test = headLL; //temp iterator assigned to head of LL

    if (headLL == NULL){ //if head of LL null 
        printf("Linked list empty\n"); //self explanatory
        
    }
    else { //else conditional if head LL not empty
        while (test != NULL){          // while LL not Null
            printf("Car # %d:\n", count); //prints count
            printf("    Car id: %d\n", test->carId); //prints car id
            printf("    Model: %s\n", test->model); // prints car model
            printf("    Type: %s\n", test->type); // prints car type
            printf("    Price: CDN $%'0.2lf\n", test->price); //prints car price
            printf("    Year of manufacture: %d\n", test->year); //prints car year
        
            test = test->nextCar; //iterates to next node
            count++; //count goes up by 1
        }
        printf("\nCurrently, there are %d cars.\n", count-1);
    }
}

