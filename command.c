#include <stdio.h>

#define COMMAND(NAME, TYPE) TYPE##_##NAME##_command()
#define DEFINE_COMMAND(NAME, TYPE) TYPE##_##NAME##_command() { printf(#TYPE " " #NAME " command executed.\n"); }

int main() {
    DEFINE_COMMAND(quit, internal)
    DEFINE_COMMAND(start, external)

    COMMAND(quit, internal);
    COMMAND(start, external);

    return 0;
}
