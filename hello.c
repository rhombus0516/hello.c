#include <stdio.h>

/* 基本に忠実なFizzBuzz */
int main(void)
{
    int i ;

    for (i = 1;i <= 100;i++)
    {
        if (i % 3 == 0 && i % 5 == 0 ) {
            printf("Fizz Buzz\n");
        } else if( i % 3 == 0) {
            printf("Fizz\n");
        } else if( i % 5 == 0) {
            printf("Buzz\n");
        } else {
            printf("%d\n",i);
        }
    } 

    printf("終了\n",i); /* 日本語表示テスト */

    return 0;
}


