#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "ru");
    const int MAX_SIZE = 10000;
    char poem[MAX_SIZE];
    ofstream outputFile("poem.txt");
    cout << "������� �������������:" << endl;
    cin.getline(poem, MAX_SIZE);
    outputFile << poem;
    outputFile.close();
    cout << "������ ������� �������� � ����." << endl;
    return 0;
}