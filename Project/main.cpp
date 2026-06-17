#include <iostream>
#include "headers/controller/Controller.h"
#include <windows.h>
using namespace std;
using namespace loja::controller;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    Controller controller;

    controller.exec();

    cout << "Application has exited" << endl;

    return 0;
}