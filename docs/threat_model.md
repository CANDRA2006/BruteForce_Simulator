# Threat Model – Brute Force Simulator

## 1. Purpose

This document describes the potential threats and misuse scenarios related to the **Brute Force Simulator** project and outlines mitigation strategies to ensure ethical and educational usage.

---

## 2. Assets

| Asset | Description |
|------|------------|
| Source Code | The C++ implementation of the brute force simulator |
| User Input | Target password, charset, and maximum length |
| Educational Integrity | Proper academic and ethical usage |

---

## 3. Threat Actors

| Actor | Description |
|------|------------|
| Curious Learners | Users experimenting with brute force concepts |
| Malicious Users | Users attempting to repurpose the code for illegal attacks |
| Misinterpretation | Reviewers misunderstanding the project’s intent |

---

## 4. Threat Scenarios

| ID | Threat | Impact |
|----|-------|--------|
| T1 | Code modified for real password cracking | Legal and ethical issues |
| T2 | Extremely large inputs causing resource exhaustion | Performance degradation |
| T3 | Project perceived as hacking tool | Academic or reputational risk |

---

## 5. Risk Assessment

| Threat | Likelihood | Severity |
|------|------------|----------|
| T1 | Medium | High |
| T2 | Medium | Medium |
| T3 | Low | Medium |

---

## 6. Mitigation Strategies

- Clear **educational disclaimer** in README
- No network, file, or system access
- Limited to local dummy input
- No real authentication mechanisms
- Encouragement of ethical usage

---

## 7. Assumptions & Limitations

- The simulator does not interact with real systems
- No real-world password databases are used
- Performance is intentionally unoptimized

---

## 8. Conclusion

This project is designed purely for **educational purposes** to demonstrate the limitations and risks of weak passwords.  
Threat modeling ensures that ethical considerations remain central to the project design.
