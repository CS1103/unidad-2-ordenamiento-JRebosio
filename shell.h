//
// Created by Usuario on 1/10/2019.
//

#ifndef SORTMETHODS_SHELL_H
#define SORTMETHODS_SHELL_H


class ShellSort  {
public:
    template<class T, template<class ...> class Container>
    void sort(Container <T> &array, int size) {
        for (int i = size / 2; i > 0; i /= 2) {
            for (int j = i; j < size; ++j) {
                int k = j;
                while (k >= i && array[k - i] > array[k]) {
                    swap(array[k - i], array[i]);
                    k -= i;
                }
            }
        }
    }
};

#endif //SORTMETHODS_SHELL_H
