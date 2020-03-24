//
// Created by Andraz on 16/03/2020.
//

#ifndef SLOVENC_CONTAINERUTILS_H
#define SLOVENC_CONTAINERUTILS_H

#include <vector>

namespace ContainerUtils {

    template<class T>
    bool remove(std::vector<std::shared_ptr<T>> &vector, const std::shared_ptr<T> &element) {
        for (auto it = vector.begin(); it != vector.end(); it++) {
            if (*it == element) {
                vector.erase(it);
                return true;
            }
        }
        return false;
    }

}

#endif //SLOVENC_CONTAINERUTILS_H
