# LeetCode
This repo contains LeetCode solutions implemented in C++.  (⌒-⌒; )
Simultaneously, this repository will be updated periodically.
Everyone is welcome to contribute relevant code, algorithms, solutions, or discover bugs to help solve problems. ↖(^ω^)↗


# Quick Start
```zsh
Mochi@Mochi-Macbook-Air ~ % git clone https://github.com/StarxSky/LeetCode.git && cd LeetCode
Mochi@Mochi-Macbook-Air ~ % cmake -S . -B build && cmake --build build -j

```
then, all solutions will be stored in the `build/`. you can run them by the prefix `./` in your terminal. For Example : 
```zsh
// run the atoi :
Mochi@Mochi-Macbook-Air ~ % ./atoi
```

# Something that contributors should know
If you wanna contribute your solution to this repo, please make sure you have used the `clang-format` in your code before pull requests.
**Clang-format** is a powerful tool designed to automatically format source code in languages such as C, C++, Java, JavaScript, JSON, Objective-C, Protobuf, and C#. It is part of the LLVM project and is built on top of LibFormat. This tool ensures consistent code style across projects and can be integrated into various workflows, editors, and version control systems.
```zsh
Mochi@Mochi-Macbook-Air ~ % clang-format -i *.cpp *.h
```
