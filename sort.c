#include <stdio.h>

int userNumber;
int constant;
int sorted = 1;
int userInput;
int userInputTracking = 1;
int arrayIndex;
int count;

int main(){


    printf("How many values do you want to sort: ");
    scanf("%d", &userInput);

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


    while(sorted <= count){

        printf("%d\n", array[sorted]);
        sorted+=1;

    }

}
