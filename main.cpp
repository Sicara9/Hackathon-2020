#include <iostream>
#include <vector>
#include <map>
#include <fstream>
#include <string>

#include "database.cpp"
#include "setup.cpp"
#include "hackathon.cpp"

using namespace std;

int main() {

//  int looper = 1;
  ofstream fOut;
  ifstream fin;
  string iDir;
  string tempDir;
  vector<string> fileT;
  map<string, int> files;

  parseDirectory(fin, fOut, tempDir, iDir);
  fin.close();
  addFileType(fin, fOut, fileT);
  databaseParser (fin, fOut, tempDir, fileT, files);
  fin.close();
  fileManager (fOut, tempDir, files, fileT);


  return 0;
}
