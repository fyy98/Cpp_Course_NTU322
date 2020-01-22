#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main() {

	bool dealed[52] = {0};
	int player[4][13];

	for(int i=0; i<52; i++){
		int num = rand()%(52-i) + 1;
		int curr = -1;
		for(int j=0; j<num; j++){
			curr++;
			if(dealed[curr] == 1) j--;
		}
		dealed[curr] = 1;
		player[i/13][i%13] = curr;
	}

	for(int i=0; i<4; i++){
        cout << "���a" << i+1 << endl;
		for(int j=0; j<13; j++){
		    switch(player[i][j]/13){
                case 0:
                    cout << "�®�";
                    break;
                case 1:
                    cout << "����";
                    break;
                case 2:
                    cout << "����";
                    break;
                case 3:
                    cout << "���";
                    break;
		    }
		    switch(player[i][j]%13+1){
                case 11:
                    cout << " J";
                    break;
                case 12:
                    cout << " Q";
                    break;
                case 13:
                    cout << " K";
                    break;
                default:
                    cout << setw(2) << player[i][j]%13+1;
                    break;
		    }
		}
		cout << endl;
	}
}
