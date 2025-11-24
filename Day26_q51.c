/* Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345
*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(int i = 1 ; i<=n ; i++){
        for(int j = 1 ; j<=n ; j++){
            if(j<=n-i){
                printf(" ");
            }else{
                printf("%d",j);
            }
        }
        printf("\n");
    }
    return 0;
}

/*
Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/