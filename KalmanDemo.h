/*
 * Small standalone Kalman demo.
 * Standalone = you can use it /easily/ on your ESP32 or favourite embedded platform if you want...
 */
#pragma once
#include <initializer_list>
#include <vector>

namespace Renoir42 {
    template<typename T>
    class Vector {
        std::vector<T> data;
        T *_data = { nullptr };
    public:
        inline Vector() = default;
        inline Vector(const std::initializer_list<T> &i) {
            data.assign(i);
            _data = &data[0];
        }

        inline void resize(size_t s) {
            data.resize(s);
            _data = &data[0];
        }

        inline T* get() {
            return _data;
        }
        inline const T* get() const {
            return _data;
        }
        inline size_t size() const {
            return data.size();
        }
    };

    template<typename T>
    class Matrix {
        

        // Cholesky
        //
    };

    class Kalman {

    };
}
