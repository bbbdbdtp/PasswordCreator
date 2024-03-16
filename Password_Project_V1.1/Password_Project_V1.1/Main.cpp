#include "iostream"
#include "ctime"

using namespace std;

int main() {
	int length;
	int i;
	int itr;
	int password_type;
	srand((unsigned)time(0));

	cout << "Enter Password length: ";
	cin >> length;

	cout << "Enter Count Of Iteration: ";
	cin >> itr;

	cout << "Enter the password type: \n";
	cout << "Enter 1 if the password has only numbers \n";
	cout << "Enter 2 if the password has letters and numbers \n";
	cout << "Enter 3 if the password has letters, capital letters, numbers \n";
	cout << "Enter 4 if the password has letters, capital letters, numbers, symbols\n";
	cin >> password_type;
	cout << endl;

	char a[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
  'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
  'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
  'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
  'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
  '~', '`', '!', '@', '"', '#', '$', '^', '&', '*', '(', ')', '_',
  '-', '=', '+', '[', ']', '{', '}', ':', ';', '\\', '|', ',', '<', '.', '>', '?', '/', '\'' };
	
	if (password_type == 1) {
		for (int u = 1; u <= itr; u++) {
			cout << u << ") ";
			for (i = 0; i < length; i++) {
				int random_index = rand() % 10;
				cout << a[random_index];
			}
			cout << endl;
		}
	}

	else if (password_type == 2) {
		for (int u = 1; u <= itr; u++) {
			cout << u << ") ";
			for (i = 0; i < length; i++) {
				int random_index = rand() % 36;
				cout << a[random_index];
			}
			cout << endl;
		}
	}

	else if (password_type == 3) {
		for (int u = 1; u <= itr; u++) {
			cout << u << ") ";
			for (i = 0; i < length; i++) {
				int random_index = rand() % 62;
				cout << a[random_index];
			}
			cout << endl;
		}
	}

	else if (password_type == 4) {
		for (int u = 1; u <= itr; u++) {
			cout << u << ") ";
			for (i = 0; i < length; i++) {
				int random_index = rand() % 93;
				cout << a[random_index];
			}
			cout << endl;
		}
	}

	cin.get();
	cin.get();

	return 0;
}