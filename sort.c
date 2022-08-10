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
    scanf("%d", &userInput);

    while(userInput <= 0){

        printf("Input a number greater than zero to continue: ");
        scanf("%d", &userInput);

    }

    int array[userInput];

    printf("\nInput value number %d: ", userInputTracking);
    scanf("%d", &userNumber);

    array[0] = userNumber;

    while(( userNumber > 0) && (userInputTracking <  userInput)){

        arrayIndex++;
        userInputTracking++;
        count++;

        if (userInputTracking == userInput){

            printf("\nInput your last value: ");
            scanf("%d", &userNumber);

            array[arrayIndex] = userNumber;

        }

        else{

            printf("\nInput value number %d: ", userInputTracking);
            scanf("%d", &userNumber);

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
    scanf("%d", &restart);

    while((restart != 0) && (restart != 1)){

        printf("\nInvalid input\n\nYou have %d trial left: ", trial-invalid);
        scanf("%d", &restart);

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
        scanf("%d", &userInput);

        while(userInput <= 0){

            printf("Input a number greater than zero to continue: ");
            scanf("%d", &userInput);

        }

        int array[userInput];

        printf("\nInput value number %d: ", userInputTracking);
        scanf("%d", &userNumber);

        array[0] = userNumber;
        int count = 0;
        while(( userNumber > 0) && (userInputTracking <  userInput)){

            arrayIndex++;
            userInputTracking++;
            count++;

            if (userInputTracking == userInput){

                printf("\nInput your last value: ");
                scanf("%d", &userNumber);

                array[arrayIndex] = userNumber;
                printf("array index ==> %d", arrayIndex);

            }

            else{

                printf("\nInput value number %d: ", userInputTracking);
                scanf("%d", &userNumber);

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
        scanf("%d", &restart);

        while((restart != 0) && (restart != 1)){

            printf("\nInvalid input\n\nYou have %d trial left: ", trial-invalid);
            scanf("%d", &restart);

            if(invalid == 3){

                printf("\nNumber of trials excedded\n");
                break;
            }

            invalid++;

        }

    }

    printf("\nThanks for using this program");
}

