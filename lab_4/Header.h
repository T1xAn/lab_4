#pragma once
#include<iostream>
#include<Windows.h>
#include<vector>
#include<algorithm>
#include <vector>
using namespace std;
template <class T> class Set
{
private:
    int n;
    T num, delNum;
    vector<T> SetVector;

public:
    Set() {};
    Set(int amount) {
        cout << "Enter number of elemnts: " << endl;
        cin >> amount;
        cout << "Enter the elements:" << endl;
        for (int i = 0; i < amount; i++) {
            cin >> num;
            if (find(SetVector.begin(), SetVector.end(), num) == SetVector.end())
                SetVector.push_back(num);
        }
        sort(SetVector.begin(), SetVector.end());

    };
    /*void DeleteNum() {
        cout << "Enter La'BAGET:" << endl;
        cin >> delNum;
        SetVector.erase(remove(SetVector.begin(), SetVector.end(), delNum), SetVector.end());
    };*/
    BOOL operator -(T delNum) {
        SetVector.erase(remove(SetVector.begin(), SetVector.end(), delNum), SetVector.end());
        return true;
    }
    void PrintSet() {
        cout << endl;

        for (int i = 0; i < SetVector.size(); i++) {
            cout << SetVector[i] << endl;
        }
    };
    BOOL operator >(Set<T> B) {
        return includes(SetVector.begin(), SetVector.end(), B.SetVector.begin(), B.SetVector.end());
    }
    BOOL operator !=(Set<T> right) {
        if (right.SetVector.size() != SetVector.size())
            return true;
        for (int i = 0; i < SetVector.size(); i++) {
            if (right.SetVector[i] != SetVector[i]) return true;
        }
        return false;
    }
    ~Set() {
        SetVector.clear();
    };
    BOOL operator +(T num) {
        if (find(SetVector.begin(), SetVector.end(), num) == SetVector.end())
            SetVector.push_back(num);
        else return false;
    sort(SetVector.begin(), SetVector.end());
    return true;
}
};

class CABOM {
private: 
    pair<vector<int> , vector<int>> N10;
public:
    CABOM(string num) {
        int step = 11;
        int Lenght = strlen(num.c_str())-1;
        int FirstPart = num.find(".");
        for (int i = 0; i < FirstPart; i++)
            step *= 11;
        for (int i = 0; i < Lenght; i++) {
            
        }
    }
};

char digit(int num)
{
    switch (num) {
    case 0: return '0';
    case 1: return '1';
    case 2: return '2';
    case 3: return '3';
    case 4: return '4';
    case 5: return '5';
    case 6: return '6';
    case 7: return '7';
    case 8: return '8';
    case 9: return '9';
    case 10: return 'A';
    }
}

class Translate
{
public:
    class TranslateEx {};//класс исключений
    Translate();
    Translate(string rNum) {
        real_num = rNum;
    }
    void GetNum();
    int conversion_to_int(string s);
    float conversion_to_int_float_part(string s);
    int conversion_to_other_int(int a, int p, char* s);
    void conversion_to_other_float(float a, char* s);
    void TranslateToEight();
    ~Translate();

private:
    string real_num;
};

Translate::Translate()
{
    real_num = 0.0;
}
int Translate::conversion_to_int(string s) {
    double result = 0;
    int digits = s.length();
    double razr;
    double osn = 11;
    for (int i = digits; i > 0; i--)
    {
        for (int b = 0; b <= 11; b++)
        {
            if (s[digits - i] == digit(b))
            {
                razr = b;
                break;
            }
            if (b == 11)
            {
                throw TranslateEx();
            }
        }
        result = result + razr * pow(osn, i - 1);

    }
    return (int)result;
}
float Translate::conversion_to_int_float_part(string s) {
    float result = 0;
    int digits = s.length();
    float razr = 0;
    float osn = 11;
    int j = 0;
    for (int i = digits; i > 0; i--) {
        for (int b = 0; b <= 11; b++) {
            if (s[digits - i] == digit(b)) {
                razr = b;
                break;
            }
            if (b == 11) {
                throw TranslateEx();
            }
        }
        j++;
        result = result + razr * pow(osn, -1 * j);
    }
    return result;
}
//перевод из дес€тичной в восьмиричную целую часть
int Translate::conversion_to_other_int(int a, int p, char* s)
{
    int num = (int)a;
    int rest = num % p;
    num /= p;
    if (num == 0)
    {
        s[0] = digit(rest); return 1;
    }
    int k = conversion_to_other_int(num, p, s);
    s[k++] = digit(rest);
    return k;
}
void Translate::conversion_to_other_float(float a, char* s) {
    int p = 9;
    int iter = 0;
    int k = 0;
    float a1 = a;
    do {
        a1 = a1 * p;
        int num = (int)(a1);
        s[k++] = digit(num);
        a1 -= (int)a1;
        iter++;
    } while (a1 > 0.00000001 && iter < 10);
    s[k] = '\0';
}
void Translate::GetNum() {
    cout << "¬ведите число в 11 системе счислени€: "; cin >> real_num;
}

void Translate::TranslateToEight()
{
    char s[80] = { 0 };
    int intPartToComma, p = 9;
    float intPartAfterComma, result;
    int pos = real_num.find(".");
    string subToComma = real_num.substr(0, pos); 
    intPartToComma = conversion_to_int(subToComma);
    string subAfterComma = real_num.substr(pos + 1);
    int k = conversion_to_other_int(intPartToComma, p, s);
    result = conversion_to_int_float_part(subAfterComma);
    s[k++] = ',';
    conversion_to_other_float(result, &s[k]);

    cout << "¬аше число в 9 системе счислени€ : " << s << endl;
    cin.get(); cin.get();
}

Translate::~Translate() {}