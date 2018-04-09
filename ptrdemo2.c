#include <stdio.h>

int main() {
    //宣告建立變數
    char s1[] = {'H', 'e', 'l', 'l', 'o'};
    char *s2 = "there";

    //印出結果
    printf("%s\n", s1);
    printf("%c\n", *s1);
    printf("%p\n", s1);
    printf("%s\n", s2);
    printf("%c\n", *s2);
    printf("%p\n", s2);

    return 0;
}

/*《程式語言教學誌》的範例程式
   http://kaiching.org/
   檔名：ptrdemo2.c
   功能：示範陣列、字串與指標
   作者：張凱慶 */
