#include <iostream> 
using namespace std;

class bidangDatar {
private:
	int x, y;
public:
	bidangDatar() {
		x = 0;
		y = 0;
	}
	virtual void input(){}
	virtual float Luas(int a) {
		return 0;
	}
	virtual float Keliling(int a) {
		return 0;
	}
	void setX(int a) {
		this->x = a;
	}
	int getX() {
		return x;
	}
	int setY(int b) {
		this->y = b;
	}
	int getY() {
		return y;
	}
	string ukuran(int Keliling) {
		if (Keliling > 40)
			return "Besar";
		else if (Keliling < 20)
			return "Sedang";
		else
			return "Kecil";
	}

};

class Lingkaran :public bidangDatar {
public:
	int jarijari;
	void input() {
		cout << "Masukkan jejari : " << endl;
		cin >> jarijari;
		setX(jarijari);
	}
	float Luas(int a) {

		return  3.14 * a * a;
	}
	float Keliling(int a) {
		return 3.14 * 2 * a;
	}
};

class Persegipanjang :public bidangDatar {
public:
	int panjang, lebar;
	void input() {
		cout << "Masukkan panjang : " << endl;
		cin >> panjang;
		cout << "\nMasukkan Lebar : " << endl;
		cin >> lebar;
		setX(panjang);
		setY(lebar);
	}
	float Luas(int a, int b) {
		return a * b;
	}
	float Keliling(int a, int b) {
		return 2 * (a*b) ;
	}

};

int main() {
	Lingkaran lingkaran;
	Persegipanjang persegipanjang;

	bidangDatar* a = &lingkaran;
	bidangDatar* b = &persegipanjang;

	a->input();
	int x = a->getX();
	cout << "Luas : " << a->Luas(x) << endl;
	cout << "Keliling : " << a->Keliling(x) << endl;

	b->input();
	x = b->getX();
	cout << "Luas : " << b->Luas(x) << endl;
	cout << "Keliling : " << b->Keliling(x) << endl;

};