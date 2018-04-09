#include <stdio.h>

int main() {
    //宣告變數
    int a, b, *aPtr, *bPtr;

    //指派數值
    a = 1;
    aPtr = &a;
    bPtr = &b;
    *bPtr = *aPtr;

    //變數a的值
    printf("a:    %d\n", a);
    //變數a的記憶體位址
    printf("&a:   %p\n", &a);
    //變數aPtr的值
    printf("aPtr: %p\n", aPtr);
    //變數aPtr所指向的值
    printf("*aPtr:%d\n", *aPtr);
    //變數aPtr的記憶體位址
    printf("&aPtr:%p\n", &aPtr);
    //變數b的值
    printf("b:    %d\n", b);
    //變數b的記憶體位址
    printf("&b:   %p\n", &b);
    //變數bPtr的值
    printf("bPtr: %p\n", bPtr);
    //變數bPtr所指向的值
    printf("*bPtr:%d\n", *bPtr);
    //變數bPtr的記憶體位址
    printf("&bPtr:%p\n", &bPtr);

    return 0;
}

/*《程式語言教學誌》的範例程式
   http://kaiching.org/
   檔名：ptrdemo1.c
   功能：示範指標
   作者：張凱慶 */
