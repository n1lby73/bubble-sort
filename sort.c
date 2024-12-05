#include <stdio.h>

int userNumber;
int constant;
int sorted;
int userInput;
int userInputTracking = 1;
int arrayIndex;
int count;
int restart;
int invalid;
int trial = 3;

int main(){


    printf("How many values do you want to sort: ");

    if (scanf("%d", &userInput) != 1){

        printf("\nKindly input an integer");

        return 0;
    }

    while(userInput <= 0){

        printf("Input a number greater than zero to continue: ");

        if (scanf("%d", &userInput) != 1){

            printf("\nKindly input an integer");

            return 0;

        }

    }

    int array[userInput];

    printf("\nInput value number %d: ", userInputTracking);

    if (scanf("%d", &userNumber) != 1){

        printf("\nKindly input an integer");

        return 0;

    }

    array[0] = userNumber;

    while(( userNumber > 0) && (userInputTracking <  userInput)){

        arrayIndex++;
        userInputTracking++;
        count++;

        if (userInputTracking == userInput){

            printf("\nInput your last value: ");

            if (scanf("%d", &userNumber) != 1){

                printf("\nKindly input an integer");

                return 0;

            }

            array[arrayIndex] = userNumber;

        }

        else{

            printf("\nInput value number %d: ", userInputTracking);
            
            if (scanf("%d", &userNumber) != 1){

                printf("\nKindly input an integer");

                return 0;

            }

            array[arrayIndex] = userNumber;
    
        }

    }

    for( int i = 0; i < count; i++){

        for( int j = 0; j < count; j++ ){

           if (array[j] > array[j+1]){

                constant = array[j];
                array[j] = array[j+1];
                array[j+1] = constant;

           }

        }

    }

    printf("\nYour sorted array are: \n\n");

    if(array[0] == 0){

        sorted = 1;

    }
    
    while(sorted <= count){

        printf("%d\n", array[sorted]);
        sorted+=1;

    }

    printf("\n\nDo you want to restart the program\n1 ==> yes\n0 ==> no");

    printf("\n\nPlease choose: ");

    if (scanf("%d", &restart)!= 1){

        printf("\nKindly input 0 or 1");

        return 0;

    }

    while((restart != 0) && (restart != 1)){

        printf("\nInvalid input\n\nYou have %d trial left: ", trial-invalid);

        if (scanf("%d", &restart) != 1){

            printf("\nKindly input an integer");
            break;

        }

        if(invalid == 3){

            printf("\nNumber of trials excedded\n");
            break;
        }

        invalid++;

    }


    while(restart == 1){

        int constant;
        int sorted;
        int userInputTracking = 1;
        int arrayIndex;

        printf("\nHow many values do you want to sort: ");

        if (scanf("%d", &userInput) != 1){

            printf("\nKindly input an integer");

            break;

        }

        while(userInput <= 0){

            printf("Input a number greater than zero to continue: ");

            if (scanf("%d", &userInput) != 1){

            printf("\nKindly input an integer");

            break;

        }

        }

        int array[userInput];

        printf("\nInput value number %d: ", userInputTracking);

        if (scanf("%d", &userNumber) != 1){

            printf("\nKindly input an integer");

            break;

        }

        array[0] = userNumber;
        int count = 0;
        while(( userNumber > 0) && (userInputTracking <  userInput)){

            arrayIndex++;
            userInputTracking++;
            count++;

            if (userInputTracking == userInput){

                printf("\nInput your last value: ");

                if (scanf("%d", &userNumber) != 1){

                    printf("\nKindly input an integer");

                    break;

                }

                array[arrayIndex] = userNumber;
                printf("array index ==> %d", arrayIndex);

            }

            else{

                printf("\nInput value number %d: ", userInputTracking);

                if (scanf("%d", &userNumber) != 1){

                    printf("\nKindly input an integer");

                    break;

                }

                array[arrayIndex] = userNumber;

                printf("array index ==> %d", arrayIndex);
        
            }

        }

        for( int i = 0; i < count; i++){

            for( int j = 0; j < count; j++ ){

                if (array[j] > array[j+1]){

                    constant = array[j];
                    array[j] = array[j+1];
                    array[j+1] = constant;

                }

            }

        }

        printf("\nYour sorted array are: \n\n");

        if(array[0] == 0){

            sorted = 1;

        }
        
        while(sorted <= count){

            printf("%d\n", array[sorted]);
            sorted+=1;

        }

        printf("\n\nDo you want to restart the program\n1 ==> yes\n0 ==> no");

        printf("\n\nPlease choose: ");
        
        if (scanf("%d", &restart)!= 1){

            printf("\nKindly input 0 or 1");

        }

        while((restart != 0) && (restart != 1)){

            printf("\nInvalid input\n\nYou have %d trial left: ", trial-invalid);

            if (scanf("%d", &restart) != 1){

                printf("\nKindly input an integer");
                break;

            }

            if(invalid == 3){

                printf("\nNumber of trials excedded\n");
                break;
            }

            invalid++;

        }

    }

    printf("\nThanks for using this program");
}

