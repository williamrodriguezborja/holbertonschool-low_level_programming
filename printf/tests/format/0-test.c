#include "../../holberton.h"
#include "../test.h"

int main(void)
{
    /* code */
    hello();
    set_test_title("test case for format");
    print_test("Test all escapes chars", "*\\'\"Holberton School\"\'\\*$\?*****:)");
    print_test("Test escape \'", "\'");
    print_test("Test Hello", "Hello case");
    return 0;
}
