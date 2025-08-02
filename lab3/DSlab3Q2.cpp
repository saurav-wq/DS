#include <iostream>
using namespace std;

int main() {
    cout << "P (Hound Dog) | Q (Howl) | P -> Q | �Q | �P | (P->Q) ? �Q | Conclusion: �P\n";
    cout << "---------------------------------------------------------------\n";

    for (int P = 0; P <= 1; P++) {
        for (int Q = 0; Q <= 1; Q++) {
            int implication = (!P || Q);   
            int notQ = !Q;
            int notP = !P;
            int premises = implication && notQ;

            cout << "     " << P
                 << "       |    " << Q
                 << "     |   " << implication
                 << "    | " << notQ
                 << "  | " << notP
                 << "  |        " << premises
                 << "        |        ";

            if (premises)
                cout << notP << " (Valid)";
            else
                cout << "N/A";

            cout << endl;
        }
    }

    return 0;
}

