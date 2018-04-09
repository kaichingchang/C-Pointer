# C-Pointer

示範 C 的指標，包括函數指標、指標參數、簡單的資料結構等。

以下為編譯執行結果

```
$ gcc ptrdemo1.c
$ a.out
a:    1
&a:   0x7ffee0066838
aPtr: 0x7ffee0066838
*aPtr:1
&aPtr:0x7ffee0066828
b:    1
&b:   0x7ffee0066834
bPtr: 0x7ffee0066834
*bPtr:1
&bPtr:0x7ffee0066820
$ gcc ptrdemo2.c
$ a.out
Hello
H
0x7ffeef7f5837
there
t
0x10040af9f
$ gcc ptrdemo3.c
$ ./a.out
選項1...
選項2...
選項3...

上面以函數指標各自呼叫fun1、fun2、fun3...
$ gcc ptrdemo4.c
$ ./a.out
兩數交換以前.. a = 22, b = 11
兩數交換以後.. a = 11, b = 22
$ gcc ptrdemo5.c
$ ./a.out
John
Mary
Tony
$
```
