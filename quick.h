//
// Created by Usuario on 1/10/2019.
//

#ifndef SORTMETHODS_QUICK_H
#define SORTMETHODS_QUICK_H



using namespace std;

class QuickSort {
public:
    template<class T, template<class ...> class Container>
    void quickSort(Container<T> &cnt, int low, int high){
        if (low < high) {
            int pivot = partition(cnt, low, high);
            quickSort(cnt, low, pivot);
            quickSort(cnt, pivot + 1, high);
        }
    }
    template<class T, template<class ...> class Container>
    int partition(Container<T> &cnt, int low, int high){
        int pivot = cnt[low], i = low, j = high;

        while (i < j) {
            do {
                i = i + 1;
            } while (cnt[i] <= pivot);

            do {
                j = j - 1;
            } while (cnt[j] > pivot);

            if (i < j) {
                swap(cnt[i], cnt[j]);
            }
        }

        swap(pivot, cnt[j]);

        return j;
    }



};



#endif //SORTMETHODS_QUICK_H
