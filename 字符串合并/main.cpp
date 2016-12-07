#include<iostream>
using namespace std;
void main() {
	char str1[40], str2[20];
	int i, j;
	cout << "输入需要合并的两句话:\n";
	cin.getline(str1, 40);
	cin.getline(str2, 20);
	i = 0;
	while (str1[i] != '\0')
		i++;
	j = 0;
	while (str2[j] != '\0') {
		str1[i] = str2[j];
		i++;
		j++;
	}
	str1[i] = '\0';
	cout << str1 << endl;
}