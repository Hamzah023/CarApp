#include "../include/headerA3.h"

int countCars (a3Car * headLL){

    int count = 0; //initializes count to 0

    
    if (headLL == NULL){ // conditional to check if LL empty
        printf("LL is empty");
    }
    else { // if conditional not empty
    
        a3Car *temp = headLL;

            if (temp == NULL) { // if temp NULL
                printf("Memory allocation failed\n"); // memory allocation failed
                return -1; // returns error signal
            }
        
            
        temp = headLL; // temp initialized to headLL

        while (temp->nextCar != NULL){ //whilst temp doesnt point to empty
            temp = temp->nextCar; // iterate temp
            count++; // count goes up by one
        }
        
        count++; // once again to make up for count being = 0
        return count; //returns count
    }
    return 0; //return 0 to signal successful run
}
