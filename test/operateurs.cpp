// #include <iostream>
// void passValeur(int b) {
//     b = b + 1;
// };
// void passPoint(const int *b) {
//     b = b + 1;
// }
// void increment(const int a[],int taille) {
//     for (int i = 0; i < taille; i++) {
//         a[i] = a[i] + 1;
//     }
// }
// namespace math {
//     int additioner(int a, int b) {
//         return a + b;
//     }
//     int subtraction(int a, int b) {
//         return a - b;
//     }
// }
//
// int main() {
//     math::additioner(10, 20);
//     std::cout << math::additioner(10, 20) << std::endl;
// }

// #include <iostream>
// using namespace std;
//
// char afficherGrade(double note) {
//     return note >= 16 && note <= 20 ? 'A' : note >= 14 ? 'B':
//     note >= 12 ? 'C' : note >= 10 ? 'D' : note >= 0 ? 'E' : '?';
// }
//
// int main() {
//     std
// }
// #include <iostream>
// using namespace std;
//
// bool calculatrice(double a, char op, double b, double &out){
//     switch (op) {
//         case '+':
//             out =  (a + b);
//             return  true;
//         case '-':
//             out =  (a - b);
//             return  true;
//         case '*':
//             out =  (a * b);
//             return  true;
//         case '/':
//             if (b != 0) {
//                 out =  (a / b);
//                 return  true;
//             }
//             return false;
//         default:
//             return false;
//             break;
//     }
// }
// const char* classify(const int t[], int n)
// {
//     bool seulementMonte = true;
//     bool seulementDescente = true;
//     bool yaEgalite = true;
//     for (int i = 0;i<6;i++) {
//         if (a[i] >= a[i+1]) {
//             seulementMonte = false;
//         }
//         if (a[i] <= a[i+1]) {
//             seulementDescente = false;
//         }
//         if (a[i] != a[i+1]) {
//             yaEgalite = false;
//         }
//     }
// }
// int main(){
//     int a[] = {1,4,4,6,6,9};
//
//
// }
// bool calculer(double a, char op, double b, double &out) {
//     switch (op) {
//         case '+':
//             out = a + b;
//             break;
//         case '-':
//             out = a - b;
//             break;
//         case '*':
//             out = a * b;
//             break;
//         case '/':
//             if (b == 0) {
//                 return false;
//             }
//             out = a / b;
//             break;
//         default:
//             return false;
//
//     }
//     return true;
// }
//
// void int main() {
// }
// #include <iostream>
// using namespace std;
//
// char affichernote(double note){
//     if (note >= 16 && note <= 20)
//         return  'A';
//     else if (note >= 14 && note < 16)
//         return 'B';
//     else if (note >= 12 && note < 14)
//         return 'C';
//     else if (note >= 10 && note < 12)
//         return 'D';
//     else if (note >= 0 && note < 10)
//         return 'E';
//     else {
//         return '?';
//     }
// }
// int main(){
//     //    char lettre;
//     double note;
//     cout<<"Saisir une note:"<<endl;
//     cin >>note;
//     cout<<affichernote(note)<<endl;
//     return 0;
// }



include <iostream>
using namespace std;

bool two_sum(const int t[], int n, int cible, int& i, int& j) {

    if (n < 2) return false;
    for (int a = 0; a < n; ++a) {
        for (int b = a + 1; b < n; ++b) {

            if (t[a] + t[b] == cible) {
                i = a;
                j = b;
                return true;
            }
        }
    }

    return false;   // Aucune paire trouvée après les deux boucles
}


int main() {

    int n;
    cin >> n;

    int t[1000];
    for (int k = 0; k < n; ++k)
        cin >> t[k];

    int cible;
    cin >> cible;
    int i, j;
    if (two_sum(t, n, cible, i, j))
        cout << i << " " << j << endl;
    else
        cout << "Aucune paire" << endl;

    return 0;

}