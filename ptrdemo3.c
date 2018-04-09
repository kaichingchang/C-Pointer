#include <stdio.h>

void fun1(void);
void fun2(void);
void fun3(void);

int main(void) {
    //宣告變數
    void (*f[3])(void) = {fun1, fun2, fun3};
    int i;

    //依序呼叫函數
    for (i = 0; i < 3; i++) {
        (*f[i])();
    }
    printf("\n上面以函數指標各自呼叫fun1、fun2、fun3...\n");

    return 0;
}

void fun1(void) {
    printf("選項1...\n");
}

void fun2(void) {
    printf("選項2...\n");
}

void fun3(void) {
    printf("選項3...\n");
}

/*《程式語言教學誌》的範例程式
   http://kaiching.org/
   檔名：ptrdemo3.c
   功能：示範函數指標
   作者：張凱慶 */
