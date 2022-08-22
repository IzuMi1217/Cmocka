### Cmocka 

This is a simple demo of unittest in C using Cmocka

#### Prework

please include the two files `cmocka.h` and `libcmocka-static.a` with your programs.

#### Compilation

```bash
gcc -o test unit-tests.c [source_code] -DTESTING  -L . -l cmocka-static
```

#### Run the test

```bash
./test
```

#### Asserts that may be useful 

Please refer to the API below:

https://api.cmocka.org/group__cmocka__asserts.html