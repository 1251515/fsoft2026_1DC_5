#include <iostream>
#include "headers/controller/Controller.h"

using namespace std;
using namespace loja::controller;

int main() {

    Controller controller;

    controller.exec();

    cout << "Application has exited" << endl;

    return 0;
}