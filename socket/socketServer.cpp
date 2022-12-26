#include<iostream>
#include<winsock.h>

using namespace std;

int main() {

	int nSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (nSocket < 0) {
		cout << "Socket not opened!";
		cout << endl;
	}
	else cout << "The Socket opened successfully!"<<endl;

	return 0;
}