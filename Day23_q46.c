/* Q46: Write a program to print the following pattern:
*****
*****
*****
*****
*****
*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(int i = 1 ; i<=n ; i++){
        for(int j = 1 ; j<=n; j++){
            printf("*");
        }
        printf("\n");
    }


    return 0;
}

/*
Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****

*/