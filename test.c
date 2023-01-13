#include <stdio.h>
#include <string.h>
int input;
// int length(int a){
//     int count = 0;
//     for (int i = 0; != '\0'; i++) {
//         count++;
//     }
// }
int main() {


    // char input[100];
    printf("Enter a string: ");
    scanf("%d", &input);

    char str[20];
    sprintf(str, "%d", input);
    int length = strlen(str);

    for (int i = 0; i <= length; i++){

        if input(i) == '\0';
        printf("new line detected");
        break;

    }
    while(input <= 0){

        printf("Input a number greater than zero to continue: ");
        scanf("%d", &input);

    }
    // int length = 0;
    // for (int i = 0; input[i] != '\0'; i++) {
    //     length++;
    // }
    // printf("The length of the input string is: %d\n", length);
    // return 0;
}

// #include <stdio.h>
// #include <ctype.h>

// int b;
// int main(){

//     // b = 7 * 1;

//     // printf("%d", b);

//     printf("try input a number");

//     while (scanf("%d", &b) != 1){
//         printf ("wrong");
//         break;
//     }
// }