#include "../include/headerA3.h"

int main (int argc, char* argv[]) {

    a3Car *headLL = NULL; // head of LL
    char fileName [MAX_LENGTH] = "inputFile.txt"; //file to open
    int programChoice = 0; 
    int nodePosition = 0;
    int idKey = 0;
    char keyCarModelType[100];
    int deletionChoice = 0;
    char noMoreCarInput;

    do {
    printf("Enter a number between 1 and 10, choose 11 to quit:\nChoose a menu option: "); //prompts user to choose
    scanf("%d", &programChoice); //saves it in scan function
    getchar(); //this makes sure program doesn't tweak out -ta

        switch(programChoice) { //switch statement based off user input
            case 1: // done
                
                addNewCar(&headLL); //calls addNewCar function
                break;
            case 2: // done
                
                loadCarData(&headLL, fileName); //calls loadCarData function
                break;
            case 3: // done but add commas
                
                printAll(headLL); // calls printAll function
                break;
            case 4: // done
                
                printf("Enter a positon: "); //enter position of node
                scanf("%d", &nodePosition); //saves it in scan function
                printOne(headLL, nodePosition); //calls printOne function with nodePosition argument
                break;
            case 5: // done
                
                printf("Enter key "); //prompts user to enter key to look for carId
                scanf("%d", &idKey); //saves it in scanf function

                //printf("%d\n", lookForCarId(headLL, idKey));
                lookForCarId(headLL, idKey); //calls lookForCarId function
                break;
            case 6: // done
                
                printf("Enter the car and model with space "); //enters car and model w space
                fgets(keyCarModelType, 100, stdin); //stores infromation via fgets function in keyCarModelType from standard input
                //printf("%d\n", lookForCarModelType(headLL, keyCarModelType)); // remove print statement
                lookForCarModelType(headLL, keyCarModelType); //calls lookForCarModelType
                break;
            case 7: // done
                
                printf("Total number of cars = %d\n", countCars(headLL)); //Prints total number of cars with function call
                break;
            case 8: // done
                
                sortCarId(&headLL); //calls sortCarId
                break;
            case 9:// done
                
                printf("Currently, there are %d cars.\n", countCars(headLL)); //calls countCars function to print # of cars
                printf("Which car do you wish to remove - enter a value between 1 and 5: "); //asks user what car they want to remove
                scanf("%d", &deletionChoice); //scans answer in function
                oneLessCar(&headLL, deletionChoice); //calls oneLessCar
                break;
            case 10: // done
                
                printf("Are you sure you want to remove all car data (enter y for yes, n for no): "); //asks user if theyre sure they want to delete all car data
                scanf("%s", &noMoreCarInput); //scans user input
                
                if (noMoreCarInput == 'y'){ //if the user input in y
                    noMoreCars(&headLL); //call noMoreCars function with headLL as arg
                }
                break;
            case 11:
                break; //in case 11 if user wants to quit program
            default:
                printf("Invalid choice\n"); //prints invalid choice
        }
    } while (programChoice != 11); // repeat loop whilst user chooses anything but 11

    return 0; //returns 0 for successful completion
}
// run in linux server

