#include "myvector.h"

int main()
{
    int vector[4] = {1, 2, 3, 4};
    vector_t myvector = create_vector(vector, 4);
    print_vector(myvector);

    push_back(&myvector, 6);
    print_vector(myvector);
    push_back(&myvector, 6);
    print_vector(myvector);
    push_back(&myvector, 6);
    print_vector(myvector);
    push_back(&myvector, 7);
    print_vector(myvector);
    push_back(&myvector, 8);
    print_vector(myvector);


    return 0;
}