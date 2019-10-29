
#include "stack_hed.h"


int main () {
    struct stack_t stk = {"stk"};


    int max_size = 0;

    printf("Enter stack size: ");
    scanf("%d", &max_size);//ssize_t


    init_stack(&stk, max_size);

    printf("Enter commands: ");
    for (int i = 0; i < 10; ++i) {
        int n = readCommand(&stk);
    }
    stackClear(&stk);
    return 0;
}
//UNITTEST(x, cond, y) if ((x) (cond) (y))
//    MULL(x, y) x * y;
//TODO
// 1 pop's return value done
// 2 size not known done
// 3 Dump for any reason blyaa
// 4 CODE STYLE !!!!!!!!!!!!!!!!!!!! done
// 5 StackOK in assert done
// 6 pre-processor done
// 7 look for mistakes and
//   not evident cases done
