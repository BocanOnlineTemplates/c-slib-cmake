//
// LowLevelTemplate
// Bocan Online C Template Project
// main.cpp
//

#include <stdio.h>

#include "ModuleA.h"

int main(void) {

    printf("Bocan Online C Template Project\n");
    printf("Hello World!\n");
    
    module_a_init();
    
    for (int i = 0; i < 5; i++) {
        
        module_a_action();
    }
    
    printf("Press enter to exit.\n"); 

    char bo;
    int result = scanf("%c", &bo);

    module_a_end();

    printf("Exiting...\n");
    return 0;
}
