#pragma once
#include<iostream>
#include<Windows.h>
#include<vector>
#include<algorithm>
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
            return includes(SetVector.begin(),SetVector.end(), B.SetVector.begin(), B.SetVector.end());
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
};

