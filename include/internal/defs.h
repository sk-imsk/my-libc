#define strong_alias(old, new) \
    extern __typeof(old) new __attribute__((alias(#old)))

#define weak_alias(old, new) \
    extern __typeof(old) new __attribute__((weak, alias(#old)))

#define DEF_STRONG(sym) \
    extern __typeof(sym) sym __attribute__((alias(#sym)))
