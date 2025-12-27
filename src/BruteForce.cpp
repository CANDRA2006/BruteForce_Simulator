#include "../include/BruteForce.h"

BruteForce::BruteForce(const string& charset,
                       const string& target,
                       int maxLength)
    : charset(charset),
      target(target),
      maxLength(maxLength),
      attempts(0),
      found(false) {}

void BruteForce::run() {
    string current;
    generate(current);
}

void BruteForce::generate(string& current) {
    if (found) return;
    if ((int)current.length() > maxLength) return;

    if (!current.empty()) {
        attempts++;
        if (current == target) {
            found = true;
            return;
        }
    }

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
