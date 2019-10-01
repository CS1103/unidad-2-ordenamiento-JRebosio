//
// Created by rudri on 9/17/2019.
//

#ifndef SORT_METHODS_SORT_H
#define SORT_METHODS_SORT_H
#include<string>
#include <vector>
#include "merge.h"
#include "shell.h"
#include "quick.h"
using namespace std;

template<typename SortMethod>
class Sorter : public SortMethod {
public:
    template<class T, template<class ...> class Container, typename ... Types>
    void operator()(Container<T> &cnt, Types ... a) {
        this->sort(cnt, a...);
    }
};


#endif //SORT_METHODS_SORT_H
