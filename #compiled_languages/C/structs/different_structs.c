#include <stdio.h> // for printf()
#include <stdlib.h>  // for malloc()
#include <string.h> // for strcpy()


//----------------------- structs

struct Person_a{
    int age;
    char * name;
    char address[50];
};

struct Person_b{
    int age;
    char * name;
    char address[50];
} Person_bb;

typedef struct Person_c{
    int age;
    char * name;
    char address[50];
} Person_cc;

int main(void) {

    struct Person_a brian;
    brian.name = "Brian"; // pointer = pointer
    brian.age = 27;
    // brian.address = "123 Foobar b"; // array is not a left value...
    strcpy(brian.address, "123 Foobar b");

    struct Person_b erich;
    erich.name = "Erich"; // pointer = pointer
    erich.age = 25;
    // erich.address = "123 Foobar e"; // array is not a left value...
    strcpy(erich.address, "123 Foobar e");

    Person_cc * rick = (Person_cc*)malloc(sizeof(Person_cc)); // always allocate memory for struct pointers!!!
    rick->name = "Rick"; // pointer = pointer
    rick->age = 50;
    // rick.address = "123 Foobar r"; // array is not a left value...
    strcpy(rick->address, "123 Foobar r");



    printf("%s\n", brian.name);
    printf("%d\n", brian.age);
    printf("%s\n", brian.address);

    printf("%s\n", erich.name);
    printf("%d\n", erich.age);
    printf("%s\n", erich.address);

    printf("%s\n", rick->name);
    printf("%d\n", rick->age);
    printf("%s\n", rick->address);

    return 0;
}

