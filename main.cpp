#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int wybor;
    bool dziala = true;
    vector<string> zadania;
    cout<<"----Lista opcji-----"<<endl;
    while (dziala) {
        cout << "1.Dodaj zadanie"<<endl;
        cout<< "2.Pokaz zadanie"<<endl;
        cout << "0.wyjscie"<<endl;
        cin >> wybor;

        switch (wybor) {
            case 1: {
                string noweZ;
                cout << "jakie zadanie ma byc dodane?: "<<endl;
                cin >> noweZ;
                zadania.push_back(noweZ);
                cout << "dodano do listy!" <<endl;

                break;
            }
            case 2:
                for (string z : zadania) {
                    cout << "lista zadan: "<<  z << endl;
                }
                    break;

                    case 0:
                   cout << "koniec programu!!" <<endl;
                    dziala = false;
                    break;

                    default:
                    cout<<"Nie poprawna opcja!!";
                    cout <<"\n wybierz z opcji(0-2)!" <<endl;
                    break;
                }
        }
    return 0;
}

