//Inclusion and Exclusion Principle
/*Write a program to implement the Principle of Inclusion and Exclusion for finding student participation in the Sports Club and Music Club in a university survey.
Read the student roll numbers for both clubs, perform Union and Intersection operations on the sets, determine their cardinalities, and use the Inclusion–Exclusion Principle to find the number of students who are members of at least one club, only the Sports Club, only the Music Club, and neither club.*/
#include <iostream>
using namespace std;


int main() {
    int c_m, c_s, n;


    cout << "Enter total students: ";
    cin >> n;
    cout << "Enter no. of students in sports club: ";
    cin >> c_s;
    cout << "Enter no. of students in music club: ";
    cin >> c_m;


    int u[n], m[c_m], s[c_s];


    // read array elements
    cout << "\nEnter all roll nos.:\n";
    for (int i = 0; i < n; i++) {
        cin >> u[i];
    }


    cout << "Enter all sports club nos.:\n"; // sports
    for (int i = 0; i < c_s; i++) {
        cin >> s[i];
    }


    cout << "Enter music club roll nos.:\n"; // music
    for (int i = 0; i < c_m; i++) {
        cin >> m[i];
    }


    // intersection
    int c = 0, count[n]; // no. of students in both
    for (int i = 0; i < c_s; i++) {
        for (int j = 0; j < c_m; j++) {
            if (s[i] == m[j]) {
                count[c] = m[j];
                c++;
            }
        }
    }


    // inclusion-exclusion calculations
    int uni = c_m + c_s - c;   // at least one club
    int only_s = c_s - c;      // only Sports
    int only_m = c_m - c;      // only Music
    int neither = n - uni;     // neither club


    cout << "\n1. No. of students in both clubs: " << c << endl;
    cout << "Roll nos. in both clubs: ";
    for (int i = 0; i < c; i++) {
        cout << count[i] << "\t";
    }


    cout << "\n2. No. of students at least 1 club: " << uni << endl;
    cout << "3. No. of students in ONLY sports club: " << only_s << endl;
    cout << "4. No. of students in ONLY music club: " << only_m << endl;
    cout << "5. No. of students in NEITHER club: " << neither << endl;


    return 0;
}
