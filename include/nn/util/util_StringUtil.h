namespace nn::util {
template<typename T>
inline int Strlcpy(T* pOutDst, const T* pSrc, int count) {
    int length = 0;

    if (count > 0) {
        while (--count && *pSrc) {
            *pOutDst++ = *pSrc++;
            ++length;
        }
        *pOutDst++ = '\0';
    }

    while (*pSrc++)
        ++length;

    return length;
}

template<typename T>
inline int Strnlen(const T* pStr, int count) {
    int length = 0;

    while (--count && *pStr++) {
        ++length;
    }

    return length;
}

template<typename T>
inline int Strncmp(const T* pStr1, const T* pStr2, int count);
}