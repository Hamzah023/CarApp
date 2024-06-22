#include "../include/headerA3.h"

void sortCarId (struct car ** headLL){

    if (*headLL == NULL || (*headLL)->nextCar == NULL){ //if LL empty of headLL only has one node
        return; //return it
    }

    a3Car *iterationBack = *headLL; //tempory iteration variables
    a3Car *iterationFront = NULL;

    while (iterationBack->nextCar != NULL){ //while iterationBack does not equal NULL
        iterationFront = iterationBack->nextCar; //iterationFront goes one above

        while (iterationFront != NULL) { //whilst iterationFront isn't empty run loop

                if (iterationBack->carId > iterationFront->carId){ //if previous car id is greater than current car id
                    int tempId = iterationBack->carId; //switch id's for nodes
                    iterationBack->carId = iterationFront->carId;
                    iterationFront->carId = tempId;

                    char tempModel[100];
                    strcpy(tempModel, iterationBack->model); // switch models for nodes
                    strcpy(iterationBack->model, iterationFront->model);
                    strcpy(iterationFront->model, tempModel);

                    char tempType[100];
                    strcpy(tempType,iterationBack->type); // switch car types
                    strcpy(iterationBack->type, iterationFront->type);
                    strcpy(iterationFront->type, tempType);

                    int tempYearMan = iterationBack->year; //switch car year
                    iterationBack->year = iterationFront->year;
                    iterationFront->year = tempYearMan;

                    int tempPrice = iterationBack->price; //switchc car price
                    iterationBack->price = iterationFront->price;
                    iterationFront->price = tempPrice;
                }
                iterationFront = iterationFront->nextCar; // iterates through LL
        }
        iterationBack = iterationBack->nextCar; //iterates through LL
    }
}