//
// LowLevelTemplate
// Bocan Online C Template Project
// ModuleA.h
//

#ifndef MODULEA_H
#define MODULEA_H

//
// System Headers
//

//
// Application Headers
//

//
// EXTERN Macro
//
#ifdef MODULEA_IMPORT
    #define EXTERN
#else
    #define EXTERN extern
#endif

//
// Public Macros and Constant Declarations
//
#define STATUS_SUCCESS  0
#define STATUS_ERROR    1

//
// Public Types Declarations
//

//
// Public Global Variables Declarations
//

//
// Public Function Prototypes
//
EXTERN void module_a_init(void);
EXTERN void module_a_action(void);
EXTERN void module_a_end(void);

#undef MODULEA_IMPORT
#undef EXTERN
#endif //MODULEA_H
