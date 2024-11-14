#include <fstream>
#include <string>
#include "../modules.h"
using namespace std;

string get_distro() {
    // Get operating system name
    string line, os_name;

    // Read /etc/os-release file
    ifstream infile("/etc/os-release");

    while(infile.good()) {
        getline(infile, line);
        if (line.find("PRETTY_NAME") != string::npos) {
            os_name = line.substr(line.find("=") + 1);
            break;
        }
    }
    infile.close();

    // Remove ""
    os_name = os_name.substr(1, os_name.length() - 2);

    return os_name;
}
