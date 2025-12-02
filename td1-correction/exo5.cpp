#include <iostream>

/**
* Compétences: tableaux, indices, écriture en place, cas limites.

Écrire une fonction qui supprime les doublons consécutifs d’un tableau d’entiers. On ne garde que le premier élément de chaque groupe identique consécutif.
 */
namespace solution1 {
    int unique_compact(int t[], int n){
        if (n == 0) return 0;
        int write = 1;
        for (int i = 1; i < n; ++i){
            if (t[i] != t[write - 1]) {
                t[write++] = t[i];
            }
        }
        return write;
    }
}
namespace solution2 {
    int unique_compact(int t[], int n){
        if (n == 0) return 0;

        int write = 1;
        int last = t[0];

        for (int i = 1; i < n; ++i){
            if (t[i] != last){
                t[write++] = t[i];
                last = t[i];
            }
        }
        return write;
    }
}
namespace solution3 {
    int unique_compact(int t[], int n){
        if (n == 0) return 0;

        int read = 1;
        int write = 1;

        while (read < n){
            if (t[read] != t[write - 1]) {
                t[write] = t[read];
                write++;
            }
            read++;
        }
        return write;
    }
}
namespace solution4 {
    int unique_compact(int t[], int n){
        if (n == 0) return 0;

        int write = 1;
        int i = 1;

        while (i < n){
            // Skipper les doublons consécutifs
            while (i < n && t[i] == t[i - 1])
                i++;

            if (i < n)
                t[write++] = t[i];

            i++;
        }
        return write;
    }

}
int main() {

}