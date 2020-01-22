#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
 	ifstream fin;
 	ofstream fout;

	// check if there are enough arguments
	if (argc == 3) {
    string inFile = argv[1];
    string outFile = argv[2];

    // open the first file
    fin.open(inFile);
    char c;

    if (fin.fail()) // check if it is successful
    {
      cerr << " Cannot open the input file!" << endl;
      return 1;
    }


    // open the second file
    fout.open(outFile);

    if (fout.fail())
    {
      cerr << " Cannot open the output file!" << endl;
      return 1;
    }

    while(fin.get(c))
    {
      fout << c;
    }

    fin.close();

    fout.close();

  } else {
    cerr << "Received an invalid number of command arguments! Expected 3,"
              << " got " << argc << "." << '\n';
  }
 	 return 0;

 }
