#ifndef MODULES_H
#define MODULES_H
#include "string"
std::string cpu_info();
unsigned int cores();
std::string ram_info();
std::string hostname();
std::string user();
std::string get_distro();
std::string get_res();

#endif
