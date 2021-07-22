#include <iostream>
#include <climits>
#include <cfloat>

using namespace std;

int main() {
    short           a = INT16_MAX;
    short int       b = INT16_MAX;
    int             c = INT32_MAX;
    long            d = INT32_MAX;
    long int        e = INT32_MAX;
    long long       f = INT64_MAX;  //c11
    long long int   g = INT64_MAX;  //c11
    float           h = FLT_MAX;
    double          i = DBL_MAX;
    long double     j = LDBL_MAX;   //c11
    bool            k = true;
    char            l = 'A';        //utf-8
    wchar_t         m = L'本';      //gcc considera com uft-16 padrão do windows
    char16_t        n = L'本';      //c11 (utf-16)
    char32_t        o = L'本';      //c11 (utf-32)
    string          p = "cadeia de caracteres";

    cout << "short         : 1    :  " << sizeof(short)            << " bytes: " << a << endl;
    cout << "short int     : 1    :  " << sizeof(short int)        << " bytes: " << b << endl;
    cout << "int           : 1    :  " << sizeof(int)              << " bytes: " << c << endl;
    cout << "long          : 1L   :  " << sizeof(long)             << " bytes: " << d << endl;
    cout << "long int      : 1L   :  " << sizeof(long int)         << " bytes: " << e << endl;
    cout << "long long     : 1LL  :  " << sizeof(long long)        << " bytes: " << f << endl;
    cout << "long long int : 1LL  :  " << sizeof(long long int)    << " bytes: " << g << endl;
    cout << "float         : 1.0f :  " << sizeof(float)            << " bytes: " << h << endl;
    cout << "double        : 1.0  :  " << sizeof(double)           << " bytes: " << i << endl;
    cout << "long double   : 1.0  : "  << sizeof(long double)      << " bytes: " << j << endl;
    cout << "bool          : true :  " << sizeof(bool)             << " bytes: " << k << endl;
    cout << "char          : 'c'  :  " << sizeof(char)             << " bytes: " << l << endl;
    cout << "wchar_t       : L'c' :  " << sizeof(wchar_t)          << " bytes: " << m << endl;
    cout << "char_16t      : u'c' :  " << sizeof(char16_t)         << " bytes: " << n << endl;
    cout << "char_32t      : U'c' :  " << sizeof(char32_t)         << " bytes: " << o << endl;
    cout << "string        : \"ab\" : "  << sizeof(string)         << " bytes: " << p << endl;

    return 0;
}