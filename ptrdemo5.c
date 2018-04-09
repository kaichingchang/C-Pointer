#include <stdio.h>

typedef struct list {
    char *name;
    struct list *nextPtr;
} List;

int main(void) {
    //宣告變數
    List a, b, c, *startPtr;

    //設定name成員
    a.name = "John";
    b.name = "Mary";
    c.name = "Tony";

    //設定nextPtr成員
    startPtr = &a;
    a.nextPtr = &b;
    b.nextPtr = &c;
    c.nextPtr = NULL;

    //走訪鏈結串列
    while (startPtr != NULL) {
        printf("%s\n", startPtr->name);
        startPtr = startPtr->nextPtr;
    }

    return 0;
}

/*《程式語言教學誌》的範例程式
   http://kaiching.org/
   檔名：ptrdemo5.c
   功能：自我參考的結構
   作者：張凱慶 */
