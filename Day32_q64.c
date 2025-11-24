// Q64: Find the digit that occurs the most times in an integer number.

#include <stdio.h>
int main() {
    long long n, temp;
    int d, i, cnt, maxd=0, maxc=0;

    printf("Enter number: ");
    scanf("%lld",&n);

    if(n<0) n = -n;   // just in case negative

    for(i=0;i<=9;i++) {
        temp=n;
        cnt=0;
        while(temp>0) {
            d=temp%10;
            if(d==i) cnt++;
            temp=temp/10;
        }
        if(cnt>maxc) {
            maxc=cnt;
            maxd=i;
        }
    }

    printf("Most frequent digit = %d (appears %d times)\n",maxd,maxc);

    return 0;
}


/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/