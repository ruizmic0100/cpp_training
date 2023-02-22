# CPP TRAINING

This repository is a sandbox environment where I practice C++.

*"If your code doesn't work, we don't care how fast it doesn't work"*

## How To Generate Assembly Code Using GCC

This writes the assembly code to a ```foobar.s``` file. For x86 and x64 assembly code, that *AT&T Syntanx* is used by default.

    ``` g++ -S foobar.cpp ```

To generate assembly code in *Intel syntax*:

    ``` g++ -S -masm=intel foobar.cpp ```

To get assembly code with *annotations* of the C++ source code:

    ``` g++ -S -fverbose-asm foobar.cpp```

To get the most detailed annotated assembly code:

    ``` g++ -g -Wa, -adhln -fverbose-asm foobar.cpp > foobar.s ```