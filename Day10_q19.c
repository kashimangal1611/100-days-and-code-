// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include<stdio.h>
int main(){
    int a,b,c; // a,b,c are the side of triangle
    printf("Enter first side : ");
    scanf("%d",&a);
    printf("Enter second side : ");
    scanf("%d",&b);
    printf("Enter the third side : ");
    scanf("%d",&c);

    // Condition to check the property of triangle  

    if(a==b && b==c && a==c){    // All  three sides are equal
        printf("The triangle is equilateral"); 
    }
    else if(a==b || b==c || a==c){ // Any two sides are equal 
        printf("The triangle is isocesles");
    }
    else{  // every side is different from other 
        printf("The triangle is scalene");
    }
    return 0;
}