#include <iostream>

using namespace std;
int main(int argc, char* argv[])
{

cout << "\n*** Output from the execution of myUtility.cpp *** " <<endl;
if(argc == 1){
    cout << " myUtility executed with option -a -b -c -d" << endl;
 } else{
 for (int i = 1; i < argc; i++){
  cout << " myUtility executed with option "<< argv[i] << endl;
 }
}
return 0;
}