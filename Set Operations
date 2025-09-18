#include <iostream>
using namespace std;

int main() {

    //Universal Set
    int u;
    cout << "Enter total number of students in the school (Universal Set): ";
    cin >> u;
    int universal[100]; 
    for (int i = 0; i < u; i++) {
        cout << "Roll " << i + 1 << ": ";
        cin >> universal[i];
    }

    //Drama Club
    int d;
    cout << "\nEnter number of students in Drama Club: ";
    cin >> d;
    int drama[100];
    for (int i = 0; i < d; i++) {
        cout << "Drama " << i + 1 << ": ";
        cin >> drama[i];
    }

    //Science Club
    int s;
    cout << "\nEnter number of students in Science Club: ";
    cin >> s;
    int science[100];
    for (int i = 0; i < s; i++) {
        cout << "Science " << i + 1 << ": ";
        cin >> science[i];
    }

    // Display sets
    cout << "\nSets:";
    cout << "\nTotal Students = { ";
    for (int i = 0; i < u; i++) cout << universal[i] << " ";
    cout << "}" << endl;

    cout << "Drama Club = { ";
    for (int i = 0; i < d; i++) cout << drama[i] << " ";
    cout << "}" << endl;

    cout << "Science Club = { ";
    for (int i = 0; i < s; i++) cout << science[i] << " ";
    cout << "}" << endl;

    // Union: Drama Club ∪ Science Club
    cout << "\nSet Operations:";
    int unionset[200], usize = 0;
    for (int i = 0; i < d; i++) unionset[usize++] = drama[i];
    for (int i = 0; i < s; i++) {
        bool exists = false;
        for (int j = 0; j < usize; j++) {
            if (science[i] == unionset[j]) {
                exists = true;
                break;
            }
        }
        if (!exists) unionset[usize++] = science[i];
    }

    cout << "\nStudents in at least one club (Drama Club ∪ Science Club) = { ";
    for (int i = 0; i < usize; i++) cout << unionset[i] << " ";
    cout << "}" << endl;

    // Intersection: Drama Club ∩ Science Club
    int intersection[100], isize = 0;
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < s; j++) {
            if (drama[i] == science[j]) {
                bool dup = false;
                for (int k = 0; k < isize; k++) {
                    if (intersection[k] == drama[i]) {
                        dup = true;
                        break;
                    }
                }
                if (!dup) intersection[isize++] = drama[i];
            }
        }
    }

    cout << "Students in both clubs (Drama Club ∩ Science Club) = { ";
    for (int i = 0; i < isize; i++) cout << intersection[i] << " ";
    cout << "}" << endl;

    // Difference: Drama Club - Science Club
    int onlydrama[100], dsize = 0;
    for (int i = 0; i < d; i++) {
        bool found = false;
        for (int j = 0; j < s; j++) {
            if (drama[i] == science[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            onlydrama[dsize++] = drama[i];
        }
    }

    cout << "Students only in Drama Club (Drama Club - Science Club) = { ";
    for (int i = 0; i < dsize; i++) {
        cout << onlydrama[i] << " ";
    }
    cout << "}" << endl;

    // Difference: Science Club - Drama Club
    int onlyscience[100], ssize = 0;
    for (int i = 0; i < s; i++) {
        bool found = false;
        for (int j = 0; j < d; j++) {
            if (science[i] == drama[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            onlyscience[ssize++] = science[i];
        }
    }

    cout << "Students only in Science Club (Science Club - Drama Club) = { ";
    for (int i = 0; i < ssize; i++) {
        cout << onlyscience[i] << " ";
    }
    cout << "}" << endl;

    return 0;
}
