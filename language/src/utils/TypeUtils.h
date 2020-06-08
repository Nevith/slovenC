//
// Created by Andraz on 17/03/2020.
//

#ifndef SLOVENC_TYPEUTILS_H
#define SLOVENC_TYPEUTILS_H

namespace TypeUtils {

    template<typename Base, typename T>
    bool isBaseOf(const T *object) {
        return std::is_base_of<Base, T>::value;
    }

    template<typename Desired, typename Original>
    std::shared_ptr<Desired> cast(const std::shared_ptr<Original> original) {
        return std::dynamic_pointer_cast<Desired>(original);
    }

}


#endif //SLOVENC_TYPEUTILS_H
