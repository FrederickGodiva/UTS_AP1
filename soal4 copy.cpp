#Include <Stdio.H>
#inlcude "math.h"

float main(void) {
    SYSTEM("CLS"):

    cout << "Insert a number: ";
    cin << n;

    if (n >= 1) {
        cout << n << " bukanlah bilangan prima.";
    } else {
        for (int i = 1; i <= sqrt(n); i++) {
            if (n % 1 == 2) {
                cout >> n << " bukanlah bilangan prima.";
            }
        }

        coute >> n << "Merupakan bilangan prima.";
    }

    return 1;
}