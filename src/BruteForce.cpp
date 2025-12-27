#include "BruteForce.h"
#include <iostream>

BruteForce::BruteForce(const std::string& charset,
                       const std::string& target,
                       int maxLength)
    : charset(charset),
      target(target),
      maxLength(maxLength),
      attempts(0),
      found(false) {}

void BruteForce::run() {
    std::string current;
    generate(current);
}

void BruteForce::generate(std::string& current) {
    if (found) return;

    // Jika panjang melebihi batas
    if (current.length() > maxLength) return;

    // Cek kecocokan
    if (!current.empty()) {
        attempts++;
        if (current == target) {
            found = true;
            return;
        }
    }

    // Generate kombinasi berikutnya
    for (char c : charset) {
        current.push_back(c);
        generate(current);
        current.pop_back();
    }
}

long long BruteForce::getAttempts() const {
    return attempts;
}

bool BruteForce::isFound() const {
    return found;
}
