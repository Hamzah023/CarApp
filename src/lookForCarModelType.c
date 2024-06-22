#include "../include/headerA3.h"

int lookForCarModelType(struct car *headLL, char key[100]) {
    a3Car *parse = headLL; //parse var
    int count = 0; //count var
    char modelVar[100]; //modelVar for holding model info
    char typeVar[100]; //typeVar for holding type info
    char space = ' '; //space to make it look good

    while (parse != NULL) { //whilst LL is not null
        count++; //count goes up by 1
        strcpy(modelVar, parse->model); //LL model saved in model var
        strcpy(typeVar, parse->type); // LL type saved in typeVar
        strcat(modelVar, &space); //space saved in modelVar
        strcat(modelVar, typeVar); //typeVar saved after modelVar

        if (strcmp(key, modelVar) != 1) { // if key and modelVar are the same

            return count; //returns counts
        }
    
        parse = parse->nextCar; //iterates through LL
    }
    
    return -1; // if right node not found then return error signal
}
