#Minctest


Minctest is a very minimal unit-testing "framework" written in ANSI C and
implemented in a single header file. It's handy when you want some real simple
unit tests for a small project.

Basically, it implements assertion and equal functions. It'll track and time
how many tests pass and fail. Failed tests will also display which line the
failing test code was on.

There is a [Lua port here.](https://github.com/codeplea/minctest-lua)

##Features

- **ANSI C with no dependencies**.
- Single header file.
- Reports file and line number for failed assertions.
- Reports run time for each test.
- Tests continue even after an assertion fails.
- Has assertion for checking float equality.
- Released under the zlib license - free for nearly any use.

##Example

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


That produces the following output:

            test1         pass: 1   fail: 0      0ms
            test2         pass: 2   fail: 0      1ms
    ALL TESTS PASSED (3/3)



##Hints
     All functions/variables start with the letter 'l'.

##Users

Minctest is used in almost all of my C projects, including:

* [TinyExpr - Math Expression Evaluation Library](https://codeplea.com/tinyexpr)
* [Genann - Neural Network Library](https://codeplea.com/genann)

You can check those out to see how Minctest is used in practice.

If you're using Minctest in your project, let me know. I could add a link back.
