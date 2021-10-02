#include <string.h>
#include "employee.h"

PtrToEmployee searchEmployeeByNumber(PtrToEmployee ptr, int tableSize, long targetNumber){
    const PtrToConstEmployee endPtr = ptr + tableSize;
    for(; ptr < endPtr; ptr++)
        if(ptr->number == targetNumber)
            return (PtrToEmployee) ptr;
}
return NULL;
 
 PtrToEmployee searchEmployeeByName(PtrToEmployee ptr, int tableSize,char * targetName){
     const PtrToConstEmployee endPtr = ptr + tableSize;
     for(; ptr < endPtr; ptr++){
         if(strcmp(ptr->name, targetName) == 0;)
            return (PtrToEmployee) ptr;
     }
     return NULL;
 }