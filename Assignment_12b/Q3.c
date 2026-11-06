/*A3. Tagged Union
• Task: Create a tagged union that stores either an integer, a floating-point number, or a character.
• Tag: Use enum Type { INT_VALUE, FLOAT_VALUE, CHAR_VALUE } as the tag.
• Key points: Safe union usage, enum tag, and switch statement.
• Implementation guidance: Store the tag in a separate field and write printValue() using switch(tag).
*/
 #include <stdio.h>


enum Type {
    INT_VALUE,
    FLOAT_VALUE,
    CHAR_VALUE
};

struct TaggedValue {
    enum Type tag; 
    union {
        int i;
        float f;
        char c;
    } data; 
};


void printValue(struct TaggedValue tv) {
    switch (tv.tag) {
        case INT_VALUE:
            printf("Integer: %d\n", tv.data.i);
            break;
        case FLOAT_VALUE:
            printf("Float: %.2f\n", tv.data.f);
            break;
        case CHAR_VALUE:
            printf("Character: %c\n", tv.data.c);
            break;
        default:
            printf("Unknown type\n");
    }
}

int main() {
    struct TaggedValue tv1, tv2, tv3;

   
    tv1.tag = INT_VALUE;
    tv1.data.i = 42;
    printValue(tv1);


    tv2.tag = FLOAT_VALUE;
    tv2.data.f = 3.14159f;
    printValue(tv2);

    tv3.tag = CHAR_VALUE;
    tv3.data.c = 'A';
    printValue(tv3);

    return 0;
};
