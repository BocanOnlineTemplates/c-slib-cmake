//
// LowLevelTemplate
// Bocan Online C Template Project
// ModuleA.c
//

//
// System Headers
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//
// Application Headers
//
#define MODULEA_IMPORT
#include "ModuleA.h"

//
// Private Macros and Constants
//

//
// Private Type Declarations and Definitions
//

//
// Private Global Variables Declarations
//
int action_iter = 0;
int string_limit = 30;
char* string;

//
// Private Function Definitions
//
int string_status(char *string) {

    if (string == NULL) {
   
        return STATUS_ERROR;
    }
    return STATUS_SUCCESS;
}
//
// Public Function Definitions
//
void module_a_init(void) {
   
    string = (char *)malloc(string_limit * sizeof(char));
    int status = string_status(string);
    if (status == STATUS_ERROR) {
    
        printf("[Module A] Initialization failed.\n");
    } else {
       
        printf("[Module A] Initialization successful.\n");
    }
}

void module_a_action(void) {

    action_iter++;
    strncpy(string, "[Module A] Action:", string_limit);
    printf("%s %i\n", string, action_iter);
}

void module_a_end(void) {

    free(string);
    printf("[Module A] Memory successfully freed.\n");
}
