#include <iostream>
#include <cstring>
#include <unistd.h>

// reference https://blog.jetbrains.com/clion/2020/01/using-docker-with-clion/

// use Dockerfile.remote-cpp-env
int main() {
    char hostname[255];
    memset(hostname, 0, sizeof(hostname));
    gethostname(hostname, sizeof(hostname));
    char* buffer = hostname;
    std::cout << "Hello " << hostname << std::endl;
    return 0;
}
