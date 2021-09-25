#include <iostream>
#include <cstdlib> // for atoi() and atof() library functions
using namespace std;
int main(int argc, char* argv[])
{
int n1, n2, sumi; 
double x1, x2, sumf;
n1 = atoi(argv[1]);
n2 = atoi(argv[2]);
sumi = n1 + n2;
cout << "\n*** Output from the execution of argc_arg_v_demo2.cpp ***"<< endl;
cout << "Demonstrating atoi():" << endl;
cout << "  argv[1] = " << argv[1] << endl; 
cout << "  argv[2] = " << argv[2] << endl;
cout << "  " << n1 << " + " << n2 << " = " << sumi << endl;
x1 = atof(argv[3]);
x2 = atof(argv[4]);
sumf = x1 + x2;
cout << "\nDemonstrating atoi():" << endl;
cout << "  argv[3] = " << argv[3] << endl; 
cout << "  argv[4] = " << argv[4] << endl;
cout << x1 << " + " << x2 << " = " << sumf << endl;
  
return 0;
}