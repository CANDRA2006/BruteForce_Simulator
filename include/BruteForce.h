#ifndef BRUTEFORCE_H
#define BRUTEFORCE_H

#include <string>

using string = std::string;

class BruteForce {
private:
    string charset;
    string target;
    int maxLength;
    long long attempts;
    bool found;

    void generate(string& current);

public:
    BruteForce(const string& charset,
               const string& target,
               int maxLength);

    void run();
    long long getAttempts() const;
    bool isFound() const;
};

#endif
