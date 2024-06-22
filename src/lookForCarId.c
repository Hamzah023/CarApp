#include "../include/headerA3.h"

int lookForCarId (struct car * headLL, int key){
    int count = 0; //count intialized to zero
    a3Car * temporary = headLL; //temp var

    if (headLL == NULL){ //checks if LL is empty
        printf("Linked list is empty"); // prints ll is empty
        return count;
    }
    else {
       while (temporary != NULL){ // while temp is not null
            count++; //count goes up by one

            if (temporary->carId == key ){ // if temp carId is same as key count returned and loop breaks
                return count;
                break;
            }

            temporary = temporary->nextCar; // loop iterates
       }
    }
    return -1; // if keyId not found returns -1 to signal unsuccessful run
}

