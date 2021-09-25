#include <iostream>
#include<cstring>
using namespace std;

int main(int argc, char* argv[])
{
cout << "argc = " << argc << endl;
for (int i = 0; i < argc; i++)
cout << "argv[" << i << "]: " << argv[i] << endl;
cout << endl;
// Each argv[i] is a C-string or a null-terminated array of characters
for (int i = 0; i < argc; i++)
cout << "Length of argv[" << i << "] = " << strlen(argv[i]) << endl;
cout << endl;
// Display the contents of argv[0] character by character; other argv[i] are similar
for (int i = 0; i < strlen(argv[0])+1; i++)
cout << argv[0][i] << endl;
if (argv[0][5] == '\0')
cout << "Null character is stored in argv[0][5]" << endl << endl;
return 0;
}