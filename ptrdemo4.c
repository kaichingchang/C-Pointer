#include <stdio.h>

void swap(int *, int *);

int main(void) {
    //宣告建立變數
    int a = 22;
    int b = 11;

    //進行交換
    printf("兩數交換以前.. a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("兩數交換以後.. a = %d, b = %d\n", a, b);

    return 0;
}

void swap(int *aPtr, int *bPtr) {
    int temp;

    temp = *aPtr;
    *aPtr = *bPtr;
    *bPtr = temp;
}

/*《程式語言教學誌》的範例程式
   http://kaiching.org/
   檔名：ptrdemo4.c
   功能：示範利用指標交換變數值
   作者：張凱慶 */
