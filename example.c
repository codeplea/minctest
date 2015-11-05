/* Simple example of using MINCTEST to test a couple obvious cases. */

#include "minctest.h"

void test1() {
    lok('a' == 'a');
}

void test2() {
    lequal(5, 5);
    lfequal(5.5, 5.5);
}

int main(int argc, char *argv[])
{
    lrun("test1", test1);
    lrun("test2", test2);
    lresults();
    return lfails != 0;
}

