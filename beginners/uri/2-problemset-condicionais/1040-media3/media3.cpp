#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c, d, e, media, mediae;

    cin >> a >> b >> c >> d;

    media = ((a * 2) + (b * 3) + (c * 4) + d) / 10;

    if (media >= 7.0)
        cout << "Media: " << fixed << setprecision(1) << media << "\nAluno aprovado." << endl;
    else if (media < 5.0)
        cout << "Media: " << fixed << setprecision(1) << media << "\nAluno reprovado." << endl;
    else if (media >= 5.0 && media <= 6.9) {
        cin >> e;

        mediae = (e + media) / 2;

        cout << "Media: " << fixed << setprecision(1) << media << "\nAluno em exame." << endl;
        cout << "Nota do exame: " << fixed << setprecision(1) << e;

        if (mediae >= 5.0)
            cout << "\nAluno aprovado.\n" << "Media final: " << fixed << setprecision(1) << mediae << endl;
        else if (mediae < 5.0)
            cout << "Aluno reprovado.\n" << "Media final: " << fixed << setprecision(1) << mediae << endl;
    }

    return 0;
}
