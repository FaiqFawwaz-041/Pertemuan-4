#include <iostream>
using namespace std;
#include "input.h"
#include "proses.h"
#include "output.h"

int main(){
  Input x;
  x.masukan();
  
  Proses x;
  x.proses();
  
  Output x;
  x.output();
  return 0;
  
}