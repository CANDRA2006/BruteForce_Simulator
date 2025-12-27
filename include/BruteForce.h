#ifndef BRUTEFORCE_H
#define BRUTEFORCE_H

#include <string>

class BruteForce {
private:
    std::string charset;
    std::string target;
    int maxLength;
    long long attempts;
    bool found;

    void generate(std::string& current);

public:
    // Constructor
    BruteForce(const std::string& charset,
               const std::string& target,
               int maxLength);

    // Jalankan simulasi
    void run();

    // Getter
    long long getAttempts() const;
    bool isFound() const;
};

#endif // BRUTEFORCE_H
