#ifndef __K_BUILTIN_H__
#define __K_BUILTIN_H__

#include <stdint.h>

typedef struct {
    uint32_t    gp_offset; // offset in bytes from reg_save_area to the next available general porpose argment register
    uint32_t    fp_offset; // offset in bytes from reg_save_area to the next available floating point argment register
    uint64_t    overflow_arg_area; // pointer used to fetch argments passed on stack
    uint64_t    reg_save_area; // pointer to regisater save area
}__kbuiltin_va_list[1];

typedef __kbuiltin_va_list kva_list;

void __kbuiltin_va_start(__kbuiltin_va_list ap, uint64_t n);
uint64_t __kbuiltin_va_arg(__kbuiltin_va_list ap);

// TODO: kstdarg.hに切り出す, kva_copyを実装する

#endif 