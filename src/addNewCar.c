#include "../include/headerA3.h"
#include <time.h>
void addNewCar (struct car ** headLL){

    int asciiValue = 0; // will help calculate ascii value
 
    struct car* newNode = (struct car*)malloc(sizeof(struct car)); //dynamically allocates memory for newNode

        if (newNode == NULL) { //checks if newNode is still null, which means that memory allocation didnt occur
            printf("Memory allocation failed\n");
            return;
        }

    printf("Enter the car model: "); // asks for car model and saves it in newNode
    scanf("%s", newNode->model);

    printf("Enter the car type: "); //asks for car type and saves it in newNode
    scanf("%s", newNode->type);

    printf("Enter its year of manufacture: "); //asks for car year and saves it in newNode
    scanf("%d", &newNode->year);

    printf("Enter its price: CDN $ "); //asks for car price and saves it in newNode
    scanf("%lf", &newNode->price);

    for (int i = 0; i < strlen(newNode->model); i++){  // calculates asciiValue by adding each character of model's asciiValue in
        asciiValue += newNode->model[i];
    }

    asciiValue += strlen(newNode->type); // adds length of car type to ascii value

    newNode->carId = asciiValue; // inputs asciiValue in newNode carId


    newNode->nextCar = NULL; // sets newNode->nextCar to null since it will be on the end of the list, and sometimes it gets annoying
    
    if (*headLL == NULL){ //conditional to check if theres nothing in head of ll, then newNode becomes head
        *headLL = newNode;
    }
    else { // if above statement not true
        a3Car *temp = *headLL; //temporary struct to iterate
    
        while (temp->nextCar != NULL){ //while iteration dont point to null
            temp = temp->nextCar; //iteration continues
        }
        
        temp->nextCar = newNode; //once temp is at last LL, it points to newNode, so newNode joins the list
        
        if (newNode->carId == temp->carId) { // if the newNode ID is the same as the one's before it, then add random numbers to make it different
            srand(time(NULL)); // Seed
            int randomNum = (rand() % 99) + 1; // this generates random number between 1 and 99 saves in var
            newNode->carId += randomNum; //add var to carId of newNode to make it unique
        }
        
    }

    printf("Your computer-generated carId is: %d\n", newNode->carId);  
}


