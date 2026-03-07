# Brute Force Simulator

An educational simulator to understand brute force attack concepts and the importance of password security.

## ⚠️ Disclaimer

**This project is created for EDUCATIONAL PURPOSES ONLY.** This simulator is designed to demonstrate:
- How brute force attacks work
- Why weak passwords are dangerous
- The importance of using strong and complex passwords

**NOT to be used on real systems or other people's passwords.** Use for illegal purposes is the user's responsibility and violates the law.

## 📋 Description

Brute Force Simulator is a C++ console application that simulates brute force attacks locally on dummy passwords. The program attempts all possible character combinations until it finds the target password or reaches the maximum length limit.

## ✨ Features

- Brute force simulation with custom charset
- Execution time measurement
- Attempt counter
- Configurable maximum password length
- Purely local simulation (no network access)

## 🛠️ Technologies

- **Language**: C++
- **Standard**: C++11 or higher
- **Libraries**: Standard C++ Library (chrono, string, iostream)

## 📦 Project Structure

```
brute-force-simulator/
├── include/
│   └── BruteForce.h          # BruteForce class header
├── src/
│   ├── main.cpp              # Main entry point
│   ├── BruteForce.cpp        # BruteForce implementation
│   └── Timer.cpp             # Timer utility (placeholder)
├── docs/
│   └── threat_model.md       # Threat model documentation
├── .gitignore
└── README.md
```

## 🚀 Installation & Usage

### Prerequisites

- C++ compiler (g++, clang++, or MSVC)
- Make (optional)

### Compilation

#### Using g++
```bash
g++ -std=c++11 src/main.cpp src/BruteForce.cpp -o bruteforce
```

#### Using clang++
```bash
clang++ -std=c++11 src/main.cpp src/BruteForce.cpp -o bruteforce
```

### Running the Program

```bash
./bruteforce
```

### Example Usage

```
=== Brute Force Simulator ===

Target password (dummy): abc
Charset to use: abc
Max password length: 3

Attempts : 39
Time     : 0.000123 seconds
Found    : YES
```

## 📊 How It Works

1. **Input**: User provides target password, character set, and maximum length
2. **Generation**: Program recursively generates all possible combinations
3. **Comparison**: Each generated string is compared with the target
4. **Result**: Program reports number of attempts, time elapsed, and whether password was found

### Algorithm

The simulator uses a recursive algorithm to generate all possible combinations:
- Starts with empty string
- For each character in the charset, appends it and recurses
- Checks each generated string against the target
- Stops when password is found or max length is exceeded

## ⚡ Performance Considerations

**Warning**: Brute force grows exponentially!
- Charset size: n
- Password length: L
- Total combinations: n^L

Examples:
- 10 characters, length 3: 1,000 combinations
- 26 characters, length 5: 11,881,376 combinations
- 62 characters, length 8: 218+ trillion combinations

**For educational demonstration, keep passwords short (3-5 characters max).**

## 🔒 Security Lessons

This simulator demonstrates:

1. **Password complexity matters**: Longer passwords with more character types are exponentially harder to crack
2. **Time is the defender**: Even simple passwords can take significant time to brute force
3. **Dictionary attacks are faster**: Real attacks often use common passwords first
4. **Use multi-factor authentication**: Password alone is not enough
5. **Rate limiting helps**: Real systems limit login attempts

## 📚 Educational Use Cases

- Computer security courses
- Algorithm complexity demonstrations
- Password strength awareness
- Cybersecurity training
- Academic research on authentication

## 🤝 Contributing

Contributions are welcome! Please ensure:
- Code maintains educational focus
- No features that enable real-world attacks
- Documentation is clear and ethical
- Follows existing code style

## 📄 License

This project is for educational purposes. Use responsibly and ethically.

## 🔗 Related Resources

- [OWASP Password Guidelines](https://owasp.org/)
- [NIST Password Standards](https://pages.nist.gov/800-63-3/)
- Threat Model: [Threat Model](docs/threat_model.md)

## 👨‍💻 Author
Candra 

---

**Remember**: Always use strong, unique passwords and enable two-factor authentication wherever possible. 
