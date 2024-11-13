#include "../modules.h"
#include "../utils.h"
#include <string>
#include <fstream>
#include <format>
using namespace std;

string ram_info() {
    string line;
    int total_ram {};
    int free_ram {};

    ifstream ram("/proc/meminfo");

    while (getline(ram, line)) {
        if (line.find("MemTotal") != string::npos) {
            total_ram = stoi(line.substr(line.find(':') + 1));
        }else if (line.find("MemAvailable") != string::npos) {
            free_ram = stoi(line.substr(line.find(':') + 1));
            break;
        }

    }
    ram.close();

    string s_out;
    double free_ram_gb = free_ram / (1024.0 * 1024.0);
    double total_ram_gb = round_to_hundredth(total_ram / (1024.0 * 1024.0));
    double used_ram_gb = round_to_hundredth(total_ram_gb - free_ram_gb);
    s_out = format("{} / {} Gib",
        used_ram_gb, total_ram_gb);  //to_string(total_ram / 1024) + "MiB";

    return s_out;
}

