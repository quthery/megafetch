#include <iostream>
#include "src/modules.h"
#include "src/print.h"
#include "format"
using namespace std;

int main() {
    std::cout << cpu_info() << std::endl;
    cout << format("\033[31m processor: {}\033[0m\n", cpu_info());
    cout << format(" processor cores: {}\n", cores());
    cout << format(" memory: {}\n", ram_info());
    return 0;
}
