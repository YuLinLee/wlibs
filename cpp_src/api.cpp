#include <iostream>
#include <string>
#include "utils.h"
extern "C" {
    #include "func.h"
}
using namespace std;

void print_string(string input) {
    cout << "return: " << test() << endl;
    cout << input << endl;
    cout << c_test() << endl;
    autofree int *i = (int *)malloc(sizeof(int));
    *i=1;
    cout << *i << endl;
}