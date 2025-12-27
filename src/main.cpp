#include <iostream>
#include <string>
#include <chrono>
#include "../include/BruteForce.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::chrono::high_resolution_clock;
using std::chrono::duration;

int main() {
    string target;
    string charset;
    int maxLength;

    cout << "=== Brute Force Simulator ===\n\n";

    cout << "Target password (dummy): ";
    cin >> target;

    cout << "Charset to use: ";
    cin >> charset;

    cout << "Max password length: ";
    cin >> maxLength;

    BruteForce simulator(charset, target, maxLength);

    auto start = high_resolution_clock::now();
    simulator.run();
    auto end = high_resolution_clock::now();

    duration<double> elapsed = end - start;

    cout << "\nAttempts : " << simulator.getAttempts() << endl;
    cout << "Time     : " << elapsed.count() << " seconds" << endl;
    cout << "Found    : " << (simulator.isFound() ? "YES" : "NO") << endl;

    cout << "\nPress Enter to exit...";
    cin.ignore();
    cin.get();

    return 0;
}
