#include "../modules.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

static const string ERR = "cannot get cpu info";
static const string search_text = "model name";

std::string cpu_info() {
    ifstream cpu("/proc/cpuinfo");

    if (!cpu.is_open()) {
        return ERR;
    }

    string line;
    string search_text = "model name";

    while (getline(cpu, line)) {
        if (line.find(search_text) != string::npos) {
            return line.substr(line.find(':') + 2);
        }
    }

    cpu.close();
    return ERR;
}

unsigned int cores() {
    string line;
    int count = 0;


    ifstream cpu("/proc/cpuinfo");
    if (!cpu.good()) {
        return count;
    }

    while (getline(cpu, line)) {
        if (line.find(search_text) != std::string::npos) {
            count++;
        }
    }
    return count;
}