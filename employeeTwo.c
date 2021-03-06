#include <string.h>
#include "employee.h"

static PtrToEmployee searchEmployeeTable(PtrToEmployee ptr, int tableSize, const void *targetPtr, int (*functionPtr)(const void *, PtrToConstEmployee)){
    PtrToEmployee endPtr = ptr + tableSize;
    for(; ptr < endPtr; ptr++)
        if ((*functionPtr)(targetPtr, ptr) == 0)
            return (PtrToEmployee) ptr;    
        return NULL;
        
}

static int compareEmployeeNumber(const void *targetPtr, PtrToConstEmployee tableValuePtr){
    return * (long *) targetPtr != tableValuePtr->number);
}
static int compareEmployeeName(const void *targetPtr, PtrToConstEmployee tableValuePtr){
    return strcmp((char *) targetPtr, tableValuePtr->name);
}

PtrToEmployee searchEmployeeNumber(PtrToConstEmployee ptr, int size, long number){
    return searchEmployeeTable(ptr, size, &number, compareEmployeeNumber);
}

PtrToEmployee searchEmployeeName(PtrToConstEmployee ptr, int size, char* name){
    return searchEmployeeTable(ptr, size, name, compareEmployeeName);
}