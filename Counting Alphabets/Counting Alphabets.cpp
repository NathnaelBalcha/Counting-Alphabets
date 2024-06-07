#include <iostream.h>
#include <fstream.h>
ifstream xyzFile;
void countABC(char File[]) {
	xyzFile.open(File,ios::in);
	if (xyzFile.fail()) {
			cerr << " Error opening file: " << File << endl;
			return;
		}
	char ch , uppercaseCh;
	int countA = 0, countB = 0, countC = 0;
	while (xyzFile >> ch) {
			uppercaseCh = toupper(ch);
			if (uppercaseCh == 'A') {
					countA++;
				} else if (uppercaseCh == 'B') {
					countB++;
				} else if (uppercaseCh == 'C') {
					countC++;
				}
		}
	xyzFile.close();
	cout << " Occurrences of A: " << countA << endl;
	cout << " Occurrences of B: " << countB << endl;
	cout << " Occurrences of C: " << countC << endl;
}
int main() {
	char file[] = "xyz.txt";
	cout << "\t\t\tCount alphabets of A, B and C form "<< file<<" file\n";
	cout << "\t\t===============================================================\n";
	countABC(file);
	return 0;
}

