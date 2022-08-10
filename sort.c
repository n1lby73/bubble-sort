#include <stdio.h>

int length;
int array[10];
int number;
int constant;
int sorted = 1;

int main(){

    printf("Input your value: ");
    scanf("%d", &number);

    while( number > 0){

        length++;
        array[length-1] = number;

        printf("Input your value: ");
        scanf("%d", &number);

    }

    for( int i = 0; i < length; i++){

        for( int j = 0; j <= length; j++ ){

           if (array[j] > array[j+1]){

                constant = array[j];
                array[j] = array[j+1];
                array[j+1] = constant;

           }

        }

    }

    printf("\nYour sorted array are: \n\n");

    while(sorted <= length){

        printf("%d\n", array[sorted]);
        sorted+=1;

    }

}
