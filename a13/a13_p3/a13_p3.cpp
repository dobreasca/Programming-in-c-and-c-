/*
  CH-230-A
  a13_p3.cpp
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n, i, length;
    cin>>n;
    string inputfile;
    ofstream out("concatn.txt", ios::binary | ios::trunc);
    for(i=0; i<n; i++)
    {
      cin>>inputfile;
      ifstream in(inputfile, ios::binary);
      if(!in.good())//checks is the file opened successfully
      {
          cout<<"an error occured while opening "<<inputfile<<'\n';
          return 1;
      }
      if(in.is_open() && out.is_open())//checks if both files are open
      {
        in.seekg(0, ios::end);
        length=in.tellg(); //stores the file length
        in.seekg(0, ios::beg);//goes to the beginning of the file
        char *buffer=new char[length];
        //buffer will store the file's content
        in.read(buffer, length);
        out.write(buffer, length);
        out<<'\n';//places the newline character after the file's content 
        delete [] buffer;
      }
      in.close();
    }
    out.close();
    return 0;
}