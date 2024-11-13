#include <string>
#include <iostream>
#include <format>
using namespace std;

void print(const char* text, string color) {
    cout << format("{}{}{}\n", color, text, color);
}
