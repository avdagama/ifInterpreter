#include <string>
#include <iostream>
#include "ifinterpreter.h"
using namespace std;

const string FILENAME = "if.html";

int main()
{
  IFInterpreter* interpreter = new IFInterpreter(FILENAME);
  interpreter->print();

  delete interpreter;
  return 0;
}