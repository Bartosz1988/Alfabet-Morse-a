#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

void zamianaNaMorsea(string wyraz)
{
    map<char, string> alfabetMorsea;
    alfabetMorsea['A'] = ".-";
    alfabetMorsea['B'] = "-...";
    alfabetMorsea['C'] = "-.-.";
    alfabetMorsea['D'] = "-..";
    alfabetMorsea['E'] = ".";
    alfabetMorsea['F'] = ".-..";
    alfabetMorsea['G'] = "--.";
    alfabetMorsea['H'] = "....";
    alfabetMorsea['I'] = "..";
    alfabetMorsea['J'] = ".---";
    alfabetMorsea['K'] = "-.-";
    alfabetMorsea['L'] = "..-.";
    alfabetMorsea['M'] = "--";
    alfabetMorsea['N'] = "-.";
    alfabetMorsea['O'] = "---";
    alfabetMorsea['P'] = ".--.";
    alfabetMorsea['Q'] = "--.-";
    alfabetMorsea['R'] = ".-.";
    alfabetMorsea['S'] = "...";
    alfabetMorsea['T'] = "-";
    alfabetMorsea['U'] = "..-";
    alfabetMorsea['V'] = "...-";
    alfabetMorsea['W'] = ".--";
    alfabetMorsea['X'] = "-..-";
    alfabetMorsea['Y'] = "-.--";
    alfabetMorsea['Z'] = "--..";

    for(int i=0; i<wyraz.length(); i++)
    {
        for (map<char, string>::iterator itr=alfabetMorsea.begin(); itr!=alfabetMorsea.end(); ++itr)
        {
            if(wyraz[i] == itr->first)
                cout << itr->second << '/';
        }
        if(wyraz[i] == ' ')
                cout << '/';
    }
}

int main()
{
    map<char, string> alfabetMorsea;

    string wyraz="";

    for(int j=0; j<100; j++)
    {
        while(getline(cin, wyraz))
        {
            transform(wyraz.begin(), wyraz.end(), wyraz.begin(), ::toupper);
            zamianaNaMorsea(wyraz);
            cout << endl;
        }
    }

    return 0;
}
