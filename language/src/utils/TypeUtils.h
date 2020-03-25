//
// Created by Andraz on 17/03/2020.
//

#ifndef SLOVENC_TYPEUTILS_H
#define SLOVENC_TYPEUTILS_H

namespace TypeUtils {

    template<typename Base, typename T>
    bool instanceOf(const T *object) {
        return std::is_base_of<Base, T>::value;
    }

    template<typename Desired, typename Original>
    std::shared_ptr<Desired> cast(const std::shared_ptr<Original> original) {
        std::shared_ptr<Desired> result = std::dynamic_pointer_cast<Desired>(original);
        if (result) {
            return result;
        }
        return nullptr;
    }


}


#endif //SLOVENC_TYPEUTILS_H
