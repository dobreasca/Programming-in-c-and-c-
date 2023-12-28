/*
  CH-230-A
  a13_p1.cpp
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string name, inputfile, newfile, ext;
    int pos, n;
    //pos will be the dot's position
    //n is the length of the string
    char a;
    cin>>inputfile;
    n=inputfile.length();
    pos=inputfile.find_last_of('.');
    name=inputfile.substr(0, pos);
    ext=inputfile.substr(pos, n);
//the filename and the extension have been separated
    newfile=name+"_copy"+ext;
//the copy file's name has been created
    ifstream in(inputfile);
    if(!in.good())
    {
        cout<<"an error occured while opening the input file!"<<'\n';
        return 1;
    }
    ofstream out(newfile, ios::trunc);
    if(!out.good())
    {
        cout<<"an error occured while opening the output file!"<<'\n';
        return 1;
    }
//the program ends if these errors occur
    if(in.is_open() && out.is_open())
        while(in.get(a))
            out<<a;
    else
        cout<<"there was an error when opening one of the files!"<<'\n';
//transfers the input file's content to the new file
    in.close();
    out.close();
//the files have been closed
    return 0;
}