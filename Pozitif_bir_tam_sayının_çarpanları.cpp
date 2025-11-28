#include <iostream>
using namespace std;
int main() {

    int sayi, bolen;

    cout << "Bolenlerini bulmak icin pozitif bir sayi giriniz:";
    cin >> sayi;

    if (sayi <= 0) {

        cout << "Hatali aralikta sayi girdiniz, lutfen pozitif bir tam sayi giriniz";

        return 0;

    }
    cout << "Bolenlerin hangi sayidan itibaren goruntulenmesini istiyorsunuz?:";
    cin >> bolen;

    if (bolen <= 0) {

        cout << "Bolen degeri pozitif olmalidir!";

        return 0;

    }
    while (bolen <= sayi) {

        if (sayi % bolen == 0)

         cout << bolen << " ";
         bolen++;
    }
    
    return 0;
}