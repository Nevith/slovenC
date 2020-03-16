//
// Created by Andraz on 16/03/2020.
//

#ifndef SLOVENC_CONTAINERUTILS_H
#define SLOVENC_CONTAINERUTILS_H

#include <vector>

namespace ContainerUtils {

    template<class T>
    T *remove(std::vector<T *> vector, T *element) {
        for (auto it = vector.begin(); it != vector.end(); it++) {
            if (*it == element) {
                vector.erase(it);
                return *it;
            }
        }
    }

}

#endif //SLOVENC_CONTAINERUTILS_H
