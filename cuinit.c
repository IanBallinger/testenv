#include <windows.h>
#include <stdio.h>
typedef int (*cuInit_t)(unsigned int);
int main() {
    HMODULE lib = LoadLibraryA("nvcuda.dll");
    if (!lib) {
        printf("Failed to load nvcuda.dll\n");
        return 1;
    }
    cuInit_t cuInit = (cuInit_t)GetProcAddress(lib, "cuInit");
    if (!cuInit) {
        printf("Failed to get cuInit\n");
        return 2;
    }
    int res = cuInit(0);
    printf("cuInit() returned: %d\n", res);
    return 0;
}