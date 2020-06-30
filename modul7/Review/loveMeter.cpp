#include <iostream>

using namespace std;

char ulang = 'y';
string nama[2];
string templateNegatif[12] = {
    "jangan terjebak kata-kata manis.",
    "hubungan percintaanmu mulai terasa dingin.",
    "jatuh cinta membuatmu belajar banyak hal.",
    "Sibuk tak bisa jadi alasan kamu tidak mengabarinya.",
    "saat salah paham, hindari saling menyalahkan.",
    "hubungan dilandasi rasa percaya akan bertahan lama.",
    "tak ada gunanya menahan orang yang ingin pergi.",
    "perubahan yang ada jangan sampai membuatmu salah paham.",
    "kamu hanya perlu memulai dari awal.",
    "sesekali kamu perlu mengalah.",
    "menerima keadaan akan membuat suasana hatimu jauh lebih baik.",
    "kehadiranmu membuat seseorang salah paham."};
string templatePositif[8] = {
    "Kamu dan pasanganmu sedang mesra-mesranya.\n\t\tHari ini pasanganmu akan membuatmu merasa istimewa.",
    "Perasaan cintamu mungkin akan dibalas oleh orang yang kamu taksir.\n\t\tUntuk kamu yang sudah menikah, kamu merasa bangga dengan pasanganmu karena sikap baik yang dia tunjukkan.",
    "Pasanganmu akan memberikanmu kejutan yang indah hari ini.\n\t\tKamu dan pasanganmu akan merasakan ikatan emosional yang lebih kuat.",
    "Kamu dan pasanganmu sedang romantis-romantisnya.\n\t\tHari ini akan jadi hari yang baik dalam kehidupan pernikahanmu.",
    "Berkomunikasi dengan pasanganmu membuat harimu lebih cerah.\n\t\tOrang tuamu mungkin memberkati pasanganmu dengan sesuatu yang sangat indah hari ini.",
    "Berkomunikasi dengan pasanganmu membuat harimu lebih cerah.\n\t\tOrang tuamu mungkin memberkati pasanganmu dengan sesuatu yang sangat indah hari ini.\n\t\tHal itu akan meningkatkan kehidupan pernikahanmu.",
    "Kamu memanfaatkan waktu luang untuk pergi dengan pasanganmu.\n\t\tHari ini akan jadi hari terbaik dalam kehidupan pernikahanmu.",
    "Hari ini, kamu akan menyadari betapa kekasihmu sangat mencintaimu.\n\t\tKalian berdua akan merencanakan sesuatu yang romantis malam ini.\n\t\t",
};

int randomMeter(int tipe)
{
    srand(time(NULL));
    switch (tipe)
    {
    case 1:
        return rand() % 100 + 1;
    case 2:
        return rand() % 11;
    case 3:
        return rand() % 8;
    default:
        return rand() % 100 + 1;
    }
}

string randomSaran(int meter)
{
    int num;
    if (meter <= 50)
    {
        num = randomMeter(2);
        return templateNegatif[num];
    }
    else
    {
        num = randomMeter(3);
        return templatePositif[num];
    }
}

void inputCouple()
{
    cout << "----------------------" << endl;
    cout << "Masukkan nama pasangan" << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << "Masukkan nama = ";
        cin >> nama[i];
    }
}

int main()
{
    do
    {
        cout << "\tLove Meter" << endl;
        inputCouple();
        int meter = randomMeter(1);
        cout << "----------------------" << endl;
        cout << "Love Meter = " << meter << endl;
        cout << "Verdict    = " << randomSaran(meter) << endl;
        cout << "----------------------" << endl;
        cout << "" << endl;

        cout << "Lagi[y/n]? ";
        cin >> ulang;

    } while (ulang == 'y');

    cout << "\nTrims ^_^\n";
    cout << "by: Akhdan Musyaffa Firdaus (1197050010)\n";
}