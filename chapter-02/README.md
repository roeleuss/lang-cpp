# Diferenças entre ambientes

Note a diferença de quantidade de bytes `long` e `long int` entre **Windows** e **Linux**.

## Windows

```sh
short         :  2 bytes: 32767
short int     :  2 bytes: 32767
int           :  4 bytes: 2147483647
long          :  4 bytes: 2147483647
long int      :  4 bytes: 2147483647
long long     :  8 bytes: 9223372036854775807
long long int :  8 bytes: 9223372036854775807
float         :  4 bytes: 3.40282e+38
double        :  8 bytes: 1.79769e+308
long double   : 16 bytes: 1.18973e+4932
bool          :  1 bytes: 1
char          :  1 bytes: A
wchar_t       :  2 bytes: 26412
char_16t      :  2 bytes: 26412
char_32t      :  4 bytes: 26412
string        : 32 bytes: cadeia de caracteres
```

## Linux

```sh
short         :  2 bytes: 32767
short int     :  2 bytes: 32767
int           :  4 bytes: 2147483647
long          :  8 bytes: 2147483647
long int      :  8 bytes: 2147483647
long long     :  8 bytes: 9223372036854775807
long long int :  8 bytes: 9223372036854775807
float         :  4 bytes: 3.40282e+38
double        :  8 bytes: 1.79769e+308
long double   : 16 bytes: 1.18973e+4932
bool          :  1 bytes: 1
char          :  1 bytes: A
wchar_t       :  4 bytes: 26412
char_16t      :  2 bytes: 26412
char_32t      :  4 bytes: 26412
string        : 32 bytes: cadeia de caracteres
```
