#include <iostream>
#include <map>
#include <string>

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
            if((wyraz[i] == 'A') || (wyraz[i] == 'a'))
                cout << alfabetMorsea['A'] << '/';
            else if((wyraz[i] == 'B') || (wyraz[i] == 'b'))
                cout << alfabetMorsea['B'] << '/';
            else if((wyraz[i] == 'C') || (wyraz[i] == 'c'))
                cout << alfabetMorsea['C'] << '/';
            else if((wyraz[i] == 'D') || (wyraz[i] == 'd'))
                cout << alfabetMorsea['D'] << '/';
            else if((wyraz[i] == 'E') || (wyraz[i] == 'e'))
                cout << alfabetMorsea['E'] << '/';
            else if((wyraz[i] == 'F') || (wyraz[i] == 'f'))
                cout << alfabetMorsea['F'] << '/';
            else if((wyraz[i] == 'G') || (wyraz[i] == 'g'))
                cout << alfabetMorsea['G'] << '/';
            else if((wyraz[i] == 'H') || (wyraz[i] == 'h'))
                cout << alfabetMorsea['H'] << '/';
            else if((wyraz[i] == 'I') || (wyraz[i] == 'i'))
                cout << alfabetMorsea['I'] << '/';
            else if((wyraz[i] == 'J') || (wyraz[i] == 'j'))
                cout << alfabetMorsea['J'] << '/';
            else if((wyraz[i] == 'K') || (wyraz[i] == 'k'))
                cout << alfabetMorsea['K'] << '/';
            else if((wyraz[i] == 'L') || (wyraz[i] == 'l'))
                cout << alfabetMorsea['L'] << '/';
            else if((wyraz[i] == 'M') || (wyraz[i] == 'm'))
                cout << alfabetMorsea['M'] << '/';
            else if((wyraz[i] == 'N') || (wyraz[i] == 'n'))
                cout << alfabetMorsea['N'] << '/';
            else if((wyraz[i] == 'O') || (wyraz[i] == 'o'))
                cout << alfabetMorsea['O'] << '/';
            else if((wyraz[i] == 'P') || (wyraz[i] == 'p'))
                cout << alfabetMorsea['P'] << '/';
            else if((wyraz[i] == 'Q') || (wyraz[i] == 'q'))
                cout << alfabetMorsea['Q'] << '/';
            else if((wyraz[i] == 'R') || (wyraz[i] == 'r'))
                cout << alfabetMorsea['R'] << '/';
            else if((wyraz[i] == 'S') || (wyraz[i] == 's'))
                cout << alfabetMorsea['S'] << '/';
            else if((wyraz[i] == 'T') || (wyraz[i] == 't'))
                cout << alfabetMorsea['T'] << '/';
            else if((wyraz[i] == 'U') || (wyraz[i] == 'u'))
                cout << alfabetMorsea['U'] << '/';
            else if((wyraz[i] == 'V') || (wyraz[i] == 'v'))
                cout << alfabetMorsea['V'] << '/';
            else if((wyraz[i] == 'W') || (wyraz[i] == 'w'))
                cout << alfabetMorsea['W'] << '/';
            else if((wyraz[i] == 'Y') || (wyraz[i] == 'y'))
                cout << alfabetMorsea['Y'] << '/';
            else if((wyraz[i] == 'Z') || (wyraz[i] == 'z'))
                cout << alfabetMorsea['Z'] << '/';
            else if(wyraz[i] == ' ')
                cout << '/';
        }
        cout << endl;
}

int main()
{
    map<char, string> alfabetMorsea;

    string wyraz="";

    for(int j=0; j<100; j++)
    {
        while(getline(cin, wyraz))
        {
            zamianaNaMorsea(wyraz);
        }
    }


    return 0;
}
