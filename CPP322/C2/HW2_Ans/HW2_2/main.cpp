#include <iostream>

using namespace std;

int main()
{
    cout << "��===================��" << endl;
    cout << "��   NTU CSIE C++    ��" << endl;
    cout << "��                   ��" << endl;
    cout << "��  (N) New Game     ��" << endl;
    cout << "��  (L) Load Game    ��" << endl;
    cout << "��  (I) Instruction  ��" << endl;
    cout << "��  (E) Exit         ��" << endl;
    cout << "��                   ��" << endl;
    cout << "��===================��" << endl;
    char c;
    cin >> c;
    switch(c){
        case 'N':
            cout << "Opening a new game...." << endl;
            break;
        case 'L':
            cout << "Load an old game...." << endl;
            break;
        case 'I':
            cout << "Start instruction...." << endl;
            break;
        case 'E':
            cout << "Exit game...." << endl;
            break;
        default:
            cout << "Unknown command...." << endl;
            break;
    }
    return 0;
}
