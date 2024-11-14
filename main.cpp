#include <iostream>
#include "src/modules.h"
#include "format"
using namespace std;

int main() {
    cout << format("\033[34m  {}@{} \033[0m\n", user(),hostname());
    cout << format("\033[31m  processor: {}\033[0m\n", cpu_info());
    cout << format("\033[32m  processor cores: {}\033[0m\n", cores());
    cout << format("\033[35m  memory: {}\033[0m\n", ram_info());
    cout << format("\033[32m  distro: {}\033[0m\n", get_distro());
    cout << format("\033[36m  resolution: {}\033[0m\n", get_res());
    return 0;
}
