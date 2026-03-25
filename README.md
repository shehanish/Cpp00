<h1 align="center">
  <img src="https://upload.wikimedia.org/wikipedia/commons/1/18/ISO_C%2B%2B_Logo.svg" width="100" />
  <br>
  C++ Module 00
</h1>

<p align="center">
  <img src="https://img.shields.io/badge/Language-C%2B%2B98-blue?style=for-the-badge&logo=c%2B%2B" />
  <img src="https://img.shields.io/badge/School-42-black?style=for-the-badge" />
</p>

---

## 📖 Introduction

This module marks the beginning of the journey into **C++** and **Object-Oriented Programming (OOP)**. The goal is to understand the basic syntax of C++, standard input/output streams, and the fundamental concepts of classes and objects, all while adhering to the **C++98** standard.

## 🛠️ Exercises

### [ex00: Megaphone](ex00/)
A simple warm-up exercise to get familiar with `std::cout` and string manipulation. It converts input arguments to uppercase, simulating a megaphone.

### [ex01: My Awesome PhoneBook](ex01/)
Implementation of a small, standalone phonebook system.
- **Concepts**: Classes, private vs public members, basic I/O (`std::cin`, `std::getline`), and formatting with `std::setw`.
- **Functionality**: Supports `ADD`, `SEARCH` (with index-based display), and `EXIT`.
- **Constraint**: Stores a maximum of 8 contacts, replacing the oldest one if the limit is reached.

### [ex02: The Job of Your Dreams](ex02/)
A practical exercise in reading existing code and logs to reconstruct missing class functionality, focusing on static members and timestamps.

## 📝 Learning Objectives

- Basic syntax differences between C and C++.
- Understanding `iostream` (Standard Input/Output).
- Namespace usage (`std::`).
- Class declaration and instantiation.
- Attribute and method encapsulation.

## 🚀 Usage

1. Navigate to the desired exercise folder:
   ```bash
   cd ex01
   ```
2. Compile using the Makefile:
   ```bash
   make
   ```
3. Run the executable:
   ```bash
   ./phonebook
   ```

---

<p align="center">
  <i>Part of the 42 C++ Pool. Developed by shkaruna.</i>
</p>
