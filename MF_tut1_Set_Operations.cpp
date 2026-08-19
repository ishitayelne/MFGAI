//Set Operations
/*Write a program to implement set operations to manage membership in school clubs.
A school has two clubs: the Drama Club and the Science Club.
Set A={students in the Drama Club}
Set B={students in the Science Club}
Perform following tasks :
● Find Students in at least one club.
● Find Students in both clubs.
● Find students in the Drama Club but not in the Science Club.
● Find Students in the Science Club but not in the Drama Club.
● If a student is not a member of any club
*/
#include <iostream>
using namespace std;

int main()
{
    int n1, n2, i, j, total;
    bool found;

    cout << "Enter total students in class: ";
    cin >> total;

    cout << "Enter number of Drama Club students: ";
    cin >> n1;  
    int A[n1];

    cout << "Enter Drama Club student roll numbers:\n";
    for(i = 0; i < n1; i++){
        cout<<"Student "<<i+1<<": ";
        cin >> A[i];
    }

    cout << "\nEnter number of Science Club students: ";
    cin >> n2;
    int B[n2];

    cout << "Enter Science Club student roll numbers:\n";
    for(i = 0; i < n2; i++){
        cout<<"Student "<<i+1<<": ";
        cin >> B[i];
    }

    // Union
    cout << "\nStudents in at least one club:\n";
    for(i = 0; i < n1; i++){
        cout << A[i] << " ";
    }
    for(i = 0; i < n2; i++)
    {
        found = false;
        for(j = 0; j < n1; j++)
        {
            if(B[i] == A[j])
                found = true;
        }
        if(!found)
            cout << B[i] << " ";
    }

    // Intersection
    cout << "\n\nStudents in both clubs:\n";
    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < n2; j++)
        {
            if(A[i] == B[j])
                cout << A[i] << " ";
        }
    }

    // Drama only
    cout << "\n\nStudents in Drama Club but not in Science Club:\n";
    for(i = 0; i < n1; i++)
    {
        found = false;
        for(j = 0; j < n2; j++)
        {
            if(A[i] == B[j])
                found = true;
        }
        if(!found)
            cout << A[i] << " ";
    }

    // Science only
    cout << "\n\nStudents in Science Club but not in Drama Club:\n";
    for(i = 0; i < n2; i++)
    {
        found = false;
        for(j = 0; j < n1; j++)
        {
            if(B[i] == A[j])
                found = true;
        }
        if(!found)
            cout << B[i] << " ";
    }

    // Students in no club
    cout << "\nStudents not in any club:\n";
    for(i = 1; i <= total; i++)
    {
        found = false;
        for(j = 0; j < n1; j++)
        {
            if(i == A[j])
                found = true;
        }
        for(j = 0; j < n2; j++)
        {
            if(i == B[j])
                found = true;
        }
        if(!found)
            cout << i << " ";
    }
    return 0;
}
