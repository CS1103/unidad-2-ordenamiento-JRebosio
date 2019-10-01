#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <iostream>
#include <random>
#include <ctime>
#include <vector>
#include "Sort.h"
using namespace std;


int random_int(int low, int high)
{
    static mt19937 gen(std::time(nullptr));
    return uniform_int_distribution<>(low, high)(gen);
}

double random_real(int low, int high)
{
    static mt19937 gen(std::time(nullptr));
    return uniform_real_distribution<> (low, high)(gen);
}

template <typename C>
void print(const C& container)
{
    for(const auto& val: container)
        std::cout << val << ' ';
    std::cout << '\n';
}

int main(int argc, char * argv[]) {
    int size=50,min=1,max=1000;
    int* array_int = new int[size];
    double* array_real= new double[size];

    int arr[50];


    vector<int> r;
    for (int i = 0; i < size; i++) {
        array_int[i] = random_int(min,max);
        array_real[i] = random_real(min,max);
        arr[i]=random_int(min,max);
        r.push_back(random_int(1,100));
    }

    Sorter<MergeSort> s1;
    Sorter<ShellSort> s2;
    Sorter<QuickSort> s3;
    for (auto &u: r) cout<<u<< " ";
    s1(r,0,49);
    for (auto &u: r) cout<<u<< " ";
    s2(r,50);
    for (auto &u: r) cout<<u<< " ";
    s3(r,50);



    return 0;
}