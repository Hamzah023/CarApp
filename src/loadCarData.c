#include "../include/headerA3.h"
#include <time.h>
void loadCarData(struct car **headLL, char fileName[MAX_LENGTH]) {

    FILE *fp; //open file

    fp = fopen(fileName, "r"); //set to reading mode

    if (fp == NULL) //if file is null then print failed to open
    {
        printf("Failed to open file %s\n", fileName);
    }

    int tempID, tempYear; // vars
    double tempPrice;
    char tempModel[25];
    char tempType[25];
    while (fscanf(fp, "%d, %[^,],%[^,], %d, %lf", &tempID, tempModel, tempType, &tempYear, &tempPrice) == 5) // loop that continues scans information from file
    {
        //printf("\nproblem\n");
        //printf("%d, %s, %s, %d, %lf", tempID, tempModel, tempType, tempYear, tempPrice);
        struct car *newNode = (struct car *)malloc(sizeof(struct car)); // dynamically allocating memory for newNode
        
        newNode->carId = tempID; // assigns id saved from file in variable into newNode
        strcpy(newNode->model,tempModel); // assigns model saved from file in variable into newNode
        strcpy(newNode->type, tempType); // assigns type saved from file in variable into newNode
        newNode->year = tempYear; // assigns year saved from file in variable into newNode
        newNode->price = tempPrice; // assigns price saved from file in variable into newNode
        
        //printf("\nOnce in node, the price is %.2f\n", newNode->price);

        if (newNode == NULL) //conditional to check if memory allocation failed
        {
            printf("Memory allocation failed\n");
            return;
        }

        if (*headLL == NULL){ // if headLL is null then make newNode new head of LL
            *headLL = newNode;
        }
        else {
            a3Car *temp = *headLL; // temp var
            
            while (temp->nextCar != NULL){ // while LL not null
                temp = temp->nextCar; //parse through LL
            }
            
            temp->nextCar = newNode; //assigns newNode to tail end of LL

            if (newNode->carId == temp->carId) { // checks if an id is the same as a previous one
                srand(time(NULL)); // Seed
                int randomNum = (rand() % 99) + 1; // this generates random number between 1 and 99
                newNode->carId += randomNum; 
            }

            newNode->nextCar = NULL; // assigns newNode to point to nothing to signify that it is end of the list
        }

       
    }
    fclose(fp); // closes file
}
