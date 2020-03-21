//
// Created by Andraz on 17/03/2020.
//

#ifndef SLOVENC_TYPEUTILS_H
#define SLOVENC_TYPEUTILS_H

namespace TypeUtils {

    template<typename Base, typename T>
    bool instanceOf(const T* object) {
        return std::is_base_of<Base, T>::value;
    }

    template<typename Desired, typename Original>
    std::shared_ptr<Desired> cast(const std::shared_ptr<Original> original) {
        Desired* result = dynamic_cast<Desired*>(original.get());
        if (result) {
            return std::shared_ptr<Desired>(result);
        }
        return nullptr;
    }



}


#endif //SLOVENC_TYPEUTILS_H
