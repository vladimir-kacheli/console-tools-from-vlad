#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  ofstream output_file ("output.txt");
  if (output_file.is_open())
  {
  }
  else cout << "Unable to open file";
  string line, line1;
  ifstream input_file ("input.txt");
  if (input_file.is_open())
  {
      getline (input_file,line);
      line1 = line;
    while ( getline (input_file,line) )
    {
        if (!(line==line1)) {
      cout << line << '\n';
      output_file << line << '\n';
        }

      line1 = line;
    }
    output_file.close();
    input_file.close();
  }
  cin >> line;
  return 0;
}
