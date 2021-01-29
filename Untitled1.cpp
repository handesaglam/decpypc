#include <iostream>
using namespace std;

int sifrele(int x){
	int dizi[4], gecici;
		dizi[0] = x/1000;
		dizi[1] = (x%1000)/100;
		dizi[2] = (x%100)/10;
		dizi[3] = (x%10);
	for(int i=0; i<4; i++) {
		dizi[i] = (dizi[i]+7)%10;
	}
	gecici = dizi[0];
		dizi[0] = dizi[2];
		dizi[2] = gecici;
	gecici = dizi[1];
		dizi[1] = dizi[3];
		dizi[3] = gecici;
	cout << "Olusturulan Sifre: ";
	for(int j=0; j<4; j++) {
		cout << dizi[j];
	}
}

int sifreCoz(int y) {
	int dizi2[4], gecici; // 0189
		dizi2[0] = y/1000;
		dizi2[1] = (y%1000)/100;
		dizi2[2] = (y%100)/10;
		dizi2[3] = (y%10);
	for(int i=0; i<4; i++) {
		dizi2[i] = ((dizi2[i]+10)-7)%10;
	}
	gecici = dizi2[0];
		dizi2[0] = dizi2[2];
		dizi2[2] = gecici;
	gecici = dizi2[1];
		dizi2[1] = dizi2[3];
		dizi2[3] = gecici;
	cout << "Cozulen Sifre: ";
	for(int j=0; j<4; j++) {
		cout << dizi2[j];
	}
}

int secenekSifrele() {
	int veri;
	cout << "Sifrelenmesi istenen 4 basamakli sayi: ";
		cin >> veri;
	sifrele(veri);
}

int secenekSifreCoz() {
	int veri;
	cout << "Cozmek istediginiz sifreyi girin: ";
	sifreCoz(veri);
}

int main(){
	int secenek;
	cout << "Veri sifrelemek icin 1, Sifre cozmek icin 2 girin: ";
		cin >> secenek;
	if(secenek == 1) {
		secenekSifrele();
	} else if(secenek == 2) {
		secenekSifreCoz();
	}
	cout << "\n\n";
	return main();
}
