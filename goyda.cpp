#include <iostream>
#include <string>
using namespace std;

class Tiles {
public:
	string Brand;
	int size_h;
	int size_w;
	int price;

	void getData() {
		cout << Brand<<" " << size_h<< " " << size_w << " " << price << endl;
	};

};

int main() {
	Tiles tiles1;
	Tiles tiles2;
	cout << "T1";
    cin >> tiles1.Brand >> tiles1.size_h >> tiles1.size_w >> tiles1.price;
	cout << "T2";
	cin >> tiles2.Brand >> tiles2.size_h >> tiles2.size_w >> tiles2.price;
	tiles1.getData();
	tiles2.getData();

	return 0;
}