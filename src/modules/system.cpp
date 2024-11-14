#include <string>
#include "../modules.h"
#include "../utils.h"
using namespace std;

string hostname(){
    return execCommand("hostname");
}

string user(){
    return execCommand("whoami");
}
