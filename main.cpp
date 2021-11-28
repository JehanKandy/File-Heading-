#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream JKFile("JK.txt");

    JKFile << "Hi I am JehanKandy \n ";
    JKFile << "Hi I am a Sri Lankan ";


    JKFile.close();

    cout << "File Create Successfully";

    return 0;
}
