//
// Created by Usuario on 1/10/2019.
//

#ifndef SORTMETHODS_MERGE_H
#define SORTMETHODS_MERGE_H

#include <vector>

using namespace std;

//template<typename T>
class MergeSort{
public:
    template<class T, template<class ...> class Container>
    void sort(Container<T> &cnt, int first, int last);
    template<class T, template<class ...> class Container>
    void merge(Container<T> &array, int start, int middle, int end);

};

template<class T, template<class ...> class Container>
void MergeSort::sort (Container<T>  &cnt, int start, int end) {
    int middle;
    if (start < end) {
        middle = start + (start - end) / 2;
        sort(cnt, start, middle);
        sort(cnt, middle + 1, end);
        merge(cnt, start, middle, end);
    }
}




template<class T, template<class ...> class Container>
void MergeSort::merge(Container<T>  &array, int start, int middle, int end){

    int k = 0; int i = start; int j = middle + 1; int tam = end - start + 1;
    //T* temp = new T[tam];
    vector<T> temp;

    while (i <= middle && j <= end) {
        if (array[i] < array[j]) {
            temp[k] = array[i];
            i++; k++;
        }else{
            temp[k] = array[j];
            j++; k++;
        }
    }

    while (i <= middle) {
        temp[k] = array[i];
        i++; k++;
    }

    while (j <= end) {
        temp[k] = array[j];
        j++; k++;
    }

    for (int l = 0; l < tam; ++l) {
        array[start + l] = temp[l];
    }

}





#endif //SORTMETHODS_MERGE_H
