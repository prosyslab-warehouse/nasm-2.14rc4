/* This file auto-generated from insns.dat by insns.pl - don't edit it */

#include "nasm.h"
#include "insns.h"

static const struct itemplate instrux_DB[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_DW[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_DD[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_DQ[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_DT[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_DO[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_DY[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_DZ[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_RESB[] = {
    {I_RESB, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39097, 0},
    ITEMPLATE_END
};

static const struct itemplate instrux_RESW[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_RESD[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_RESQ[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_REST[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_RESO[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_RESY[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_RESZ[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_INCBIN[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_AAA[] = {
    {I_AAA, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39963, 1},
    ITEMPLATE_END
};

static const struct itemplate instrux_AAD[] = {
    {I_AAD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38955, 1},
    {I_AAD, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38959, 2},
    ITEMPLATE_END
};

static const struct itemplate instrux_AAM[] = {
    {I_AAM, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38963, 1},
    {I_AAM, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38967, 2},
    ITEMPLATE_END
};

static const struct itemplate instrux_AAS[] = {
    {I_AAS, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39966, 1},
    ITEMPLATE_END
};

static const struct itemplate instrux_ADC[] = {
    {I_ADC, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+37150, 3},
    {I_ADC, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+37151, 0},
    {I_ADC, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+33478, 3},
    {I_ADC, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+33479, 0},
    {I_ADC, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+33484, 4},
    {I_ADC, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+33485, 5},
    {I_ADC, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+33490, 6},
    {I_ADC, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+33491, 7},
    {I_ADC, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+27741, 8},
    {I_ADC, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+27741, 0},
    {I_ADC, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+37155, 8},
    {I_ADC, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+37155, 0},
    {I_ADC, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+37160, 9},
    {I_ADC, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+37160, 5},
    {I_ADC, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+37165, 10},
    {I_ADC, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+37165, 7},
    {I_ADC, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+24280, 11},
    {I_ADC, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+24287, 12},
    {I_ADC, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+24294, 13},
    {I_ADC, 2, {REG_AL,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+38971, 8},
    {I_ADC, 2, {REG_AX,SBYTEWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+24281, 8},
    {I_ADC, 2, {REG_AX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+37170, 8},
    {I_ADC, 2, {REG_EAX,SBYTEDWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+24288, 9},
    {I_ADC, 2, {REG_EAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+37175, 9},
    {I_ADC, 2, {REG_RAX,SBYTEDWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+24295, 10},
    {I_ADC, 2, {REG_RAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+37180, 10},
    {I_ADC, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+33496, 3},
    {I_ADC, 2, {RM_GPR|BITS16,SBYTEWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+24280, 3},
    {I_ADC, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+24301, 3},
    {I_ADC, 2, {RM_GPR|BITS32,SBYTEDWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+24287, 4},
    {I_ADC, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+24308, 4},
    {I_ADC, 2, {RM_GPR|BITS64,SBYTEDWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+24294, 6},
    {I_ADC, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+24315, 6},
    {I_ADC, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+33496, 3},
    {I_ADC, 2, {MEMORY,SBYTEWORD|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+24280, 3},
    {I_ADC, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+24301, 3},
    {I_ADC, 2, {MEMORY,SBYTEDWORD|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+24287, 4},
    {I_ADC, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+24308, 4},
    {I_ADC, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+33502, 14},
    ITEMPLATE_END
};

static const struct itemplate instrux_ADD[] = {
    {I_ADD, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+37185, 3},
    {I_ADD, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+37186, 0},
    {I_ADD, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+33508, 3},
    {I_ADD, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+33509, 0},
    {I_ADD, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+33514, 4},
    {I_ADD, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+33515, 5},
    {I_ADD, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+33520, 6},
    {I_ADD, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+33521, 7},
    {I_ADD, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+31514, 8},
    {I_ADD, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+31514, 0},
    {I_ADD, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+37190, 8},
    {I_ADD, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+37190, 0},
    {I_ADD, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+37195, 9},
    {I_ADD, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+37195, 5},
    {I_ADD, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+37200, 10},
    {I_ADD, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+37200, 7},
    {I_ADD, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+24322, 11},
    {I_ADD, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+24329, 12},
    {I_ADD, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+24336, 13},
    {I_ADD, 2, {REG_AL,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+38975, 8},
    {I_ADD, 2, {REG_AX,SBYTEWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+24323, 8},
    {I_ADD, 2, {REG_AX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+37205, 8},
    {I_ADD, 2, {REG_EAX,SBYTEDWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+24330, 9},
    {I_ADD, 2, {REG_EAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+37210, 9},
    {I_ADD, 2, {REG_RAX,SBYTEDWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+24337, 10},
    {I_ADD, 2, {REG_RAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+37215, 10},
    {I_ADD, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+33526, 3},
    {I_ADD, 2, {RM_GPR|BITS16,SBYTEWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+24322, 3},
    {I_ADD, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+24343, 3},
    {I_ADD, 2, {RM_GPR|BITS32,SBYTEDWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+24329, 4},
    {I_ADD, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+24350, 4},
    {I_ADD, 2, {RM_GPR|BITS64,SBYTEDWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+24336, 6},
    {I_ADD, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+24357, 6},
    {I_ADD, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+33526, 3},
    {I_ADD, 2, {MEMORY,SBYTEWORD|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+24322, 3},
    {I_ADD, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+24343, 3},
    {I_ADD, 2, {MEMORY,SBYTEDWORD|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+24329, 4},
    {I_ADD, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+24350, 4},
    {I_ADD, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+33532, 14},
    ITEMPLATE_END
};

static const struct itemplate instrux_AND[] = {
    {I_AND, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+37220, 3},
    {I_AND, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+37221, 0},
    {I_AND, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+33538, 3},
    {I_AND, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+33539, 0},
    {I_AND, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+33544, 4},
    {I_AND, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+33545, 5},
    {I_AND, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+33550, 6},
    {I_AND, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+33551, 7},
    {I_AND, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+31794, 8},
    {I_AND, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+31794, 0},
    {I_AND, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+37225, 8},
    {I_AND, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+37225, 0},
    {I_AND, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+37230, 9},
    {I_AND, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+37230, 5},
    {I_AND, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+37235, 10},
    {I_AND, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+37235, 7},
    {I_AND, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+24364, 11},
    {I_AND, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+24371, 12},
    {I_AND, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+24378, 13},
    {I_AND, 2, {REG_AL,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+38979, 8},
    {I_AND, 2, {REG_AX,SBYTEWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+24365, 8},
    {I_AND, 2, {REG_AX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+37240, 8},
    {I_AND, 2, {REG_EAX,SBYTEDWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+24372, 9},
    {I_AND, 2, {REG_EAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+37245, 9},
    {I_AND, 2, {REG_RAX,SBYTEDWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+24379, 10},
    {I_AND, 2, {REG_RAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+37250, 10},
    {I_AND, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+33556, 3},
    {I_AND, 2, {RM_GPR|BITS16,SBYTEWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+24364, 3},
    {I_AND, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+24385, 3},
    {I_AND, 2, {RM_GPR|BITS32,SBYTEDWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+24371, 4},
    {I_AND, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+24392, 4},
    {I_AND, 2, {RM_GPR|BITS64,SBYTEDWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+24378, 6},
    {I_AND, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+24399, 6},
    {I_AND, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+33556, 3},
    {I_AND, 2, {MEMORY,SBYTEWORD|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+24364, 3},
    {I_AND, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+24385, 3},
    {I_AND, 2, {MEMORY,SBYTEDWORD|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+24371, 4},
    {I_AND, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+24392, 4},
    {I_AND, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+33562, 14},
    ITEMPLATE_END
};

static const struct itemplate instrux_ARPL[] = {
    {I_ARPL, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+38983, 15},
    {I_ARPL, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+38983, 16},
    ITEMPLATE_END
};

static const struct itemplate instrux_BB0_RESET[] = {
    {I_BB0_RESET, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38987, 17},
    ITEMPLATE_END
};

static const struct itemplate instrux_BB1_RESET[] = {
    {I_BB1_RESET, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38991, 17},
    ITEMPLATE_END
};

static const struct itemplate instrux_BOUND[] = {
    {I_BOUND, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+37255, 18},
    {I_BOUND, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+37260, 19},
    ITEMPLATE_END
};

static const struct itemplate instrux_BSF[] = {
    {I_BSF, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+24406, 9},
    {I_BSF, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+24406, 5},
    {I_BSF, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+24413, 9},
    {I_BSF, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+24413, 5},
    {I_BSF, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+24420, 10},
    {I_BSF, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+24420, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_BSR[] = {
    {I_BSR, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+24427, 9},
    {I_BSR, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+24427, 5},
    {I_BSR, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+24434, 9},
    {I_BSR, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+24434, 5},
    {I_BSR, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+24441, 10},
    {I_BSR, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+24441, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_BSWAP[] = {
    {I_BSWAP, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+33568, 20},
    {I_BSWAP, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+33574, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_BT[] = {
    {I_BT, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+33580, 9},
    {I_BT, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+33580, 5},
    {I_BT, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+33586, 9},
    {I_BT, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+33586, 5},
    {I_BT, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+33592, 10},
    {I_BT, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+33592, 7},
    {I_BT, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+24448, 21},
    {I_BT, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+24455, 21},
    {I_BT, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+24462, 22},
    ITEMPLATE_END
};

static const struct itemplate instrux_BTC[] = {
    {I_BTC, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+24469, 4},
    {I_BTC, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+24470, 5},
    {I_BTC, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+24476, 4},
    {I_BTC, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+24477, 5},
    {I_BTC, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+24483, 6},
    {I_BTC, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+24484, 7},
    {I_BTC, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+7584, 23},
    {I_BTC, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+7592, 23},
    {I_BTC, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+7600, 24},
    ITEMPLATE_END
};

static const struct itemplate instrux_BTR[] = {
    {I_BTR, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+24490, 4},
    {I_BTR, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+24491, 5},
    {I_BTR, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+24497, 4},
    {I_BTR, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+24498, 5},
    {I_BTR, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+24504, 6},
    {I_BTR, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+24505, 7},
    {I_BTR, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+7608, 23},
    {I_BTR, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+7616, 23},
    {I_BTR, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+7624, 24},
    ITEMPLATE_END
};

static const struct itemplate instrux_BTS[] = {
    {I_BTS, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+24511, 4},
    {I_BTS, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+24512, 5},
    {I_BTS, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+24518, 4},
    {I_BTS, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+24519, 5},
    {I_BTS, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+24525, 6},
    {I_BTS, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+24526, 7},
    {I_BTS, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+7632, 23},
    {I_BTS, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+7640, 23},
    {I_BTS, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+7648, 24},
    ITEMPLATE_END
};

static const struct itemplate instrux_CALL[] = {
    {I_CALL, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37265, 25},
    {I_CALL, 1, {IMMEDIATE|NEAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37265, 25},
    {I_CALL, 1, {IMMEDIATE|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+33598, 1},
    {I_CALL, 1, {IMMEDIATE|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37270, 26},
    {I_CALL, 1, {IMMEDIATE|BITS16|NEAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37270, 26},
    {I_CALL, 1, {IMMEDIATE|BITS16|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+33604, 1},
    {I_CALL, 1, {IMMEDIATE|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37275, 27},
    {I_CALL, 1, {IMMEDIATE|BITS32|NEAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37275, 27},
    {I_CALL, 1, {IMMEDIATE|BITS32|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+33610, 19},
    {I_CALL, 1, {IMMEDIATE|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37280, 28},
    {I_CALL, 1, {IMMEDIATE|BITS64|NEAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37280, 28},
    {I_CALL, 2, {IMMEDIATE|COLON,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+33616, 1},
    {I_CALL, 2, {IMMEDIATE|BITS16|COLON,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+33622, 1},
    {I_CALL, 2, {IMMEDIATE|COLON,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+33622, 1},
    {I_CALL, 2, {IMMEDIATE|BITS32|COLON,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+33628, 19},
    {I_CALL, 2, {IMMEDIATE|COLON,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+33628, 19},
    {I_CALL, 1, {MEMORY|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37285, 1},
    {I_CALL, 1, {MEMORY|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37290, 7},
    {I_CALL, 1, {MEMORY|BITS16|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37295, 0},
    {I_CALL, 1, {MEMORY|BITS32|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37300, 5},
    {I_CALL, 1, {MEMORY|BITS64|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37290, 7},
    {I_CALL, 1, {MEMORY|NEAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37305, 25},
    {I_CALL, 1, {RM_GPR|BITS16|NEAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37310, 26},
    {I_CALL, 1, {RM_GPR|BITS32|NEAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37315, 27},
    {I_CALL, 1, {RM_GPR|BITS64|NEAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37320, 28},
    {I_CALL, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37305, 25},
    {I_CALL, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37310, 26},
    {I_CALL, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37315, 27},
    {I_CALL, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37320, 28},
    ITEMPLATE_END
};

static const struct itemplate instrux_CBW[] = {
    {I_CBW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38995, 0},
    ITEMPLATE_END
};

static const struct itemplate instrux_CDQ[] = {
    {I_CDQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38999, 5},
    ITEMPLATE_END
};

static const struct itemplate instrux_CDQE[] = {
    {I_CDQE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39003, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_CLC[] = {
    {I_CLC, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38727, 0},
    ITEMPLATE_END
};

static const struct itemplate instrux_CLD[] = {
    {I_CLD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38952, 0},
    ITEMPLATE_END
};

static const struct itemplate instrux_CLI[] = {
    {I_CLI, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38042, 0},
    ITEMPLATE_END
};

static const struct itemplate instrux_CLTS[] = {
    {I_CLTS, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39007, 29},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMC[] = {
    {I_CMC, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39969, 0},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMP[] = {
    {I_CMP, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+39011, 8},
    {I_CMP, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+39011, 0},
    {I_CMP, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+37325, 8},
    {I_CMP, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+37325, 0},
    {I_CMP, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+37330, 9},
    {I_CMP, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+37330, 5},
    {I_CMP, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+37335, 10},
    {I_CMP, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+37335, 7},
    {I_CMP, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+31752, 8},
    {I_CMP, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+31752, 0},
    {I_CMP, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+37340, 8},
    {I_CMP, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+37340, 0},
    {I_CMP, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+37345, 9},
    {I_CMP, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+37345, 5},
    {I_CMP, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+37350, 10},
    {I_CMP, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+37350, 7},
    {I_CMP, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+33634, 0},
    {I_CMP, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+33640, 5},
    {I_CMP, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+33646, 7},
    {I_CMP, 2, {REG_AL,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+39015, 8},
    {I_CMP, 2, {REG_AX,SBYTEWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+33634, 8},
    {I_CMP, 2, {REG_AX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+37355, 8},
    {I_CMP, 2, {REG_EAX,SBYTEDWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+33640, 9},
    {I_CMP, 2, {REG_EAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+37360, 9},
    {I_CMP, 2, {REG_RAX,SBYTEDWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+33646, 10},
    {I_CMP, 2, {REG_RAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+37365, 10},
    {I_CMP, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+37370, 8},
    {I_CMP, 2, {RM_GPR|BITS16,SBYTEWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+33634, 8},
    {I_CMP, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+33652, 8},
    {I_CMP, 2, {RM_GPR|BITS32,SBYTEDWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+33640, 9},
    {I_CMP, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+33658, 9},
    {I_CMP, 2, {RM_GPR|BITS64,SBYTEDWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+33646, 10},
    {I_CMP, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+33664, 10},
    {I_CMP, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+37370, 8},
    {I_CMP, 2, {MEMORY,SBYTEWORD|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+33634, 8},
    {I_CMP, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+33652, 8},
    {I_CMP, 2, {MEMORY,SBYTEDWORD|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+33640, 9},
    {I_CMP, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+33658, 9},
    {I_CMP, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+37375, 30},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPSB[] = {
    {I_CMPSB, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39019, 0},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPSD[] = {
    {I_CMPSD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37380, 5},
    {I_CMPSD, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+25652, 140},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPSQ[] = {
    {I_CMPSQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37385, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPSW[] = {
    {I_CMPSW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37390, 0},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPXCHG[] = {
    {I_CMPXCHG, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+33670, 31},
    {I_CMPXCHG, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+33671, 32},
    {I_CMPXCHG, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+24532, 31},
    {I_CMPXCHG, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+24533, 32},
    {I_CMPXCHG, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+24539, 31},
    {I_CMPXCHG, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+24540, 32},
    {I_CMPXCHG, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+24546, 6},
    {I_CMPXCHG, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+24547, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPXCHG486[] = {
    {I_CMPXCHG486, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+37395, 33},
    {I_CMPXCHG486, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+37395, 34},
    {I_CMPXCHG486, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+33676, 33},
    {I_CMPXCHG486, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+33676, 34},
    {I_CMPXCHG486, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+33682, 33},
    {I_CMPXCHG486, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+33682, 34},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPXCHG8B[] = {
    {I_CMPXCHG8B, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+24553, 35},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPXCHG16B[] = {
    {I_CMPXCHG16B, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+33688, 13},
    ITEMPLATE_END
};

static const struct itemplate instrux_CPUID[] = {
    {I_CPUID, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39023, 32},
    ITEMPLATE_END
};

static const struct itemplate instrux_CPU_READ[] = {
    {I_CPU_READ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39027, 36},
    ITEMPLATE_END
};

static const struct itemplate instrux_CPU_WRITE[] = {
    {I_CPU_WRITE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39031, 36},
    ITEMPLATE_END
};

static const struct itemplate instrux_CQO[] = {
    {I_CQO, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39035, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_CWD[] = {
    {I_CWD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39039, 0},
    ITEMPLATE_END
};

static const struct itemplate instrux_CWDE[] = {
    {I_CWDE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39043, 5},
    ITEMPLATE_END
};

static const struct itemplate instrux_DAA[] = {
    {I_DAA, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39972, 1},
    ITEMPLATE_END
};

static const struct itemplate instrux_DAS[] = {
    {I_DAS, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39975, 1},
    ITEMPLATE_END
};

static const struct itemplate instrux_DEC[] = {
    {I_DEC, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39047, 1},
    {I_DEC, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39051, 19},
    {I_DEC, 1, {RM_GPR|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37400, 11},
    {I_DEC, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+33694, 11},
    {I_DEC, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+33700, 12},
    {I_DEC, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+33706, 13},
    ITEMPLATE_END
};

static const struct itemplate instrux_DIV[] = {
    {I_DIV, 1, {RM_GPR|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39055, 0},
    {I_DIV, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37405, 0},
    {I_DIV, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37410, 5},
    {I_DIV, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37415, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_DMINT[] = {
    {I_DMINT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39059, 37},
    ITEMPLATE_END
};

static const struct itemplate instrux_EMMS[] = {
    {I_EMMS, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39063, 38},
    ITEMPLATE_END
};

static const struct itemplate instrux_ENTER[] = {
    {I_ENTER, 2, {IMMEDIATE,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+37420, 39},
    ITEMPLATE_END
};

static const struct itemplate instrux_EQU[] = {
    {I_EQU, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+40010, 0},
    {I_EQU, 2, {IMMEDIATE|COLON,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+40010, 0},
    ITEMPLATE_END
};

static const struct itemplate instrux_F2XM1[] = {
    {I_F2XM1, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39067, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FABS[] = {
    {I_FABS, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39071, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FADD[] = {
    {I_FADD, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39075, 40},
    {I_FADD, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39079, 40},
    {I_FADD, 1, {FPUREG|TO,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37425, 40},
    {I_FADD, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37430, 40},
    {I_FADD, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37425, 40},
    {I_FADD, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+37435, 40},
    {I_FADD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39083, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FADDP[] = {
    {I_FADDP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37440, 40},
    {I_FADDP, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37440, 40},
    {I_FADDP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39083, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FBLD[] = {
    {I_FBLD, 1, {MEMORY|BITS80,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39087, 40},
    {I_FBLD, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39087, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FBSTP[] = {
    {I_FBSTP, 1, {MEMORY|BITS80,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39091, 40},
    {I_FBSTP, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39091, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCHS[] = {
    {I_FCHS, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39095, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCLEX[] = {
    {I_FCLEX, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37445, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCMOVB[] = {
    {I_FCMOVB, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37450, 41},
    {I_FCMOVB, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+37455, 41},
    {I_FCMOVB, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39099, 41},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCMOVBE[] = {
    {I_FCMOVBE, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37460, 41},
    {I_FCMOVBE, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+37465, 41},
    {I_FCMOVBE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39103, 41},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCMOVE[] = {
    {I_FCMOVE, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37470, 41},
    {I_FCMOVE, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+37475, 41},
    {I_FCMOVE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39107, 41},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCMOVNB[] = {
    {I_FCMOVNB, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37480, 41},
    {I_FCMOVNB, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+37485, 41},
    {I_FCMOVNB, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39111, 41},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCMOVNBE[] = {
    {I_FCMOVNBE, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37490, 41},
    {I_FCMOVNBE, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+37495, 41},
    {I_FCMOVNBE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39115, 41},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCMOVNE[] = {
    {I_FCMOVNE, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37500, 41},
    {I_FCMOVNE, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+37505, 41},
    {I_FCMOVNE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39119, 41},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCMOVNU[] = {
    {I_FCMOVNU, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37510, 41},
    {I_FCMOVNU, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+37515, 41},
    {I_FCMOVNU, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39123, 41},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCMOVU[] = {
    {I_FCMOVU, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37520, 41},
    {I_FCMOVU, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+37525, 41},
    {I_FCMOVU, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39127, 41},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCOM[] = {
    {I_FCOM, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39131, 40},
    {I_FCOM, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39135, 40},
    {I_FCOM, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37530, 40},
    {I_FCOM, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+37535, 40},
    {I_FCOM, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39139, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCOMI[] = {
    {I_FCOMI, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37540, 41},
    {I_FCOMI, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+37545, 41},
    {I_FCOMI, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39143, 41},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCOMIP[] = {
    {I_FCOMIP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37550, 41},
    {I_FCOMIP, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+37555, 41},
    {I_FCOMIP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39147, 41},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCOMP[] = {
    {I_FCOMP, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39151, 40},
    {I_FCOMP, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39155, 40},
    {I_FCOMP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37560, 40},
    {I_FCOMP, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+37565, 40},
    {I_FCOMP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39159, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCOMPP[] = {
    {I_FCOMPP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39163, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCOS[] = {
    {I_FCOS, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39167, 42},
    ITEMPLATE_END
};

static const struct itemplate instrux_FDECSTP[] = {
    {I_FDECSTP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39171, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FDISI[] = {
    {I_FDISI, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37570, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FDIV[] = {
    {I_FDIV, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39175, 40},
    {I_FDIV, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39179, 40},
    {I_FDIV, 1, {FPUREG|TO,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37575, 40},
    {I_FDIV, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37580, 40},
    {I_FDIV, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37575, 40},
    {I_FDIV, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+37585, 40},
    {I_FDIV, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39183, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FDIVP[] = {
    {I_FDIVP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37590, 40},
    {I_FDIVP, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37590, 40},
    {I_FDIVP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39183, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FDIVR[] = {
    {I_FDIVR, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39187, 40},
    {I_FDIVR, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39191, 40},
    {I_FDIVR, 1, {FPUREG|TO,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37595, 40},
    {I_FDIVR, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37595, 40},
    {I_FDIVR, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37600, 40},
    {I_FDIVR, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+37605, 40},
    {I_FDIVR, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39195, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FDIVRP[] = {
    {I_FDIVRP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37610, 40},
    {I_FDIVRP, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37610, 40},
    {I_FDIVRP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39195, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FEMMS[] = {
    {I_FEMMS, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39199, 43},
    ITEMPLATE_END
};

static const struct itemplate instrux_FENI[] = {
    {I_FENI, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37615, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FFREE[] = {
    {I_FFREE, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37620, 40},
    {I_FFREE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39203, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FFREEP[] = {
    {I_FFREEP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37625, 44},
    {I_FFREEP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39207, 44},
    ITEMPLATE_END
};

static const struct itemplate instrux_FIADD[] = {
    {I_FIADD, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39211, 40},
    {I_FIADD, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39215, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FICOM[] = {
    {I_FICOM, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39219, 40},
    {I_FICOM, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39223, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FICOMP[] = {
    {I_FICOMP, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39227, 40},
    {I_FICOMP, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39231, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FIDIV[] = {
    {I_FIDIV, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39235, 40},
    {I_FIDIV, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39239, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FIDIVR[] = {
    {I_FIDIVR, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39243, 40},
    {I_FIDIVR, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39247, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FILD[] = {
    {I_FILD, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39251, 40},
    {I_FILD, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39255, 40},
    {I_FILD, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39259, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FIMUL[] = {
    {I_FIMUL, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39263, 40},
    {I_FIMUL, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39267, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FINCSTP[] = {
    {I_FINCSTP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39271, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FINIT[] = {
    {I_FINIT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37630, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FIST[] = {
    {I_FIST, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39275, 40},
    {I_FIST, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39279, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FISTP[] = {
    {I_FISTP, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39283, 40},
    {I_FISTP, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39287, 40},
    {I_FISTP, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39291, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FISTTP[] = {
    {I_FISTTP, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39295, 45},
    {I_FISTTP, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39299, 45},
    {I_FISTTP, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39303, 45},
    ITEMPLATE_END
};

static const struct itemplate instrux_FISUB[] = {
    {I_FISUB, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39307, 40},
    {I_FISUB, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39311, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FISUBR[] = {
    {I_FISUBR, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39315, 40},
    {I_FISUBR, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39319, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FLD[] = {
    {I_FLD, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39323, 40},
    {I_FLD, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39327, 40},
    {I_FLD, 1, {MEMORY|BITS80,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39331, 40},
    {I_FLD, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37635, 40},
    {I_FLD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39335, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FLD1[] = {
    {I_FLD1, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39339, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FLDCW[] = {
    {I_FLDCW, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39343, 46},
    ITEMPLATE_END
};

static const struct itemplate instrux_FLDENV[] = {
    {I_FLDENV, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39347, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FLDL2E[] = {
    {I_FLDL2E, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39351, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FLDL2T[] = {
    {I_FLDL2T, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39355, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FLDLG2[] = {
    {I_FLDLG2, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39359, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FLDLN2[] = {
    {I_FLDLN2, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39363, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FLDPI[] = {
    {I_FLDPI, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39367, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FLDZ[] = {
    {I_FLDZ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39371, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FMUL[] = {
    {I_FMUL, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39375, 40},
    {I_FMUL, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39379, 40},
    {I_FMUL, 1, {FPUREG|TO,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37640, 40},
    {I_FMUL, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37640, 40},
    {I_FMUL, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37645, 40},
    {I_FMUL, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+37650, 40},
    {I_FMUL, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39383, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FMULP[] = {
    {I_FMULP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37655, 40},
    {I_FMULP, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37655, 40},
    {I_FMULP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39383, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FNCLEX[] = {
    {I_FNCLEX, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37446, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FNDISI[] = {
    {I_FNDISI, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37571, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FNENI[] = {
    {I_FNENI, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37616, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FNINIT[] = {
    {I_FNINIT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37631, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FNOP[] = {
    {I_FNOP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39387, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FNSAVE[] = {
    {I_FNSAVE, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37661, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FNSTCW[] = {
    {I_FNSTCW, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37671, 46},
    ITEMPLATE_END
};

static const struct itemplate instrux_FNSTENV[] = {
    {I_FNSTENV, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37676, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FNSTSW[] = {
    {I_FNSTSW, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37686, 46},
    {I_FNSTSW, 1, {REG_AX,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37691, 47},
    ITEMPLATE_END
};

static const struct itemplate instrux_FPATAN[] = {
    {I_FPATAN, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39391, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FPREM[] = {
    {I_FPREM, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39395, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FPREM1[] = {
    {I_FPREM1, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39399, 42},
    ITEMPLATE_END
};

static const struct itemplate instrux_FPTAN[] = {
    {I_FPTAN, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39403, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FRNDINT[] = {
    {I_FRNDINT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39407, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FRSTOR[] = {
    {I_FRSTOR, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39411, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FSAVE[] = {
    {I_FSAVE, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37660, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FSCALE[] = {
    {I_FSCALE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39415, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FSETPM[] = {
    {I_FSETPM, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39419, 47},
    ITEMPLATE_END
};

static const struct itemplate instrux_FSIN[] = {
    {I_FSIN, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39423, 42},
    ITEMPLATE_END
};

static const struct itemplate instrux_FSINCOS[] = {
    {I_FSINCOS, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39427, 42},
    ITEMPLATE_END
};

static const struct itemplate instrux_FSQRT[] = {
    {I_FSQRT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39431, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FST[] = {
    {I_FST, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39435, 40},
    {I_FST, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39439, 40},
    {I_FST, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37665, 40},
    {I_FST, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39443, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FSTCW[] = {
    {I_FSTCW, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37670, 46},
    ITEMPLATE_END
};

static const struct itemplate instrux_FSTENV[] = {
    {I_FSTENV, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37675, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FSTP[] = {
    {I_FSTP, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39447, 40},
    {I_FSTP, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39451, 40},
    {I_FSTP, 1, {MEMORY|BITS80,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39455, 40},
    {I_FSTP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37680, 40},
    {I_FSTP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39459, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FSTSW[] = {
    {I_FSTSW, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37685, 46},
    {I_FSTSW, 1, {REG_AX,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37690, 47},
    ITEMPLATE_END
};

static const struct itemplate instrux_FSUB[] = {
    {I_FSUB, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39463, 40},
    {I_FSUB, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39467, 40},
    {I_FSUB, 1, {FPUREG|TO,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37695, 40},
    {I_FSUB, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37695, 40},
    {I_FSUB, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37700, 40},
    {I_FSUB, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+37705, 40},
    {I_FSUB, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39471, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FSUBP[] = {
    {I_FSUBP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37710, 40},
    {I_FSUBP, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37710, 40},
    {I_FSUBP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39471, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FSUBR[] = {
    {I_FSUBR, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39475, 40},
    {I_FSUBR, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39479, 40},
    {I_FSUBR, 1, {FPUREG|TO,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37715, 40},
    {I_FSUBR, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37715, 40},
    {I_FSUBR, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37720, 40},
    {I_FSUBR, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+37725, 40},
    {I_FSUBR, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39483, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FSUBRP[] = {
    {I_FSUBRP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37730, 40},
    {I_FSUBRP, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37730, 40},
    {I_FSUBRP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39483, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FTST[] = {
    {I_FTST, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39487, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FUCOM[] = {
    {I_FUCOM, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37735, 42},
    {I_FUCOM, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+37740, 42},
    {I_FUCOM, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39491, 42},
    ITEMPLATE_END
};

static const struct itemplate instrux_FUCOMI[] = {
    {I_FUCOMI, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37745, 41},
    {I_FUCOMI, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+37750, 41},
    {I_FUCOMI, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39495, 41},
    ITEMPLATE_END
};

static const struct itemplate instrux_FUCOMIP[] = {
    {I_FUCOMIP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37755, 41},
    {I_FUCOMIP, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+37760, 41},
    {I_FUCOMIP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39499, 41},
    ITEMPLATE_END
};

static const struct itemplate instrux_FUCOMP[] = {
    {I_FUCOMP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37765, 42},
    {I_FUCOMP, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+37770, 42},
    {I_FUCOMP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39503, 42},
    ITEMPLATE_END
};

static const struct itemplate instrux_FUCOMPP[] = {
    {I_FUCOMPP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39507, 42},
    ITEMPLATE_END
};

static const struct itemplate instrux_FXAM[] = {
    {I_FXAM, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39511, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FXCH[] = {
    {I_FXCH, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37775, 40},
    {I_FXCH, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37775, 40},
    {I_FXCH, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+37780, 40},
    {I_FXCH, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39515, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FXTRACT[] = {
    {I_FXTRACT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39519, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FYL2X[] = {
    {I_FYL2X, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39523, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_FYL2XP1[] = {
    {I_FYL2XP1, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39527, 40},
    ITEMPLATE_END
};

static const struct itemplate instrux_HLT[] = {
    {I_HLT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39978, 48},
    ITEMPLATE_END
};

static const struct itemplate instrux_IBTS[] = {
    {I_IBTS, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+33676, 49},
    {I_IBTS, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+33676, 50},
    {I_IBTS, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+33682, 51},
    {I_IBTS, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+33682, 50},
    ITEMPLATE_END
};

static const struct itemplate instrux_ICEBP[] = {
    {I_ICEBP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39981, 5},
    ITEMPLATE_END
};

static const struct itemplate instrux_IDIV[] = {
    {I_IDIV, 1, {RM_GPR|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39531, 0},
    {I_IDIV, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37785, 0},
    {I_IDIV, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37790, 5},
    {I_IDIV, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37795, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_IMUL[] = {
    {I_IMUL, 1, {RM_GPR|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39535, 0},
    {I_IMUL, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37800, 0},
    {I_IMUL, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37805, 5},
    {I_IMUL, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37810, 7},
    {I_IMUL, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+33712, 9},
    {I_IMUL, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+33712, 5},
    {I_IMUL, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+33718, 9},
    {I_IMUL, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+33718, 5},
    {I_IMUL, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+33724, 10},
    {I_IMUL, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+33724, 7},
    {I_IMUL, 3, {REG_GPR|BITS16,MEMORY,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+33730, 52},
    {I_IMUL, 3, {REG_GPR|BITS16,MEMORY,SBYTEWORD,0,0}, NO_DECORATOR, nasm_bytecodes+33730, 52},
    {I_IMUL, 3, {REG_GPR|BITS16,MEMORY,IMMEDIATE|BITS16,0,0}, NO_DECORATOR, nasm_bytecodes+33736, 52},
    {I_IMUL, 3, {REG_GPR|BITS16,MEMORY,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+33736, 52},
    {I_IMUL, 3, {REG_GPR|BITS16,REG_GPR|BITS16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+33730, 39},
    {I_IMUL, 3, {REG_GPR|BITS16,REG_GPR|BITS16,SBYTEWORD,0,0}, NO_DECORATOR, nasm_bytecodes+33730, 52},
    {I_IMUL, 3, {REG_GPR|BITS16,REG_GPR|BITS16,IMMEDIATE|BITS16,0,0}, NO_DECORATOR, nasm_bytecodes+33736, 39},
    {I_IMUL, 3, {REG_GPR|BITS16,REG_GPR|BITS16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+33736, 52},
    {I_IMUL, 3, {REG_GPR|BITS32,MEMORY,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+33742, 9},
    {I_IMUL, 3, {REG_GPR|BITS32,MEMORY,SBYTEDWORD,0,0}, NO_DECORATOR, nasm_bytecodes+33742, 9},
    {I_IMUL, 3, {REG_GPR|BITS32,MEMORY,IMMEDIATE|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+33748, 9},
    {I_IMUL, 3, {REG_GPR|BITS32,MEMORY,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+33748, 9},
    {I_IMUL, 3, {REG_GPR|BITS32,REG_GPR|BITS32,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+33742, 5},
    {I_IMUL, 3, {REG_GPR|BITS32,REG_GPR|BITS32,SBYTEDWORD,0,0}, NO_DECORATOR, nasm_bytecodes+33742, 9},
    {I_IMUL, 3, {REG_GPR|BITS32,REG_GPR|BITS32,IMMEDIATE|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+33748, 5},
    {I_IMUL, 3, {REG_GPR|BITS32,REG_GPR|BITS32,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+33748, 9},
    {I_IMUL, 3, {REG_GPR|BITS64,MEMORY,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+33754, 10},
    {I_IMUL, 3, {REG_GPR|BITS64,MEMORY,SBYTEDWORD,0,0}, NO_DECORATOR, nasm_bytecodes+33754, 10},
    {I_IMUL, 3, {REG_GPR|BITS64,MEMORY,IMMEDIATE|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+33760, 10},
    {I_IMUL, 3, {REG_GPR|BITS64,MEMORY,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+33766, 10},
    {I_IMUL, 3, {REG_GPR|BITS64,REG_GPR|BITS64,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+33754, 7},
    {I_IMUL, 3, {REG_GPR|BITS64,REG_GPR|BITS64,SBYTEDWORD,0,0}, NO_DECORATOR, nasm_bytecodes+33754, 10},
    {I_IMUL, 3, {REG_GPR|BITS64,REG_GPR|BITS64,IMMEDIATE|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+33760, 7},
    {I_IMUL, 3, {REG_GPR|BITS64,REG_GPR|BITS64,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+33766, 10},
    {I_IMUL, 2, {REG_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+33772, 39},
    {I_IMUL, 2, {REG_GPR|BITS16,SBYTEWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+33772, 52},
    {I_IMUL, 2, {REG_GPR|BITS16,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+33778, 39},
    {I_IMUL, 2, {REG_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+33778, 52},
    {I_IMUL, 2, {REG_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+33784, 5},
    {I_IMUL, 2, {REG_GPR|BITS32,SBYTEDWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+33784, 9},
    {I_IMUL, 2, {REG_GPR|BITS32,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+33790, 5},
    {I_IMUL, 2, {REG_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+33790, 9},
    {I_IMUL, 2, {REG_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+33796, 7},
    {I_IMUL, 2, {REG_GPR|BITS64,SBYTEDWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+33796, 10},
    {I_IMUL, 2, {REG_GPR|BITS64,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+33802, 7},
    {I_IMUL, 2, {REG_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+33802, 10},
    ITEMPLATE_END
};

static const struct itemplate instrux_IN[] = {
    {I_IN, 2, {REG_AL,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+39539, 53},
    {I_IN, 2, {REG_AX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+37815, 53},
    {I_IN, 2, {REG_EAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+37820, 21},
    {I_IN, 2, {REG_AL,REG_DX,0,0,0}, NO_DECORATOR, nasm_bytecodes+39984, 0},
    {I_IN, 2, {REG_AX,REG_DX,0,0,0}, NO_DECORATOR, nasm_bytecodes+39543, 0},
    {I_IN, 2, {REG_EAX,REG_DX,0,0,0}, NO_DECORATOR, nasm_bytecodes+39547, 5},
    ITEMPLATE_END
};

static const struct itemplate instrux_INC[] = {
    {I_INC, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39551, 1},
    {I_INC, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39555, 19},
    {I_INC, 1, {RM_GPR|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37825, 11},
    {I_INC, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+33808, 11},
    {I_INC, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+33814, 12},
    {I_INC, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+33820, 13},
    ITEMPLATE_END
};

static const struct itemplate instrux_INSB[] = {
    {I_INSB, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39987, 39},
    ITEMPLATE_END
};

static const struct itemplate instrux_INSD[] = {
    {I_INSD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39559, 5},
    ITEMPLATE_END
};

static const struct itemplate instrux_INSW[] = {
    {I_INSW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39563, 39},
    ITEMPLATE_END
};

static const struct itemplate instrux_INT[] = {
    {I_INT, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39567, 53},
    ITEMPLATE_END
};

static const struct itemplate instrux_INT01[] = {
    {I_INT01, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39981, 5},
    ITEMPLATE_END
};

static const struct itemplate instrux_INT1[] = {
    {I_INT1, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39981, 5},
    ITEMPLATE_END
};

static const struct itemplate instrux_INT03[] = {
    {I_INT03, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39990, 0},
    ITEMPLATE_END
};

static const struct itemplate instrux_INT3[] = {
    {I_INT3, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39990, 0},
    ITEMPLATE_END
};

static const struct itemplate instrux_INTO[] = {
    {I_INTO, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39993, 1},
    ITEMPLATE_END
};

static const struct itemplate instrux_INVD[] = {
    {I_INVD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39571, 54},
    ITEMPLATE_END
};

static const struct itemplate instrux_INVPCID[] = {
    {I_INVPCID, 2, {REG_GPR|BITS32,MEMORY|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+24560, 55},
    {I_INVPCID, 2, {REG_GPR|BITS64,MEMORY|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+24560, 56},
    ITEMPLATE_END
};

static const struct itemplate instrux_INVLPG[] = {
    {I_INVLPG, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37830, 54},
    ITEMPLATE_END
};

static const struct itemplate instrux_INVLPGA[] = {
    {I_INVLPGA, 2, {REG_AX,REG_ECX,0,0,0}, NO_DECORATOR, nasm_bytecodes+33826, 57},
    {I_INVLPGA, 2, {REG_EAX,REG_ECX,0,0,0}, NO_DECORATOR, nasm_bytecodes+33832, 58},
    {I_INVLPGA, 2, {REG_RAX,REG_ECX,0,0,0}, NO_DECORATOR, nasm_bytecodes+24567, 59},
    {I_INVLPGA, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+33833, 58},
    ITEMPLATE_END
};

static const struct itemplate instrux_IRET[] = {
    {I_IRET, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39575, 0},
    ITEMPLATE_END
};

static const struct itemplate instrux_IRETD[] = {
    {I_IRETD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39579, 5},
    ITEMPLATE_END
};

static const struct itemplate instrux_IRETQ[] = {
    {I_IRETQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39583, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_IRETW[] = {
    {I_IRETW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39587, 0},
    ITEMPLATE_END
};

static const struct itemplate instrux_JCXZ[] = {
    {I_JCXZ, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37835, 1},
    ITEMPLATE_END
};

static const struct itemplate instrux_JECXZ[] = {
    {I_JECXZ, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37840, 5},
    ITEMPLATE_END
};

static const struct itemplate instrux_JRCXZ[] = {
    {I_JRCXZ, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37845, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_JMP[] = {
    {I_JMP, 1, {IMMEDIATE|SHORT,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37851, 0},
    {I_JMP, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37850, 0},
    {I_JMP, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37855, 25},
    {I_JMP, 1, {IMMEDIATE|NEAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37855, 25},
    {I_JMP, 1, {IMMEDIATE|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+33838, 1},
    {I_JMP, 1, {IMMEDIATE|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37860, 26},
    {I_JMP, 1, {IMMEDIATE|BITS16|NEAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37860, 26},
    {I_JMP, 1, {IMMEDIATE|BITS16|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+33844, 1},
    {I_JMP, 1, {IMMEDIATE|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37865, 27},
    {I_JMP, 1, {IMMEDIATE|BITS32|NEAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37865, 27},
    {I_JMP, 1, {IMMEDIATE|BITS32|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+33850, 19},
    {I_JMP, 1, {IMMEDIATE|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37870, 28},
    {I_JMP, 1, {IMMEDIATE|BITS64|NEAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37870, 28},
    {I_JMP, 2, {IMMEDIATE|COLON,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+33856, 1},
    {I_JMP, 2, {IMMEDIATE|BITS16|COLON,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+33862, 1},
    {I_JMP, 2, {IMMEDIATE|COLON,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+33862, 1},
    {I_JMP, 2, {IMMEDIATE|BITS32|COLON,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+33868, 19},
    {I_JMP, 2, {IMMEDIATE|COLON,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+33868, 19},
    {I_JMP, 1, {MEMORY|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37875, 1},
    {I_JMP, 1, {MEMORY|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37880, 7},
    {I_JMP, 1, {MEMORY|BITS16|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37885, 0},
    {I_JMP, 1, {MEMORY|BITS32|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37890, 5},
    {I_JMP, 1, {MEMORY|BITS64|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37880, 7},
    {I_JMP, 1, {MEMORY|NEAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37895, 25},
    {I_JMP, 1, {RM_GPR|BITS16|NEAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37900, 26},
    {I_JMP, 1, {RM_GPR|BITS32|NEAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37905, 27},
    {I_JMP, 1, {RM_GPR|BITS64|NEAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37910, 28},
    {I_JMP, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37895, 25},
    {I_JMP, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37900, 26},
    {I_JMP, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37905, 27},
    {I_JMP, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37910, 28},
    ITEMPLATE_END
};

static const struct itemplate instrux_JMPE[] = {
    {I_JMPE, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+33874, 60},
    {I_JMPE, 1, {IMMEDIATE|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+33880, 60},
    {I_JMPE, 1, {IMMEDIATE|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+33886, 60},
    {I_JMPE, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+33892, 60},
    {I_JMPE, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+33898, 60},
    ITEMPLATE_END
};

static const struct itemplate instrux_LAHF[] = {
    {I_LAHF, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39996, 0},
    ITEMPLATE_END
};

static const struct itemplate instrux_LAR[] = {
    {I_LAR, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+33904, 61},
    {I_LAR, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+33904, 62},
    {I_LAR, 2, {REG_GPR|BITS16,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+33904, 63},
    {I_LAR, 2, {REG_GPR|BITS16,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+24574, 64},
    {I_LAR, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+33910, 65},
    {I_LAR, 2, {REG_GPR|BITS32,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+33910, 63},
    {I_LAR, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+33910, 63},
    {I_LAR, 2, {REG_GPR|BITS32,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+24581, 64},
    {I_LAR, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+33916, 66},
    {I_LAR, 2, {REG_GPR|BITS64,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+33916, 64},
    {I_LAR, 2, {REG_GPR|BITS64,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+33916, 64},
    {I_LAR, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+33916, 64},
    ITEMPLATE_END
};

static const struct itemplate instrux_LDS[] = {
    {I_LDS, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+37915, 1},
    {I_LDS, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+37920, 19},
    ITEMPLATE_END
};

static const struct itemplate instrux_LEA[] = {
    {I_LEA, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+37925, 0},
    {I_LEA, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+37930, 5},
    {I_LEA, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+37935, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_LEAVE[] = {
    {I_LEAVE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38187, 39},
    ITEMPLATE_END
};

static const struct itemplate instrux_LES[] = {
    {I_LES, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+37940, 1},
    {I_LES, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+37945, 19},
    ITEMPLATE_END
};

static const struct itemplate instrux_LFENCE[] = {
    {I_LFENCE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+33922, 59},
    {I_LFENCE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+33922, 140},
    ITEMPLATE_END
};

static const struct itemplate instrux_LFS[] = {
    {I_LFS, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+33928, 5},
    {I_LFS, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+33934, 5},
    {I_LFS, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+33940, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_LGDT[] = {
    {I_LGDT, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37950, 29},
    ITEMPLATE_END
};

static const struct itemplate instrux_LGS[] = {
    {I_LGS, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+33946, 5},
    {I_LGS, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+33952, 5},
    {I_LGS, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+33958, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_LIDT[] = {
    {I_LIDT, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37955, 29},
    ITEMPLATE_END
};

static const struct itemplate instrux_LLDT[] = {
    {I_LLDT, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37960, 67},
    {I_LLDT, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37960, 67},
    {I_LLDT, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37960, 67},
    ITEMPLATE_END
};

static const struct itemplate instrux_LMSW[] = {
    {I_LMSW, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37965, 29},
    {I_LMSW, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37965, 29},
    {I_LMSW, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37965, 29},
    ITEMPLATE_END
};

static const struct itemplate instrux_LOADALL[] = {
    {I_LOADALL, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39591, 50},
    ITEMPLATE_END
};

static const struct itemplate instrux_LOADALL286[] = {
    {I_LOADALL286, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39595, 68},
    ITEMPLATE_END
};

static const struct itemplate instrux_LODSB[] = {
    {I_LODSB, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39999, 0},
    ITEMPLATE_END
};

static const struct itemplate instrux_LODSD[] = {
    {I_LODSD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39599, 5},
    ITEMPLATE_END
};

static const struct itemplate instrux_LODSQ[] = {
    {I_LODSQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39603, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_LODSW[] = {
    {I_LODSW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39607, 0},
    ITEMPLATE_END
};

static const struct itemplate instrux_LOOP[] = {
    {I_LOOP, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37970, 0},
    {I_LOOP, 2, {IMMEDIATE,REG_CX,0,0,0}, NO_DECORATOR, nasm_bytecodes+37975, 1},
    {I_LOOP, 2, {IMMEDIATE,REG_ECX,0,0,0}, NO_DECORATOR, nasm_bytecodes+37980, 5},
    {I_LOOP, 2, {IMMEDIATE,REG_RCX,0,0,0}, NO_DECORATOR, nasm_bytecodes+37985, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_LOOPE[] = {
    {I_LOOPE, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37990, 0},
    {I_LOOPE, 2, {IMMEDIATE,REG_CX,0,0,0}, NO_DECORATOR, nasm_bytecodes+37995, 1},
    {I_LOOPE, 2, {IMMEDIATE,REG_ECX,0,0,0}, NO_DECORATOR, nasm_bytecodes+38000, 5},
    {I_LOOPE, 2, {IMMEDIATE,REG_RCX,0,0,0}, NO_DECORATOR, nasm_bytecodes+38005, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_LOOPNE[] = {
    {I_LOOPNE, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38010, 0},
    {I_LOOPNE, 2, {IMMEDIATE,REG_CX,0,0,0}, NO_DECORATOR, nasm_bytecodes+38015, 1},
    {I_LOOPNE, 2, {IMMEDIATE,REG_ECX,0,0,0}, NO_DECORATOR, nasm_bytecodes+38020, 5},
    {I_LOOPNE, 2, {IMMEDIATE,REG_RCX,0,0,0}, NO_DECORATOR, nasm_bytecodes+38025, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_LOOPNZ[] = {
    {I_LOOPNZ, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38010, 0},
    {I_LOOPNZ, 2, {IMMEDIATE,REG_CX,0,0,0}, NO_DECORATOR, nasm_bytecodes+38015, 1},
    {I_LOOPNZ, 2, {IMMEDIATE,REG_ECX,0,0,0}, NO_DECORATOR, nasm_bytecodes+38020, 5},
    {I_LOOPNZ, 2, {IMMEDIATE,REG_RCX,0,0,0}, NO_DECORATOR, nasm_bytecodes+38025, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_LOOPZ[] = {
    {I_LOOPZ, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37990, 0},
    {I_LOOPZ, 2, {IMMEDIATE,REG_CX,0,0,0}, NO_DECORATOR, nasm_bytecodes+37995, 1},
    {I_LOOPZ, 2, {IMMEDIATE,REG_ECX,0,0,0}, NO_DECORATOR, nasm_bytecodes+38000, 5},
    {I_LOOPZ, 2, {IMMEDIATE,REG_RCX,0,0,0}, NO_DECORATOR, nasm_bytecodes+38005, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_LSL[] = {
    {I_LSL, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+33964, 61},
    {I_LSL, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+33964, 62},
    {I_LSL, 2, {REG_GPR|BITS16,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+33964, 63},
    {I_LSL, 2, {REG_GPR|BITS16,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+24588, 64},
    {I_LSL, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+33970, 65},
    {I_LSL, 2, {REG_GPR|BITS32,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+33970, 63},
    {I_LSL, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+33970, 63},
    {I_LSL, 2, {REG_GPR|BITS32,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+24595, 64},
    {I_LSL, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+33976, 66},
    {I_LSL, 2, {REG_GPR|BITS64,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+33976, 64},
    {I_LSL, 2, {REG_GPR|BITS64,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+33976, 64},
    {I_LSL, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+33976, 64},
    ITEMPLATE_END
};

static const struct itemplate instrux_LSS[] = {
    {I_LSS, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+33982, 5},
    {I_LSS, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+33988, 5},
    {I_LSS, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+33994, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_LTR[] = {
    {I_LTR, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38030, 67},
    {I_LTR, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38030, 67},
    {I_LTR, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38030, 67},
    ITEMPLATE_END
};

static const struct itemplate instrux_MFENCE[] = {
    {I_MFENCE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+34000, 59},
    {I_MFENCE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+34000, 140},
    ITEMPLATE_END
};

static const struct itemplate instrux_MONITOR[] = {
    {I_MONITOR, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38035, 69},
    {I_MONITOR, 3, {REG_EAX,REG_ECX,REG_EDX,0,0}, NO_DECORATOR, nasm_bytecodes+38035, 70},
    {I_MONITOR, 3, {REG_RAX,REG_ECX,REG_EDX,0,0}, NO_DECORATOR, nasm_bytecodes+38035, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_MONITORX[] = {
    {I_MONITORX, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38040, 71},
    {I_MONITORX, 3, {REG_RAX,REG_ECX,REG_EDX,0,0}, NO_DECORATOR, nasm_bytecodes+38040, 59},
    {I_MONITORX, 3, {REG_EAX,REG_ECX,REG_EDX,0,0}, NO_DECORATOR, nasm_bytecodes+38040, 71},
    {I_MONITORX, 3, {REG_AX,REG_ECX,REG_EDX,0,0}, NO_DECORATOR, nasm_bytecodes+38040, 71},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOV[] = {
    {I_MOV, 2, {MEMORY,REG_SREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+38061, 72},
    {I_MOV, 2, {REG_GPR|BITS16,REG_SREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+38045, 0},
    {I_MOV, 2, {REG_GPR|BITS32,REG_SREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+38050, 5},
    {I_MOV, 2, {REG_GPR|BITS64,REG_SREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+38055, 73},
    {I_MOV, 2, {RM_GPR|BITS64,REG_SREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+38060, 7},
    {I_MOV, 2, {REG_SREG,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38081, 72},
    {I_MOV, 2, {REG_SREG,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+38081, 74},
    {I_MOV, 2, {REG_SREG,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+38081, 75},
    {I_MOV, 2, {REG_SREG,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+38065, 73},
    {I_MOV, 2, {REG_SREG,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+38070, 0},
    {I_MOV, 2, {REG_SREG,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+38075, 5},
    {I_MOV, 2, {REG_SREG,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+38080, 7},
    {I_MOV, 2, {REG_AL,MEM_OFFS,0,0,0}, NO_DECORATOR, nasm_bytecodes+39611, 8},
    {I_MOV, 2, {REG_AX,MEM_OFFS,0,0,0}, NO_DECORATOR, nasm_bytecodes+38085, 8},
    {I_MOV, 2, {REG_EAX,MEM_OFFS,0,0,0}, NO_DECORATOR, nasm_bytecodes+38090, 9},
    {I_MOV, 2, {REG_RAX,MEM_OFFS,0,0,0}, NO_DECORATOR, nasm_bytecodes+38095, 10},
    {I_MOV, 2, {MEM_OFFS,REG_AL,0,0,0}, NO_DECORATOR, nasm_bytecodes+39615, 76},
    {I_MOV, 2, {MEM_OFFS,REG_AX,0,0,0}, NO_DECORATOR, nasm_bytecodes+38100, 76},
    {I_MOV, 2, {MEM_OFFS,REG_EAX,0,0,0}, NO_DECORATOR, nasm_bytecodes+38105, 77},
    {I_MOV, 2, {MEM_OFFS,REG_RAX,0,0,0}, NO_DECORATOR, nasm_bytecodes+38110, 78},
    {I_MOV, 2, {REG_GPR|BITS32,REG_CREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+34006, 79},
    {I_MOV, 2, {REG_GPR|BITS64,REG_CREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+34012, 80},
    {I_MOV, 2, {REG_CREG,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+34018, 79},
    {I_MOV, 2, {REG_CREG,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+34024, 80},
    {I_MOV, 2, {REG_GPR|BITS32,REG_DREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+34031, 79},
    {I_MOV, 2, {REG_GPR|BITS64,REG_DREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+34030, 80},
    {I_MOV, 2, {REG_DREG,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+34037, 79},
    {I_MOV, 2, {REG_DREG,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+34036, 80},
    {I_MOV, 2, {REG_GPR|BITS32,REG_TREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+38115, 19},
    {I_MOV, 2, {REG_TREG,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+38120, 19},
    {I_MOV, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+38125, 8},
    {I_MOV, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+38126, 0},
    {I_MOV, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+34042, 8},
    {I_MOV, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+34043, 0},
    {I_MOV, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+34048, 9},
    {I_MOV, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+34049, 5},
    {I_MOV, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+34054, 10},
    {I_MOV, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+34055, 7},
    {I_MOV, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+39619, 8},
    {I_MOV, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+39619, 0},
    {I_MOV, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38130, 8},
    {I_MOV, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+38130, 0},
    {I_MOV, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38135, 9},
    {I_MOV, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+38135, 5},
    {I_MOV, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38140, 10},
    {I_MOV, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+38140, 7},
    {I_MOV, 2, {REG_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+39623, 8},
    {I_MOV, 2, {REG_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+38145, 8},
    {I_MOV, 2, {REG_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+38150, 9},
    {I_MOV, 2, {REG_GPR|BITS64,UDWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+38155, 81},
    {I_MOV, 2, {REG_GPR|BITS64,SDWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+24617, 81},
    {I_MOV, 2, {REG_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+38160, 10},
    {I_MOV, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+34060, 8},
    {I_MOV, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+24602, 8},
    {I_MOV, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+24609, 9},
    {I_MOV, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+24616, 10},
    {I_MOV, 2, {RM_GPR|BITS64,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+24616, 7},
    {I_MOV, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+34060, 8},
    {I_MOV, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+24602, 8},
    {I_MOV, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+24609, 9},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVD[] = {
    {I_MOVD, 2, {MMXREG,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+34066, 82},
    {I_MOVD, 2, {RM_GPR|BITS32,MMXREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+34072, 82},
    {I_MOVD, 2, {MMXREG,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+24623, 83},
    {I_MOVD, 2, {RM_GPR|BITS64,MMXREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+24630, 83},
    {I_MOVD, 2, {MEMORY,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25498, 144},
    {I_MOVD, 2, {XMM_L16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+25505, 144},
    {I_MOVD, 2, {XMM_L16,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+25505, 140},
    {I_MOVD, 2, {RM_GPR|BITS32,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25498, 140},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVQ[] = {
    {I_MOVQ, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+34078, 84},
    {I_MOVQ, 2, {RM_MMX,MMXREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+34084, 84},
    {I_MOVQ, 2, {MMXREG,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+24623, 85},
    {I_MOVQ, 2, {RM_GPR|BITS64,MMXREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+24630, 85},
    {I_MOVQ, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35050, 140},
    {I_MOVQ, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35056, 140},
    {I_MOVQ, 2, {MEMORY,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35056, 145},
    {I_MOVQ, 2, {XMM_L16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+35050, 145},
    {I_MOVQ, 2, {XMM_L16,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+25512, 146},
    {I_MOVQ, 2, {RM_GPR|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25519, 146},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVSB[] = {
    {I_MOVSB, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7717, 0},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVSD[] = {
    {I_MOVSD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39627, 5},
    {I_MOVSD, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35608, 140},
    {I_MOVSD, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35614, 140},
    {I_MOVSD, 2, {MEMORY|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35614, 140},
    {I_MOVSD, 2, {XMM_L16,MEMORY|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+35608, 140},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVSQ[] = {
    {I_MOVSQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39631, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVSW[] = {
    {I_MOVSW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39635, 0},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVSX[] = {
    {I_MOVSX, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+34090, 21},
    {I_MOVSX, 2, {REG_GPR|BITS16,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+34090, 5},
    {I_MOVSX, 2, {REG_GPR|BITS32,RM_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+34096, 5},
    {I_MOVSX, 2, {REG_GPR|BITS32,RM_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+34102, 5},
    {I_MOVSX, 2, {REG_GPR|BITS64,RM_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+34108, 7},
    {I_MOVSX, 2, {REG_GPR|BITS64,RM_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+34114, 7},
    {I_MOVSX, 2, {REG_GPR|BITS64,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+38165, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVSXD[] = {
    {I_MOVSXD, 2, {REG_GPR|BITS64,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+38165, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVZX[] = {
    {I_MOVZX, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+34120, 21},
    {I_MOVZX, 2, {REG_GPR|BITS16,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+34120, 5},
    {I_MOVZX, 2, {REG_GPR|BITS32,RM_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+34126, 5},
    {I_MOVZX, 2, {REG_GPR|BITS32,RM_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+34132, 5},
    {I_MOVZX, 2, {REG_GPR|BITS64,RM_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+34138, 7},
    {I_MOVZX, 2, {REG_GPR|BITS64,RM_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+34144, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_MUL[] = {
    {I_MUL, 1, {RM_GPR|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39639, 0},
    {I_MUL, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38170, 0},
    {I_MUL, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38175, 5},
    {I_MUL, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38180, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_MWAIT[] = {
    {I_MWAIT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38185, 69},
    {I_MWAIT, 2, {REG_EAX,REG_ECX,0,0,0}, NO_DECORATOR, nasm_bytecodes+38185, 69},
    ITEMPLATE_END
};

static const struct itemplate instrux_MWAITX[] = {
    {I_MWAITX, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38190, 71},
    {I_MWAITX, 2, {REG_EAX,REG_ECX,0,0,0}, NO_DECORATOR, nasm_bytecodes+38190, 71},
    ITEMPLATE_END
};

static const struct itemplate instrux_NEG[] = {
    {I_NEG, 1, {RM_GPR|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38195, 11},
    {I_NEG, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+34150, 11},
    {I_NEG, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+34156, 12},
    {I_NEG, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+34162, 13},
    ITEMPLATE_END
};

static const struct itemplate instrux_NOP[] = {
    {I_NOP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38200, 0},
    {I_NOP, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+34168, 86},
    {I_NOP, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+34174, 86},
    {I_NOP, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+34180, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_NOT[] = {
    {I_NOT, 1, {RM_GPR|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38205, 11},
    {I_NOT, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+34186, 11},
    {I_NOT, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+34192, 12},
    {I_NOT, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+34198, 13},
    ITEMPLATE_END
};

static const struct itemplate instrux_OR[] = {
    {I_OR, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+38210, 3},
    {I_OR, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+38211, 0},
    {I_OR, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+34204, 3},
    {I_OR, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+34205, 0},
    {I_OR, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+34210, 4},
    {I_OR, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+34211, 5},
    {I_OR, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+34216, 6},
    {I_OR, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+34217, 7},
    {I_OR, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+32039, 8},
    {I_OR, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+32039, 0},
    {I_OR, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38215, 8},
    {I_OR, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+38215, 0},
    {I_OR, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38220, 9},
    {I_OR, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+38220, 5},
    {I_OR, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38225, 10},
    {I_OR, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+38225, 7},
    {I_OR, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+24637, 11},
    {I_OR, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+24644, 12},
    {I_OR, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+24651, 13},
    {I_OR, 2, {REG_AL,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+39643, 8},
    {I_OR, 2, {REG_AX,SBYTEWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+24638, 8},
    {I_OR, 2, {REG_AX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+38230, 8},
    {I_OR, 2, {REG_EAX,SBYTEDWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+24645, 9},
    {I_OR, 2, {REG_EAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+38235, 9},
    {I_OR, 2, {REG_RAX,SBYTEDWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+24652, 10},
    {I_OR, 2, {REG_RAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+38240, 10},
    {I_OR, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+34222, 3},
    {I_OR, 2, {RM_GPR|BITS16,SBYTEWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+24637, 3},
    {I_OR, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+24658, 3},
    {I_OR, 2, {RM_GPR|BITS32,SBYTEDWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+24644, 4},
    {I_OR, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+24665, 4},
    {I_OR, 2, {RM_GPR|BITS64,SBYTEDWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+24651, 6},
    {I_OR, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+24672, 6},
    {I_OR, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+34222, 3},
    {I_OR, 2, {MEMORY,SBYTEWORD|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+24637, 3},
    {I_OR, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+24658, 3},
    {I_OR, 2, {MEMORY,SBYTEDWORD|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+24644, 4},
    {I_OR, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+24665, 4},
    {I_OR, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+34228, 14},
    ITEMPLATE_END
};

static const struct itemplate instrux_OUT[] = {
    {I_OUT, 2, {IMMEDIATE,REG_AL,0,0,0}, NO_DECORATOR, nasm_bytecodes+39647, 53},
    {I_OUT, 2, {IMMEDIATE,REG_AX,0,0,0}, NO_DECORATOR, nasm_bytecodes+38245, 53},
    {I_OUT, 2, {IMMEDIATE,REG_EAX,0,0,0}, NO_DECORATOR, nasm_bytecodes+38250, 21},
    {I_OUT, 2, {REG_DX,REG_AL,0,0,0}, NO_DECORATOR, nasm_bytecodes+38942, 0},
    {I_OUT, 2, {REG_DX,REG_AX,0,0,0}, NO_DECORATOR, nasm_bytecodes+39651, 0},
    {I_OUT, 2, {REG_DX,REG_EAX,0,0,0}, NO_DECORATOR, nasm_bytecodes+39655, 5},
    ITEMPLATE_END
};

static const struct itemplate instrux_OUTSB[] = {
    {I_OUTSB, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+40002, 39},
    ITEMPLATE_END
};

static const struct itemplate instrux_OUTSD[] = {
    {I_OUTSD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39659, 5},
    ITEMPLATE_END
};

static const struct itemplate instrux_OUTSW[] = {
    {I_OUTSW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39663, 39},
    ITEMPLATE_END
};

static const struct itemplate instrux_PACKSSDW[] = {
    {I_PACKSSDW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+24679, 84},
    {I_PACKSSDW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35074, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PACKSSWB[] = {
    {I_PACKSSWB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+24686, 84},
    {I_PACKSSWB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35068, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PACKUSWB[] = {
    {I_PACKUSWB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+24693, 84},
    {I_PACKUSWB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35080, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PADDB[] = {
    {I_PADDB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+24700, 84},
    {I_PADDB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35086, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PADDD[] = {
    {I_PADDD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+24707, 84},
    {I_PADDD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35098, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PADDSB[] = {
    {I_PADDSB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+24714, 84},
    {I_PADDSB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35116, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PADDSIW[] = {
    {I_PADDSIW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+34234, 87},
    ITEMPLATE_END
};

static const struct itemplate instrux_PADDSW[] = {
    {I_PADDSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+24721, 84},
    {I_PADDSW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35122, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PADDUSB[] = {
    {I_PADDUSB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+24728, 84},
    {I_PADDUSB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35128, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PADDUSW[] = {
    {I_PADDUSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+24735, 84},
    {I_PADDUSW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35134, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PADDW[] = {
    {I_PADDW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+24742, 84},
    {I_PADDW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35092, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PAND[] = {
    {I_PAND, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+24749, 84},
    {I_PAND, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35140, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PANDN[] = {
    {I_PANDN, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+24756, 84},
    {I_PANDN, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35146, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PAUSE[] = {
    {I_PAUSE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39667, 0},
    ITEMPLATE_END
};

static const struct itemplate instrux_PAVEB[] = {
    {I_PAVEB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+34240, 87},
    ITEMPLATE_END
};

static const struct itemplate instrux_PAVGUSB[] = {
    {I_PAVGUSB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7656, 88},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCMPEQB[] = {
    {I_PCMPEQB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+24763, 84},
    {I_PCMPEQB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35164, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCMPEQD[] = {
    {I_PCMPEQD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+24770, 84},
    {I_PCMPEQD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35176, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCMPEQW[] = {
    {I_PCMPEQW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+24777, 84},
    {I_PCMPEQW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35170, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCMPGTB[] = {
    {I_PCMPGTB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+24784, 84},
    {I_PCMPGTB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35182, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCMPGTD[] = {
    {I_PCMPGTD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+24791, 84},
    {I_PCMPGTD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35194, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCMPGTW[] = {
    {I_PCMPGTW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+24798, 84},
    {I_PCMPGTW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35188, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PDISTIB[] = {
    {I_PDISTIB, 2, {MMXREG,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+35441, 89},
    ITEMPLATE_END
};

static const struct itemplate instrux_PF2ID[] = {
    {I_PF2ID, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7664, 88},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFACC[] = {
    {I_PFACC, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7672, 88},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFADD[] = {
    {I_PFADD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7680, 88},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFCMPEQ[] = {
    {I_PFCMPEQ, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7688, 88},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFCMPGE[] = {
    {I_PFCMPGE, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7696, 88},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFCMPGT[] = {
    {I_PFCMPGT, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7704, 88},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFMAX[] = {
    {I_PFMAX, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7712, 88},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFMIN[] = {
    {I_PFMIN, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7720, 88},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFMUL[] = {
    {I_PFMUL, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7728, 88},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFRCP[] = {
    {I_PFRCP, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7736, 88},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFRCPIT1[] = {
    {I_PFRCPIT1, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7744, 88},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFRCPIT2[] = {
    {I_PFRCPIT2, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7752, 88},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFRSQIT1[] = {
    {I_PFRSQIT1, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7760, 88},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFRSQRT[] = {
    {I_PFRSQRT, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7768, 88},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFSUB[] = {
    {I_PFSUB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7776, 88},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFSUBR[] = {
    {I_PFSUBR, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7784, 88},
    ITEMPLATE_END
};

static const struct itemplate instrux_PI2FD[] = {
    {I_PI2FD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7792, 88},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMACHRIW[] = {
    {I_PMACHRIW, 2, {MMXREG,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+35537, 89},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMADDWD[] = {
    {I_PMADDWD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+24805, 84},
    {I_PMADDWD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35200, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMAGW[] = {
    {I_PMAGW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+34246, 87},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMULHRIW[] = {
    {I_PMULHRIW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+34252, 87},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMULHRWA[] = {
    {I_PMULHRWA, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7800, 88},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMULHRWC[] = {
    {I_PMULHRWC, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+34258, 87},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMULHW[] = {
    {I_PMULHW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+24812, 84},
    {I_PMULHW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35242, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMULLW[] = {
    {I_PMULLW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+24819, 84},
    {I_PMULLW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35248, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMVGEZB[] = {
    {I_PMVGEZB, 2, {MMXREG,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+35669, 87},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMVLZB[] = {
    {I_PMVLZB, 2, {MMXREG,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+35525, 87},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMVNZB[] = {
    {I_PMVNZB, 2, {MMXREG,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+35507, 87},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMVZB[] = {
    {I_PMVZB, 2, {MMXREG,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+35429, 87},
    ITEMPLATE_END
};

static const struct itemplate instrux_POP[] = {
    {I_POP, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39671, 0},
    {I_POP, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39675, 19},
    {I_POP, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39679, 7},
    {I_POP, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38255, 0},
    {I_POP, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38260, 19},
    {I_POP, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38265, 7},
    {I_POP, 1, {REG_ES,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8093, 1},
    {I_POP, 1, {REG_CS,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3495, 90},
    {I_POP, 1, {REG_SS,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3621, 1},
    {I_POP, 1, {REG_DS,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3765, 1},
    {I_POP, 1, {REG_FS,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39683, 5},
    {I_POP, 1, {REG_GS,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39687, 5},
    ITEMPLATE_END
};

static const struct itemplate instrux_POPA[] = {
    {I_POPA, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39691, 18},
    ITEMPLATE_END
};

static const struct itemplate instrux_POPAD[] = {
    {I_POPAD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39695, 19},
    ITEMPLATE_END
};

static const struct itemplate instrux_POPAW[] = {
    {I_POPAW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39699, 18},
    ITEMPLATE_END
};

static const struct itemplate instrux_POPF[] = {
    {I_POPF, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39703, 0},
    ITEMPLATE_END
};

static const struct itemplate instrux_POPFD[] = {
    {I_POPFD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39707, 19},
    ITEMPLATE_END
};

static const struct itemplate instrux_POPFQ[] = {
    {I_POPFQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39707, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_POPFW[] = {
    {I_POPFW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39711, 0},
    ITEMPLATE_END
};

static const struct itemplate instrux_POR[] = {
    {I_POR, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+24826, 84},
    {I_POR, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35260, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PREFETCH[] = {
    {I_PREFETCH, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38270, 88},
    ITEMPLATE_END
};

static const struct itemplate instrux_PREFETCHW[] = {
    {I_PREFETCHW, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38275, 88},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSLLD[] = {
    {I_PSLLD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+24833, 84},
    {I_PSLLD, 2, {MMXREG,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+24840, 38},
    {I_PSLLD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35278, 141},
    {I_PSLLD, 2, {XMM_L16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+25582, 151},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSLLQ[] = {
    {I_PSLLQ, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+24847, 84},
    {I_PSLLQ, 2, {MMXREG,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+24854, 38},
    {I_PSLLQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35284, 141},
    {I_PSLLQ, 2, {XMM_L16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+25589, 151},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSLLW[] = {
    {I_PSLLW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+24861, 84},
    {I_PSLLW, 2, {MMXREG,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+24868, 38},
    {I_PSLLW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35272, 141},
    {I_PSLLW, 2, {XMM_L16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+25575, 151},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSRAD[] = {
    {I_PSRAD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+24875, 84},
    {I_PSRAD, 2, {MMXREG,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+24882, 38},
    {I_PSRAD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35296, 141},
    {I_PSRAD, 2, {XMM_L16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+25603, 151},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSRAW[] = {
    {I_PSRAW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+24889, 84},
    {I_PSRAW, 2, {MMXREG,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+24896, 38},
    {I_PSRAW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35290, 141},
    {I_PSRAW, 2, {XMM_L16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+25596, 151},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSRLD[] = {
    {I_PSRLD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+24903, 84},
    {I_PSRLD, 2, {MMXREG,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+24910, 38},
    {I_PSRLD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35308, 141},
    {I_PSRLD, 2, {XMM_L16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+25624, 151},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSRLQ[] = {
    {I_PSRLQ, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+24917, 84},
    {I_PSRLQ, 2, {MMXREG,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+24924, 38},
    {I_PSRLQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35314, 141},
    {I_PSRLQ, 2, {XMM_L16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+25631, 151},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSRLW[] = {
    {I_PSRLW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+24931, 84},
    {I_PSRLW, 2, {MMXREG,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+24938, 38},
    {I_PSRLW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35302, 141},
    {I_PSRLW, 2, {XMM_L16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+25617, 151},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSUBB[] = {
    {I_PSUBB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+24945, 84},
    {I_PSUBB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35320, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSUBD[] = {
    {I_PSUBD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+24952, 84},
    {I_PSUBD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35332, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSUBSB[] = {
    {I_PSUBSB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+24959, 84},
    {I_PSUBSB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35344, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSUBSIW[] = {
    {I_PSUBSIW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+34264, 87},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSUBSW[] = {
    {I_PSUBSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+24966, 84},
    {I_PSUBSW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35350, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSUBUSB[] = {
    {I_PSUBUSB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+24973, 84},
    {I_PSUBUSB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35356, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSUBUSW[] = {
    {I_PSUBUSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+24980, 84},
    {I_PSUBUSW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35362, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSUBW[] = {
    {I_PSUBW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+24987, 84},
    {I_PSUBW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35326, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUNPCKHBW[] = {
    {I_PUNPCKHBW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+24994, 84},
    {I_PUNPCKHBW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35368, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUNPCKHDQ[] = {
    {I_PUNPCKHDQ, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+25001, 84},
    {I_PUNPCKHDQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35380, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUNPCKHWD[] = {
    {I_PUNPCKHWD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+25008, 84},
    {I_PUNPCKHWD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35374, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUNPCKLBW[] = {
    {I_PUNPCKLBW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+25015, 84},
    {I_PUNPCKLBW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35392, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUNPCKLDQ[] = {
    {I_PUNPCKLDQ, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+25022, 84},
    {I_PUNPCKLDQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35404, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUNPCKLWD[] = {
    {I_PUNPCKLWD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+25029, 84},
    {I_PUNPCKLWD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35398, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUSH[] = {
    {I_PUSH, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39715, 0},
    {I_PUSH, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39719, 19},
    {I_PUSH, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39723, 7},
    {I_PUSH, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38280, 0},
    {I_PUSH, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38285, 19},
    {I_PUSH, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38290, 7},
    {I_PUSH, 1, {REG_ES,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8061, 1},
    {I_PUSH, 1, {REG_CS,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3477, 1},
    {I_PUSH, 1, {REG_SS,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3603, 1},
    {I_PUSH, 1, {REG_DS,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3747, 1},
    {I_PUSH, 1, {REG_FS,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39727, 5},
    {I_PUSH, 1, {REG_GS,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39731, 5},
    {I_PUSH, 1, {IMMEDIATE|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38316, 39},
    {I_PUSH, 1, {SBYTEWORD|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38295, 91},
    {I_PUSH, 1, {IMMEDIATE|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38300, 91},
    {I_PUSH, 1, {SBYTEDWORD|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38305, 92},
    {I_PUSH, 1, {IMMEDIATE|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38310, 92},
    {I_PUSH, 1, {SBYTEDWORD|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38305, 93},
    {I_PUSH, 1, {IMMEDIATE|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38310, 93},
    {I_PUSH, 1, {SBYTEDWORD|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38315, 94},
    {I_PUSH, 1, {IMMEDIATE|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38320, 94},
    {I_PUSH, 1, {SBYTEDWORD|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38315, 94},
    {I_PUSH, 1, {IMMEDIATE|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38320, 94},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUSHA[] = {
    {I_PUSHA, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39735, 18},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUSHAD[] = {
    {I_PUSHAD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39739, 19},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUSHAW[] = {
    {I_PUSHAW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39743, 18},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUSHF[] = {
    {I_PUSHF, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39747, 0},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUSHFD[] = {
    {I_PUSHFD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39751, 19},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUSHFQ[] = {
    {I_PUSHFQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39751, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUSHFW[] = {
    {I_PUSHFW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39755, 0},
    ITEMPLATE_END
};

static const struct itemplate instrux_PXOR[] = {
    {I_PXOR, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+25036, 84},
    {I_PXOR, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35416, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_RCL[] = {
    {I_RCL, 2, {RM_GPR|BITS8,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+39759, 0},
    {I_RCL, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+39763, 0},
    {I_RCL, 2, {RM_GPR|BITS8,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+38325, 39},
    {I_RCL, 2, {RM_GPR|BITS16,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38330, 0},
    {I_RCL, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+38335, 0},
    {I_RCL, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+34270, 39},
    {I_RCL, 2, {RM_GPR|BITS32,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38340, 5},
    {I_RCL, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+38345, 5},
    {I_RCL, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+34276, 5},
    {I_RCL, 2, {RM_GPR|BITS64,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38350, 7},
    {I_RCL, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+38355, 7},
    {I_RCL, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+34282, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_RCR[] = {
    {I_RCR, 2, {RM_GPR|BITS8,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+39767, 0},
    {I_RCR, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+39771, 0},
    {I_RCR, 2, {RM_GPR|BITS8,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+38360, 39},
    {I_RCR, 2, {RM_GPR|BITS16,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38365, 0},
    {I_RCR, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+38370, 0},
    {I_RCR, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+34288, 39},
    {I_RCR, 2, {RM_GPR|BITS32,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38375, 5},
    {I_RCR, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+38380, 5},
    {I_RCR, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+34294, 5},
    {I_RCR, 2, {RM_GPR|BITS64,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38385, 7},
    {I_RCR, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+38390, 7},
    {I_RCR, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+34300, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_RDSHR[] = {
    {I_RDSHR, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+34306, 95},
    ITEMPLATE_END
};

static const struct itemplate instrux_RDMSR[] = {
    {I_RDMSR, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39775, 96},
    ITEMPLATE_END
};

static const struct itemplate instrux_RDPMC[] = {
    {I_RDPMC, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39779, 86},
    ITEMPLATE_END
};

static const struct itemplate instrux_RDTSC[] = {
    {I_RDTSC, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39783, 32},
    ITEMPLATE_END
};

static const struct itemplate instrux_RDTSCP[] = {
    {I_RDTSCP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38395, 97},
    ITEMPLATE_END
};

static const struct itemplate instrux_RET[] = {
    {I_RET, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39804, 25},
    {I_RET, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38421, 98},
    ITEMPLATE_END
};

static const struct itemplate instrux_RETF[] = {
    {I_RETF, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39808, 0},
    {I_RETF, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38426, 72},
    ITEMPLATE_END
};

static const struct itemplate instrux_RETN[] = {
    {I_RETN, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39804, 25},
    {I_RETN, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38421, 98},
    ITEMPLATE_END
};

static const struct itemplate instrux_RETW[] = {
    {I_RETW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39787, 25},
    {I_RETW, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38421, 98},
    ITEMPLATE_END
};

static const struct itemplate instrux_RETFW[] = {
    {I_RETFW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39791, 0},
    {I_RETFW, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38400, 72},
    ITEMPLATE_END
};

static const struct itemplate instrux_RETNW[] = {
    {I_RETNW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39787, 25},
    {I_RETNW, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38405, 98},
    ITEMPLATE_END
};

static const struct itemplate instrux_RETD[] = {
    {I_RETD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39795, 26},
    {I_RETD, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38410, 99},
    ITEMPLATE_END
};

static const struct itemplate instrux_RETFD[] = {
    {I_RETFD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39799, 0},
    {I_RETFD, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38415, 72},
    ITEMPLATE_END
};

static const struct itemplate instrux_RETND[] = {
    {I_RETND, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39795, 26},
    {I_RETND, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38410, 99},
    ITEMPLATE_END
};

static const struct itemplate instrux_RETQ[] = {
    {I_RETQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39803, 28},
    {I_RETQ, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38420, 100},
    ITEMPLATE_END
};

static const struct itemplate instrux_RETFQ[] = {
    {I_RETFQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39807, 7},
    {I_RETFQ, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38425, 101},
    ITEMPLATE_END
};

static const struct itemplate instrux_RETNQ[] = {
    {I_RETNQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39803, 28},
    {I_RETNQ, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38420, 100},
    ITEMPLATE_END
};

static const struct itemplate instrux_ROL[] = {
    {I_ROL, 2, {RM_GPR|BITS8,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+39811, 0},
    {I_ROL, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+39815, 0},
    {I_ROL, 2, {RM_GPR|BITS8,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+38430, 39},
    {I_ROL, 2, {RM_GPR|BITS16,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38435, 0},
    {I_ROL, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+38440, 0},
    {I_ROL, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+34312, 39},
    {I_ROL, 2, {RM_GPR|BITS32,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38445, 5},
    {I_ROL, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+38450, 5},
    {I_ROL, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+34318, 5},
    {I_ROL, 2, {RM_GPR|BITS64,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38455, 7},
    {I_ROL, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+38460, 7},
    {I_ROL, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+34324, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_ROR[] = {
    {I_ROR, 2, {RM_GPR|BITS8,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+39819, 0},
    {I_ROR, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+39823, 0},
    {I_ROR, 2, {RM_GPR|BITS8,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+38465, 39},
    {I_ROR, 2, {RM_GPR|BITS16,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38470, 0},
    {I_ROR, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+38475, 0},
    {I_ROR, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+34330, 39},
    {I_ROR, 2, {RM_GPR|BITS32,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38480, 5},
    {I_ROR, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+38485, 5},
    {I_ROR, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+34336, 5},
    {I_ROR, 2, {RM_GPR|BITS64,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38490, 7},
    {I_ROR, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+38495, 7},
    {I_ROR, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+34342, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_RDM[] = {
    {I_RDM, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38987, 37},
    ITEMPLATE_END
};

static const struct itemplate instrux_RSDC[] = {
    {I_RSDC, 2, {REG_SREG,MEMORY|BITS80,0,0,0}, NO_DECORATOR, nasm_bytecodes+35789, 102},
    ITEMPLATE_END
};

static const struct itemplate instrux_RSLDT[] = {
    {I_RSLDT, 1, {MEMORY|BITS80,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38500, 102},
    ITEMPLATE_END
};

static const struct itemplate instrux_RSM[] = {
    {I_RSM, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39827, 103},
    ITEMPLATE_END
};

static const struct itemplate instrux_RSTS[] = {
    {I_RSTS, 1, {MEMORY|BITS80,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38505, 102},
    ITEMPLATE_END
};

static const struct itemplate instrux_SAHF[] = {
    {I_SAHF, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7685, 0},
    ITEMPLATE_END
};

static const struct itemplate instrux_SAL[] = {
    {I_SAL, 2, {RM_GPR|BITS8,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+39831, 0},
    {I_SAL, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+39835, 0},
    {I_SAL, 2, {RM_GPR|BITS8,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+38510, 39},
    {I_SAL, 2, {RM_GPR|BITS16,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38515, 0},
    {I_SAL, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+38520, 0},
    {I_SAL, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+34348, 39},
    {I_SAL, 2, {RM_GPR|BITS32,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38525, 5},
    {I_SAL, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+38530, 5},
    {I_SAL, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+34354, 5},
    {I_SAL, 2, {RM_GPR|BITS64,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38535, 7},
    {I_SAL, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+38540, 7},
    {I_SAL, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+34360, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_SALC[] = {
    {I_SALC, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38932, 104},
    ITEMPLATE_END
};

static const struct itemplate instrux_SAR[] = {
    {I_SAR, 2, {RM_GPR|BITS8,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+39839, 0},
    {I_SAR, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+39843, 0},
    {I_SAR, 2, {RM_GPR|BITS8,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+38545, 39},
    {I_SAR, 2, {RM_GPR|BITS16,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38550, 0},
    {I_SAR, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+38555, 0},
    {I_SAR, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+34366, 39},
    {I_SAR, 2, {RM_GPR|BITS32,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38560, 5},
    {I_SAR, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+38565, 5},
    {I_SAR, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+34372, 5},
    {I_SAR, 2, {RM_GPR|BITS64,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38570, 7},
    {I_SAR, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+38575, 7},
    {I_SAR, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+34378, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_SBB[] = {
    {I_SBB, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+38580, 3},
    {I_SBB, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+38581, 0},
    {I_SBB, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+34384, 3},
    {I_SBB, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+34385, 0},
    {I_SBB, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+34390, 4},
    {I_SBB, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+34391, 5},
    {I_SBB, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+34396, 6},
    {I_SBB, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+34397, 7},
    {I_SBB, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+26628, 8},
    {I_SBB, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+26628, 0},
    {I_SBB, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38585, 8},
    {I_SBB, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+38585, 0},
    {I_SBB, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38590, 9},
    {I_SBB, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+38590, 5},
    {I_SBB, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38595, 10},
    {I_SBB, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+38595, 7},
    {I_SBB, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+25043, 11},
    {I_SBB, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+25050, 12},
    {I_SBB, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+25057, 13},
    {I_SBB, 2, {REG_AL,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+39847, 8},
    {I_SBB, 2, {REG_AX,SBYTEWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+25044, 8},
    {I_SBB, 2, {REG_AX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+38600, 8},
    {I_SBB, 2, {REG_EAX,SBYTEDWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+25051, 9},
    {I_SBB, 2, {REG_EAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+38605, 9},
    {I_SBB, 2, {REG_RAX,SBYTEDWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+25058, 10},
    {I_SBB, 2, {REG_RAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+38610, 10},
    {I_SBB, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+34402, 3},
    {I_SBB, 2, {RM_GPR|BITS16,SBYTEWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+25043, 3},
    {I_SBB, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+25064, 3},
    {I_SBB, 2, {RM_GPR|BITS32,SBYTEDWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+25050, 4},
    {I_SBB, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+25071, 4},
    {I_SBB, 2, {RM_GPR|BITS64,SBYTEDWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+25057, 6},
    {I_SBB, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+25078, 6},
    {I_SBB, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+34402, 3},
    {I_SBB, 2, {MEMORY,SBYTEWORD|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25043, 3},
    {I_SBB, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25064, 3},
    {I_SBB, 2, {MEMORY,SBYTEDWORD|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+25050, 4},
    {I_SBB, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+25071, 4},
    {I_SBB, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+34408, 14},
    ITEMPLATE_END
};

static const struct itemplate instrux_SCASB[] = {
    {I_SCASB, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39851, 0},
    ITEMPLATE_END
};

static const struct itemplate instrux_SCASD[] = {
    {I_SCASD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38615, 5},
    ITEMPLATE_END
};

static const struct itemplate instrux_SCASQ[] = {
    {I_SCASQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38620, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_SCASW[] = {
    {I_SCASW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38625, 0},
    ITEMPLATE_END
};

static const struct itemplate instrux_SFENCE[] = {
    {I_SFENCE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+34414, 59},
    {I_SFENCE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+34414, 135},
    ITEMPLATE_END
};

static const struct itemplate instrux_SGDT[] = {
    {I_SGDT, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38630, 105},
    ITEMPLATE_END
};

static const struct itemplate instrux_SHL[] = {
    {I_SHL, 2, {RM_GPR|BITS8,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+39831, 0},
    {I_SHL, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+39835, 0},
    {I_SHL, 2, {RM_GPR|BITS8,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+38510, 39},
    {I_SHL, 2, {RM_GPR|BITS16,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38515, 0},
    {I_SHL, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+38520, 0},
    {I_SHL, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+34348, 39},
    {I_SHL, 2, {RM_GPR|BITS32,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38525, 5},
    {I_SHL, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+38530, 5},
    {I_SHL, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+34354, 5},
    {I_SHL, 2, {RM_GPR|BITS64,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38535, 7},
    {I_SHL, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+38540, 7},
    {I_SHL, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+34360, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_SHLD[] = {
    {I_SHLD, 3, {MEMORY,REG_GPR|BITS16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+25085, 106},
    {I_SHLD, 3, {REG_GPR|BITS16,REG_GPR|BITS16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+25085, 106},
    {I_SHLD, 3, {MEMORY,REG_GPR|BITS32,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+25092, 106},
    {I_SHLD, 3, {REG_GPR|BITS32,REG_GPR|BITS32,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+25092, 106},
    {I_SHLD, 3, {MEMORY,REG_GPR|BITS64,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+25099, 107},
    {I_SHLD, 3, {REG_GPR|BITS64,REG_GPR|BITS64,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+25099, 107},
    {I_SHLD, 3, {MEMORY,REG_GPR|BITS16,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+34420, 9},
    {I_SHLD, 3, {REG_GPR|BITS16,REG_GPR|BITS16,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+34420, 5},
    {I_SHLD, 3, {MEMORY,REG_GPR|BITS32,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+34426, 9},
    {I_SHLD, 3, {REG_GPR|BITS32,REG_GPR|BITS32,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+34426, 5},
    {I_SHLD, 3, {MEMORY,REG_GPR|BITS64,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+34432, 10},
    {I_SHLD, 3, {REG_GPR|BITS64,REG_GPR|BITS64,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+34432, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_SHR[] = {
    {I_SHR, 2, {RM_GPR|BITS8,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+39855, 0},
    {I_SHR, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+39859, 0},
    {I_SHR, 2, {RM_GPR|BITS8,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+38635, 39},
    {I_SHR, 2, {RM_GPR|BITS16,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38640, 0},
    {I_SHR, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+38645, 0},
    {I_SHR, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+34438, 39},
    {I_SHR, 2, {RM_GPR|BITS32,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38650, 5},
    {I_SHR, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+38655, 5},
    {I_SHR, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+34444, 5},
    {I_SHR, 2, {RM_GPR|BITS64,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38660, 7},
    {I_SHR, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+38665, 7},
    {I_SHR, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+34450, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_SHRD[] = {
    {I_SHRD, 3, {MEMORY,REG_GPR|BITS16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+25106, 106},
    {I_SHRD, 3, {REG_GPR|BITS16,REG_GPR|BITS16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+25106, 106},
    {I_SHRD, 3, {MEMORY,REG_GPR|BITS32,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+25113, 106},
    {I_SHRD, 3, {REG_GPR|BITS32,REG_GPR|BITS32,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+25113, 106},
    {I_SHRD, 3, {MEMORY,REG_GPR|BITS64,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+25120, 107},
    {I_SHRD, 3, {REG_GPR|BITS64,REG_GPR|BITS64,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+25120, 107},
    {I_SHRD, 3, {MEMORY,REG_GPR|BITS16,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+34456, 9},
    {I_SHRD, 3, {REG_GPR|BITS16,REG_GPR|BITS16,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+34456, 5},
    {I_SHRD, 3, {MEMORY,REG_GPR|BITS32,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+34462, 9},
    {I_SHRD, 3, {REG_GPR|BITS32,REG_GPR|BITS32,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+34462, 5},
    {I_SHRD, 3, {MEMORY,REG_GPR|BITS64,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+34468, 10},
    {I_SHRD, 3, {REG_GPR|BITS64,REG_GPR|BITS64,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+34468, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_SIDT[] = {
    {I_SIDT, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38670, 105},
    ITEMPLATE_END
};

static const struct itemplate instrux_SLDT[] = {
    {I_SLDT, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+34493, 105},
    {I_SLDT, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+34493, 105},
    {I_SLDT, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+34474, 105},
    {I_SLDT, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+34480, 5},
    {I_SLDT, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+34486, 7},
    {I_SLDT, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+34492, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_SKINIT[] = {
    {I_SKINIT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38675, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_SMI[] = {
    {I_SMI, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39981, 108},
    ITEMPLATE_END
};

static const struct itemplate instrux_SMINT[] = {
    {I_SMINT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39863, 37},
    ITEMPLATE_END
};

static const struct itemplate instrux_SMINTOLD[] = {
    {I_SMINTOLD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39867, 109},
    ITEMPLATE_END
};

static const struct itemplate instrux_SMSW[] = {
    {I_SMSW, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+34511, 105},
    {I_SMSW, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+34511, 105},
    {I_SMSW, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+34498, 105},
    {I_SMSW, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+34504, 5},
    {I_SMSW, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+34510, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_STC[] = {
    {I_STC, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38397, 0},
    ITEMPLATE_END
};

static const struct itemplate instrux_STD[] = {
    {I_STD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+40005, 0},
    ITEMPLATE_END
};

static const struct itemplate instrux_STI[] = {
    {I_STI, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38192, 0},
    ITEMPLATE_END
};

static const struct itemplate instrux_STOSB[] = {
    {I_STOSB, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7789, 0},
    ITEMPLATE_END
};

static const struct itemplate instrux_STOSD[] = {
    {I_STOSD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39871, 5},
    ITEMPLATE_END
};

static const struct itemplate instrux_STOSQ[] = {
    {I_STOSQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39875, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_STOSW[] = {
    {I_STOSW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39879, 0},
    ITEMPLATE_END
};

static const struct itemplate instrux_STR[] = {
    {I_STR, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+34529, 62},
    {I_STR, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+34529, 62},
    {I_STR, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+34516, 62},
    {I_STR, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+34522, 63},
    {I_STR, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+34528, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_SUB[] = {
    {I_SUB, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+38680, 3},
    {I_SUB, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+38681, 0},
    {I_SUB, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+34534, 3},
    {I_SUB, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+34535, 0},
    {I_SUB, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+34540, 4},
    {I_SUB, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+34541, 5},
    {I_SUB, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+34546, 6},
    {I_SUB, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+34547, 7},
    {I_SUB, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+32396, 8},
    {I_SUB, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+32396, 0},
    {I_SUB, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38685, 8},
    {I_SUB, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+38685, 0},
    {I_SUB, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38690, 9},
    {I_SUB, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+38690, 5},
    {I_SUB, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38695, 10},
    {I_SUB, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+38695, 7},
    {I_SUB, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+25127, 11},
    {I_SUB, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+25134, 12},
    {I_SUB, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+25141, 13},
    {I_SUB, 2, {REG_AL,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+39883, 8},
    {I_SUB, 2, {REG_AX,SBYTEWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+25128, 8},
    {I_SUB, 2, {REG_AX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+38700, 8},
    {I_SUB, 2, {REG_EAX,SBYTEDWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+25135, 9},
    {I_SUB, 2, {REG_EAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+38705, 9},
    {I_SUB, 2, {REG_RAX,SBYTEDWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+25142, 10},
    {I_SUB, 2, {REG_RAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+38710, 10},
    {I_SUB, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+34552, 3},
    {I_SUB, 2, {RM_GPR|BITS16,SBYTEWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+25127, 3},
    {I_SUB, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+25148, 3},
    {I_SUB, 2, {RM_GPR|BITS32,SBYTEDWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+25134, 4},
    {I_SUB, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+25155, 4},
    {I_SUB, 2, {RM_GPR|BITS64,SBYTEDWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+25141, 6},
    {I_SUB, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+25162, 6},
    {I_SUB, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+34552, 3},
    {I_SUB, 2, {MEMORY,SBYTEWORD|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25127, 3},
    {I_SUB, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25148, 3},
    {I_SUB, 2, {MEMORY,SBYTEDWORD|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+25134, 4},
    {I_SUB, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+25155, 4},
    {I_SUB, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+34558, 14},
    ITEMPLATE_END
};

static const struct itemplate instrux_SVDC[] = {
    {I_SVDC, 2, {MEMORY|BITS80,REG_SREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+25717, 102},
    ITEMPLATE_END
};

static const struct itemplate instrux_SVLDT[] = {
    {I_SVLDT, 1, {MEMORY|BITS80,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38715, 102},
    ITEMPLATE_END
};

static const struct itemplate instrux_SVTS[] = {
    {I_SVTS, 1, {MEMORY|BITS80,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38720, 102},
    ITEMPLATE_END
};

static const struct itemplate instrux_SWAPGS[] = {
    {I_SWAPGS, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38725, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_SYSCALL[] = {
    {I_SYSCALL, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39595, 110},
    ITEMPLATE_END
};

static const struct itemplate instrux_SYSENTER[] = {
    {I_SYSENTER, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39887, 86},
    ITEMPLATE_END
};

static const struct itemplate instrux_SYSEXIT[] = {
    {I_SYSEXIT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39891, 111},
    ITEMPLATE_END
};

static const struct itemplate instrux_SYSRET[] = {
    {I_SYSRET, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39591, 112},
    ITEMPLATE_END
};

static const struct itemplate instrux_TEST[] = {
    {I_TEST, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+39895, 8},
    {I_TEST, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+39895, 0},
    {I_TEST, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+38730, 8},
    {I_TEST, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+38730, 0},
    {I_TEST, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+38735, 9},
    {I_TEST, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+38735, 5},
    {I_TEST, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+38740, 10},
    {I_TEST, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+38740, 7},
    {I_TEST, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+39899, 8},
    {I_TEST, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38745, 8},
    {I_TEST, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38750, 9},
    {I_TEST, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38755, 10},
    {I_TEST, 2, {REG_AL,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+39903, 8},
    {I_TEST, 2, {REG_AX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+38760, 8},
    {I_TEST, 2, {REG_EAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+38765, 9},
    {I_TEST, 2, {REG_RAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+38770, 10},
    {I_TEST, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+38775, 8},
    {I_TEST, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+34564, 8},
    {I_TEST, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+34570, 9},
    {I_TEST, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+34576, 10},
    {I_TEST, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+38775, 8},
    {I_TEST, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+34564, 8},
    {I_TEST, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+34570, 9},
    ITEMPLATE_END
};

static const struct itemplate instrux_UD0[] = {
    {I_UD0, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39907, 113},
    {I_UD0, 2, {REG_GPR|BITS16,RM_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+34582, 39},
    {I_UD0, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+34588, 39},
    {I_UD0, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+34594, 39},
    ITEMPLATE_END
};

static const struct itemplate instrux_UD1[] = {
    {I_UD1, 2, {REG_GPR,RM_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+34600, 39},
    {I_UD1, 2, {REG_GPR,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+34606, 39},
    {I_UD1, 2, {REG_GPR,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+34612, 39},
    {I_UD1, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39911, 39},
    ITEMPLATE_END
};

static const struct itemplate instrux_UD2B[] = {
    {I_UD2B, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39911, 39},
    {I_UD2B, 2, {REG_GPR,RM_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+34600, 39},
    {I_UD2B, 2, {REG_GPR,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+34606, 39},
    {I_UD2B, 2, {REG_GPR,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+34612, 39},
    ITEMPLATE_END
};

static const struct itemplate instrux_UD2[] = {
    {I_UD2, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39915, 39},
    ITEMPLATE_END
};

static const struct itemplate instrux_UD2A[] = {
    {I_UD2A, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39915, 39},
    ITEMPLATE_END
};

static const struct itemplate instrux_UMOV[] = {
    {I_UMOV, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+34618, 114},
    {I_UMOV, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+34618, 108},
    {I_UMOV, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25169, 114},
    {I_UMOV, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25169, 108},
    {I_UMOV, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+25176, 114},
    {I_UMOV, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+25176, 108},
    {I_UMOV, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+34624, 114},
    {I_UMOV, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+34624, 108},
    {I_UMOV, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+25183, 114},
    {I_UMOV, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25183, 108},
    {I_UMOV, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+25190, 114},
    {I_UMOV, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+25190, 108},
    ITEMPLATE_END
};

static const struct itemplate instrux_VERR[] = {
    {I_VERR, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38780, 62},
    {I_VERR, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38780, 62},
    {I_VERR, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38780, 62},
    ITEMPLATE_END
};

static const struct itemplate instrux_VERW[] = {
    {I_VERW, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38785, 62},
    {I_VERW, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38785, 62},
    {I_VERW, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38785, 62},
    ITEMPLATE_END
};

static const struct itemplate instrux_FWAIT[] = {
    {I_FWAIT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39493, 0},
    ITEMPLATE_END
};

static const struct itemplate instrux_WBINVD[] = {
    {I_WBINVD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39919, 54},
    ITEMPLATE_END
};

static const struct itemplate instrux_WRSHR[] = {
    {I_WRSHR, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+34630, 95},
    ITEMPLATE_END
};

static const struct itemplate instrux_WRMSR[] = {
    {I_WRMSR, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39923, 96},
    ITEMPLATE_END
};

static const struct itemplate instrux_XADD[] = {
    {I_XADD, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+34636, 115},
    {I_XADD, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+34637, 20},
    {I_XADD, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25197, 115},
    {I_XADD, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25198, 20},
    {I_XADD, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+25204, 115},
    {I_XADD, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+25205, 20},
    {I_XADD, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+25211, 6},
    {I_XADD, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+25212, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_XBTS[] = {
    {I_XBTS, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+34642, 116},
    {I_XBTS, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+34642, 108},
    {I_XBTS, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+34648, 117},
    {I_XBTS, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+34648, 108},
    ITEMPLATE_END
};

static const struct itemplate instrux_XCHG[] = {
    {I_XCHG, 2, {REG_AX,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+39927, 0},
    {I_XCHG, 2, {REG_EAX,REG32NA,0,0,0}, NO_DECORATOR, nasm_bytecodes+39931, 5},
    {I_XCHG, 2, {REG_RAX,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+39935, 7},
    {I_XCHG, 2, {REG_GPR|BITS16,REG_AX,0,0,0}, NO_DECORATOR, nasm_bytecodes+39939, 0},
    {I_XCHG, 2, {REG32NA,REG_EAX,0,0,0}, NO_DECORATOR, nasm_bytecodes+39943, 5},
    {I_XCHG, 2, {REG_GPR|BITS64,REG_RAX,0,0,0}, NO_DECORATOR, nasm_bytecodes+39947, 7},
    {I_XCHG, 2, {REG_EAX,REG_EAX,0,0,0}, NO_DECORATOR, nasm_bytecodes+39951, 19},
    {I_XCHG, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38790, 3},
    {I_XCHG, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+38791, 0},
    {I_XCHG, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+34654, 3},
    {I_XCHG, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+34655, 0},
    {I_XCHG, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+34660, 4},
    {I_XCHG, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+34661, 5},
    {I_XCHG, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+34666, 6},
    {I_XCHG, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+34667, 7},
    {I_XCHG, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+38795, 3},
    {I_XCHG, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+38796, 0},
    {I_XCHG, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+34672, 3},
    {I_XCHG, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+34673, 0},
    {I_XCHG, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+34678, 4},
    {I_XCHG, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+34679, 5},
    {I_XCHG, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+34684, 6},
    {I_XCHG, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+34685, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_XLATB[] = {
    {I_XLATB, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+40008, 0},
    ITEMPLATE_END
};

static const struct itemplate instrux_XLAT[] = {
    {I_XLAT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+40008, 0},
    ITEMPLATE_END
};

static const struct itemplate instrux_XOR[] = {
    {I_XOR, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+38800, 3},
    {I_XOR, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+38801, 0},
    {I_XOR, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+34690, 3},
    {I_XOR, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+34691, 0},
    {I_XOR, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+34696, 4},
    {I_XOR, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+34697, 5},
    {I_XOR, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+34702, 6},
    {I_XOR, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+34703, 7},
    {I_XOR, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+31836, 8},
    {I_XOR, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+31836, 0},
    {I_XOR, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38805, 8},
    {I_XOR, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+38805, 0},
    {I_XOR, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38810, 9},
    {I_XOR, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+38810, 5},
    {I_XOR, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+38815, 10},
    {I_XOR, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+38815, 7},
    {I_XOR, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+25218, 11},
    {I_XOR, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+25225, 12},
    {I_XOR, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+25232, 13},
    {I_XOR, 2, {REG_AL,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+39955, 8},
    {I_XOR, 2, {REG_AX,SBYTEWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+25219, 8},
    {I_XOR, 2, {REG_AX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+38820, 8},
    {I_XOR, 2, {REG_EAX,SBYTEDWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+25226, 9},
    {I_XOR, 2, {REG_EAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+38825, 9},
    {I_XOR, 2, {REG_RAX,SBYTEDWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+25233, 10},
    {I_XOR, 2, {REG_RAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+38830, 10},
    {I_XOR, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+34708, 3},
    {I_XOR, 2, {RM_GPR|BITS16,SBYTEWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+25218, 3},
    {I_XOR, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+25239, 3},
    {I_XOR, 2, {RM_GPR|BITS32,SBYTEDWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+25225, 4},
    {I_XOR, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+25246, 4},
    {I_XOR, 2, {RM_GPR|BITS64,SBYTEDWORD,0,0,0}, NO_DECORATOR, nasm_bytecodes+25232, 6},
    {I_XOR, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+25253, 6},
    {I_XOR, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+34708, 3},
    {I_XOR, 2, {MEMORY,SBYTEWORD|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25218, 3},
    {I_XOR, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25239, 3},
    {I_XOR, 2, {MEMORY,SBYTEDWORD|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+25225, 4},
    {I_XOR, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+25246, 4},
    {I_XOR, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+34714, 14},
    ITEMPLATE_END
};

static const struct itemplate instrux_ADDPS[] = {
    {I_ADDPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+34726, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_ADDSS[] = {
    {I_ADDSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+34732, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_ANDNPS[] = {
    {I_ANDNPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+34738, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_ANDPS[] = {
    {I_ANDPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+34744, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPEQPS[] = {
    {I_CMPEQPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+7808, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPEQSS[] = {
    {I_CMPEQSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+7816, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPLEPS[] = {
    {I_CMPLEPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+7824, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPLESS[] = {
    {I_CMPLESS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+7832, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPLTPS[] = {
    {I_CMPLTPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+7840, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPLTSS[] = {
    {I_CMPLTSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+7848, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPNEQPS[] = {
    {I_CMPNEQPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+7856, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPNEQSS[] = {
    {I_CMPNEQSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+7864, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPNLEPS[] = {
    {I_CMPNLEPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+7872, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPNLESS[] = {
    {I_CMPNLESS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+7880, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPNLTPS[] = {
    {I_CMPNLTPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+7888, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPNLTSS[] = {
    {I_CMPNLTSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+7896, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPORDPS[] = {
    {I_CMPORDPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+7904, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPORDSS[] = {
    {I_CMPORDSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+7912, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPUNORDPS[] = {
    {I_CMPUNORDPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+7920, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPUNORDSS[] = {
    {I_CMPUNORDSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+7928, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPPS[] = {
    {I_CMPPS, 3, {XMM_L16,MEMORY,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+25316, 121},
    {I_CMPPS, 3, {XMM_L16,XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+25316, 121},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPSS[] = {
    {I_CMPSS, 3, {XMM_L16,MEMORY,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+25323, 121},
    {I_CMPSS, 3, {XMM_L16,XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+25323, 121},
    ITEMPLATE_END
};

static const struct itemplate instrux_COMISS[] = {
    {I_COMISS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+34750, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTPI2PS[] = {
    {I_CVTPI2PS, 2, {XMM_L16,RM_MMX|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+34756, 122},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTPS2PI[] = {
    {I_CVTPS2PI, 2, {MMXREG,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+34762, 122},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTSI2SS[] = {
    {I_CVTSI2SS, 2, {XMM_L16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+25331, 123},
    {I_CVTSI2SS, 2, {XMM_L16,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+25331, 123},
    {I_CVTSI2SS, 2, {XMM_L16,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+25330, 124},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTSS2SI[] = {
    {I_CVTSS2SI, 2, {REG_GPR|BITS32,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25338, 123},
    {I_CVTSS2SI, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+25338, 123},
    {I_CVTSS2SI, 2, {REG_GPR|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25337, 125},
    {I_CVTSS2SI, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+25337, 125},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTTPS2PI[] = {
    {I_CVTTPS2PI, 2, {MMXREG,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+34768, 126},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTTSS2SI[] = {
    {I_CVTTSS2SI, 2, {REG_GPR|BITS32,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25345, 123},
    {I_CVTTSS2SI, 2, {REG_GPR|BITS64,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25344, 125},
    ITEMPLATE_END
};

static const struct itemplate instrux_DIVPS[] = {
    {I_DIVPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+34774, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_DIVSS[] = {
    {I_DIVSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+34780, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_LDMXCSR[] = {
    {I_LDMXCSR, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+34786, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_MAXPS[] = {
    {I_MAXPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+34792, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_MAXSS[] = {
    {I_MAXSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+34798, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_MINPS[] = {
    {I_MINPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+34804, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_MINSS[] = {
    {I_MINSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+34810, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVAPS[] = {
    {I_MOVAPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+34816, 120},
    {I_MOVAPS, 2, {RM_XMM_L16|BITS128,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+34822, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVHPS[] = {
    {I_MOVHPS, 2, {XMM_L16,MEMORY|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+34828, 120},
    {I_MOVHPS, 2, {MEMORY|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+34834, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVLHPS[] = {
    {I_MOVLHPS, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+34828, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVLPS[] = {
    {I_MOVLPS, 2, {XMM_L16,MEMORY|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+34624, 120},
    {I_MOVLPS, 2, {MEMORY|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+34840, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVHLPS[] = {
    {I_MOVHLPS, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+34624, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVMSKPS[] = {
    {I_MOVMSKPS, 2, {REG_GPR|BITS32,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+34846, 120},
    {I_MOVMSKPS, 2, {REG_GPR|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25351, 127},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVNTPS[] = {
    {I_MOVNTPS, 2, {MEMORY|BITS128,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+34852, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVSS[] = {
    {I_MOVSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+34858, 120},
    {I_MOVSS, 2, {MEMORY|BITS32,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+34864, 120},
    {I_MOVSS, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+34858, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVUPS[] = {
    {I_MOVUPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+34870, 120},
    {I_MOVUPS, 2, {RM_XMM_L16|BITS128,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+34876, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_MULPS[] = {
    {I_MULPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+34882, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_MULSS[] = {
    {I_MULSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+34888, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_ORPS[] = {
    {I_ORPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+34894, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_RCPPS[] = {
    {I_RCPPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+34900, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_RCPSS[] = {
    {I_RCPSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+34906, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_RSQRTPS[] = {
    {I_RSQRTPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+34912, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_RSQRTSS[] = {
    {I_RSQRTSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+34918, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_SHUFPS[] = {
    {I_SHUFPS, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+25358, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_SQRTPS[] = {
    {I_SQRTPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+34924, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_SQRTSS[] = {
    {I_SQRTSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+34930, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_STMXCSR[] = {
    {I_STMXCSR, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+34936, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_SUBPS[] = {
    {I_SUBPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+34942, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_SUBSS[] = {
    {I_SUBSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+34948, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_UCOMISS[] = {
    {I_UCOMISS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+34954, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_UNPCKHPS[] = {
    {I_UNPCKHPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+34960, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_UNPCKLPS[] = {
    {I_UNPCKLPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+34966, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_XORPS[] = {
    {I_XORPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+34972, 120},
    ITEMPLATE_END
};

static const struct itemplate instrux_FXRSTOR[] = {
    {I_FXRSTOR, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+25366, 128},
    ITEMPLATE_END
};

static const struct itemplate instrux_FXRSTOR64[] = {
    {I_FXRSTOR64, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+25365, 129},
    ITEMPLATE_END
};

static const struct itemplate instrux_FXSAVE[] = {
    {I_FXSAVE, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+25373, 128},
    ITEMPLATE_END
};

static const struct itemplate instrux_FXSAVE64[] = {
    {I_FXSAVE64, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+25372, 129},
    ITEMPLATE_END
};

static const struct itemplate instrux_XGETBV[] = {
    {I_XGETBV, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38840, 130},
    ITEMPLATE_END
};

static const struct itemplate instrux_XSETBV[] = {
    {I_XSETBV, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38845, 131},
    ITEMPLATE_END
};

static const struct itemplate instrux_XSAVE[] = {
    {I_XSAVE, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+25380, 130},
    ITEMPLATE_END
};

static const struct itemplate instrux_XSAVE64[] = {
    {I_XSAVE64, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+25379, 132},
    ITEMPLATE_END
};

static const struct itemplate instrux_XSAVEC[] = {
    {I_XSAVEC, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+25387, 133},
    ITEMPLATE_END
};

static const struct itemplate instrux_XSAVEC64[] = {
    {I_XSAVEC64, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+25386, 134},
    ITEMPLATE_END
};

static const struct itemplate instrux_XSAVEOPT[] = {
    {I_XSAVEOPT, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+25394, 133},
    ITEMPLATE_END
};

static const struct itemplate instrux_XSAVEOPT64[] = {
    {I_XSAVEOPT64, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+25393, 134},
    ITEMPLATE_END
};

static const struct itemplate instrux_XSAVES[] = {
    {I_XSAVES, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+25401, 133},
    ITEMPLATE_END
};

static const struct itemplate instrux_XSAVES64[] = {
    {I_XSAVES64, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+25400, 134},
    ITEMPLATE_END
};

static const struct itemplate instrux_XRSTOR[] = {
    {I_XRSTOR, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+25408, 130},
    ITEMPLATE_END
};

static const struct itemplate instrux_XRSTOR64[] = {
    {I_XRSTOR64, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+25407, 132},
    ITEMPLATE_END
};

static const struct itemplate instrux_XRSTORS[] = {
    {I_XRSTORS, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+25415, 133},
    ITEMPLATE_END
};

static const struct itemplate instrux_XRSTORS64[] = {
    {I_XRSTORS64, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+25414, 134},
    ITEMPLATE_END
};

static const struct itemplate instrux_PREFETCHNTA[] = {
    {I_PREFETCHNTA, 1, {MEMORY|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36029, 135},
    ITEMPLATE_END
};

static const struct itemplate instrux_PREFETCHT0[] = {
    {I_PREFETCHT0, 1, {MEMORY|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36047, 135},
    ITEMPLATE_END
};

static const struct itemplate instrux_PREFETCHT1[] = {
    {I_PREFETCHT1, 1, {MEMORY|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36065, 135},
    ITEMPLATE_END
};

static const struct itemplate instrux_PREFETCHT2[] = {
    {I_PREFETCHT2, 1, {MEMORY|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36083, 135},
    ITEMPLATE_END
};

static const struct itemplate instrux_MASKMOVQ[] = {
    {I_MASKMOVQ, 2, {MMXREG,MMXREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+34978, 136},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVNTQ[] = {
    {I_MOVNTQ, 2, {MEMORY,MMXREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+34984, 137},
    ITEMPLATE_END
};

static const struct itemplate instrux_PAVGB[] = {
    {I_PAVGB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+25421, 137},
    {I_PAVGB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35152, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PAVGW[] = {
    {I_PAVGW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+25428, 137},
    {I_PAVGW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35158, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PEXTRW[] = {
    {I_PEXTRW, 3, {REG_GPR|BITS32,MMXREG,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+25435, 138},
    {I_PEXTRW, 3, {REG_GPR|BITS32,XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+25526, 148},
    {I_PEXTRW, 3, {REG_GPR|BITS64,XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+25526, 149},
    {I_PEXTRW, 3, {REG_GPR|BITS32,XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+277, 169},
    {I_PEXTRW, 3, {MEMORY|BITS16,XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+277, 169},
    {I_PEXTRW, 3, {REG_GPR|BITS64,XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+276, 170},
    ITEMPLATE_END
};

static const struct itemplate instrux_PINSRW[] = {
    {I_PINSRW, 3, {MMXREG,MEMORY,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+25442, 138},
    {I_PINSRW, 3, {MMXREG,RM_GPR|BITS16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+25442, 138},
    {I_PINSRW, 3, {MMXREG,REG_GPR|BITS32,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+25442, 138},
    {I_PINSRW, 3, {XMM_L16,REG_GPR|BITS16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+25533, 148},
    {I_PINSRW, 3, {XMM_L16,REG_GPR|BITS32,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+25533, 148},
    {I_PINSRW, 3, {XMM_L16,REG_GPR|BITS64,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+25533, 149},
    {I_PINSRW, 3, {XMM_L16,MEMORY,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+25533, 148},
    {I_PINSRW, 3, {XMM_L16,MEMORY|BITS16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+25533, 148},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMAXSW[] = {
    {I_PMAXSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+25449, 137},
    {I_PMAXSW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35206, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMAXUB[] = {
    {I_PMAXUB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+25456, 137},
    {I_PMAXUB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35212, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMINSW[] = {
    {I_PMINSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+25463, 137},
    {I_PMINSW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35218, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMINUB[] = {
    {I_PMINUB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+25470, 137},
    {I_PMINUB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35224, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMOVMSKB[] = {
    {I_PMOVMSKB, 2, {REG_GPR|BITS32,MMXREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+34990, 136},
    {I_PMOVMSKB, 2, {REG_GPR|BITS32,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35230, 140},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMULHUW[] = {
    {I_PMULHUW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+25477, 137},
    {I_PMULHUW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35236, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSADBW[] = {
    {I_PSADBW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+25484, 137},
    {I_PSADBW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35266, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSHUFW[] = {
    {I_PSHUFW, 3, {MMXREG,RM_MMX,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+7936, 139},
    ITEMPLATE_END
};

static const struct itemplate instrux_PF2IW[] = {
    {I_PF2IW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7944, 88},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFNACC[] = {
    {I_PFNACC, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7952, 88},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFPNACC[] = {
    {I_PFPNACC, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7960, 88},
    ITEMPLATE_END
};

static const struct itemplate instrux_PI2FW[] = {
    {I_PI2FW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7968, 88},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSWAPD[] = {
    {I_PSWAPD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7976, 88},
    ITEMPLATE_END
};

static const struct itemplate instrux_MASKMOVDQU[] = {
    {I_MASKMOVDQU, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+34996, 140},
    ITEMPLATE_END
};

static const struct itemplate instrux_CLFLUSH[] = {
    {I_CLFLUSH, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+35002, 140},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVNTDQ[] = {
    {I_MOVNTDQ, 2, {MEMORY,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35008, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVNTI[] = {
    {I_MOVNTI, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+25492, 142},
    {I_MOVNTI, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+25491, 143},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVNTPD[] = {
    {I_MOVNTPD, 2, {MEMORY,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35014, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVDQA[] = {
    {I_MOVDQA, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35020, 140},
    {I_MOVDQA, 2, {MEMORY,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35026, 141},
    {I_MOVDQA, 2, {XMM_L16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+35020, 141},
    {I_MOVDQA, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35026, 140},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVDQU[] = {
    {I_MOVDQU, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35032, 140},
    {I_MOVDQU, 2, {MEMORY,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35038, 141},
    {I_MOVDQU, 2, {XMM_L16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+35032, 141},
    {I_MOVDQU, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35038, 140},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVDQ2Q[] = {
    {I_MOVDQ2Q, 2, {MMXREG,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35044, 140},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVQ2DQ[] = {
    {I_MOVQ2DQ, 2, {XMM_L16,MMXREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+35062, 140},
    ITEMPLATE_END
};

static const struct itemplate instrux_PADDQ[] = {
    {I_PADDQ, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+35104, 147},
    {I_PADDQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35110, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMULUDQ[] = {
    {I_PMULUDQ, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+25540, 141},
    {I_PMULUDQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35254, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSHUFD[] = {
    {I_PSHUFD, 3, {XMM_L16,XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+25547, 148},
    {I_PSHUFD, 3, {XMM_L16,MEMORY,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+25547, 150},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSHUFHW[] = {
    {I_PSHUFHW, 3, {XMM_L16,XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+25554, 148},
    {I_PSHUFHW, 3, {XMM_L16,MEMORY,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+25554, 150},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSHUFLW[] = {
    {I_PSHUFLW, 3, {XMM_L16,XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+25561, 148},
    {I_PSHUFLW, 3, {XMM_L16,MEMORY,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+25561, 150},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSLLDQ[] = {
    {I_PSLLDQ, 2, {XMM_L16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+25568, 151},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSRLDQ[] = {
    {I_PSRLDQ, 2, {XMM_L16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+25610, 151},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSUBQ[] = {
    {I_PSUBQ, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+25638, 141},
    {I_PSUBQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35338, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUNPCKHQDQ[] = {
    {I_PUNPCKHQDQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35386, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUNPCKLQDQ[] = {
    {I_PUNPCKLQDQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35410, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_ADDPD[] = {
    {I_ADDPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35422, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_ADDSD[] = {
    {I_ADDSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35428, 145},
    ITEMPLATE_END
};

static const struct itemplate instrux_ANDNPD[] = {
    {I_ANDNPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35434, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_ANDPD[] = {
    {I_ANDPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35440, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPEQPD[] = {
    {I_CMPEQPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+7984, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPEQSD[] = {
    {I_CMPEQSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+7992, 140},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPLEPD[] = {
    {I_CMPLEPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+8000, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPLESD[] = {
    {I_CMPLESD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+8008, 140},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPLTPD[] = {
    {I_CMPLTPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+8016, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPLTSD[] = {
    {I_CMPLTSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+8024, 140},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPNEQPD[] = {
    {I_CMPNEQPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+8032, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPNEQSD[] = {
    {I_CMPNEQSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+8040, 140},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPNLEPD[] = {
    {I_CMPNLEPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+8048, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPNLESD[] = {
    {I_CMPNLESD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+8056, 140},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPNLTPD[] = {
    {I_CMPNLTPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+8064, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPNLTSD[] = {
    {I_CMPNLTSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+8072, 140},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPORDPD[] = {
    {I_CMPORDPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+8080, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPORDSD[] = {
    {I_CMPORDSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+8088, 140},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPUNORDPD[] = {
    {I_CMPUNORDPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+8096, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPUNORDSD[] = {
    {I_CMPUNORDSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+8104, 140},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPPD[] = {
    {I_CMPPD, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+25645, 140},
    ITEMPLATE_END
};

static const struct itemplate instrux_COMISD[] = {
    {I_COMISD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35446, 140},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTDQ2PD[] = {
    {I_CVTDQ2PD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35452, 145},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTDQ2PS[] = {
    {I_CVTDQ2PS, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35458, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTPD2DQ[] = {
    {I_CVTPD2DQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35464, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTPD2PI[] = {
    {I_CVTPD2PI, 2, {MMXREG,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35470, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTPD2PS[] = {
    {I_CVTPD2PS, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35476, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTPI2PD[] = {
    {I_CVTPI2PD, 2, {XMM_L16,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+35482, 145},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTPS2DQ[] = {
    {I_CVTPS2DQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35488, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTPS2PD[] = {
    {I_CVTPS2PD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35494, 145},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTSD2SI[] = {
    {I_CVTSD2SI, 2, {REG_GPR|BITS32,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25659, 152},
    {I_CVTSD2SI, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+25659, 152},
    {I_CVTSD2SI, 2, {REG_GPR|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25666, 153},
    {I_CVTSD2SI, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+25666, 153},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTSD2SS[] = {
    {I_CVTSD2SS, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35500, 145},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTSI2SD[] = {
    {I_CVTSI2SD, 2, {XMM_L16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+25681, 154},
    {I_CVTSI2SD, 2, {XMM_L16,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+25673, 154},
    {I_CVTSI2SD, 2, {XMM_L16,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+25680, 153},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTSS2SD[] = {
    {I_CVTSS2SD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35506, 144},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTTPD2PI[] = {
    {I_CVTTPD2PI, 2, {MMXREG,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35512, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTTPD2DQ[] = {
    {I_CVTTPD2DQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35518, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTTPS2DQ[] = {
    {I_CVTTPS2DQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35524, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTTSD2SI[] = {
    {I_CVTTSD2SI, 2, {REG_GPR|BITS32,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25687, 152},
    {I_CVTTSD2SI, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+25687, 152},
    {I_CVTTSD2SI, 2, {REG_GPR|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25694, 153},
    {I_CVTTSD2SI, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+25694, 153},
    ITEMPLATE_END
};

static const struct itemplate instrux_DIVPD[] = {
    {I_DIVPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35530, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_DIVSD[] = {
    {I_DIVSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35536, 140},
    ITEMPLATE_END
};

static const struct itemplate instrux_MAXPD[] = {
    {I_MAXPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35542, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_MAXSD[] = {
    {I_MAXSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35548, 140},
    ITEMPLATE_END
};

static const struct itemplate instrux_MINPD[] = {
    {I_MINPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35554, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_MINSD[] = {
    {I_MINSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35560, 140},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVAPD[] = {
    {I_MOVAPD, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35566, 140},
    {I_MOVAPD, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35572, 140},
    {I_MOVAPD, 2, {MEMORY,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35572, 141},
    {I_MOVAPD, 2, {XMM_L16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+35566, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVHPD[] = {
    {I_MOVHPD, 2, {MEMORY,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35578, 140},
    {I_MOVHPD, 2, {XMM_L16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+35584, 140},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVLPD[] = {
    {I_MOVLPD, 2, {MEMORY|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35590, 140},
    {I_MOVLPD, 2, {XMM_L16,MEMORY|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+35596, 140},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVMSKPD[] = {
    {I_MOVMSKPD, 2, {REG_GPR|BITS32,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35602, 140},
    {I_MOVMSKPD, 2, {REG_GPR|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25701, 146},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVUPD[] = {
    {I_MOVUPD, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35620, 140},
    {I_MOVUPD, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35626, 140},
    {I_MOVUPD, 2, {MEMORY,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35626, 141},
    {I_MOVUPD, 2, {XMM_L16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+35620, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_MULPD[] = {
    {I_MULPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35632, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_MULSD[] = {
    {I_MULSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35638, 140},
    ITEMPLATE_END
};

static const struct itemplate instrux_ORPD[] = {
    {I_ORPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35644, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_SHUFPD[] = {
    {I_SHUFPD, 3, {XMM_L16,XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+25708, 148},
    {I_SHUFPD, 3, {XMM_L16,MEMORY,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+25708, 155},
    ITEMPLATE_END
};

static const struct itemplate instrux_SQRTPD[] = {
    {I_SQRTPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35650, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_SQRTSD[] = {
    {I_SQRTSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35656, 140},
    ITEMPLATE_END
};

static const struct itemplate instrux_SUBPD[] = {
    {I_SUBPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35662, 141},
    ITEMPLATE_END
};

static const struct itemplate instrux_SUBSD[] = {
    {I_SUBSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35668, 140},
    ITEMPLATE_END
};

static const struct itemplate instrux_UCOMISD[] = {
    {I_UCOMISD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35674, 140},
    ITEMPLATE_END
};

static const struct itemplate instrux_UNPCKHPD[] = {
    {I_UNPCKHPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+35680, 140},
    ITEMPLATE_END
};

static const struct itemplate instrux_UNPCKLPD[] = {
    {I_UNPCKLPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+35686, 140},
    ITEMPLATE_END
};

static const struct itemplate instrux_XORPD[] = {
    {I_XORPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+35692, 140},
    ITEMPLATE_END
};

static const struct itemplate instrux_ADDSUBPD[] = {
    {I_ADDSUBPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35698, 156},
    ITEMPLATE_END
};

static const struct itemplate instrux_ADDSUBPS[] = {
    {I_ADDSUBPS, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35704, 156},
    ITEMPLATE_END
};

static const struct itemplate instrux_HADDPD[] = {
    {I_HADDPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35710, 156},
    ITEMPLATE_END
};

static const struct itemplate instrux_HADDPS[] = {
    {I_HADDPS, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35716, 156},
    ITEMPLATE_END
};

static const struct itemplate instrux_HSUBPD[] = {
    {I_HSUBPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35722, 156},
    ITEMPLATE_END
};

static const struct itemplate instrux_HSUBPS[] = {
    {I_HSUBPS, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35728, 156},
    ITEMPLATE_END
};

static const struct itemplate instrux_LDDQU[] = {
    {I_LDDQU, 2, {XMM_L16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+35734, 156},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVDDUP[] = {
    {I_MOVDDUP, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35740, 157},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVSHDUP[] = {
    {I_MOVSHDUP, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35746, 157},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVSLDUP[] = {
    {I_MOVSLDUP, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35752, 157},
    ITEMPLATE_END
};

static const struct itemplate instrux_CLGI[] = {
    {I_CLGI, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38850, 158},
    ITEMPLATE_END
};

static const struct itemplate instrux_STGI[] = {
    {I_STGI, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38855, 158},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMCALL[] = {
    {I_VMCALL, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38860, 159},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMCLEAR[] = {
    {I_VMCLEAR, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+35758, 159},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMFUNC[] = {
    {I_VMFUNC, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38865, 159},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMLAUNCH[] = {
    {I_VMLAUNCH, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38870, 159},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMLOAD[] = {
    {I_VMLOAD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38875, 158},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMMCALL[] = {
    {I_VMMCALL, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38880, 158},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMPTRLD[] = {
    {I_VMPTRLD, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+35764, 159},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMPTRST[] = {
    {I_VMPTRST, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+35770, 159},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMREAD[] = {
    {I_VMREAD, 2, {RM_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+25716, 160},
    {I_VMREAD, 2, {RM_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+25715, 161},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMRESUME[] = {
    {I_VMRESUME, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38885, 159},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMRUN[] = {
    {I_VMRUN, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38890, 158},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMSAVE[] = {
    {I_VMSAVE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38895, 158},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMWRITE[] = {
    {I_VMWRITE, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+25723, 160},
    {I_VMWRITE, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+25722, 161},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMXOFF[] = {
    {I_VMXOFF, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38900, 159},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMXON[] = {
    {I_VMXON, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+35776, 159},
    ITEMPLATE_END
};

static const struct itemplate instrux_INVEPT[] = {
    {I_INVEPT, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+8113, 162},
    {I_INVEPT, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+8112, 163},
    ITEMPLATE_END
};

static const struct itemplate instrux_INVVPID[] = {
    {I_INVVPID, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+8121, 162},
    {I_INVVPID, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+8120, 163},
    ITEMPLATE_END
};

static const struct itemplate instrux_PABSB[] = {
    {I_PABSB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+25729, 164},
    {I_PABSB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25736, 165},
    ITEMPLATE_END
};

static const struct itemplate instrux_PABSW[] = {
    {I_PABSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+25743, 164},
    {I_PABSW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25750, 165},
    ITEMPLATE_END
};

static const struct itemplate instrux_PABSD[] = {
    {I_PABSD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+25757, 164},
    {I_PABSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25764, 165},
    ITEMPLATE_END
};

static const struct itemplate instrux_PALIGNR[] = {
    {I_PALIGNR, 3, {MMXREG,RM_MMX,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+8128, 164},
    {I_PALIGNR, 3, {XMM_L16,RM_XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+8136, 165},
    ITEMPLATE_END
};

static const struct itemplate instrux_PHADDW[] = {
    {I_PHADDW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+25771, 164},
    {I_PHADDW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25778, 165},
    ITEMPLATE_END
};

static const struct itemplate instrux_PHADDD[] = {
    {I_PHADDD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+25785, 164},
    {I_PHADDD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25792, 165},
    ITEMPLATE_END
};

static const struct itemplate instrux_PHADDSW[] = {
    {I_PHADDSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+25799, 164},
    {I_PHADDSW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25806, 165},
    ITEMPLATE_END
};

static const struct itemplate instrux_PHSUBW[] = {
    {I_PHSUBW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+25813, 164},
    {I_PHSUBW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25820, 165},
    ITEMPLATE_END
};

static const struct itemplate instrux_PHSUBD[] = {
    {I_PHSUBD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+25827, 164},
    {I_PHSUBD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25834, 165},
    ITEMPLATE_END
};

static const struct itemplate instrux_PHSUBSW[] = {
    {I_PHSUBSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+25841, 164},
    {I_PHSUBSW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25848, 165},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMADDUBSW[] = {
    {I_PMADDUBSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+25855, 164},
    {I_PMADDUBSW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25862, 165},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMULHRSW[] = {
    {I_PMULHRSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+25869, 164},
    {I_PMULHRSW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25876, 165},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSHUFB[] = {
    {I_PSHUFB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+25883, 164},
    {I_PSHUFB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25890, 165},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSIGNB[] = {
    {I_PSIGNB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+25897, 164},
    {I_PSIGNB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25904, 165},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSIGNW[] = {
    {I_PSIGNW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+25911, 164},
    {I_PSIGNW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25918, 165},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSIGND[] = {
    {I_PSIGND, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+25925, 164},
    {I_PSIGND, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25932, 165},
    ITEMPLATE_END
};

static const struct itemplate instrux_EXTRQ[] = {
    {I_EXTRQ, 3, {XMM_L16,IMMEDIATE,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+8144, 166},
    {I_EXTRQ, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35782, 166},
    ITEMPLATE_END
};

static const struct itemplate instrux_INSERTQ[] = {
    {I_INSERTQ, 4, {XMM_L16,XMM_L16,IMMEDIATE,IMMEDIATE,0}, NO_DECORATOR, nasm_bytecodes+8152, 166},
    {I_INSERTQ, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35788, 166},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVNTSD[] = {
    {I_MOVNTSD, 2, {MEMORY,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35794, 167},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVNTSS[] = {
    {I_MOVNTSS, 2, {MEMORY,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+35800, 168},
    ITEMPLATE_END
};

static const struct itemplate instrux_LZCNT[] = {
    {I_LZCNT, 2, {REG_GPR|BITS16,RM_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25939, 110},
    {I_LZCNT, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+25946, 110},
    {I_LZCNT, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+25953, 59},
    ITEMPLATE_END
};

static const struct itemplate instrux_BLENDPD[] = {
    {I_BLENDPD, 3, {XMM_L16,RM_XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+8160, 169},
    ITEMPLATE_END
};

static const struct itemplate instrux_BLENDPS[] = {
    {I_BLENDPS, 3, {XMM_L16,RM_XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+8168, 169},
    ITEMPLATE_END
};

static const struct itemplate instrux_BLENDVPD[] = {
    {I_BLENDVPD, 3, {XMM_L16,RM_XMM_L16,XMM0,0,0}, NO_DECORATOR, nasm_bytecodes+25960, 169},
    {I_BLENDVPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25960, 169},
    ITEMPLATE_END
};

static const struct itemplate instrux_BLENDVPS[] = {
    {I_BLENDVPS, 3, {XMM_L16,RM_XMM_L16,XMM0,0,0}, NO_DECORATOR, nasm_bytecodes+25967, 169},
    {I_BLENDVPS, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25967, 169},
    ITEMPLATE_END
};

static const struct itemplate instrux_DPPD[] = {
    {I_DPPD, 3, {XMM_L16,RM_XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+8176, 169},
    ITEMPLATE_END
};

static const struct itemplate instrux_DPPS[] = {
    {I_DPPS, 3, {XMM_L16,RM_XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+8184, 169},
    ITEMPLATE_END
};

static const struct itemplate instrux_EXTRACTPS[] = {
    {I_EXTRACTPS, 3, {RM_GPR|BITS32,XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+241, 169},
    {I_EXTRACTPS, 3, {REG_GPR|BITS64,XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+240, 170},
    ITEMPLATE_END
};

static const struct itemplate instrux_INSERTPS[] = {
    {I_INSERTPS, 3, {XMM_L16,RM_XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+8192, 171},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVNTDQA[] = {
    {I_MOVNTDQA, 2, {XMM_L16,MEMORY|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+25974, 169},
    ITEMPLATE_END
};

static const struct itemplate instrux_MPSADBW[] = {
    {I_MPSADBW, 3, {XMM_L16,RM_XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+8200, 169},
    ITEMPLATE_END
};

static const struct itemplate instrux_PACKUSDW[] = {
    {I_PACKUSDW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25981, 169},
    ITEMPLATE_END
};

static const struct itemplate instrux_PBLENDVB[] = {
    {I_PBLENDVB, 3, {XMM_L16,RM_XMM_L16,XMM0,0,0}, NO_DECORATOR, nasm_bytecodes+25988, 169},
    {I_PBLENDVB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25988, 169},
    ITEMPLATE_END
};

static const struct itemplate instrux_PBLENDW[] = {
    {I_PBLENDW, 3, {XMM_L16,RM_XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+8208, 169},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCMPEQQ[] = {
    {I_PCMPEQQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25995, 169},
    ITEMPLATE_END
};

static const struct itemplate instrux_PEXTRB[] = {
    {I_PEXTRB, 3, {REG_GPR|BITS32,XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+250, 169},
    {I_PEXTRB, 3, {MEMORY|BITS8,XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+250, 169},
    {I_PEXTRB, 3, {REG_GPR|BITS64,XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+249, 170},
    ITEMPLATE_END
};

static const struct itemplate instrux_PEXTRD[] = {
    {I_PEXTRD, 3, {RM_GPR|BITS32,XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+258, 169},
    ITEMPLATE_END
};

static const struct itemplate instrux_PEXTRQ[] = {
    {I_PEXTRQ, 3, {RM_GPR|BITS64,XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+267, 170},
    ITEMPLATE_END
};

static const struct itemplate instrux_PHMINPOSUW[] = {
    {I_PHMINPOSUW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+26002, 169},
    ITEMPLATE_END
};

static const struct itemplate instrux_PINSRB[] = {
    {I_PINSRB, 3, {XMM_L16,MEMORY,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+286, 172},
    {I_PINSRB, 3, {XMM_L16,RM_GPR|BITS8,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+285, 172},
    {I_PINSRB, 3, {XMM_L16,REG_GPR|BITS32,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+286, 172},
    ITEMPLATE_END
};

static const struct itemplate instrux_PINSRD[] = {
    {I_PINSRD, 3, {XMM_L16,MEMORY,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+294, 172},
    {I_PINSRD, 3, {XMM_L16,RM_GPR|BITS32,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+294, 172},
    ITEMPLATE_END
};

static const struct itemplate instrux_PINSRQ[] = {
    {I_PINSRQ, 3, {XMM_L16,MEMORY,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+303, 173},
    {I_PINSRQ, 3, {XMM_L16,RM_GPR|BITS64,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+303, 173},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMAXSB[] = {
    {I_PMAXSB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+26009, 169},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMAXSD[] = {
    {I_PMAXSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+26016, 169},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMAXUD[] = {
    {I_PMAXUD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+26023, 169},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMAXUW[] = {
    {I_PMAXUW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+26030, 169},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMINSB[] = {
    {I_PMINSB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+26037, 169},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMINSD[] = {
    {I_PMINSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+26044, 169},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMINUD[] = {
    {I_PMINUD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+26051, 169},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMINUW[] = {
    {I_PMINUW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+26058, 169},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMOVSXBW[] = {
    {I_PMOVSXBW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+26065, 174},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMOVSXBD[] = {
    {I_PMOVSXBD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+26072, 171},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMOVSXBQ[] = {
    {I_PMOVSXBQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+26079, 175},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMOVSXWD[] = {
    {I_PMOVSXWD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+26086, 174},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMOVSXWQ[] = {
    {I_PMOVSXWQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+26093, 171},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMOVSXDQ[] = {
    {I_PMOVSXDQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+26100, 174},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMOVZXBW[] = {
    {I_PMOVZXBW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+26107, 174},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMOVZXBD[] = {
    {I_PMOVZXBD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+26114, 171},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMOVZXBQ[] = {
    {I_PMOVZXBQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+26121, 175},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMOVZXWD[] = {
    {I_PMOVZXWD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+26128, 174},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMOVZXWQ[] = {
    {I_PMOVZXWQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+26135, 171},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMOVZXDQ[] = {
    {I_PMOVZXDQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+26142, 174},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMULDQ[] = {
    {I_PMULDQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+26149, 169},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMULLD[] = {
    {I_PMULLD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+26156, 169},
    ITEMPLATE_END
};

static const struct itemplate instrux_PTEST[] = {
    {I_PTEST, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+26163, 169},
    ITEMPLATE_END
};

static const struct itemplate instrux_ROUNDPD[] = {
    {I_ROUNDPD, 3, {XMM_L16,RM_XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+8216, 169},
    ITEMPLATE_END
};

static const struct itemplate instrux_ROUNDPS[] = {
    {I_ROUNDPS, 3, {XMM_L16,RM_XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+8224, 169},
    ITEMPLATE_END
};

static const struct itemplate instrux_ROUNDSD[] = {
    {I_ROUNDSD, 3, {XMM_L16,RM_XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+8232, 169},
    ITEMPLATE_END
};

static const struct itemplate instrux_ROUNDSS[] = {
    {I_ROUNDSS, 3, {XMM_L16,RM_XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+8240, 169},
    ITEMPLATE_END
};

static const struct itemplate instrux_CRC32[] = {
    {I_CRC32, 2, {REG_GPR|BITS32,RM_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+8265, 176},
    {I_CRC32, 2, {REG_GPR|BITS32,RM_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+8248, 176},
    {I_CRC32, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+8256, 176},
    {I_CRC32, 2, {REG_GPR|BITS64,RM_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+8264, 177},
    {I_CRC32, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+8272, 177},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCMPESTRI[] = {
    {I_PCMPESTRI, 3, {XMM_L16,RM_XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+8280, 176},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCMPESTRM[] = {
    {I_PCMPESTRM, 3, {XMM_L16,RM_XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+8288, 176},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCMPISTRI[] = {
    {I_PCMPISTRI, 3, {XMM_L16,RM_XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+8296, 176},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCMPISTRM[] = {
    {I_PCMPISTRM, 3, {XMM_L16,RM_XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+8304, 176},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCMPGTQ[] = {
    {I_PCMPGTQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+26170, 176},
    ITEMPLATE_END
};

static const struct itemplate instrux_POPCNT[] = {
    {I_POPCNT, 2, {REG_GPR|BITS16,RM_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+26177, 178},
    {I_POPCNT, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+26184, 179},
    {I_POPCNT, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+26191, 180},
    ITEMPLATE_END
};

static const struct itemplate instrux_GETSEC[] = {
    {I_GETSEC, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+39959, 135},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFRCPV[] = {
    {I_PFRCPV, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+8312, 181},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFRSQRTV[] = {
    {I_PFRSQRTV, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+8320, 181},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVBE[] = {
    {I_MOVBE, 2, {REG_GPR|BITS16,MEMORY|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+8328, 182},
    {I_MOVBE, 2, {REG_GPR|BITS32,MEMORY|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+8336, 182},
    {I_MOVBE, 2, {REG_GPR|BITS64,MEMORY|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+8344, 182},
    {I_MOVBE, 2, {MEMORY|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+8352, 182},
    {I_MOVBE, 2, {MEMORY|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+8360, 182},
    {I_MOVBE, 2, {MEMORY|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+8368, 182},
    ITEMPLATE_END
};

static const struct itemplate instrux_AESENC[] = {
    {I_AESENC, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+26198, 183},
    ITEMPLATE_END
};

static const struct itemplate instrux_AESENCLAST[] = {
    {I_AESENCLAST, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+26205, 183},
    ITEMPLATE_END
};

static const struct itemplate instrux_AESDEC[] = {
    {I_AESDEC, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+26212, 183},
    ITEMPLATE_END
};

static const struct itemplate instrux_AESDECLAST[] = {
    {I_AESDECLAST, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+26219, 183},
    ITEMPLATE_END
};

static const struct itemplate instrux_AESIMC[] = {
    {I_AESIMC, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+26226, 183},
    ITEMPLATE_END
};

static const struct itemplate instrux_AESKEYGENASSIST[] = {
    {I_AESKEYGENASSIST, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+8376, 183},
    ITEMPLATE_END
};

static const struct itemplate instrux_VAESENC[] = {
    {I_VAESENC, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+26233, 184},
    {I_VAESENC, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+26240, 184},
    {I_VAESENC, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+26296, 185},
    {I_VAESENC, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+26303, 185},
    {I_VAESENC, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+8392, 186},
    {I_VAESENC, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+8400, 186},
    {I_VAESENC, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+8408, 186},
    {I_VAESENC, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+8416, 186},
    {I_VAESENC, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, NO_DECORATOR, nasm_bytecodes+8520, 187},
    {I_VAESENC, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, NO_DECORATOR, nasm_bytecodes+8528, 187},
    ITEMPLATE_END
};

static const struct itemplate instrux_VAESENCLAST[] = {
    {I_VAESENCLAST, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+26247, 184},
    {I_VAESENCLAST, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+26254, 184},
    {I_VAESENCLAST, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+26310, 185},
    {I_VAESENCLAST, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+26317, 185},
    {I_VAESENCLAST, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+8424, 186},
    {I_VAESENCLAST, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+8432, 186},
    {I_VAESENCLAST, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+8440, 186},
    {I_VAESENCLAST, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+8448, 186},
    {I_VAESENCLAST, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, NO_DECORATOR, nasm_bytecodes+8536, 187},
    {I_VAESENCLAST, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, NO_DECORATOR, nasm_bytecodes+8544, 187},
    ITEMPLATE_END
};

static const struct itemplate instrux_VAESDEC[] = {
    {I_VAESDEC, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+26261, 184},
    {I_VAESDEC, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+26268, 184},
    {I_VAESDEC, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+26324, 185},
    {I_VAESDEC, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+26331, 185},
    {I_VAESDEC, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+8456, 186},
    {I_VAESDEC, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+8464, 186},
    {I_VAESDEC, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+8472, 186},
    {I_VAESDEC, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+8480, 186},
    {I_VAESDEC, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, NO_DECORATOR, nasm_bytecodes+8552, 187},
    {I_VAESDEC, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, NO_DECORATOR, nasm_bytecodes+8560, 187},
    ITEMPLATE_END
};

static const struct itemplate instrux_VAESDECLAST[] = {
    {I_VAESDECLAST, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+26275, 184},
    {I_VAESDECLAST, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+26282, 184},
    {I_VAESDECLAST, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+26338, 185},
    {I_VAESDECLAST, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+26345, 185},
    {I_VAESDECLAST, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+8488, 186},
    {I_VAESDECLAST, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+8496, 186},
    {I_VAESDECLAST, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+8504, 186},
    {I_VAESDECLAST, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+8512, 186},
    {I_VAESDECLAST, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, NO_DECORATOR, nasm_bytecodes+8568, 187},
    {I_VAESDECLAST, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, NO_DECORATOR, nasm_bytecodes+8576, 187},
    ITEMPLATE_END
};

static const struct itemplate instrux_VAESIMC[] = {
    {I_VAESIMC, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+26289, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VAESKEYGENASSIST[] = {
    {I_VAESKEYGENASSIST, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+8384, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VADDPD[] = {
    {I_VADDPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+26352, 184},
    {I_VADDPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+26359, 184},
    {I_VADDPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+26366, 184},
    {I_VADDPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+26373, 184},
    {I_VADDPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+11648, 225},
    {I_VADDPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+11656, 225},
    {I_VADDPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+11664, 225},
    {I_VADDPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+11672, 225},
    {I_VADDPD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64|ER,0,0}, nasm_bytecodes+11680, 226},
    {I_VADDPD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64|ER,0,0,0}, nasm_bytecodes+11688, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VADDPS[] = {
    {I_VADDPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+26380, 184},
    {I_VADDPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+26387, 184},
    {I_VADDPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+26394, 184},
    {I_VADDPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+26401, 184},
    {I_VADDPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+11696, 225},
    {I_VADDPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+11704, 225},
    {I_VADDPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+11712, 225},
    {I_VADDPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+11720, 225},
    {I_VADDPS, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32|ER,0,0}, nasm_bytecodes+11728, 226},
    {I_VADDPS, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32|ER,0,0,0}, nasm_bytecodes+11736, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VADDSD[] = {
    {I_VADDSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+26408, 184},
    {I_VADDSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+26415, 184},
    {I_VADDSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, {MASK|Z,0,ER,0,0}, nasm_bytecodes+11744, 226},
    {I_VADDSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, {MASK|Z,ER,0,0,0}, nasm_bytecodes+11752, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VADDSS[] = {
    {I_VADDSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+26422, 184},
    {I_VADDSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+26429, 184},
    {I_VADDSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, {MASK|Z,0,ER,0,0}, nasm_bytecodes+11760, 226},
    {I_VADDSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, {MASK|Z,ER,0,0,0}, nasm_bytecodes+11768, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VADDSUBPD[] = {
    {I_VADDSUBPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+26436, 184},
    {I_VADDSUBPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+26443, 184},
    {I_VADDSUBPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+26450, 184},
    {I_VADDSUBPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+26457, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VADDSUBPS[] = {
    {I_VADDSUBPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+26464, 184},
    {I_VADDSUBPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+26471, 184},
    {I_VADDSUBPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+26478, 184},
    {I_VADDSUBPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+26485, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VANDPD[] = {
    {I_VANDPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+26492, 184},
    {I_VANDPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+26499, 184},
    {I_VANDPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+26506, 184},
    {I_VANDPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+26513, 184},
    {I_VANDPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+11872, 227},
    {I_VANDPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+11880, 227},
    {I_VANDPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+11888, 227},
    {I_VANDPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+11896, 227},
    {I_VANDPD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+11904, 228},
    {I_VANDPD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+11912, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VANDPS[] = {
    {I_VANDPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+26520, 184},
    {I_VANDPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+26527, 184},
    {I_VANDPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+26534, 184},
    {I_VANDPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+26541, 184},
    {I_VANDPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+11920, 227},
    {I_VANDPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+11928, 227},
    {I_VANDPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+11936, 227},
    {I_VANDPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+11944, 227},
    {I_VANDPS, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+11952, 228},
    {I_VANDPS, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+11960, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VANDNPD[] = {
    {I_VANDNPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+26548, 184},
    {I_VANDNPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+26555, 184},
    {I_VANDNPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+26562, 184},
    {I_VANDNPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+26569, 184},
    {I_VANDNPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+11776, 227},
    {I_VANDNPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+11784, 227},
    {I_VANDNPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+11792, 227},
    {I_VANDNPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+11800, 227},
    {I_VANDNPD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+11808, 228},
    {I_VANDNPD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+11816, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VANDNPS[] = {
    {I_VANDNPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+26576, 184},
    {I_VANDNPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+26583, 184},
    {I_VANDNPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+26590, 184},
    {I_VANDNPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+26597, 184},
    {I_VANDNPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+11824, 227},
    {I_VANDNPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+11832, 227},
    {I_VANDNPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+11840, 227},
    {I_VANDNPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+11848, 227},
    {I_VANDNPS, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+11856, 228},
    {I_VANDNPS, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+11864, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VBLENDPD[] = {
    {I_VBLENDPD, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+8584, 184},
    {I_VBLENDPD, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+8592, 184},
    {I_VBLENDPD, 4, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+8600, 184},
    {I_VBLENDPD, 3, {YMM_L16,RM_YMM_L16|BITS256,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+8608, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VBLENDPS[] = {
    {I_VBLENDPS, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+8616, 184},
    {I_VBLENDPS, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+8624, 184},
    {I_VBLENDPS, 4, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+8632, 184},
    {I_VBLENDPS, 3, {YMM_L16,RM_YMM_L16|BITS256,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+8640, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VBLENDVPD[] = {
    {I_VBLENDVPD, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0}, NO_DECORATOR, nasm_bytecodes+8648, 184},
    {I_VBLENDVPD, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+8656, 184},
    {I_VBLENDVPD, 4, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,YMM_L16,0}, NO_DECORATOR, nasm_bytecodes+8664, 184},
    {I_VBLENDVPD, 3, {YMM_L16,RM_YMM_L16|BITS256,YMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+8672, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VBLENDVPS[] = {
    {I_VBLENDVPS, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0}, NO_DECORATOR, nasm_bytecodes+8680, 184},
    {I_VBLENDVPS, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+8688, 184},
    {I_VBLENDVPS, 4, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,YMM_L16,0}, NO_DECORATOR, nasm_bytecodes+8696, 184},
    {I_VBLENDVPS, 3, {YMM_L16,RM_YMM_L16|BITS256,YMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+8704, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VBROADCASTSS[] = {
    {I_VBROADCASTSS, 2, {XMM_L16,MEMORY|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+26604, 184},
    {I_VBROADCASTSS, 2, {YMM_L16,MEMORY|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+26611, 184},
    {I_VBROADCASTSS, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+26604, 203},
    {I_VBROADCASTSS, 2, {YMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+26611, 203},
    {I_VBROADCASTSS, 2, {XMMREG,MEMORY|BITS32,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+12184, 225},
    {I_VBROADCASTSS, 2, {YMMREG,MEMORY|BITS32,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+12192, 225},
    {I_VBROADCASTSS, 2, {ZMMREG,MEMORY|BITS32,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+12200, 226},
    {I_VBROADCASTSS, 2, {XMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+12208, 225},
    {I_VBROADCASTSS, 2, {YMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+12216, 225},
    {I_VBROADCASTSS, 2, {ZMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+12224, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VBROADCASTSD[] = {
    {I_VBROADCASTSD, 2, {YMM_L16,MEMORY|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+26618, 184},
    {I_VBROADCASTSD, 2, {YMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+26618, 203},
    {I_VBROADCASTSD, 2, {YMMREG,MEMORY|BITS64,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+12152, 225},
    {I_VBROADCASTSD, 2, {ZMMREG,MEMORY|BITS64,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+12160, 226},
    {I_VBROADCASTSD, 2, {YMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+12168, 225},
    {I_VBROADCASTSD, 2, {ZMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+12176, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VBROADCASTF128[] = {
    {I_VBROADCASTF128, 2, {YMM_L16,MEMORY|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+26625, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQ_OSPD[] = {
    {I_VCMPEQ_OSPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+312, 184},
    {I_VCMPEQ_OSPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+321, 184},
    {I_VCMPEQ_OSPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+330, 184},
    {I_VCMPEQ_OSPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+339, 184},
    {I_VCMPEQ_OSPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+312, 184},
    {I_VCMPEQ_OSPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+321, 184},
    {I_VCMPEQ_OSPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+330, 184},
    {I_VCMPEQ_OSPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+339, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQPD[] = {
    {I_VCMPEQPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+348, 184},
    {I_VCMPEQPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+357, 184},
    {I_VCMPEQPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+366, 184},
    {I_VCMPEQPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+375, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLT_OSPD[] = {
    {I_VCMPLT_OSPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+384, 184},
    {I_VCMPLT_OSPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+393, 184},
    {I_VCMPLT_OSPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+402, 184},
    {I_VCMPLT_OSPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+411, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLTPD[] = {
    {I_VCMPLTPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+384, 184},
    {I_VCMPLTPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+393, 184},
    {I_VCMPLTPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+402, 184},
    {I_VCMPLTPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+411, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLE_OSPD[] = {
    {I_VCMPLE_OSPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+420, 184},
    {I_VCMPLE_OSPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+429, 184},
    {I_VCMPLE_OSPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+438, 184},
    {I_VCMPLE_OSPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+447, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLEPD[] = {
    {I_VCMPLEPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+420, 184},
    {I_VCMPLEPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+429, 184},
    {I_VCMPLEPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+438, 184},
    {I_VCMPLEPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+447, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPUNORD_QPD[] = {
    {I_VCMPUNORD_QPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+456, 184},
    {I_VCMPUNORD_QPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+465, 184},
    {I_VCMPUNORD_QPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+474, 184},
    {I_VCMPUNORD_QPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+483, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPUNORDPD[] = {
    {I_VCMPUNORDPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+456, 184},
    {I_VCMPUNORDPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+465, 184},
    {I_VCMPUNORDPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+474, 184},
    {I_VCMPUNORDPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+483, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_UQPD[] = {
    {I_VCMPNEQ_UQPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+492, 184},
    {I_VCMPNEQ_UQPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+501, 184},
    {I_VCMPNEQ_UQPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+510, 184},
    {I_VCMPNEQ_UQPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+519, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQPD[] = {
    {I_VCMPNEQPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+492, 184},
    {I_VCMPNEQPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+501, 184},
    {I_VCMPNEQPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+510, 184},
    {I_VCMPNEQPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+519, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLT_USPD[] = {
    {I_VCMPNLT_USPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+528, 184},
    {I_VCMPNLT_USPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+537, 184},
    {I_VCMPNLT_USPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+546, 184},
    {I_VCMPNLT_USPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+555, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLTPD[] = {
    {I_VCMPNLTPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+528, 184},
    {I_VCMPNLTPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+537, 184},
    {I_VCMPNLTPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+546, 184},
    {I_VCMPNLTPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+555, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLE_USPD[] = {
    {I_VCMPNLE_USPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+564, 184},
    {I_VCMPNLE_USPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+573, 184},
    {I_VCMPNLE_USPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+582, 184},
    {I_VCMPNLE_USPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+591, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLEPD[] = {
    {I_VCMPNLEPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+564, 184},
    {I_VCMPNLEPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+573, 184},
    {I_VCMPNLEPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+582, 184},
    {I_VCMPNLEPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+591, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPORD_QPD[] = {
    {I_VCMPORD_QPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+600, 184},
    {I_VCMPORD_QPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+609, 184},
    {I_VCMPORD_QPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+618, 184},
    {I_VCMPORD_QPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+627, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPORDPD[] = {
    {I_VCMPORDPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+600, 184},
    {I_VCMPORDPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+609, 184},
    {I_VCMPORDPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+618, 184},
    {I_VCMPORDPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+627, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQ_UQPD[] = {
    {I_VCMPEQ_UQPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+636, 184},
    {I_VCMPEQ_UQPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+645, 184},
    {I_VCMPEQ_UQPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+654, 184},
    {I_VCMPEQ_UQPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+663, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGE_USPD[] = {
    {I_VCMPNGE_USPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+672, 184},
    {I_VCMPNGE_USPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+681, 184},
    {I_VCMPNGE_USPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+690, 184},
    {I_VCMPNGE_USPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+699, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGEPD[] = {
    {I_VCMPNGEPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+672, 184},
    {I_VCMPNGEPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+681, 184},
    {I_VCMPNGEPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+690, 184},
    {I_VCMPNGEPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+699, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGT_USPD[] = {
    {I_VCMPNGT_USPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+708, 184},
    {I_VCMPNGT_USPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+717, 184},
    {I_VCMPNGT_USPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+726, 184},
    {I_VCMPNGT_USPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+735, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGTPD[] = {
    {I_VCMPNGTPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+708, 184},
    {I_VCMPNGTPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+717, 184},
    {I_VCMPNGTPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+726, 184},
    {I_VCMPNGTPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+735, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPFALSE_OQPD[] = {
    {I_VCMPFALSE_OQPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+744, 184},
    {I_VCMPFALSE_OQPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+753, 184},
    {I_VCMPFALSE_OQPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+762, 184},
    {I_VCMPFALSE_OQPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+771, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPFALSEPD[] = {
    {I_VCMPFALSEPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+744, 184},
    {I_VCMPFALSEPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+753, 184},
    {I_VCMPFALSEPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+762, 184},
    {I_VCMPFALSEPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+771, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_OQPD[] = {
    {I_VCMPNEQ_OQPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+780, 184},
    {I_VCMPNEQ_OQPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+789, 184},
    {I_VCMPNEQ_OQPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+798, 184},
    {I_VCMPNEQ_OQPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+807, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGE_OSPD[] = {
    {I_VCMPGE_OSPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+816, 184},
    {I_VCMPGE_OSPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+825, 184},
    {I_VCMPGE_OSPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+834, 184},
    {I_VCMPGE_OSPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+843, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGEPD[] = {
    {I_VCMPGEPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+816, 184},
    {I_VCMPGEPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+825, 184},
    {I_VCMPGEPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+834, 184},
    {I_VCMPGEPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+843, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGT_OSPD[] = {
    {I_VCMPGT_OSPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+852, 184},
    {I_VCMPGT_OSPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+861, 184},
    {I_VCMPGT_OSPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+870, 184},
    {I_VCMPGT_OSPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+879, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGTPD[] = {
    {I_VCMPGTPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+852, 184},
    {I_VCMPGTPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+861, 184},
    {I_VCMPGTPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+870, 184},
    {I_VCMPGTPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+879, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPTRUE_UQPD[] = {
    {I_VCMPTRUE_UQPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+888, 184},
    {I_VCMPTRUE_UQPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+897, 184},
    {I_VCMPTRUE_UQPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+906, 184},
    {I_VCMPTRUE_UQPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+915, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPTRUEPD[] = {
    {I_VCMPTRUEPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+888, 184},
    {I_VCMPTRUEPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+897, 184},
    {I_VCMPTRUEPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+906, 184},
    {I_VCMPTRUEPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+915, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLT_OQPD[] = {
    {I_VCMPLT_OQPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+924, 184},
    {I_VCMPLT_OQPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+933, 184},
    {I_VCMPLT_OQPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+942, 184},
    {I_VCMPLT_OQPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+951, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLE_OQPD[] = {
    {I_VCMPLE_OQPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+960, 184},
    {I_VCMPLE_OQPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+969, 184},
    {I_VCMPLE_OQPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+978, 184},
    {I_VCMPLE_OQPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+987, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPUNORD_SPD[] = {
    {I_VCMPUNORD_SPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+996, 184},
    {I_VCMPUNORD_SPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1005, 184},
    {I_VCMPUNORD_SPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+1014, 184},
    {I_VCMPUNORD_SPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+1023, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_USPD[] = {
    {I_VCMPNEQ_USPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+1032, 184},
    {I_VCMPNEQ_USPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1041, 184},
    {I_VCMPNEQ_USPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+1050, 184},
    {I_VCMPNEQ_USPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+1059, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLT_UQPD[] = {
    {I_VCMPNLT_UQPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+1068, 184},
    {I_VCMPNLT_UQPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1077, 184},
    {I_VCMPNLT_UQPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+1086, 184},
    {I_VCMPNLT_UQPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+1095, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLE_UQPD[] = {
    {I_VCMPNLE_UQPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+1104, 184},
    {I_VCMPNLE_UQPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1113, 184},
    {I_VCMPNLE_UQPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+1122, 184},
    {I_VCMPNLE_UQPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+1131, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPORD_SPD[] = {
    {I_VCMPORD_SPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+1140, 184},
    {I_VCMPORD_SPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1149, 184},
    {I_VCMPORD_SPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+1158, 184},
    {I_VCMPORD_SPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+1167, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQ_USPD[] = {
    {I_VCMPEQ_USPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+1176, 184},
    {I_VCMPEQ_USPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1185, 184},
    {I_VCMPEQ_USPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+1194, 184},
    {I_VCMPEQ_USPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+1203, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGE_UQPD[] = {
    {I_VCMPNGE_UQPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+1212, 184},
    {I_VCMPNGE_UQPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1221, 184},
    {I_VCMPNGE_UQPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+1230, 184},
    {I_VCMPNGE_UQPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+1239, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGT_UQPD[] = {
    {I_VCMPNGT_UQPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+1248, 184},
    {I_VCMPNGT_UQPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1257, 184},
    {I_VCMPNGT_UQPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+1266, 184},
    {I_VCMPNGT_UQPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+1275, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPFALSE_OSPD[] = {
    {I_VCMPFALSE_OSPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+1284, 184},
    {I_VCMPFALSE_OSPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1293, 184},
    {I_VCMPFALSE_OSPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+1302, 184},
    {I_VCMPFALSE_OSPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+1311, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_OSPD[] = {
    {I_VCMPNEQ_OSPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+1320, 184},
    {I_VCMPNEQ_OSPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1329, 184},
    {I_VCMPNEQ_OSPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+1338, 184},
    {I_VCMPNEQ_OSPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+1347, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGE_OQPD[] = {
    {I_VCMPGE_OQPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+1356, 184},
    {I_VCMPGE_OQPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1365, 184},
    {I_VCMPGE_OQPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+1374, 184},
    {I_VCMPGE_OQPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+1383, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGT_OQPD[] = {
    {I_VCMPGT_OQPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+1392, 184},
    {I_VCMPGT_OQPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1401, 184},
    {I_VCMPGT_OQPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+1410, 184},
    {I_VCMPGT_OQPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+1419, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPTRUE_USPD[] = {
    {I_VCMPTRUE_USPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+1428, 184},
    {I_VCMPTRUE_USPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1437, 184},
    {I_VCMPTRUE_USPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+1446, 184},
    {I_VCMPTRUE_USPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+1455, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPPD[] = {
    {I_VCMPPD, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+8712, 184},
    {I_VCMPPD, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+8720, 184},
    {I_VCMPPD, 4, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+8728, 184},
    {I_VCMPPD, 3, {YMM_L16,RM_YMM_L16|BITS256,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+8736, 184},
    {I_VCMPPD, 4, {KREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, {MASK,0,B64,0,0}, nasm_bytecodes+4110, 225},
    {I_VCMPPD, 4, {KREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, {MASK,0,B64,0,0}, nasm_bytecodes+4119, 225},
    {I_VCMPPD, 4, {KREG,ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0}, {MASK,0,B64|SAE,0,0}, nasm_bytecodes+4128, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQ_OSPS[] = {
    {I_VCMPEQ_OSPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+1464, 184},
    {I_VCMPEQ_OSPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1473, 184},
    {I_VCMPEQ_OSPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+1482, 184},
    {I_VCMPEQ_OSPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+1491, 184},
    {I_VCMPEQ_OSPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+1464, 184},
    {I_VCMPEQ_OSPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1473, 184},
    {I_VCMPEQ_OSPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+1482, 184},
    {I_VCMPEQ_OSPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+1491, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQPS[] = {
    {I_VCMPEQPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+1500, 184},
    {I_VCMPEQPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1509, 184},
    {I_VCMPEQPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+1518, 184},
    {I_VCMPEQPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+1527, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLT_OSPS[] = {
    {I_VCMPLT_OSPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+1536, 184},
    {I_VCMPLT_OSPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1545, 184},
    {I_VCMPLT_OSPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+1554, 184},
    {I_VCMPLT_OSPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+1563, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLTPS[] = {
    {I_VCMPLTPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+1536, 184},
    {I_VCMPLTPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1545, 184},
    {I_VCMPLTPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+1554, 184},
    {I_VCMPLTPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+1563, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLE_OSPS[] = {
    {I_VCMPLE_OSPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+1572, 184},
    {I_VCMPLE_OSPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1581, 184},
    {I_VCMPLE_OSPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+1590, 184},
    {I_VCMPLE_OSPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+1599, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLEPS[] = {
    {I_VCMPLEPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+1572, 184},
    {I_VCMPLEPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1581, 184},
    {I_VCMPLEPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+1590, 184},
    {I_VCMPLEPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+1599, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPUNORD_QPS[] = {
    {I_VCMPUNORD_QPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+1608, 184},
    {I_VCMPUNORD_QPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1617, 184},
    {I_VCMPUNORD_QPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+1626, 184},
    {I_VCMPUNORD_QPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+1635, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPUNORDPS[] = {
    {I_VCMPUNORDPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+1608, 184},
    {I_VCMPUNORDPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1617, 184},
    {I_VCMPUNORDPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+1626, 184},
    {I_VCMPUNORDPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+1635, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_UQPS[] = {
    {I_VCMPNEQ_UQPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+1644, 184},
    {I_VCMPNEQ_UQPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1653, 184},
    {I_VCMPNEQ_UQPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+1662, 184},
    {I_VCMPNEQ_UQPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+1671, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQPS[] = {
    {I_VCMPNEQPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+1644, 184},
    {I_VCMPNEQPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1653, 184},
    {I_VCMPNEQPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+1662, 184},
    {I_VCMPNEQPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+1671, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLT_USPS[] = {
    {I_VCMPNLT_USPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+1680, 184},
    {I_VCMPNLT_USPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1689, 184},
    {I_VCMPNLT_USPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+1698, 184},
    {I_VCMPNLT_USPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+1707, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLTPS[] = {
    {I_VCMPNLTPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+1680, 184},
    {I_VCMPNLTPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1689, 184},
    {I_VCMPNLTPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+1698, 184},
    {I_VCMPNLTPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+1707, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLE_USPS[] = {
    {I_VCMPNLE_USPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+1716, 184},
    {I_VCMPNLE_USPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1725, 184},
    {I_VCMPNLE_USPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+1734, 184},
    {I_VCMPNLE_USPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+1743, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLEPS[] = {
    {I_VCMPNLEPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+1716, 184},
    {I_VCMPNLEPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1725, 184},
    {I_VCMPNLEPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+1734, 184},
    {I_VCMPNLEPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+1743, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPORD_QPS[] = {
    {I_VCMPORD_QPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+1752, 184},
    {I_VCMPORD_QPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1761, 184},
    {I_VCMPORD_QPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+1770, 184},
    {I_VCMPORD_QPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+1779, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPORDPS[] = {
    {I_VCMPORDPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+1752, 184},
    {I_VCMPORDPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1761, 184},
    {I_VCMPORDPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+1770, 184},
    {I_VCMPORDPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+1779, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQ_UQPS[] = {
    {I_VCMPEQ_UQPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+1788, 184},
    {I_VCMPEQ_UQPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1797, 184},
    {I_VCMPEQ_UQPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+1806, 184},
    {I_VCMPEQ_UQPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+1815, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGE_USPS[] = {
    {I_VCMPNGE_USPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+1824, 184},
    {I_VCMPNGE_USPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1833, 184},
    {I_VCMPNGE_USPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+1842, 184},
    {I_VCMPNGE_USPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+1851, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGEPS[] = {
    {I_VCMPNGEPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+1824, 184},
    {I_VCMPNGEPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1833, 184},
    {I_VCMPNGEPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+1842, 184},
    {I_VCMPNGEPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+1851, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGT_USPS[] = {
    {I_VCMPNGT_USPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+1860, 184},
    {I_VCMPNGT_USPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1869, 184},
    {I_VCMPNGT_USPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+1878, 184},
    {I_VCMPNGT_USPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+1887, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGTPS[] = {
    {I_VCMPNGTPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+1860, 184},
    {I_VCMPNGTPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1869, 184},
    {I_VCMPNGTPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+1878, 184},
    {I_VCMPNGTPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+1887, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPFALSE_OQPS[] = {
    {I_VCMPFALSE_OQPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+1896, 184},
    {I_VCMPFALSE_OQPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1905, 184},
    {I_VCMPFALSE_OQPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+1914, 184},
    {I_VCMPFALSE_OQPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+1923, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPFALSEPS[] = {
    {I_VCMPFALSEPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+1896, 184},
    {I_VCMPFALSEPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1905, 184},
    {I_VCMPFALSEPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+1914, 184},
    {I_VCMPFALSEPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+1923, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_OQPS[] = {
    {I_VCMPNEQ_OQPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+1932, 184},
    {I_VCMPNEQ_OQPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1941, 184},
    {I_VCMPNEQ_OQPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+1950, 184},
    {I_VCMPNEQ_OQPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+1959, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGE_OSPS[] = {
    {I_VCMPGE_OSPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+1968, 184},
    {I_VCMPGE_OSPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1977, 184},
    {I_VCMPGE_OSPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+1986, 184},
    {I_VCMPGE_OSPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+1995, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGEPS[] = {
    {I_VCMPGEPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+1968, 184},
    {I_VCMPGEPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1977, 184},
    {I_VCMPGEPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+1986, 184},
    {I_VCMPGEPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+1995, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGT_OSPS[] = {
    {I_VCMPGT_OSPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+2004, 184},
    {I_VCMPGT_OSPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2013, 184},
    {I_VCMPGT_OSPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+2022, 184},
    {I_VCMPGT_OSPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+2031, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGTPS[] = {
    {I_VCMPGTPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+2004, 184},
    {I_VCMPGTPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2013, 184},
    {I_VCMPGTPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+2022, 184},
    {I_VCMPGTPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+2031, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPTRUE_UQPS[] = {
    {I_VCMPTRUE_UQPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+2040, 184},
    {I_VCMPTRUE_UQPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2049, 184},
    {I_VCMPTRUE_UQPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+2058, 184},
    {I_VCMPTRUE_UQPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+2067, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPTRUEPS[] = {
    {I_VCMPTRUEPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+2040, 184},
    {I_VCMPTRUEPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2049, 184},
    {I_VCMPTRUEPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+2058, 184},
    {I_VCMPTRUEPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+2067, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLT_OQPS[] = {
    {I_VCMPLT_OQPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+2076, 184},
    {I_VCMPLT_OQPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2085, 184},
    {I_VCMPLT_OQPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+2094, 184},
    {I_VCMPLT_OQPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+2103, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLE_OQPS[] = {
    {I_VCMPLE_OQPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+2112, 184},
    {I_VCMPLE_OQPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2121, 184},
    {I_VCMPLE_OQPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+2130, 184},
    {I_VCMPLE_OQPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+2139, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPUNORD_SPS[] = {
    {I_VCMPUNORD_SPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+2148, 184},
    {I_VCMPUNORD_SPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2157, 184},
    {I_VCMPUNORD_SPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+2166, 184},
    {I_VCMPUNORD_SPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+2175, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_USPS[] = {
    {I_VCMPNEQ_USPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+2184, 184},
    {I_VCMPNEQ_USPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2193, 184},
    {I_VCMPNEQ_USPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+2202, 184},
    {I_VCMPNEQ_USPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+2211, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLT_UQPS[] = {
    {I_VCMPNLT_UQPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+2220, 184},
    {I_VCMPNLT_UQPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2229, 184},
    {I_VCMPNLT_UQPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+2238, 184},
    {I_VCMPNLT_UQPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+2247, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLE_UQPS[] = {
    {I_VCMPNLE_UQPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+2256, 184},
    {I_VCMPNLE_UQPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2265, 184},
    {I_VCMPNLE_UQPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+2274, 184},
    {I_VCMPNLE_UQPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+2283, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPORD_SPS[] = {
    {I_VCMPORD_SPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+2292, 184},
    {I_VCMPORD_SPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2301, 184},
    {I_VCMPORD_SPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+2310, 184},
    {I_VCMPORD_SPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+2319, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQ_USPS[] = {
    {I_VCMPEQ_USPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+2328, 184},
    {I_VCMPEQ_USPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2337, 184},
    {I_VCMPEQ_USPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+2346, 184},
    {I_VCMPEQ_USPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+2355, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGE_UQPS[] = {
    {I_VCMPNGE_UQPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+2364, 184},
    {I_VCMPNGE_UQPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2373, 184},
    {I_VCMPNGE_UQPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+2382, 184},
    {I_VCMPNGE_UQPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+2391, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGT_UQPS[] = {
    {I_VCMPNGT_UQPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+2400, 184},
    {I_VCMPNGT_UQPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2409, 184},
    {I_VCMPNGT_UQPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+2418, 184},
    {I_VCMPNGT_UQPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+2427, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPFALSE_OSPS[] = {
    {I_VCMPFALSE_OSPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+2436, 184},
    {I_VCMPFALSE_OSPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2445, 184},
    {I_VCMPFALSE_OSPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+2454, 184},
    {I_VCMPFALSE_OSPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+2463, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_OSPS[] = {
    {I_VCMPNEQ_OSPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+2472, 184},
    {I_VCMPNEQ_OSPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2481, 184},
    {I_VCMPNEQ_OSPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+2490, 184},
    {I_VCMPNEQ_OSPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+2499, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGE_OQPS[] = {
    {I_VCMPGE_OQPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+2508, 184},
    {I_VCMPGE_OQPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2517, 184},
    {I_VCMPGE_OQPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+2526, 184},
    {I_VCMPGE_OQPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+2535, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGT_OQPS[] = {
    {I_VCMPGT_OQPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+2544, 184},
    {I_VCMPGT_OQPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2553, 184},
    {I_VCMPGT_OQPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+2562, 184},
    {I_VCMPGT_OQPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+2571, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPTRUE_USPS[] = {
    {I_VCMPTRUE_USPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+2580, 184},
    {I_VCMPTRUE_USPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2589, 184},
    {I_VCMPTRUE_USPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+2598, 184},
    {I_VCMPTRUE_USPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+2607, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPPS[] = {
    {I_VCMPPS, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+8744, 184},
    {I_VCMPPS, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+8752, 184},
    {I_VCMPPS, 4, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+8760, 184},
    {I_VCMPPS, 3, {YMM_L16,RM_YMM_L16|BITS256,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+8768, 184},
    {I_VCMPPS, 4, {KREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, {MASK,0,B32,0,0}, nasm_bytecodes+4137, 225},
    {I_VCMPPS, 4, {KREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, {MASK,0,B32,0,0}, nasm_bytecodes+4146, 225},
    {I_VCMPPS, 4, {KREG,ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0}, {MASK,0,B32|SAE,0,0}, nasm_bytecodes+4155, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQ_OSSD[] = {
    {I_VCMPEQ_OSSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+2616, 184},
    {I_VCMPEQ_OSSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2625, 184},
    {I_VCMPEQ_OSSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+2616, 184},
    {I_VCMPEQ_OSSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2625, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQSD[] = {
    {I_VCMPEQSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+2634, 184},
    {I_VCMPEQSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2643, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLT_OSSD[] = {
    {I_VCMPLT_OSSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+2652, 184},
    {I_VCMPLT_OSSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2661, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLTSD[] = {
    {I_VCMPLTSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+2652, 184},
    {I_VCMPLTSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2661, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLE_OSSD[] = {
    {I_VCMPLE_OSSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+2670, 184},
    {I_VCMPLE_OSSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2679, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLESD[] = {
    {I_VCMPLESD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+2670, 184},
    {I_VCMPLESD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2679, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPUNORD_QSD[] = {
    {I_VCMPUNORD_QSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+2688, 184},
    {I_VCMPUNORD_QSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2697, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPUNORDSD[] = {
    {I_VCMPUNORDSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+2688, 184},
    {I_VCMPUNORDSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2697, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_UQSD[] = {
    {I_VCMPNEQ_UQSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+2706, 184},
    {I_VCMPNEQ_UQSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2715, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQSD[] = {
    {I_VCMPNEQSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+2706, 184},
    {I_VCMPNEQSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2715, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLT_USSD[] = {
    {I_VCMPNLT_USSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+2724, 184},
    {I_VCMPNLT_USSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2733, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLTSD[] = {
    {I_VCMPNLTSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+2724, 184},
    {I_VCMPNLTSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2733, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLE_USSD[] = {
    {I_VCMPNLE_USSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+2742, 184},
    {I_VCMPNLE_USSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2751, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLESD[] = {
    {I_VCMPNLESD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+2742, 184},
    {I_VCMPNLESD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2751, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPORD_QSD[] = {
    {I_VCMPORD_QSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+2760, 184},
    {I_VCMPORD_QSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2769, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPORDSD[] = {
    {I_VCMPORDSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+2760, 184},
    {I_VCMPORDSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2769, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQ_UQSD[] = {
    {I_VCMPEQ_UQSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+2778, 184},
    {I_VCMPEQ_UQSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2787, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGE_USSD[] = {
    {I_VCMPNGE_USSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+2796, 184},
    {I_VCMPNGE_USSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2805, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGESD[] = {
    {I_VCMPNGESD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+2796, 184},
    {I_VCMPNGESD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2805, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGT_USSD[] = {
    {I_VCMPNGT_USSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+2814, 184},
    {I_VCMPNGT_USSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2823, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGTSD[] = {
    {I_VCMPNGTSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+2814, 184},
    {I_VCMPNGTSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2823, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPFALSE_OQSD[] = {
    {I_VCMPFALSE_OQSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+2832, 184},
    {I_VCMPFALSE_OQSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2841, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPFALSESD[] = {
    {I_VCMPFALSESD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+2832, 184},
    {I_VCMPFALSESD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2841, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_OQSD[] = {
    {I_VCMPNEQ_OQSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+2850, 184},
    {I_VCMPNEQ_OQSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2859, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGE_OSSD[] = {
    {I_VCMPGE_OSSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+2868, 184},
    {I_VCMPGE_OSSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2877, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGESD[] = {
    {I_VCMPGESD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+2868, 184},
    {I_VCMPGESD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2877, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGT_OSSD[] = {
    {I_VCMPGT_OSSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+2886, 184},
    {I_VCMPGT_OSSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2895, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGTSD[] = {
    {I_VCMPGTSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+2886, 184},
    {I_VCMPGTSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2895, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPTRUE_UQSD[] = {
    {I_VCMPTRUE_UQSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+2904, 184},
    {I_VCMPTRUE_UQSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2913, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPTRUESD[] = {
    {I_VCMPTRUESD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+2904, 184},
    {I_VCMPTRUESD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2913, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLT_OQSD[] = {
    {I_VCMPLT_OQSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+2922, 184},
    {I_VCMPLT_OQSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2931, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLE_OQSD[] = {
    {I_VCMPLE_OQSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+2940, 184},
    {I_VCMPLE_OQSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2949, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPUNORD_SSD[] = {
    {I_VCMPUNORD_SSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+2958, 184},
    {I_VCMPUNORD_SSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2967, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_USSD[] = {
    {I_VCMPNEQ_USSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+2976, 184},
    {I_VCMPNEQ_USSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2985, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLT_UQSD[] = {
    {I_VCMPNLT_UQSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+2994, 184},
    {I_VCMPNLT_UQSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3003, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLE_UQSD[] = {
    {I_VCMPNLE_UQSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3012, 184},
    {I_VCMPNLE_UQSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3021, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPORD_SSD[] = {
    {I_VCMPORD_SSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3030, 184},
    {I_VCMPORD_SSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3039, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQ_USSD[] = {
    {I_VCMPEQ_USSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3048, 184},
    {I_VCMPEQ_USSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3057, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGE_UQSD[] = {
    {I_VCMPNGE_UQSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3066, 184},
    {I_VCMPNGE_UQSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3075, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGT_UQSD[] = {
    {I_VCMPNGT_UQSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3084, 184},
    {I_VCMPNGT_UQSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3093, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPFALSE_OSSD[] = {
    {I_VCMPFALSE_OSSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3102, 184},
    {I_VCMPFALSE_OSSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3111, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_OSSD[] = {
    {I_VCMPNEQ_OSSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3120, 184},
    {I_VCMPNEQ_OSSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3129, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGE_OQSD[] = {
    {I_VCMPGE_OQSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3138, 184},
    {I_VCMPGE_OQSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3147, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGT_OQSD[] = {
    {I_VCMPGT_OQSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3156, 184},
    {I_VCMPGT_OQSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3165, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPTRUE_USSD[] = {
    {I_VCMPTRUE_USSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3174, 184},
    {I_VCMPTRUE_USSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3183, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPSD[] = {
    {I_VCMPSD, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+8776, 184},
    {I_VCMPSD, 3, {XMM_L16,RM_XMM_L16|BITS64,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+8784, 184},
    {I_VCMPSD, 4, {KREG,XMMREG,RM_XMM|BITS64,IMMEDIATE|BITS8,0}, {MASK,0,SAE,0,0}, nasm_bytecodes+4164, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQ_OSSS[] = {
    {I_VCMPEQ_OSSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3192, 184},
    {I_VCMPEQ_OSSS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3201, 184},
    {I_VCMPEQ_OSSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3192, 184},
    {I_VCMPEQ_OSSS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3201, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQSS[] = {
    {I_VCMPEQSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3210, 184},
    {I_VCMPEQSS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3219, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLT_OSSS[] = {
    {I_VCMPLT_OSSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3228, 184},
    {I_VCMPLT_OSSS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3237, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLTSS[] = {
    {I_VCMPLTSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3228, 184},
    {I_VCMPLTSS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3237, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLE_OSSS[] = {
    {I_VCMPLE_OSSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3246, 184},
    {I_VCMPLE_OSSS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3255, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLESS[] = {
    {I_VCMPLESS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3246, 184},
    {I_VCMPLESS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3255, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPUNORD_QSS[] = {
    {I_VCMPUNORD_QSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3264, 184},
    {I_VCMPUNORD_QSS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3273, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPUNORDSS[] = {
    {I_VCMPUNORDSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3264, 184},
    {I_VCMPUNORDSS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3273, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_UQSS[] = {
    {I_VCMPNEQ_UQSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3282, 184},
    {I_VCMPNEQ_UQSS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3291, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQSS[] = {
    {I_VCMPNEQSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3282, 184},
    {I_VCMPNEQSS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3291, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLT_USSS[] = {
    {I_VCMPNLT_USSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3300, 184},
    {I_VCMPNLT_USSS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3309, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLTSS[] = {
    {I_VCMPNLTSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3300, 184},
    {I_VCMPNLTSS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3309, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLE_USSS[] = {
    {I_VCMPNLE_USSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3318, 184},
    {I_VCMPNLE_USSS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3327, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLESS[] = {
    {I_VCMPNLESS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3318, 184},
    {I_VCMPNLESS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3327, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPORD_QSS[] = {
    {I_VCMPORD_QSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3336, 184},
    {I_VCMPORD_QSS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3345, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPORDSS[] = {
    {I_VCMPORDSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3336, 184},
    {I_VCMPORDSS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3345, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQ_UQSS[] = {
    {I_VCMPEQ_UQSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3354, 184},
    {I_VCMPEQ_UQSS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3363, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGE_USSS[] = {
    {I_VCMPNGE_USSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3372, 184},
    {I_VCMPNGE_USSS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3381, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGESS[] = {
    {I_VCMPNGESS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3372, 184},
    {I_VCMPNGESS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3381, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGT_USSS[] = {
    {I_VCMPNGT_USSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3390, 184},
    {I_VCMPNGT_USSS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3399, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGTSS[] = {
    {I_VCMPNGTSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3390, 184},
    {I_VCMPNGTSS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3399, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPFALSE_OQSS[] = {
    {I_VCMPFALSE_OQSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3408, 184},
    {I_VCMPFALSE_OQSS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3417, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPFALSESS[] = {
    {I_VCMPFALSESS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3408, 184},
    {I_VCMPFALSESS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3417, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_OQSS[] = {
    {I_VCMPNEQ_OQSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3426, 184},
    {I_VCMPNEQ_OQSS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3435, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGE_OSSS[] = {
    {I_VCMPGE_OSSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3444, 184},
    {I_VCMPGE_OSSS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3453, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGESS[] = {
    {I_VCMPGESS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3444, 184},
    {I_VCMPGESS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3453, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGT_OSSS[] = {
    {I_VCMPGT_OSSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3462, 184},
    {I_VCMPGT_OSSS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3471, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGTSS[] = {
    {I_VCMPGTSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3462, 184},
    {I_VCMPGTSS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3471, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPTRUE_UQSS[] = {
    {I_VCMPTRUE_UQSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3480, 184},
    {I_VCMPTRUE_UQSS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3489, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPTRUESS[] = {
    {I_VCMPTRUESS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3480, 184},
    {I_VCMPTRUESS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3489, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLT_OQSS[] = {
    {I_VCMPLT_OQSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3498, 184},
    {I_VCMPLT_OQSS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3507, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLE_OQSS[] = {
    {I_VCMPLE_OQSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3516, 184},
    {I_VCMPLE_OQSS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3525, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPUNORD_SSS[] = {
    {I_VCMPUNORD_SSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3534, 184},
    {I_VCMPUNORD_SSS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3543, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_USSS[] = {
    {I_VCMPNEQ_USSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3552, 184},
    {I_VCMPNEQ_USSS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3561, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLT_UQSS[] = {
    {I_VCMPNLT_UQSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3570, 184},
    {I_VCMPNLT_UQSS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3579, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLE_UQSS[] = {
    {I_VCMPNLE_UQSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3588, 184},
    {I_VCMPNLE_UQSS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3597, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPORD_SSS[] = {
    {I_VCMPORD_SSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3606, 184},
    {I_VCMPORD_SSS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3615, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQ_USSS[] = {
    {I_VCMPEQ_USSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3624, 184},
    {I_VCMPEQ_USSS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3633, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGE_UQSS[] = {
    {I_VCMPNGE_UQSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3642, 184},
    {I_VCMPNGE_UQSS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3651, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGT_UQSS[] = {
    {I_VCMPNGT_UQSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3660, 184},
    {I_VCMPNGT_UQSS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3669, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPFALSE_OSSS[] = {
    {I_VCMPFALSE_OSSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3678, 184},
    {I_VCMPFALSE_OSSS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3687, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_OSSS[] = {
    {I_VCMPNEQ_OSSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3696, 184},
    {I_VCMPNEQ_OSSS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3705, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGE_OQSS[] = {
    {I_VCMPGE_OQSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3714, 184},
    {I_VCMPGE_OQSS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3723, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGT_OQSS[] = {
    {I_VCMPGT_OQSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3732, 184},
    {I_VCMPGT_OQSS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3741, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPTRUE_USSS[] = {
    {I_VCMPTRUE_USSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+3750, 184},
    {I_VCMPTRUE_USSS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3759, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPSS[] = {
    {I_VCMPSS, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+8792, 184},
    {I_VCMPSS, 3, {XMM_L16,RM_XMM_L16|BITS64,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+8800, 184},
    {I_VCMPSS, 4, {KREG,XMMREG,RM_XMM|BITS32,IMMEDIATE|BITS8,0}, {MASK,0,SAE,0,0}, nasm_bytecodes+4173, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCOMISD[] = {
    {I_VCOMISD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+26632, 184},
    {I_VCOMISD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, {0,SAE,0,0,0}, nasm_bytecodes+12232, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCOMISS[] = {
    {I_VCOMISS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+26639, 184},
    {I_VCOMISS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, {0,SAE,0,0,0}, nasm_bytecodes+12240, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTDQ2PD[] = {
    {I_VCVTDQ2PD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+26646, 184},
    {I_VCVTDQ2PD, 2, {YMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+26653, 184},
    {I_VCVTDQ2PD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+12344, 225},
    {I_VCVTDQ2PD, 2, {YMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+12352, 225},
    {I_VCVTDQ2PD, 2, {ZMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32|ER,0,0,0}, nasm_bytecodes+12360, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTDQ2PS[] = {
    {I_VCVTDQ2PS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+26660, 184},
    {I_VCVTDQ2PS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+26667, 184},
    {I_VCVTDQ2PS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+12368, 225},
    {I_VCVTDQ2PS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+12376, 225},
    {I_VCVTDQ2PS, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32|ER,0,0,0}, nasm_bytecodes+12384, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTPD2DQ[] = {
    {I_VCVTPD2DQ, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+26674, 184},
    {I_VCVTPD2DQ, 2, {XMM_L16,MEMORY|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+26674, 188},
    {I_VCVTPD2DQ, 2, {XMM_L16,YMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+26681, 184},
    {I_VCVTPD2DQ, 2, {XMM_L16,MEMORY|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+26681, 189},
    {I_VCVTPD2DQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+12392, 225},
    {I_VCVTPD2DQ, 2, {XMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+12400, 225},
    {I_VCVTPD2DQ, 2, {YMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64|ER,0,0,0}, nasm_bytecodes+12408, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTPD2PS[] = {
    {I_VCVTPD2PS, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+26688, 184},
    {I_VCVTPD2PS, 2, {XMM_L16,MEMORY|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+26688, 188},
    {I_VCVTPD2PS, 2, {XMM_L16,YMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+26695, 184},
    {I_VCVTPD2PS, 2, {XMM_L16,MEMORY|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+26695, 189},
    {I_VCVTPD2PS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+12416, 225},
    {I_VCVTPD2PS, 2, {XMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+12424, 225},
    {I_VCVTPD2PS, 2, {YMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64|ER,0,0,0}, nasm_bytecodes+12432, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTPS2DQ[] = {
    {I_VCVTPS2DQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+26702, 184},
    {I_VCVTPS2DQ, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+26709, 184},
    {I_VCVTPS2DQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+12536, 225},
    {I_VCVTPS2DQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+12544, 225},
    {I_VCVTPS2DQ, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32|ER,0,0,0}, nasm_bytecodes+12552, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTPS2PD[] = {
    {I_VCVTPS2PD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+26716, 184},
    {I_VCVTPS2PD, 2, {YMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+26723, 184},
    {I_VCVTPS2PD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+12560, 225},
    {I_VCVTPS2PD, 2, {YMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+12568, 225},
    {I_VCVTPS2PD, 2, {ZMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32|SAE,0,0,0}, nasm_bytecodes+12576, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTSD2SI[] = {
    {I_VCVTSD2SI, 2, {REG_GPR|BITS32,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+26730, 184},
    {I_VCVTSD2SI, 2, {REG_GPR|BITS64,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+26737, 190},
    {I_VCVTSD2SI, 2, {REG_GPR|BITS32,RM_XMM|BITS64,0,0,0}, {0,ER,0,0,0}, nasm_bytecodes+12704, 226},
    {I_VCVTSD2SI, 2, {REG_GPR|BITS64,RM_XMM|BITS64,0,0,0}, {0,ER,0,0,0}, nasm_bytecodes+12712, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTSD2SS[] = {
    {I_VCVTSD2SS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+26744, 184},
    {I_VCVTSD2SS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+26751, 184},
    {I_VCVTSD2SS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, {MASK|Z,0,ER,0,0}, nasm_bytecodes+12720, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTSI2SD[] = {
    {I_VCVTSI2SD, 3, {XMM_L16,XMM_L16,RM_GPR|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+26758, 191},
    {I_VCVTSI2SD, 2, {XMM_L16,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+26765, 191},
    {I_VCVTSI2SD, 3, {XMM_L16,XMM_L16,MEMORY|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+26758, 191},
    {I_VCVTSI2SD, 2, {XMM_L16,MEMORY|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+26765, 191},
    {I_VCVTSI2SD, 3, {XMM_L16,XMM_L16,RM_GPR|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+26772, 192},
    {I_VCVTSI2SD, 2, {XMM_L16,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+26779, 192},
    {I_VCVTSI2SD, 3, {XMMREG,XMMREG,RM_GPR|BITS32,0,0}, {0,ER,0,0,0}, nasm_bytecodes+12744, 226},
    {I_VCVTSI2SD, 3, {XMMREG,XMMREG,RM_GPR|BITS64,0,0}, {0,ER,0,0,0}, nasm_bytecodes+12752, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTSI2SS[] = {
    {I_VCVTSI2SS, 3, {XMM_L16,XMM_L16,RM_GPR|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+26786, 191},
    {I_VCVTSI2SS, 2, {XMM_L16,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+26793, 191},
    {I_VCVTSI2SS, 3, {XMM_L16,XMM_L16,MEMORY|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+26786, 191},
    {I_VCVTSI2SS, 2, {XMM_L16,MEMORY|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+26793, 191},
    {I_VCVTSI2SS, 3, {XMM_L16,XMM_L16,RM_GPR|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+26800, 192},
    {I_VCVTSI2SS, 2, {XMM_L16,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+26807, 192},
    {I_VCVTSI2SS, 3, {XMMREG,XMMREG,RM_GPR|BITS32,0,0}, {0,ER,0,0,0}, nasm_bytecodes+12760, 226},
    {I_VCVTSI2SS, 3, {XMMREG,XMMREG,RM_GPR|BITS64,0,0}, {0,ER,0,0,0}, nasm_bytecodes+12768, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTSS2SD[] = {
    {I_VCVTSS2SD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+26814, 184},
    {I_VCVTSS2SD, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+26821, 184},
    {I_VCVTSS2SD, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, {MASK|Z,0,SAE,0,0}, nasm_bytecodes+12776, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTSS2SI[] = {
    {I_VCVTSS2SI, 2, {REG_GPR|BITS32,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+26828, 184},
    {I_VCVTSS2SI, 2, {REG_GPR|BITS64,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+26835, 190},
    {I_VCVTSS2SI, 2, {REG_GPR|BITS32,RM_XMM|BITS32,0,0,0}, {0,ER,0,0,0}, nasm_bytecodes+12784, 226},
    {I_VCVTSS2SI, 2, {REG_GPR|BITS64,RM_XMM|BITS32,0,0,0}, {0,ER,0,0,0}, nasm_bytecodes+12792, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTTPD2DQ[] = {
    {I_VCVTTPD2DQ, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+26842, 184},
    {I_VCVTTPD2DQ, 2, {XMM_L16,MEMORY|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+26842, 188},
    {I_VCVTTPD2DQ, 2, {XMM_L16,YMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+26849, 184},
    {I_VCVTTPD2DQ, 2, {XMM_L16,MEMORY|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+26849, 189},
    {I_VCVTTPD2DQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+12816, 225},
    {I_VCVTTPD2DQ, 2, {XMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+12824, 225},
    {I_VCVTTPD2DQ, 2, {YMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64|SAE,0,0,0}, nasm_bytecodes+12832, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTTPS2DQ[] = {
    {I_VCVTTPS2DQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+26856, 184},
    {I_VCVTTPS2DQ, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+26863, 184},
    {I_VCVTTPS2DQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+12912, 225},
    {I_VCVTTPS2DQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+12920, 225},
    {I_VCVTTPS2DQ, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32|SAE,0,0,0}, nasm_bytecodes+12928, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTTSD2SI[] = {
    {I_VCVTTSD2SI, 2, {REG_GPR|BITS32,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+26870, 184},
    {I_VCVTTSD2SI, 2, {REG_GPR|BITS64,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+26877, 190},
    {I_VCVTTSD2SI, 2, {REG_GPR|BITS32,RM_XMM|BITS64,0,0,0}, {0,SAE,0,0,0}, nasm_bytecodes+13008, 226},
    {I_VCVTTSD2SI, 2, {REG_GPR|BITS64,RM_XMM|BITS64,0,0,0}, {0,SAE,0,0,0}, nasm_bytecodes+13016, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTTSS2SI[] = {
    {I_VCVTTSS2SI, 2, {REG_GPR|BITS32,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+26884, 184},
    {I_VCVTTSS2SI, 2, {REG_GPR|BITS64,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+26891, 190},
    {I_VCVTTSS2SI, 2, {REG_GPR|BITS32,RM_XMM|BITS32,0,0,0}, {0,SAE,0,0,0}, nasm_bytecodes+13040, 226},
    {I_VCVTTSS2SI, 2, {REG_GPR|BITS64,RM_XMM|BITS32,0,0,0}, {0,SAE,0,0,0}, nasm_bytecodes+13048, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VDIVPD[] = {
    {I_VDIVPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+26898, 184},
    {I_VDIVPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+26905, 184},
    {I_VDIVPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+26912, 184},
    {I_VDIVPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+26919, 184},
    {I_VDIVPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+13200, 225},
    {I_VDIVPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+13208, 225},
    {I_VDIVPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+13216, 225},
    {I_VDIVPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+13224, 225},
    {I_VDIVPD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64|ER,0,0}, nasm_bytecodes+13232, 226},
    {I_VDIVPD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64|ER,0,0,0}, nasm_bytecodes+13240, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VDIVPS[] = {
    {I_VDIVPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+26926, 184},
    {I_VDIVPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+26933, 184},
    {I_VDIVPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+26940, 184},
    {I_VDIVPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+26947, 184},
    {I_VDIVPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+13248, 225},
    {I_VDIVPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+13256, 225},
    {I_VDIVPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+13264, 225},
    {I_VDIVPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+13272, 225},
    {I_VDIVPS, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32|ER,0,0}, nasm_bytecodes+13280, 226},
    {I_VDIVPS, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32|ER,0,0,0}, nasm_bytecodes+13288, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VDIVSD[] = {
    {I_VDIVSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+26954, 184},
    {I_VDIVSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+26961, 184},
    {I_VDIVSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, {MASK|Z,0,ER,0,0}, nasm_bytecodes+13296, 226},
    {I_VDIVSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, {MASK|Z,ER,0,0,0}, nasm_bytecodes+13304, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VDIVSS[] = {
    {I_VDIVSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+26968, 184},
    {I_VDIVSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+26975, 184},
    {I_VDIVSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, {MASK|Z,0,ER,0,0}, nasm_bytecodes+13312, 226},
    {I_VDIVSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, {MASK|Z,ER,0,0,0}, nasm_bytecodes+13320, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VDPPD[] = {
    {I_VDPPD, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+8808, 184},
    {I_VDPPD, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+8816, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VDPPS[] = {
    {I_VDPPS, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+8824, 184},
    {I_VDPPS, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+8832, 184},
    {I_VDPPS, 4, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+8840, 184},
    {I_VDPPS, 3, {YMM_L16,RM_YMM_L16|BITS256,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+8848, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VEXTRACTF128[] = {
    {I_VEXTRACTF128, 3, {RM_XMM_L16|BITS128,YMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+8856, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VEXTRACTPS[] = {
    {I_VEXTRACTPS, 3, {RM_GPR|BITS32,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+8864, 184},
    {I_VEXTRACTPS, 3, {REG_GPR|BITS32,XMMREG,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+4479, 226},
    {I_VEXTRACTPS, 3, {REG_GPR|BITS64,XMMREG,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+4479, 226},
    {I_VEXTRACTPS, 3, {MEMORY|BITS32,XMMREG,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+4479, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VHADDPD[] = {
    {I_VHADDPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+26982, 184},
    {I_VHADDPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+26989, 184},
    {I_VHADDPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+26996, 184},
    {I_VHADDPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+27003, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VHADDPS[] = {
    {I_VHADDPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+27010, 184},
    {I_VHADDPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+27017, 184},
    {I_VHADDPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+27024, 184},
    {I_VHADDPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+27031, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VHSUBPD[] = {
    {I_VHSUBPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+27038, 184},
    {I_VHSUBPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+27045, 184},
    {I_VHSUBPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+27052, 184},
    {I_VHSUBPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+27059, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VHSUBPS[] = {
    {I_VHSUBPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+27066, 184},
    {I_VHSUBPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+27073, 184},
    {I_VHSUBPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+27080, 184},
    {I_VHSUBPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+27087, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VINSERTF128[] = {
    {I_VINSERTF128, 4, {YMM_L16,YMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+8872, 184},
    {I_VINSERTF128, 3, {YMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+8880, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VINSERTPS[] = {
    {I_VINSERTPS, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+8888, 184},
    {I_VINSERTPS, 3, {XMM_L16,RM_XMM_L16|BITS32,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+8896, 184},
    {I_VINSERTPS, 4, {XMMREG,XMMREG,RM_XMM|BITS32,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+5172, 226},
    {I_VINSERTPS, 3, {XMMREG,RM_XMM|BITS32,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+5181, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VLDDQU[] = {
    {I_VLDDQU, 2, {XMM_L16,MEMORY|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+27094, 184},
    {I_VLDDQU, 2, {YMM_L16,MEMORY|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+27101, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VLDQQU[] = {
    {I_VLDQQU, 2, {YMM_L16,MEMORY|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+27101, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VLDMXCSR[] = {
    {I_VLDMXCSR, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+27108, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMASKMOVDQU[] = {
    {I_VMASKMOVDQU, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27115, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMASKMOVPS[] = {
    {I_VMASKMOVPS, 3, {XMM_L16,XMM_L16,MEMORY|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+27122, 184},
    {I_VMASKMOVPS, 3, {YMM_L16,YMM_L16,MEMORY|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+27129, 184},
    {I_VMASKMOVPS, 3, {MEMORY|BITS128,XMM_L16,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+27136, 188},
    {I_VMASKMOVPS, 3, {MEMORY|BITS256,YMM_L16,YMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+27143, 189},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMASKMOVPD[] = {
    {I_VMASKMOVPD, 3, {XMM_L16,XMM_L16,MEMORY|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+27150, 184},
    {I_VMASKMOVPD, 3, {YMM_L16,YMM_L16,MEMORY|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+27157, 184},
    {I_VMASKMOVPD, 3, {MEMORY|BITS128,XMM_L16,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+27164, 184},
    {I_VMASKMOVPD, 3, {MEMORY|BITS256,YMM_L16,YMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+27171, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMAXPD[] = {
    {I_VMAXPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+27178, 184},
    {I_VMAXPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+27185, 184},
    {I_VMAXPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+27192, 184},
    {I_VMAXPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+27199, 184},
    {I_VMAXPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+14512, 225},
    {I_VMAXPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+14520, 225},
    {I_VMAXPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+14528, 225},
    {I_VMAXPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+14536, 225},
    {I_VMAXPD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64|SAE,0,0}, nasm_bytecodes+14544, 226},
    {I_VMAXPD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64|SAE,0,0,0}, nasm_bytecodes+14552, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMAXPS[] = {
    {I_VMAXPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+27206, 184},
    {I_VMAXPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+27213, 184},
    {I_VMAXPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+27220, 184},
    {I_VMAXPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+27227, 184},
    {I_VMAXPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+14560, 225},
    {I_VMAXPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+14568, 225},
    {I_VMAXPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+14576, 225},
    {I_VMAXPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+14584, 225},
    {I_VMAXPS, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32|SAE,0,0}, nasm_bytecodes+14592, 226},
    {I_VMAXPS, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32|SAE,0,0,0}, nasm_bytecodes+14600, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMAXSD[] = {
    {I_VMAXSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+27234, 184},
    {I_VMAXSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+27241, 184},
    {I_VMAXSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, {MASK|Z,0,SAE,0,0}, nasm_bytecodes+14608, 226},
    {I_VMAXSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, {MASK|Z,SAE,0,0,0}, nasm_bytecodes+14616, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMAXSS[] = {
    {I_VMAXSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+27248, 184},
    {I_VMAXSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+27255, 184},
    {I_VMAXSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, {MASK|Z,0,SAE,0,0}, nasm_bytecodes+14624, 226},
    {I_VMAXSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, {MASK|Z,SAE,0,0,0}, nasm_bytecodes+14632, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMINPD[] = {
    {I_VMINPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+27262, 184},
    {I_VMINPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+27269, 184},
    {I_VMINPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+27276, 184},
    {I_VMINPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+27283, 184},
    {I_VMINPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+14640, 225},
    {I_VMINPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+14648, 225},
    {I_VMINPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+14656, 225},
    {I_VMINPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+14664, 225},
    {I_VMINPD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64|SAE,0,0}, nasm_bytecodes+14672, 226},
    {I_VMINPD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64|SAE,0,0,0}, nasm_bytecodes+14680, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMINPS[] = {
    {I_VMINPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+27290, 184},
    {I_VMINPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+27297, 184},
    {I_VMINPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+27304, 184},
    {I_VMINPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+27311, 184},
    {I_VMINPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+14688, 225},
    {I_VMINPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+14696, 225},
    {I_VMINPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+14704, 225},
    {I_VMINPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+14712, 225},
    {I_VMINPS, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32|SAE,0,0}, nasm_bytecodes+14720, 226},
    {I_VMINPS, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32|SAE,0,0,0}, nasm_bytecodes+14728, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMINSD[] = {
    {I_VMINSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+27318, 184},
    {I_VMINSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+27325, 184},
    {I_VMINSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, {MASK|Z,0,SAE,0,0}, nasm_bytecodes+14736, 226},
    {I_VMINSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, {MASK|Z,SAE,0,0,0}, nasm_bytecodes+14744, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMINSS[] = {
    {I_VMINSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+27332, 184},
    {I_VMINSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+27339, 184},
    {I_VMINSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, {MASK|Z,0,SAE,0,0}, nasm_bytecodes+14752, 226},
    {I_VMINSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, {MASK|Z,SAE,0,0,0}, nasm_bytecodes+14760, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVAPD[] = {
    {I_VMOVAPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+27346, 184},
    {I_VMOVAPD, 2, {RM_XMM_L16|BITS128,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27353, 184},
    {I_VMOVAPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+27360, 184},
    {I_VMOVAPD, 2, {RM_YMM_L16|BITS256,YMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27367, 184},
    {I_VMOVAPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+14768, 225},
    {I_VMOVAPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+14776, 225},
    {I_VMOVAPD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+14784, 226},
    {I_VMOVAPD, 2, {XMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+14792, 225},
    {I_VMOVAPD, 2, {YMMREG,YMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+14800, 225},
    {I_VMOVAPD, 2, {ZMMREG,ZMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+14808, 226},
    {I_VMOVAPD, 2, {MEMORY|BITS128,XMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+14816, 225},
    {I_VMOVAPD, 2, {MEMORY|BITS256,YMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+14824, 225},
    {I_VMOVAPD, 2, {MEMORY|BITS512,ZMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+14832, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVAPS[] = {
    {I_VMOVAPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+27374, 184},
    {I_VMOVAPS, 2, {RM_XMM_L16|BITS128,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27381, 184},
    {I_VMOVAPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+27388, 184},
    {I_VMOVAPS, 2, {RM_YMM_L16|BITS256,YMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27395, 184},
    {I_VMOVAPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+14840, 225},
    {I_VMOVAPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+14848, 225},
    {I_VMOVAPS, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+14856, 226},
    {I_VMOVAPS, 2, {XMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+14864, 225},
    {I_VMOVAPS, 2, {YMMREG,YMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+14872, 225},
    {I_VMOVAPS, 2, {ZMMREG,ZMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+14880, 226},
    {I_VMOVAPS, 2, {MEMORY|BITS128,XMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+14888, 225},
    {I_VMOVAPS, 2, {MEMORY|BITS256,YMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+14896, 225},
    {I_VMOVAPS, 2, {MEMORY|BITS512,ZMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+14904, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVD[] = {
    {I_VMOVD, 2, {XMM_L16,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+27402, 184},
    {I_VMOVD, 2, {RM_GPR|BITS32,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27409, 184},
    {I_VMOVD, 2, {XMMREG,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+14912, 226},
    {I_VMOVD, 2, {RM_GPR|BITS32,XMMREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+14920, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVQ[] = {
    {I_VMOVQ, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+27416, 193},
    {I_VMOVQ, 2, {RM_XMM_L16|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27423, 193},
    {I_VMOVQ, 2, {XMM_L16,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+27430, 192},
    {I_VMOVQ, 2, {RM_GPR|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27437, 192},
    {I_VMOVQ, 2, {XMMREG,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+15464, 226},
    {I_VMOVQ, 2, {RM_GPR|BITS64,XMMREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+15472, 226},
    {I_VMOVQ, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+15480, 226},
    {I_VMOVQ, 2, {RM_XMM|BITS64,XMMREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+15488, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVDDUP[] = {
    {I_VMOVDDUP, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+27444, 184},
    {I_VMOVDDUP, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+27451, 184},
    {I_VMOVDDUP, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+14928, 225},
    {I_VMOVDDUP, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+14936, 225},
    {I_VMOVDDUP, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+14944, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVDQA[] = {
    {I_VMOVDQA, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+27458, 184},
    {I_VMOVDQA, 2, {RM_XMM_L16|BITS128,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27465, 184},
    {I_VMOVDQA, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+27472, 184},
    {I_VMOVDQA, 2, {RM_YMM_L16|BITS256,YMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27479, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVQQA[] = {
    {I_VMOVQQA, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+27472, 184},
    {I_VMOVQQA, 2, {RM_YMM_L16|BITS256,YMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27479, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVDQU[] = {
    {I_VMOVDQU, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+27486, 184},
    {I_VMOVDQU, 2, {RM_XMM_L16|BITS128,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27493, 184},
    {I_VMOVDQU, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+27500, 184},
    {I_VMOVDQU, 2, {RM_YMM_L16|BITS256,YMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27507, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVQQU[] = {
    {I_VMOVQQU, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+27500, 184},
    {I_VMOVQQU, 2, {RM_YMM_L16|BITS256,YMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27507, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVHLPS[] = {
    {I_VMOVHLPS, 3, {XMM_L16,XMM_L16,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+27514, 184},
    {I_VMOVHLPS, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27521, 184},
    {I_VMOVHLPS, 3, {XMMREG,XMMREG,XMMREG,0,0}, NO_DECORATOR, nasm_bytecodes+15240, 226},
    {I_VMOVHLPS, 2, {XMMREG,XMMREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+15248, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVHPD[] = {
    {I_VMOVHPD, 3, {XMM_L16,XMM_L16,MEMORY|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+27528, 184},
    {I_VMOVHPD, 2, {XMM_L16,MEMORY|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+27535, 184},
    {I_VMOVHPD, 2, {MEMORY|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27542, 184},
    {I_VMOVHPD, 3, {XMMREG,XMMREG,MEMORY|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+15256, 226},
    {I_VMOVHPD, 2, {XMMREG,MEMORY|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+15264, 226},
    {I_VMOVHPD, 2, {MEMORY|BITS64,XMMREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+15272, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVHPS[] = {
    {I_VMOVHPS, 3, {XMM_L16,XMM_L16,MEMORY|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+27549, 184},
    {I_VMOVHPS, 2, {XMM_L16,MEMORY|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+27556, 184},
    {I_VMOVHPS, 2, {MEMORY|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27563, 184},
    {I_VMOVHPS, 3, {XMMREG,XMMREG,MEMORY|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+15280, 226},
    {I_VMOVHPS, 2, {XMMREG,MEMORY|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+15288, 226},
    {I_VMOVHPS, 2, {MEMORY|BITS64,XMMREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+15296, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVLHPS[] = {
    {I_VMOVLHPS, 3, {XMM_L16,XMM_L16,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+27549, 184},
    {I_VMOVLHPS, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27556, 184},
    {I_VMOVLHPS, 3, {XMMREG,XMMREG,XMMREG,0,0}, NO_DECORATOR, nasm_bytecodes+15304, 226},
    {I_VMOVLHPS, 2, {XMMREG,XMMREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+15312, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVLPD[] = {
    {I_VMOVLPD, 3, {XMM_L16,XMM_L16,MEMORY|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+27570, 184},
    {I_VMOVLPD, 2, {XMM_L16,MEMORY|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+27577, 184},
    {I_VMOVLPD, 2, {MEMORY|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27584, 184},
    {I_VMOVLPD, 3, {XMMREG,XMMREG,MEMORY|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+15320, 226},
    {I_VMOVLPD, 2, {XMMREG,MEMORY|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+15328, 226},
    {I_VMOVLPD, 2, {MEMORY|BITS64,XMMREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+15336, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVLPS[] = {
    {I_VMOVLPS, 3, {XMM_L16,XMM_L16,MEMORY|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+27514, 184},
    {I_VMOVLPS, 2, {XMM_L16,MEMORY|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+27521, 184},
    {I_VMOVLPS, 2, {MEMORY|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27591, 184},
    {I_VMOVLPS, 3, {XMMREG,XMMREG,MEMORY|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+15344, 226},
    {I_VMOVLPS, 2, {XMMREG,MEMORY|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+15352, 226},
    {I_VMOVLPS, 2, {MEMORY|BITS64,XMMREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+15360, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVMSKPD[] = {
    {I_VMOVMSKPD, 2, {REG_GPR|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27598, 190},
    {I_VMOVMSKPD, 2, {REG_GPR|BITS32,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27598, 184},
    {I_VMOVMSKPD, 2, {REG_GPR|BITS64,YMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27605, 190},
    {I_VMOVMSKPD, 2, {REG_GPR|BITS32,YMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27605, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVMSKPS[] = {
    {I_VMOVMSKPS, 2, {REG_GPR|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27612, 190},
    {I_VMOVMSKPS, 2, {REG_GPR|BITS32,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27612, 184},
    {I_VMOVMSKPS, 2, {REG_GPR|BITS64,YMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27619, 190},
    {I_VMOVMSKPS, 2, {REG_GPR|BITS32,YMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27619, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVNTDQ[] = {
    {I_VMOVNTDQ, 2, {MEMORY|BITS128,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27626, 184},
    {I_VMOVNTDQ, 2, {MEMORY|BITS256,YMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27633, 184},
    {I_VMOVNTDQ, 2, {MEMORY|BITS128,XMMREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+15368, 225},
    {I_VMOVNTDQ, 2, {MEMORY|BITS256,YMMREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+15376, 225},
    {I_VMOVNTDQ, 2, {MEMORY|BITS512,ZMMREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+15384, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVNTQQ[] = {
    {I_VMOVNTQQ, 2, {MEMORY|BITS256,YMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27633, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVNTDQA[] = {
    {I_VMOVNTDQA, 2, {XMM_L16,MEMORY|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+27640, 184},
    {I_VMOVNTDQA, 2, {YMM_L16,MEMORY|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+32393, 203},
    {I_VMOVNTDQA, 2, {XMMREG,MEMORY|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+15392, 225},
    {I_VMOVNTDQA, 2, {YMMREG,MEMORY|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+15400, 225},
    {I_VMOVNTDQA, 2, {ZMMREG,MEMORY|BITS512,0,0,0}, NO_DECORATOR, nasm_bytecodes+15408, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVNTPD[] = {
    {I_VMOVNTPD, 2, {MEMORY|BITS128,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27647, 184},
    {I_VMOVNTPD, 2, {MEMORY|BITS256,YMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27654, 184},
    {I_VMOVNTPD, 2, {MEMORY|BITS128,XMMREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+15416, 225},
    {I_VMOVNTPD, 2, {MEMORY|BITS256,YMMREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+15424, 225},
    {I_VMOVNTPD, 2, {MEMORY|BITS512,ZMMREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+15432, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVNTPS[] = {
    {I_VMOVNTPS, 2, {MEMORY|BITS128,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27661, 184},
    {I_VMOVNTPS, 2, {MEMORY|BITS256,YMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27668, 184},
    {I_VMOVNTPS, 2, {MEMORY|BITS128,XMMREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+15440, 225},
    {I_VMOVNTPS, 2, {MEMORY|BITS256,YMMREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+15448, 225},
    {I_VMOVNTPS, 2, {MEMORY|BITS512,ZMMREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+15456, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVSD[] = {
    {I_VMOVSD, 3, {XMM_L16,XMM_L16,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+27675, 184},
    {I_VMOVSD, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27682, 184},
    {I_VMOVSD, 2, {XMM_L16,MEMORY|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+27689, 184},
    {I_VMOVSD, 3, {XMM_L16,XMM_L16,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+27696, 184},
    {I_VMOVSD, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27703, 184},
    {I_VMOVSD, 2, {MEMORY|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27710, 184},
    {I_VMOVSD, 2, {XMMREG,MEMORY|BITS64,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15496, 226},
    {I_VMOVSD, 2, {MEMORY|BITS64,XMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+15504, 226},
    {I_VMOVSD, 3, {XMMREG,XMMREG,XMMREG,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15512, 226},
    {I_VMOVSD, 2, {XMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15520, 226},
    {I_VMOVSD, 3, {XMMREG,XMMREG,XMMREG,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15528, 226},
    {I_VMOVSD, 2, {XMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15536, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVSHDUP[] = {
    {I_VMOVSHDUP, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+27717, 184},
    {I_VMOVSHDUP, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+27724, 184},
    {I_VMOVSHDUP, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15544, 225},
    {I_VMOVSHDUP, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15552, 225},
    {I_VMOVSHDUP, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15560, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVSLDUP[] = {
    {I_VMOVSLDUP, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+27731, 184},
    {I_VMOVSLDUP, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+27738, 184},
    {I_VMOVSLDUP, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15568, 225},
    {I_VMOVSLDUP, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15576, 225},
    {I_VMOVSLDUP, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15584, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVSS[] = {
    {I_VMOVSS, 3, {XMM_L16,XMM_L16,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+27745, 184},
    {I_VMOVSS, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27752, 184},
    {I_VMOVSS, 2, {XMM_L16,MEMORY|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+27759, 184},
    {I_VMOVSS, 3, {XMM_L16,XMM_L16,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+27766, 184},
    {I_VMOVSS, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27773, 184},
    {I_VMOVSS, 2, {MEMORY|BITS32,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27780, 184},
    {I_VMOVSS, 2, {XMMREG,MEMORY|BITS32,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15592, 226},
    {I_VMOVSS, 2, {MEMORY|BITS32,XMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+15600, 226},
    {I_VMOVSS, 3, {XMMREG,XMMREG,XMMREG,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15608, 226},
    {I_VMOVSS, 2, {XMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15616, 226},
    {I_VMOVSS, 3, {XMMREG,XMMREG,XMMREG,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15624, 226},
    {I_VMOVSS, 2, {XMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15632, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVUPD[] = {
    {I_VMOVUPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+27787, 184},
    {I_VMOVUPD, 2, {RM_XMM_L16|BITS128,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27794, 184},
    {I_VMOVUPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+27801, 184},
    {I_VMOVUPD, 2, {RM_YMM_L16|BITS256,YMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27808, 184},
    {I_VMOVUPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15640, 225},
    {I_VMOVUPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15648, 225},
    {I_VMOVUPD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15656, 226},
    {I_VMOVUPD, 2, {XMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15664, 225},
    {I_VMOVUPD, 2, {YMMREG,YMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15672, 225},
    {I_VMOVUPD, 2, {ZMMREG,ZMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15680, 226},
    {I_VMOVUPD, 2, {MEMORY|BITS128,XMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+15688, 225},
    {I_VMOVUPD, 2, {MEMORY|BITS256,YMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+15696, 225},
    {I_VMOVUPD, 2, {MEMORY|BITS512,ZMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+15704, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVUPS[] = {
    {I_VMOVUPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+27815, 184},
    {I_VMOVUPS, 2, {RM_XMM_L16|BITS128,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27822, 184},
    {I_VMOVUPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+27829, 184},
    {I_VMOVUPS, 2, {RM_YMM_L16|BITS256,YMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+27836, 184},
    {I_VMOVUPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15712, 225},
    {I_VMOVUPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15720, 225},
    {I_VMOVUPS, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15728, 226},
    {I_VMOVUPS, 2, {XMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15736, 225},
    {I_VMOVUPS, 2, {YMMREG,YMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15744, 225},
    {I_VMOVUPS, 2, {ZMMREG,ZMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15752, 226},
    {I_VMOVUPS, 2, {MEMORY|BITS128,XMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+15760, 225},
    {I_VMOVUPS, 2, {MEMORY|BITS256,YMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+15768, 225},
    {I_VMOVUPS, 2, {MEMORY|BITS512,ZMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+15776, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMPSADBW[] = {
    {I_VMPSADBW, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+8904, 184},
    {I_VMPSADBW, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+8912, 184},
    {I_VMPSADBW, 4, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+11088, 203},
    {I_VMPSADBW, 3, {YMM_L16,RM_YMM_L16|BITS256,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+11096, 203},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMULPD[] = {
    {I_VMULPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+27843, 184},
    {I_VMULPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+27850, 184},
    {I_VMULPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+27857, 184},
    {I_VMULPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+27864, 184},
    {I_VMULPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+15784, 225},
    {I_VMULPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+15792, 225},
    {I_VMULPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+15800, 225},
    {I_VMULPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+15808, 225},
    {I_VMULPD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64|ER,0,0}, nasm_bytecodes+15816, 226},
    {I_VMULPD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64|ER,0,0,0}, nasm_bytecodes+15824, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMULPS[] = {
    {I_VMULPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+27871, 184},
    {I_VMULPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+27878, 184},
    {I_VMULPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+27885, 184},
    {I_VMULPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+27892, 184},
    {I_VMULPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+15832, 225},
    {I_VMULPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+15840, 225},
    {I_VMULPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+15848, 225},
    {I_VMULPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+15856, 225},
    {I_VMULPS, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32|ER,0,0}, nasm_bytecodes+15864, 226},
    {I_VMULPS, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32|ER,0,0,0}, nasm_bytecodes+15872, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMULSD[] = {
    {I_VMULSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+27899, 184},
    {I_VMULSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+27906, 184},
    {I_VMULSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, {MASK|Z,0,ER,0,0}, nasm_bytecodes+15880, 226},
    {I_VMULSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, {MASK|Z,ER,0,0,0}, nasm_bytecodes+15888, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMULSS[] = {
    {I_VMULSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+27913, 184},
    {I_VMULSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+27920, 184},
    {I_VMULSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, {MASK|Z,0,ER,0,0}, nasm_bytecodes+15896, 226},
    {I_VMULSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, {MASK|Z,ER,0,0,0}, nasm_bytecodes+15904, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VORPD[] = {
    {I_VORPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+27927, 184},
    {I_VORPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+27934, 184},
    {I_VORPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+27941, 184},
    {I_VORPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+27948, 184},
    {I_VORPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+15912, 227},
    {I_VORPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+15920, 227},
    {I_VORPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+15928, 227},
    {I_VORPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+15936, 227},
    {I_VORPD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+15944, 228},
    {I_VORPD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+15952, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VORPS[] = {
    {I_VORPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+27955, 184},
    {I_VORPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+27962, 184},
    {I_VORPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+27969, 184},
    {I_VORPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+27976, 184},
    {I_VORPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+15960, 227},
    {I_VORPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+15968, 227},
    {I_VORPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+15976, 227},
    {I_VORPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+15984, 227},
    {I_VORPS, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+15992, 228},
    {I_VORPS, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+16000, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPABSB[] = {
    {I_VPABSB, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+27983, 184},
    {I_VPABSB, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31133, 203},
    {I_VPABSB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16008, 229},
    {I_VPABSB, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16016, 229},
    {I_VPABSB, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16024, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPABSW[] = {
    {I_VPABSW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+27990, 184},
    {I_VPABSW, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31140, 203},
    {I_VPABSW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16080, 229},
    {I_VPABSW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16088, 229},
    {I_VPABSW, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16096, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPABSD[] = {
    {I_VPABSD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+27997, 184},
    {I_VPABSD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31147, 203},
    {I_VPABSD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+16032, 225},
    {I_VPABSD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+16040, 225},
    {I_VPABSD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+16048, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPACKSSWB[] = {
    {I_VPACKSSWB, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28004, 184},
    {I_VPACKSSWB, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28011, 184},
    {I_VPACKSSWB, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31154, 203},
    {I_VPACKSSWB, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31161, 203},
    {I_VPACKSSWB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16152, 229},
    {I_VPACKSSWB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16160, 229},
    {I_VPACKSSWB, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16168, 229},
    {I_VPACKSSWB, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16176, 229},
    {I_VPACKSSWB, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16184, 230},
    {I_VPACKSSWB, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16192, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPACKSSDW[] = {
    {I_VPACKSSDW, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28018, 184},
    {I_VPACKSSDW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28025, 184},
    {I_VPACKSSDW, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31168, 203},
    {I_VPACKSSDW, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31175, 203},
    {I_VPACKSSDW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+16104, 229},
    {I_VPACKSSDW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+16112, 229},
    {I_VPACKSSDW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+16120, 229},
    {I_VPACKSSDW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+16128, 229},
    {I_VPACKSSDW, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+16136, 230},
    {I_VPACKSSDW, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+16144, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPACKUSWB[] = {
    {I_VPACKUSWB, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28032, 184},
    {I_VPACKUSWB, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28039, 184},
    {I_VPACKUSWB, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31196, 203},
    {I_VPACKUSWB, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31203, 203},
    {I_VPACKUSWB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16248, 229},
    {I_VPACKUSWB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16256, 229},
    {I_VPACKUSWB, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16264, 229},
    {I_VPACKUSWB, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16272, 229},
    {I_VPACKUSWB, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16280, 230},
    {I_VPACKUSWB, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16288, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPACKUSDW[] = {
    {I_VPACKUSDW, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28046, 184},
    {I_VPACKUSDW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28053, 184},
    {I_VPACKUSDW, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31182, 203},
    {I_VPACKUSDW, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31189, 203},
    {I_VPACKUSDW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+16200, 229},
    {I_VPACKUSDW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+16208, 229},
    {I_VPACKUSDW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+16216, 229},
    {I_VPACKUSDW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+16224, 229},
    {I_VPACKUSDW, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+16232, 230},
    {I_VPACKUSDW, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+16240, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPADDB[] = {
    {I_VPADDB, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28060, 184},
    {I_VPADDB, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28067, 184},
    {I_VPADDB, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31210, 203},
    {I_VPADDB, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31217, 203},
    {I_VPADDB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16296, 229},
    {I_VPADDB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16304, 229},
    {I_VPADDB, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16312, 229},
    {I_VPADDB, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16320, 229},
    {I_VPADDB, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16328, 230},
    {I_VPADDB, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16336, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPADDW[] = {
    {I_VPADDW, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28074, 184},
    {I_VPADDW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28081, 184},
    {I_VPADDW, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31224, 203},
    {I_VPADDW, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31231, 203},
    {I_VPADDW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16632, 229},
    {I_VPADDW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16640, 229},
    {I_VPADDW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16648, 229},
    {I_VPADDW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16656, 229},
    {I_VPADDW, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16664, 230},
    {I_VPADDW, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16672, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPADDD[] = {
    {I_VPADDD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28088, 184},
    {I_VPADDD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28095, 184},
    {I_VPADDD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31238, 203},
    {I_VPADDD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31245, 203},
    {I_VPADDD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+16344, 225},
    {I_VPADDD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+16352, 225},
    {I_VPADDD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+16360, 225},
    {I_VPADDD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+16368, 225},
    {I_VPADDD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+16376, 226},
    {I_VPADDD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+16384, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPADDQ[] = {
    {I_VPADDQ, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28102, 184},
    {I_VPADDQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28109, 184},
    {I_VPADDQ, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31252, 203},
    {I_VPADDQ, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31259, 203},
    {I_VPADDQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+16392, 225},
    {I_VPADDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+16400, 225},
    {I_VPADDQ, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+16408, 225},
    {I_VPADDQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+16416, 225},
    {I_VPADDQ, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+16424, 226},
    {I_VPADDQ, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+16432, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPADDSB[] = {
    {I_VPADDSB, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28116, 184},
    {I_VPADDSB, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28123, 184},
    {I_VPADDSB, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31266, 203},
    {I_VPADDSB, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31273, 203},
    {I_VPADDSB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16440, 229},
    {I_VPADDSB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16448, 229},
    {I_VPADDSB, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16456, 229},
    {I_VPADDSB, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16464, 229},
    {I_VPADDSB, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16472, 230},
    {I_VPADDSB, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16480, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPADDSW[] = {
    {I_VPADDSW, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28130, 184},
    {I_VPADDSW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28137, 184},
    {I_VPADDSW, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31280, 203},
    {I_VPADDSW, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31287, 203},
    {I_VPADDSW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16488, 229},
    {I_VPADDSW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16496, 229},
    {I_VPADDSW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16504, 229},
    {I_VPADDSW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16512, 229},
    {I_VPADDSW, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16520, 230},
    {I_VPADDSW, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16528, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPADDUSB[] = {
    {I_VPADDUSB, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28144, 184},
    {I_VPADDUSB, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28151, 184},
    {I_VPADDUSB, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31294, 203},
    {I_VPADDUSB, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31301, 203},
    {I_VPADDUSB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16536, 229},
    {I_VPADDUSB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16544, 229},
    {I_VPADDUSB, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16552, 229},
    {I_VPADDUSB, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16560, 229},
    {I_VPADDUSB, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16568, 230},
    {I_VPADDUSB, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16576, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPADDUSW[] = {
    {I_VPADDUSW, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28158, 184},
    {I_VPADDUSW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28165, 184},
    {I_VPADDUSW, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31308, 203},
    {I_VPADDUSW, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31315, 203},
    {I_VPADDUSW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16584, 229},
    {I_VPADDUSW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16592, 229},
    {I_VPADDUSW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16600, 229},
    {I_VPADDUSW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16608, 229},
    {I_VPADDUSW, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16616, 230},
    {I_VPADDUSW, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16624, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPALIGNR[] = {
    {I_VPALIGNR, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+8920, 184},
    {I_VPALIGNR, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+8928, 184},
    {I_VPALIGNR, 4, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+11104, 203},
    {I_VPALIGNR, 3, {YMM_L16,RM_YMM_L16|BITS256,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+11112, 203},
    {I_VPALIGNR, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+5190, 229},
    {I_VPALIGNR, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+5199, 229},
    {I_VPALIGNR, 4, {YMMREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+5208, 229},
    {I_VPALIGNR, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+5217, 229},
    {I_VPALIGNR, 4, {ZMMREG,ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+5226, 230},
    {I_VPALIGNR, 3, {ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+5235, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPAND[] = {
    {I_VPAND, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28172, 184},
    {I_VPAND, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28179, 184},
    {I_VPAND, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31322, 203},
    {I_VPAND, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31329, 203},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPANDN[] = {
    {I_VPANDN, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28186, 184},
    {I_VPANDN, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28193, 184},
    {I_VPANDN, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31336, 203},
    {I_VPANDN, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31343, 203},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPAVGB[] = {
    {I_VPAVGB, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28200, 184},
    {I_VPAVGB, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28207, 184},
    {I_VPAVGB, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31350, 203},
    {I_VPAVGB, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31357, 203},
    {I_VPAVGB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16872, 229},
    {I_VPAVGB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16880, 229},
    {I_VPAVGB, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16888, 229},
    {I_VPAVGB, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16896, 229},
    {I_VPAVGB, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16904, 230},
    {I_VPAVGB, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16912, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPAVGW[] = {
    {I_VPAVGW, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28214, 184},
    {I_VPAVGW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28221, 184},
    {I_VPAVGW, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31364, 203},
    {I_VPAVGW, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31371, 203},
    {I_VPAVGW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16920, 229},
    {I_VPAVGW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16928, 229},
    {I_VPAVGW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16936, 229},
    {I_VPAVGW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16944, 229},
    {I_VPAVGW, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16952, 230},
    {I_VPAVGW, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16960, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPBLENDVB[] = {
    {I_VPBLENDVB, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0}, NO_DECORATOR, nasm_bytecodes+8936, 184},
    {I_VPBLENDVB, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+8944, 184},
    {I_VPBLENDVB, 4, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,YMM_L16,0}, NO_DECORATOR, nasm_bytecodes+11120, 203},
    {I_VPBLENDVB, 3, {YMM_L16,RM_YMM_L16|BITS256,YMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+11128, 203},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPBLENDW[] = {
    {I_VPBLENDW, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+8952, 184},
    {I_VPBLENDW, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+8960, 184},
    {I_VPBLENDW, 4, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+11136, 203},
    {I_VPBLENDW, 3, {YMM_L16,RM_YMM_L16|BITS256,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+11144, 203},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPESTRI[] = {
    {I_VPCMPESTRI, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+8968, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPESTRM[] = {
    {I_VPCMPESTRM, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+8976, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPISTRI[] = {
    {I_VPCMPISTRI, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+8984, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPISTRM[] = {
    {I_VPCMPISTRM, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+8992, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPEQB[] = {
    {I_VPCMPEQB, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28228, 184},
    {I_VPCMPEQB, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28235, 184},
    {I_VPCMPEQB, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31378, 203},
    {I_VPCMPEQB, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31385, 203},
    {I_VPCMPEQB, 3, {KREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+17352, 229},
    {I_VPCMPEQB, 3, {KREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+17360, 229},
    {I_VPCMPEQB, 3, {KREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+17368, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPEQW[] = {
    {I_VPCMPEQW, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28242, 184},
    {I_VPCMPEQW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28249, 184},
    {I_VPCMPEQW, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31392, 203},
    {I_VPCMPEQW, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31399, 203},
    {I_VPCMPEQW, 3, {KREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+17424, 229},
    {I_VPCMPEQW, 3, {KREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+17432, 229},
    {I_VPCMPEQW, 3, {KREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+17440, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPEQD[] = {
    {I_VPCMPEQD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28256, 184},
    {I_VPCMPEQD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28263, 184},
    {I_VPCMPEQD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31406, 203},
    {I_VPCMPEQD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31413, 203},
    {I_VPCMPEQD, 3, {KREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK,0,B32,0,0}, nasm_bytecodes+17376, 225},
    {I_VPCMPEQD, 3, {KREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK,0,B32,0,0}, nasm_bytecodes+17384, 225},
    {I_VPCMPEQD, 3, {KREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK,0,B32,0,0}, nasm_bytecodes+17392, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPEQQ[] = {
    {I_VPCMPEQQ, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28270, 184},
    {I_VPCMPEQQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28277, 184},
    {I_VPCMPEQQ, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31420, 203},
    {I_VPCMPEQQ, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31427, 203},
    {I_VPCMPEQQ, 3, {KREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK,0,B64,0,0}, nasm_bytecodes+17400, 225},
    {I_VPCMPEQQ, 3, {KREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK,0,B64,0,0}, nasm_bytecodes+17408, 225},
    {I_VPCMPEQQ, 3, {KREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK,0,B64,0,0}, nasm_bytecodes+17416, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPGTB[] = {
    {I_VPCMPGTB, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28284, 184},
    {I_VPCMPGTB, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28291, 184},
    {I_VPCMPGTB, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31434, 203},
    {I_VPCMPGTB, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31441, 203},
    {I_VPCMPGTB, 3, {KREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+17448, 229},
    {I_VPCMPGTB, 3, {KREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+17456, 229},
    {I_VPCMPGTB, 3, {KREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+17464, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPGTW[] = {
    {I_VPCMPGTW, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28298, 184},
    {I_VPCMPGTW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28305, 184},
    {I_VPCMPGTW, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31448, 203},
    {I_VPCMPGTW, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31455, 203},
    {I_VPCMPGTW, 3, {KREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+17520, 229},
    {I_VPCMPGTW, 3, {KREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+17528, 229},
    {I_VPCMPGTW, 3, {KREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+17536, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPGTD[] = {
    {I_VPCMPGTD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28312, 184},
    {I_VPCMPGTD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28319, 184},
    {I_VPCMPGTD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31462, 203},
    {I_VPCMPGTD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31469, 203},
    {I_VPCMPGTD, 3, {KREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK,0,B32,0,0}, nasm_bytecodes+17472, 225},
    {I_VPCMPGTD, 3, {KREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK,0,B32,0,0}, nasm_bytecodes+17480, 225},
    {I_VPCMPGTD, 3, {KREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK,0,B32,0,0}, nasm_bytecodes+17488, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPGTQ[] = {
    {I_VPCMPGTQ, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28326, 184},
    {I_VPCMPGTQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28333, 184},
    {I_VPCMPGTQ, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31476, 203},
    {I_VPCMPGTQ, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31483, 203},
    {I_VPCMPGTQ, 3, {KREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK,0,B64,0,0}, nasm_bytecodes+17496, 225},
    {I_VPCMPGTQ, 3, {KREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK,0,B64,0,0}, nasm_bytecodes+17504, 225},
    {I_VPCMPGTQ, 3, {KREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK,0,B64,0,0}, nasm_bytecodes+17512, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPERMILPD[] = {
    {I_VPERMILPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28340, 184},
    {I_VPERMILPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28347, 184},
    {I_VPERMILPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+28354, 184},
    {I_VPERMILPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+28361, 184},
    {I_VPERMILPD, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9000, 184},
    {I_VPERMILPD, 3, {YMM_L16,RM_YMM_L16|BITS256,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9008, 184},
    {I_VPERMILPD, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+5460, 225},
    {I_VPERMILPD, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+5469, 225},
    {I_VPERMILPD, 3, {ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+5478, 226},
    {I_VPERMILPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+17912, 225},
    {I_VPERMILPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+17920, 225},
    {I_VPERMILPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+17928, 225},
    {I_VPERMILPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+17936, 225},
    {I_VPERMILPD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+17944, 226},
    {I_VPERMILPD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+17952, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPERMILPS[] = {
    {I_VPERMILPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28368, 184},
    {I_VPERMILPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28375, 184},
    {I_VPERMILPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+28382, 184},
    {I_VPERMILPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+28389, 184},
    {I_VPERMILPS, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9016, 184},
    {I_VPERMILPS, 3, {YMM_L16,RM_YMM_L16|BITS256,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9024, 184},
    {I_VPERMILPS, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+5487, 225},
    {I_VPERMILPS, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+5496, 225},
    {I_VPERMILPS, 3, {ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+5505, 226},
    {I_VPERMILPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+17960, 225},
    {I_VPERMILPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+17968, 225},
    {I_VPERMILPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+17976, 225},
    {I_VPERMILPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+17984, 225},
    {I_VPERMILPS, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+17992, 226},
    {I_VPERMILPS, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+18000, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPERM2F128[] = {
    {I_VPERM2F128, 4, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+9032, 184},
    {I_VPERM2F128, 3, {YMM_L16,RM_YMM_L16|BITS256,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9040, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPEXTRB[] = {
    {I_VPEXTRB, 3, {REG_GPR|BITS64,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9048, 190},
    {I_VPEXTRB, 3, {REG_GPR|BITS32,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9048, 184},
    {I_VPEXTRB, 3, {MEMORY|BITS8,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9048, 184},
    {I_VPEXTRB, 3, {REG_GPR|BITS8,XMMREG,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+5550, 230},
    {I_VPEXTRB, 3, {REG_GPR|BITS16,XMMREG,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+5550, 230},
    {I_VPEXTRB, 3, {REG_GPR|BITS32,XMMREG,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+5550, 230},
    {I_VPEXTRB, 3, {REG_GPR|BITS64,XMMREG,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+5550, 230},
    {I_VPEXTRB, 3, {MEMORY|BITS8,XMMREG,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+5550, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPEXTRW[] = {
    {I_VPEXTRW, 3, {REG_GPR|BITS64,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9056, 190},
    {I_VPEXTRW, 3, {REG_GPR|BITS32,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9056, 184},
    {I_VPEXTRW, 3, {REG_GPR|BITS64,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9064, 190},
    {I_VPEXTRW, 3, {REG_GPR|BITS32,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9064, 184},
    {I_VPEXTRW, 3, {MEMORY|BITS16,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9064, 184},
    {I_VPEXTRW, 3, {REG_GPR|BITS16,XMMREG,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+5577, 230},
    {I_VPEXTRW, 3, {REG_GPR|BITS32,XMMREG,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+5577, 230},
    {I_VPEXTRW, 3, {REG_GPR|BITS64,XMMREG,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+5577, 230},
    {I_VPEXTRW, 3, {MEMORY|BITS16,XMMREG,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+5577, 230},
    {I_VPEXTRW, 3, {REG_GPR|BITS16,XMMREG,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+5586, 230},
    {I_VPEXTRW, 3, {REG_GPR|BITS32,XMMREG,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+5586, 230},
    {I_VPEXTRW, 3, {REG_GPR|BITS64,XMMREG,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+5586, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPEXTRD[] = {
    {I_VPEXTRD, 3, {REG_GPR|BITS64,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9072, 190},
    {I_VPEXTRD, 3, {RM_GPR|BITS32,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9072, 184},
    {I_VPEXTRD, 3, {RM_GPR|BITS32,XMMREG,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+5559, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPEXTRQ[] = {
    {I_VPEXTRQ, 3, {RM_GPR|BITS64,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9080, 190},
    {I_VPEXTRQ, 3, {RM_GPR|BITS64,XMMREG,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+5568, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDW[] = {
    {I_VPHADDW, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28396, 184},
    {I_VPHADDW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28403, 184},
    {I_VPHADDW, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31490, 203},
    {I_VPHADDW, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31497, 203},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDD[] = {
    {I_VPHADDD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28410, 184},
    {I_VPHADDD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28417, 184},
    {I_VPHADDD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31504, 203},
    {I_VPHADDD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31511, 203},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDSW[] = {
    {I_VPHADDSW, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28424, 184},
    {I_VPHADDSW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28431, 184},
    {I_VPHADDSW, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31518, 203},
    {I_VPHADDSW, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31525, 203},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHMINPOSUW[] = {
    {I_VPHMINPOSUW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28438, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHSUBW[] = {
    {I_VPHSUBW, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28445, 184},
    {I_VPHSUBW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28452, 184},
    {I_VPHSUBW, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31532, 203},
    {I_VPHSUBW, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31539, 203},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHSUBD[] = {
    {I_VPHSUBD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28459, 184},
    {I_VPHSUBD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28466, 184},
    {I_VPHSUBD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31546, 203},
    {I_VPHSUBD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31553, 203},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHSUBSW[] = {
    {I_VPHSUBSW, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28473, 184},
    {I_VPHSUBSW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28480, 184},
    {I_VPHSUBSW, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31560, 203},
    {I_VPHSUBSW, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31567, 203},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPINSRB[] = {
    {I_VPINSRB, 4, {XMM_L16,XMM_L16,MEMORY|BITS8,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+9088, 184},
    {I_VPINSRB, 3, {XMM_L16,MEMORY|BITS8,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9096, 184},
    {I_VPINSRB, 4, {XMM_L16,XMM_L16,RM_GPR|BITS8,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+9088, 184},
    {I_VPINSRB, 3, {XMM_L16,RM_GPR|BITS8,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9096, 184},
    {I_VPINSRB, 4, {XMM_L16,XMM_L16,REG_GPR|BITS32,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+9088, 184},
    {I_VPINSRB, 3, {XMM_L16,REG_GPR|BITS32,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9096, 184},
    {I_VPINSRB, 4, {XMMREG,XMMREG,REG_GPR|BITS32,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+5703, 230},
    {I_VPINSRB, 3, {XMMREG,REG_GPR|BITS32,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+5712, 230},
    {I_VPINSRB, 4, {XMMREG,XMMREG,MEMORY|BITS8,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+5703, 230},
    {I_VPINSRB, 3, {XMMREG,MEMORY|BITS8,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+5712, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPINSRW[] = {
    {I_VPINSRW, 4, {XMM_L16,XMM_L16,MEMORY|BITS16,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+9104, 184},
    {I_VPINSRW, 3, {XMM_L16,MEMORY|BITS16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9112, 184},
    {I_VPINSRW, 4, {XMM_L16,XMM_L16,RM_GPR|BITS16,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+9104, 184},
    {I_VPINSRW, 3, {XMM_L16,RM_GPR|BITS16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9112, 184},
    {I_VPINSRW, 4, {XMM_L16,XMM_L16,REG_GPR|BITS32,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+9104, 184},
    {I_VPINSRW, 3, {XMM_L16,REG_GPR|BITS32,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9112, 184},
    {I_VPINSRW, 4, {XMMREG,XMMREG,REG_GPR|BITS32,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+5757, 230},
    {I_VPINSRW, 3, {XMMREG,REG_GPR|BITS32,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+5766, 230},
    {I_VPINSRW, 4, {XMMREG,XMMREG,MEMORY|BITS16,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+5757, 230},
    {I_VPINSRW, 3, {XMMREG,MEMORY|BITS16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+5766, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPINSRD[] = {
    {I_VPINSRD, 4, {XMM_L16,XMM_L16,MEMORY|BITS32,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+9120, 184},
    {I_VPINSRD, 3, {XMM_L16,MEMORY|BITS32,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9128, 184},
    {I_VPINSRD, 4, {XMM_L16,XMM_L16,RM_GPR|BITS32,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+9120, 184},
    {I_VPINSRD, 3, {XMM_L16,RM_GPR|BITS32,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9128, 184},
    {I_VPINSRD, 4, {XMMREG,XMMREG,RM_GPR|BITS32,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+5721, 228},
    {I_VPINSRD, 3, {XMMREG,RM_GPR|BITS32,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+5730, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPINSRQ[] = {
    {I_VPINSRQ, 4, {XMM_L16,XMM_L16,MEMORY|BITS64,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+9136, 190},
    {I_VPINSRQ, 3, {XMM_L16,MEMORY|BITS64,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9144, 190},
    {I_VPINSRQ, 4, {XMM_L16,XMM_L16,RM_GPR|BITS64,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+9136, 190},
    {I_VPINSRQ, 3, {XMM_L16,RM_GPR|BITS64,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9144, 190},
    {I_VPINSRQ, 4, {XMMREG,XMMREG,RM_GPR|BITS64,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+5739, 228},
    {I_VPINSRQ, 3, {XMMREG,RM_GPR|BITS64,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+5748, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMADDWD[] = {
    {I_VPMADDWD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28487, 184},
    {I_VPMADDWD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28494, 184},
    {I_VPMADDWD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31588, 203},
    {I_VPMADDWD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31595, 203},
    {I_VPMADDWD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18488, 229},
    {I_VPMADDWD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18496, 229},
    {I_VPMADDWD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18504, 229},
    {I_VPMADDWD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18512, 229},
    {I_VPMADDWD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18520, 230},
    {I_VPMADDWD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18528, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMADDUBSW[] = {
    {I_VPMADDUBSW, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28501, 184},
    {I_VPMADDUBSW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28508, 184},
    {I_VPMADDUBSW, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31574, 203},
    {I_VPMADDUBSW, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31581, 203},
    {I_VPMADDUBSW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18440, 229},
    {I_VPMADDUBSW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18448, 229},
    {I_VPMADDUBSW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18456, 229},
    {I_VPMADDUBSW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18464, 229},
    {I_VPMADDUBSW, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18472, 230},
    {I_VPMADDUBSW, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18480, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMAXSB[] = {
    {I_VPMAXSB, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28515, 184},
    {I_VPMAXSB, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28522, 184},
    {I_VPMAXSB, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31602, 203},
    {I_VPMAXSB, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31609, 203},
    {I_VPMAXSB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18536, 229},
    {I_VPMAXSB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18544, 229},
    {I_VPMAXSB, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18552, 229},
    {I_VPMAXSB, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18560, 229},
    {I_VPMAXSB, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18568, 230},
    {I_VPMAXSB, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18576, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMAXSW[] = {
    {I_VPMAXSW, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28529, 184},
    {I_VPMAXSW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28536, 184},
    {I_VPMAXSW, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31616, 203},
    {I_VPMAXSW, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31623, 203},
    {I_VPMAXSW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18680, 229},
    {I_VPMAXSW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18688, 229},
    {I_VPMAXSW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18696, 229},
    {I_VPMAXSW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18704, 229},
    {I_VPMAXSW, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18712, 230},
    {I_VPMAXSW, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18720, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMAXSD[] = {
    {I_VPMAXSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28543, 184},
    {I_VPMAXSD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28550, 184},
    {I_VPMAXSD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31630, 203},
    {I_VPMAXSD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31637, 203},
    {I_VPMAXSD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+18584, 225},
    {I_VPMAXSD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+18592, 225},
    {I_VPMAXSD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+18600, 225},
    {I_VPMAXSD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+18608, 225},
    {I_VPMAXSD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+18616, 226},
    {I_VPMAXSD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+18624, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMAXUB[] = {
    {I_VPMAXUB, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28557, 184},
    {I_VPMAXUB, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28564, 184},
    {I_VPMAXUB, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31644, 203},
    {I_VPMAXUB, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31651, 203},
    {I_VPMAXUB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18728, 229},
    {I_VPMAXUB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18736, 229},
    {I_VPMAXUB, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18744, 229},
    {I_VPMAXUB, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18752, 229},
    {I_VPMAXUB, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18760, 230},
    {I_VPMAXUB, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18768, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMAXUW[] = {
    {I_VPMAXUW, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28571, 184},
    {I_VPMAXUW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28578, 184},
    {I_VPMAXUW, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31658, 203},
    {I_VPMAXUW, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31665, 203},
    {I_VPMAXUW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18872, 229},
    {I_VPMAXUW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18880, 229},
    {I_VPMAXUW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18888, 229},
    {I_VPMAXUW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18896, 229},
    {I_VPMAXUW, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18904, 230},
    {I_VPMAXUW, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18912, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMAXUD[] = {
    {I_VPMAXUD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28585, 184},
    {I_VPMAXUD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28592, 184},
    {I_VPMAXUD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31672, 203},
    {I_VPMAXUD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31679, 203},
    {I_VPMAXUD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+18776, 225},
    {I_VPMAXUD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+18784, 225},
    {I_VPMAXUD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+18792, 225},
    {I_VPMAXUD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+18800, 225},
    {I_VPMAXUD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+18808, 226},
    {I_VPMAXUD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+18816, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMINSB[] = {
    {I_VPMINSB, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28599, 184},
    {I_VPMINSB, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28606, 184},
    {I_VPMINSB, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31686, 203},
    {I_VPMINSB, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31693, 203},
    {I_VPMINSB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18920, 229},
    {I_VPMINSB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18928, 229},
    {I_VPMINSB, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18936, 229},
    {I_VPMINSB, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18944, 229},
    {I_VPMINSB, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18952, 230},
    {I_VPMINSB, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18960, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMINSW[] = {
    {I_VPMINSW, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28613, 184},
    {I_VPMINSW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28620, 184},
    {I_VPMINSW, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31700, 203},
    {I_VPMINSW, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31707, 203},
    {I_VPMINSW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19064, 229},
    {I_VPMINSW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19072, 229},
    {I_VPMINSW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19080, 229},
    {I_VPMINSW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19088, 229},
    {I_VPMINSW, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19096, 230},
    {I_VPMINSW, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19104, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMINSD[] = {
    {I_VPMINSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28627, 184},
    {I_VPMINSD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28634, 184},
    {I_VPMINSD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31714, 203},
    {I_VPMINSD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31721, 203},
    {I_VPMINSD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+18968, 225},
    {I_VPMINSD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+18976, 225},
    {I_VPMINSD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+18984, 225},
    {I_VPMINSD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+18992, 225},
    {I_VPMINSD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+19000, 226},
    {I_VPMINSD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+19008, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMINUB[] = {
    {I_VPMINUB, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28641, 184},
    {I_VPMINUB, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28648, 184},
    {I_VPMINUB, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31728, 203},
    {I_VPMINUB, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31735, 203},
    {I_VPMINUB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19112, 229},
    {I_VPMINUB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19120, 229},
    {I_VPMINUB, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19128, 229},
    {I_VPMINUB, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19136, 229},
    {I_VPMINUB, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19144, 230},
    {I_VPMINUB, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19152, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMINUW[] = {
    {I_VPMINUW, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28655, 184},
    {I_VPMINUW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28662, 184},
    {I_VPMINUW, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31742, 203},
    {I_VPMINUW, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31749, 203},
    {I_VPMINUW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19256, 229},
    {I_VPMINUW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19264, 229},
    {I_VPMINUW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19272, 229},
    {I_VPMINUW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19280, 229},
    {I_VPMINUW, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19288, 230},
    {I_VPMINUW, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19296, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMINUD[] = {
    {I_VPMINUD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28669, 184},
    {I_VPMINUD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28676, 184},
    {I_VPMINUD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31756, 203},
    {I_VPMINUD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31763, 203},
    {I_VPMINUD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+19160, 225},
    {I_VPMINUD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+19168, 225},
    {I_VPMINUD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+19176, 225},
    {I_VPMINUD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+19184, 225},
    {I_VPMINUD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+19192, 226},
    {I_VPMINUD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+19200, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVMSKB[] = {
    {I_VPMOVMSKB, 2, {REG_GPR|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+28683, 190},
    {I_VPMOVMSKB, 2, {REG_GPR|BITS32,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+28683, 184},
    {I_VPMOVMSKB, 2, {REG_GPR|BITS32,YMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+31770, 203},
    {I_VPMOVMSKB, 2, {REG_GPR|BITS64,YMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+31770, 203},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVSXBW[] = {
    {I_VPMOVSXBW, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+28690, 184},
    {I_VPMOVSXBW, 2, {YMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+31777, 203},
    {I_VPMOVSXBW, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20048, 229},
    {I_VPMOVSXBW, 2, {YMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20056, 229},
    {I_VPMOVSXBW, 2, {ZMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20064, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVSXBD[] = {
    {I_VPMOVSXBD, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+28697, 184},
    {I_VPMOVSXBD, 2, {YMM_L16,MEMORY|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+31784, 203},
    {I_VPMOVSXBD, 2, {YMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+31784, 203},
    {I_VPMOVSXBD, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20000, 225},
    {I_VPMOVSXBD, 2, {YMMREG,RM_XMM|BITS64,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20008, 225},
    {I_VPMOVSXBD, 2, {ZMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20016, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVSXBQ[] = {
    {I_VPMOVSXBQ, 2, {XMM_L16,RM_XMM_L16|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+28704, 184},
    {I_VPMOVSXBQ, 2, {YMM_L16,MEMORY|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+31791, 203},
    {I_VPMOVSXBQ, 2, {YMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+31791, 203},
    {I_VPMOVSXBQ, 2, {XMMREG,RM_XMM|BITS16,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20024, 225},
    {I_VPMOVSXBQ, 2, {YMMREG,RM_XMM|BITS32,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20032, 225},
    {I_VPMOVSXBQ, 2, {ZMMREG,RM_XMM|BITS64,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20040, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVSXWD[] = {
    {I_VPMOVSXWD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+28711, 184},
    {I_VPMOVSXWD, 2, {YMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+31798, 203},
    {I_VPMOVSXWD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20096, 225},
    {I_VPMOVSXWD, 2, {YMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20104, 225},
    {I_VPMOVSXWD, 2, {ZMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20112, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVSXWQ[] = {
    {I_VPMOVSXWQ, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+28718, 184},
    {I_VPMOVSXWQ, 2, {YMM_L16,MEMORY|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+31805, 203},
    {I_VPMOVSXWQ, 2, {YMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+31805, 203},
    {I_VPMOVSXWQ, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20120, 225},
    {I_VPMOVSXWQ, 2, {YMMREG,RM_XMM|BITS64,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20128, 225},
    {I_VPMOVSXWQ, 2, {ZMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20136, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVSXDQ[] = {
    {I_VPMOVSXDQ, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+28725, 184},
    {I_VPMOVSXDQ, 2, {YMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+31812, 203},
    {I_VPMOVSXDQ, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20072, 225},
    {I_VPMOVSXDQ, 2, {YMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20080, 225},
    {I_VPMOVSXDQ, 2, {ZMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20088, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVZXBW[] = {
    {I_VPMOVZXBW, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+28732, 184},
    {I_VPMOVZXBW, 2, {YMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+31819, 203},
    {I_VPMOVZXBW, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20552, 229},
    {I_VPMOVZXBW, 2, {YMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20560, 229},
    {I_VPMOVZXBW, 2, {ZMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20568, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVZXBD[] = {
    {I_VPMOVZXBD, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+28739, 184},
    {I_VPMOVZXBD, 2, {YMM_L16,MEMORY|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+31826, 203},
    {I_VPMOVZXBD, 2, {YMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+31826, 203},
    {I_VPMOVZXBD, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20504, 225},
    {I_VPMOVZXBD, 2, {YMMREG,RM_XMM|BITS64,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20512, 225},
    {I_VPMOVZXBD, 2, {ZMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20520, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVZXBQ[] = {
    {I_VPMOVZXBQ, 2, {XMM_L16,RM_XMM_L16|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+28746, 184},
    {I_VPMOVZXBQ, 2, {YMM_L16,MEMORY|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+31833, 203},
    {I_VPMOVZXBQ, 2, {YMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+31833, 203},
    {I_VPMOVZXBQ, 2, {XMMREG,RM_XMM|BITS16,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20528, 225},
    {I_VPMOVZXBQ, 2, {YMMREG,RM_XMM|BITS32,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20536, 225},
    {I_VPMOVZXBQ, 2, {ZMMREG,RM_XMM|BITS64,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20544, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVZXWD[] = {
    {I_VPMOVZXWD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+28753, 184},
    {I_VPMOVZXWD, 2, {YMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+31840, 203},
    {I_VPMOVZXWD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20600, 225},
    {I_VPMOVZXWD, 2, {YMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20608, 225},
    {I_VPMOVZXWD, 2, {ZMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20616, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVZXWQ[] = {
    {I_VPMOVZXWQ, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+28760, 184},
    {I_VPMOVZXWQ, 2, {YMM_L16,MEMORY|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+31847, 203},
    {I_VPMOVZXWQ, 2, {YMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+31847, 203},
    {I_VPMOVZXWQ, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20624, 225},
    {I_VPMOVZXWQ, 2, {YMMREG,RM_XMM|BITS64,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20632, 225},
    {I_VPMOVZXWQ, 2, {ZMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20640, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVZXDQ[] = {
    {I_VPMOVZXDQ, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+28767, 184},
    {I_VPMOVZXDQ, 2, {YMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+31854, 203},
    {I_VPMOVZXDQ, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20576, 225},
    {I_VPMOVZXDQ, 2, {YMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20584, 225},
    {I_VPMOVZXDQ, 2, {ZMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20592, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMULHUW[] = {
    {I_VPMULHUW, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28774, 184},
    {I_VPMULHUW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28781, 184},
    {I_VPMULHUW, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31889, 203},
    {I_VPMULHUW, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31896, 203},
    {I_VPMULHUW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20744, 229},
    {I_VPMULHUW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20752, 229},
    {I_VPMULHUW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20760, 229},
    {I_VPMULHUW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20768, 229},
    {I_VPMULHUW, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20776, 230},
    {I_VPMULHUW, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20784, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMULHRSW[] = {
    {I_VPMULHRSW, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28788, 184},
    {I_VPMULHRSW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28795, 184},
    {I_VPMULHRSW, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31875, 203},
    {I_VPMULHRSW, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31882, 203},
    {I_VPMULHRSW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20696, 229},
    {I_VPMULHRSW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20704, 229},
    {I_VPMULHRSW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20712, 229},
    {I_VPMULHRSW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20720, 229},
    {I_VPMULHRSW, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20728, 230},
    {I_VPMULHRSW, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20736, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMULHW[] = {
    {I_VPMULHW, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28802, 184},
    {I_VPMULHW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28809, 184},
    {I_VPMULHW, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31903, 203},
    {I_VPMULHW, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31910, 203},
    {I_VPMULHW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20792, 229},
    {I_VPMULHW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20800, 229},
    {I_VPMULHW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20808, 229},
    {I_VPMULHW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20816, 229},
    {I_VPMULHW, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20824, 230},
    {I_VPMULHW, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20832, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMULLW[] = {
    {I_VPMULLW, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28816, 184},
    {I_VPMULLW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28823, 184},
    {I_VPMULLW, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31917, 203},
    {I_VPMULLW, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31924, 203},
    {I_VPMULLW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20936, 229},
    {I_VPMULLW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20944, 229},
    {I_VPMULLW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20952, 229},
    {I_VPMULLW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20960, 229},
    {I_VPMULLW, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20968, 230},
    {I_VPMULLW, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20976, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMULLD[] = {
    {I_VPMULLD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28830, 184},
    {I_VPMULLD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28837, 184},
    {I_VPMULLD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31931, 203},
    {I_VPMULLD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31938, 203},
    {I_VPMULLD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+20840, 225},
    {I_VPMULLD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+20848, 225},
    {I_VPMULLD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+20856, 225},
    {I_VPMULLD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+20864, 225},
    {I_VPMULLD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+20872, 226},
    {I_VPMULLD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+20880, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMULUDQ[] = {
    {I_VPMULUDQ, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28844, 184},
    {I_VPMULUDQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28851, 184},
    {I_VPMULUDQ, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31945, 203},
    {I_VPMULUDQ, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31952, 203},
    {I_VPMULUDQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+21032, 225},
    {I_VPMULUDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+21040, 225},
    {I_VPMULUDQ, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+21048, 225},
    {I_VPMULUDQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+21056, 225},
    {I_VPMULUDQ, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+21064, 226},
    {I_VPMULUDQ, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+21072, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMULDQ[] = {
    {I_VPMULDQ, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28858, 184},
    {I_VPMULDQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28865, 184},
    {I_VPMULDQ, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31861, 203},
    {I_VPMULDQ, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31868, 203},
    {I_VPMULDQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+20648, 225},
    {I_VPMULDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+20656, 225},
    {I_VPMULDQ, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+20664, 225},
    {I_VPMULDQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+20672, 225},
    {I_VPMULDQ, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+20680, 226},
    {I_VPMULDQ, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+20688, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPOR[] = {
    {I_VPOR, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28872, 184},
    {I_VPOR, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28879, 184},
    {I_VPOR, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31959, 203},
    {I_VPOR, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31966, 203},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSADBW[] = {
    {I_VPSADBW, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28886, 184},
    {I_VPSADBW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28893, 184},
    {I_VPSADBW, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31973, 203},
    {I_VPSADBW, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31980, 203},
    {I_VPSADBW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+21368, 229},
    {I_VPSADBW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+21376, 229},
    {I_VPSADBW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+21384, 229},
    {I_VPSADBW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+21392, 229},
    {I_VPSADBW, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, NO_DECORATOR, nasm_bytecodes+21400, 230},
    {I_VPSADBW, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, NO_DECORATOR, nasm_bytecodes+21408, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSHUFB[] = {
    {I_VPSHUFB, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28900, 184},
    {I_VPSHUFB, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28907, 184},
    {I_VPSHUFB, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+31987, 203},
    {I_VPSHUFB, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+31994, 203},
    {I_VPSHUFB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21416, 229},
    {I_VPSHUFB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21424, 229},
    {I_VPSHUFB, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21432, 229},
    {I_VPSHUFB, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21440, 229},
    {I_VPSHUFB, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21448, 230},
    {I_VPSHUFB, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21456, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSHUFD[] = {
    {I_VPSHUFD, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9152, 184},
    {I_VPSHUFD, 3, {YMM_L16,RM_YMM_L16|BITS256,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+11152, 203},
    {I_VPSHUFD, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+6099, 225},
    {I_VPSHUFD, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+6108, 225},
    {I_VPSHUFD, 3, {ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+6117, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSHUFHW[] = {
    {I_VPSHUFHW, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9160, 184},
    {I_VPSHUFHW, 3, {YMM_L16,RM_YMM_L16|BITS256,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+11160, 203},
    {I_VPSHUFHW, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+6126, 229},
    {I_VPSHUFHW, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+6135, 229},
    {I_VPSHUFHW, 3, {ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+6144, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSHUFLW[] = {
    {I_VPSHUFLW, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9168, 184},
    {I_VPSHUFLW, 3, {YMM_L16,RM_YMM_L16|BITS256,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+11168, 203},
    {I_VPSHUFLW, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+6153, 229},
    {I_VPSHUFLW, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+6162, 229},
    {I_VPSHUFLW, 3, {ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+6171, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSIGNB[] = {
    {I_VPSIGNB, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28914, 184},
    {I_VPSIGNB, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28921, 184},
    {I_VPSIGNB, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+32001, 203},
    {I_VPSIGNB, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+32008, 203},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSIGNW[] = {
    {I_VPSIGNW, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28928, 184},
    {I_VPSIGNW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28935, 184},
    {I_VPSIGNW, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+32015, 203},
    {I_VPSIGNW, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+32022, 203},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSIGND[] = {
    {I_VPSIGND, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28942, 184},
    {I_VPSIGND, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28949, 184},
    {I_VPSIGND, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+32029, 203},
    {I_VPSIGND, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+32036, 203},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSLLDQ[] = {
    {I_VPSLLDQ, 3, {XMM_L16,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9176, 184},
    {I_VPSLLDQ, 2, {XMM_L16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+9184, 184},
    {I_VPSLLDQ, 3, {YMM_L16,YMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+11176, 203},
    {I_VPSLLDQ, 2, {YMM_L16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+11184, 203},
    {I_VPSLLDQ, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+6234, 229},
    {I_VPSLLDQ, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6243, 229},
    {I_VPSLLDQ, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+6252, 229},
    {I_VPSLLDQ, 2, {YMMREG,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6261, 229},
    {I_VPSLLDQ, 3, {ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+6270, 230},
    {I_VPSLLDQ, 2, {ZMMREG,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6279, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSRLDQ[] = {
    {I_VPSRLDQ, 3, {XMM_L16,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9192, 184},
    {I_VPSRLDQ, 2, {XMM_L16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+9200, 184},
    {I_VPSRLDQ, 3, {YMM_L16,YMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+11272, 203},
    {I_VPSRLDQ, 2, {YMM_L16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+11280, 203},
    {I_VPSRLDQ, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+6612, 229},
    {I_VPSRLDQ, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6621, 229},
    {I_VPSRLDQ, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+6630, 229},
    {I_VPSRLDQ, 2, {YMMREG,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6639, 229},
    {I_VPSRLDQ, 3, {ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+6648, 230},
    {I_VPSRLDQ, 2, {ZMMREG,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6657, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSLLW[] = {
    {I_VPSLLW, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28956, 184},
    {I_VPSLLW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28963, 184},
    {I_VPSLLW, 3, {XMM_L16,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9208, 184},
    {I_VPSLLW, 2, {XMM_L16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+9216, 184},
    {I_VPSLLW, 3, {YMM_L16,YMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+32043, 203},
    {I_VPSLLW, 2, {YMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+32050, 203},
    {I_VPSLLW, 3, {YMM_L16,YMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+11192, 203},
    {I_VPSLLW, 2, {YMM_L16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+11200, 203},
    {I_VPSLLW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21704, 229},
    {I_VPSLLW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21712, 229},
    {I_VPSLLW, 3, {YMMREG,YMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21720, 229},
    {I_VPSLLW, 2, {YMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21728, 229},
    {I_VPSLLW, 3, {ZMMREG,ZMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21736, 230},
    {I_VPSLLW, 2, {ZMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21744, 230},
    {I_VPSLLW, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+6342, 229},
    {I_VPSLLW, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+6351, 229},
    {I_VPSLLW, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+6360, 229},
    {I_VPSLLW, 2, {YMMREG,IMMEDIATE|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+6369, 229},
    {I_VPSLLW, 3, {ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+6378, 230},
    {I_VPSLLW, 2, {ZMMREG,IMMEDIATE|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+6387, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSLLD[] = {
    {I_VPSLLD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28970, 184},
    {I_VPSLLD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28977, 184},
    {I_VPSLLD, 3, {XMM_L16,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9224, 184},
    {I_VPSLLD, 2, {XMM_L16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+9232, 184},
    {I_VPSLLD, 3, {YMM_L16,YMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+32057, 203},
    {I_VPSLLD, 2, {YMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+32064, 203},
    {I_VPSLLD, 3, {YMM_L16,YMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+11208, 203},
    {I_VPSLLD, 2, {YMM_L16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+11216, 203},
    {I_VPSLLD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21464, 225},
    {I_VPSLLD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21472, 225},
    {I_VPSLLD, 3, {YMMREG,YMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21480, 225},
    {I_VPSLLD, 2, {YMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21488, 225},
    {I_VPSLLD, 3, {ZMMREG,ZMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21496, 226},
    {I_VPSLLD, 2, {ZMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21504, 226},
    {I_VPSLLD, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+6180, 225},
    {I_VPSLLD, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+6189, 225},
    {I_VPSLLD, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+6198, 225},
    {I_VPSLLD, 2, {YMMREG,IMMEDIATE|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+6207, 225},
    {I_VPSLLD, 3, {ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+6216, 226},
    {I_VPSLLD, 2, {ZMMREG,IMMEDIATE|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+6225, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSLLQ[] = {
    {I_VPSLLQ, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28984, 184},
    {I_VPSLLQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+28991, 184},
    {I_VPSLLQ, 3, {XMM_L16,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9240, 184},
    {I_VPSLLQ, 2, {XMM_L16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+9248, 184},
    {I_VPSLLQ, 3, {YMM_L16,YMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+32071, 203},
    {I_VPSLLQ, 2, {YMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+32078, 203},
    {I_VPSLLQ, 3, {YMM_L16,YMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+11224, 203},
    {I_VPSLLQ, 2, {YMM_L16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+11232, 203},
    {I_VPSLLQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21512, 225},
    {I_VPSLLQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21520, 225},
    {I_VPSLLQ, 3, {YMMREG,YMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21528, 225},
    {I_VPSLLQ, 2, {YMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21536, 225},
    {I_VPSLLQ, 3, {ZMMREG,ZMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21544, 226},
    {I_VPSLLQ, 2, {ZMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21552, 226},
    {I_VPSLLQ, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+6288, 225},
    {I_VPSLLQ, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+6297, 225},
    {I_VPSLLQ, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+6306, 225},
    {I_VPSLLQ, 2, {YMMREG,IMMEDIATE|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+6315, 225},
    {I_VPSLLQ, 3, {ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+6324, 226},
    {I_VPSLLQ, 2, {ZMMREG,IMMEDIATE|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+6333, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSRAW[] = {
    {I_VPSRAW, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+28998, 184},
    {I_VPSRAW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+29005, 184},
    {I_VPSRAW, 3, {XMM_L16,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9256, 184},
    {I_VPSRAW, 2, {XMM_L16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+9264, 184},
    {I_VPSRAW, 3, {YMM_L16,YMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+32085, 203},
    {I_VPSRAW, 2, {YMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+32092, 203},
    {I_VPSRAW, 3, {YMM_L16,YMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+11240, 203},
    {I_VPSRAW, 2, {YMM_L16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+11248, 203},
    {I_VPSRAW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21992, 229},
    {I_VPSRAW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22000, 229},
    {I_VPSRAW, 3, {YMMREG,YMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22008, 229},
    {I_VPSRAW, 2, {YMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22016, 229},
    {I_VPSRAW, 3, {ZMMREG,ZMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22024, 230},
    {I_VPSRAW, 2, {ZMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22032, 230},
    {I_VPSRAW, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+6504, 229},
    {I_VPSRAW, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+6513, 229},
    {I_VPSRAW, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+6522, 229},
    {I_VPSRAW, 2, {YMMREG,IMMEDIATE|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+6531, 229},
    {I_VPSRAW, 3, {ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+6540, 230},
    {I_VPSRAW, 2, {ZMMREG,IMMEDIATE|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+6549, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSRAD[] = {
    {I_VPSRAD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29012, 184},
    {I_VPSRAD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+29019, 184},
    {I_VPSRAD, 3, {XMM_L16,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9272, 184},
    {I_VPSRAD, 2, {XMM_L16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+9280, 184},
    {I_VPSRAD, 3, {YMM_L16,YMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+32099, 203},
    {I_VPSRAD, 2, {YMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+32106, 203},
    {I_VPSRAD, 3, {YMM_L16,YMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+11256, 203},
    {I_VPSRAD, 2, {YMM_L16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+11264, 203},
    {I_VPSRAD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21752, 225},
    {I_VPSRAD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21760, 225},
    {I_VPSRAD, 3, {YMMREG,YMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21768, 225},
    {I_VPSRAD, 2, {YMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21776, 225},
    {I_VPSRAD, 3, {ZMMREG,ZMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21784, 226},
    {I_VPSRAD, 2, {ZMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21792, 226},
    {I_VPSRAD, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+6396, 225},
    {I_VPSRAD, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+6405, 225},
    {I_VPSRAD, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+6414, 225},
    {I_VPSRAD, 2, {YMMREG,IMMEDIATE|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+6423, 225},
    {I_VPSRAD, 3, {ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+6432, 226},
    {I_VPSRAD, 2, {ZMMREG,IMMEDIATE|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+6441, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSRLW[] = {
    {I_VPSRLW, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29026, 184},
    {I_VPSRLW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+29033, 184},
    {I_VPSRLW, 3, {XMM_L16,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9288, 184},
    {I_VPSRLW, 2, {XMM_L16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+9296, 184},
    {I_VPSRLW, 3, {YMM_L16,YMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+32113, 203},
    {I_VPSRLW, 2, {YMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+32120, 203},
    {I_VPSRLW, 3, {YMM_L16,YMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+11288, 203},
    {I_VPSRLW, 2, {YMM_L16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+11296, 203},
    {I_VPSRLW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22280, 229},
    {I_VPSRLW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22288, 229},
    {I_VPSRLW, 3, {YMMREG,YMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22296, 229},
    {I_VPSRLW, 2, {YMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22304, 229},
    {I_VPSRLW, 3, {ZMMREG,ZMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22312, 230},
    {I_VPSRLW, 2, {ZMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22320, 230},
    {I_VPSRLW, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+6720, 229},
    {I_VPSRLW, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+6729, 229},
    {I_VPSRLW, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+6738, 229},
    {I_VPSRLW, 2, {YMMREG,IMMEDIATE|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+6747, 229},
    {I_VPSRLW, 3, {ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+6756, 230},
    {I_VPSRLW, 2, {ZMMREG,IMMEDIATE|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+6765, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSRLD[] = {
    {I_VPSRLD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29040, 184},
    {I_VPSRLD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+29047, 184},
    {I_VPSRLD, 3, {XMM_L16,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9304, 184},
    {I_VPSRLD, 2, {XMM_L16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+9312, 184},
    {I_VPSRLD, 3, {YMM_L16,YMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+32127, 203},
    {I_VPSRLD, 2, {YMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+32134, 203},
    {I_VPSRLD, 3, {YMM_L16,YMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+11304, 203},
    {I_VPSRLD, 2, {YMM_L16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+11312, 203},
    {I_VPSRLD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22040, 225},
    {I_VPSRLD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22048, 225},
    {I_VPSRLD, 3, {YMMREG,YMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22056, 225},
    {I_VPSRLD, 2, {YMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22064, 225},
    {I_VPSRLD, 3, {ZMMREG,ZMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22072, 226},
    {I_VPSRLD, 2, {ZMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22080, 226},
    {I_VPSRLD, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+6558, 225},
    {I_VPSRLD, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+6567, 225},
    {I_VPSRLD, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+6576, 225},
    {I_VPSRLD, 2, {YMMREG,IMMEDIATE|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+6585, 225},
    {I_VPSRLD, 3, {ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+6594, 226},
    {I_VPSRLD, 2, {ZMMREG,IMMEDIATE|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+6603, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSRLQ[] = {
    {I_VPSRLQ, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29054, 184},
    {I_VPSRLQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+29061, 184},
    {I_VPSRLQ, 3, {XMM_L16,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9320, 184},
    {I_VPSRLQ, 2, {XMM_L16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+9328, 184},
    {I_VPSRLQ, 3, {YMM_L16,YMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+32141, 203},
    {I_VPSRLQ, 2, {YMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+32148, 203},
    {I_VPSRLQ, 3, {YMM_L16,YMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+11320, 203},
    {I_VPSRLQ, 2, {YMM_L16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+11328, 203},
    {I_VPSRLQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22088, 225},
    {I_VPSRLQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22096, 225},
    {I_VPSRLQ, 3, {YMMREG,YMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22104, 225},
    {I_VPSRLQ, 2, {YMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22112, 225},
    {I_VPSRLQ, 3, {ZMMREG,ZMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22120, 226},
    {I_VPSRLQ, 2, {ZMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22128, 226},
    {I_VPSRLQ, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+6666, 225},
    {I_VPSRLQ, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+6675, 225},
    {I_VPSRLQ, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+6684, 225},
    {I_VPSRLQ, 2, {YMMREG,IMMEDIATE|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+6693, 225},
    {I_VPSRLQ, 3, {ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+6702, 226},
    {I_VPSRLQ, 2, {ZMMREG,IMMEDIATE|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+6711, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPTEST[] = {
    {I_VPTEST, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+29068, 184},
    {I_VPTEST, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+29075, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSUBB[] = {
    {I_VPSUBB, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29082, 184},
    {I_VPSUBB, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+29089, 184},
    {I_VPSUBB, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+32155, 203},
    {I_VPSUBB, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+32162, 203},
    {I_VPSUBB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22328, 229},
    {I_VPSUBB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22336, 229},
    {I_VPSUBB, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22344, 229},
    {I_VPSUBB, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22352, 229},
    {I_VPSUBB, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22360, 230},
    {I_VPSUBB, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22368, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSUBW[] = {
    {I_VPSUBW, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29096, 184},
    {I_VPSUBW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+29103, 184},
    {I_VPSUBW, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+32169, 203},
    {I_VPSUBW, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+32176, 203},
    {I_VPSUBW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22664, 229},
    {I_VPSUBW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22672, 229},
    {I_VPSUBW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22680, 229},
    {I_VPSUBW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22688, 229},
    {I_VPSUBW, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22696, 230},
    {I_VPSUBW, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22704, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSUBD[] = {
    {I_VPSUBD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29110, 184},
    {I_VPSUBD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+29117, 184},
    {I_VPSUBD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+32183, 203},
    {I_VPSUBD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+32190, 203},
    {I_VPSUBD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+22376, 225},
    {I_VPSUBD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+22384, 225},
    {I_VPSUBD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+22392, 225},
    {I_VPSUBD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+22400, 225},
    {I_VPSUBD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+22408, 226},
    {I_VPSUBD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+22416, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSUBQ[] = {
    {I_VPSUBQ, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29124, 184},
    {I_VPSUBQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+29131, 184},
    {I_VPSUBQ, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+32197, 203},
    {I_VPSUBQ, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+32204, 203},
    {I_VPSUBQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+22424, 225},
    {I_VPSUBQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+22432, 225},
    {I_VPSUBQ, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+22440, 225},
    {I_VPSUBQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+22448, 225},
    {I_VPSUBQ, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+22456, 226},
    {I_VPSUBQ, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+22464, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSUBSB[] = {
    {I_VPSUBSB, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29138, 184},
    {I_VPSUBSB, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+29145, 184},
    {I_VPSUBSB, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+32211, 203},
    {I_VPSUBSB, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+32218, 203},
    {I_VPSUBSB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22472, 229},
    {I_VPSUBSB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22480, 229},
    {I_VPSUBSB, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22488, 229},
    {I_VPSUBSB, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22496, 229},
    {I_VPSUBSB, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22504, 230},
    {I_VPSUBSB, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22512, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSUBSW[] = {
    {I_VPSUBSW, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29152, 184},
    {I_VPSUBSW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+29159, 184},
    {I_VPSUBSW, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+32225, 203},
    {I_VPSUBSW, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+32232, 203},
    {I_VPSUBSW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22520, 229},
    {I_VPSUBSW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22528, 229},
    {I_VPSUBSW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22536, 229},
    {I_VPSUBSW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22544, 229},
    {I_VPSUBSW, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22552, 230},
    {I_VPSUBSW, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22560, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSUBUSB[] = {
    {I_VPSUBUSB, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29166, 184},
    {I_VPSUBUSB, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+29173, 184},
    {I_VPSUBUSB, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+32239, 203},
    {I_VPSUBUSB, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+32246, 203},
    {I_VPSUBUSB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22568, 229},
    {I_VPSUBUSB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22576, 229},
    {I_VPSUBUSB, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22584, 229},
    {I_VPSUBUSB, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22592, 229},
    {I_VPSUBUSB, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22600, 230},
    {I_VPSUBUSB, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22608, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSUBUSW[] = {
    {I_VPSUBUSW, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29180, 184},
    {I_VPSUBUSW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+29187, 184},
    {I_VPSUBUSW, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+32253, 203},
    {I_VPSUBUSW, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+32260, 203},
    {I_VPSUBUSW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22616, 229},
    {I_VPSUBUSW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22624, 229},
    {I_VPSUBUSW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22632, 229},
    {I_VPSUBUSW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22640, 229},
    {I_VPSUBUSW, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22648, 230},
    {I_VPSUBUSW, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22656, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPUNPCKHBW[] = {
    {I_VPUNPCKHBW, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29194, 184},
    {I_VPUNPCKHBW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+29201, 184},
    {I_VPUNPCKHBW, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+32267, 203},
    {I_VPUNPCKHBW, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+32274, 203},
    {I_VPUNPCKHBW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22904, 229},
    {I_VPUNPCKHBW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22912, 229},
    {I_VPUNPCKHBW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22920, 229},
    {I_VPUNPCKHBW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22928, 229},
    {I_VPUNPCKHBW, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22936, 230},
    {I_VPUNPCKHBW, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22944, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPUNPCKHWD[] = {
    {I_VPUNPCKHWD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29208, 184},
    {I_VPUNPCKHWD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+29215, 184},
    {I_VPUNPCKHWD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+32281, 203},
    {I_VPUNPCKHWD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+32288, 203},
    {I_VPUNPCKHWD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+23048, 229},
    {I_VPUNPCKHWD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+23056, 229},
    {I_VPUNPCKHWD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+23064, 229},
    {I_VPUNPCKHWD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+23072, 229},
    {I_VPUNPCKHWD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+23080, 230},
    {I_VPUNPCKHWD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+23088, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPUNPCKHDQ[] = {
    {I_VPUNPCKHDQ, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29222, 184},
    {I_VPUNPCKHDQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+29229, 184},
    {I_VPUNPCKHDQ, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+32295, 203},
    {I_VPUNPCKHDQ, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+32302, 203},
    {I_VPUNPCKHDQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+22952, 225},
    {I_VPUNPCKHDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+22960, 225},
    {I_VPUNPCKHDQ, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+22968, 225},
    {I_VPUNPCKHDQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+22976, 225},
    {I_VPUNPCKHDQ, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+22984, 226},
    {I_VPUNPCKHDQ, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+22992, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPUNPCKHQDQ[] = {
    {I_VPUNPCKHQDQ, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29236, 184},
    {I_VPUNPCKHQDQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+29243, 184},
    {I_VPUNPCKHQDQ, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+32309, 203},
    {I_VPUNPCKHQDQ, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+32316, 203},
    {I_VPUNPCKHQDQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+23000, 225},
    {I_VPUNPCKHQDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+23008, 225},
    {I_VPUNPCKHQDQ, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+23016, 225},
    {I_VPUNPCKHQDQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+23024, 225},
    {I_VPUNPCKHQDQ, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+23032, 226},
    {I_VPUNPCKHQDQ, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+23040, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPUNPCKLBW[] = {
    {I_VPUNPCKLBW, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29250, 184},
    {I_VPUNPCKLBW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+29257, 184},
    {I_VPUNPCKLBW, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+32323, 203},
    {I_VPUNPCKLBW, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+32330, 203},
    {I_VPUNPCKLBW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+23096, 229},
    {I_VPUNPCKLBW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+23104, 229},
    {I_VPUNPCKLBW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+23112, 229},
    {I_VPUNPCKLBW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+23120, 229},
    {I_VPUNPCKLBW, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+23128, 230},
    {I_VPUNPCKLBW, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+23136, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPUNPCKLWD[] = {
    {I_VPUNPCKLWD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29264, 184},
    {I_VPUNPCKLWD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+29271, 184},
    {I_VPUNPCKLWD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+32337, 203},
    {I_VPUNPCKLWD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+32344, 203},
    {I_VPUNPCKLWD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+23240, 229},
    {I_VPUNPCKLWD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+23248, 229},
    {I_VPUNPCKLWD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+23256, 229},
    {I_VPUNPCKLWD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+23264, 229},
    {I_VPUNPCKLWD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+23272, 230},
    {I_VPUNPCKLWD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+23280, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPUNPCKLDQ[] = {
    {I_VPUNPCKLDQ, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29278, 184},
    {I_VPUNPCKLDQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+29285, 184},
    {I_VPUNPCKLDQ, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+32351, 203},
    {I_VPUNPCKLDQ, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+32358, 203},
    {I_VPUNPCKLDQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+23144, 225},
    {I_VPUNPCKLDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+23152, 225},
    {I_VPUNPCKLDQ, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+23160, 225},
    {I_VPUNPCKLDQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+23168, 225},
    {I_VPUNPCKLDQ, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+23176, 226},
    {I_VPUNPCKLDQ, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+23184, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPUNPCKLQDQ[] = {
    {I_VPUNPCKLQDQ, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29292, 184},
    {I_VPUNPCKLQDQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+29299, 184},
    {I_VPUNPCKLQDQ, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+32365, 203},
    {I_VPUNPCKLQDQ, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+32372, 203},
    {I_VPUNPCKLQDQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+23192, 225},
    {I_VPUNPCKLQDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+23200, 225},
    {I_VPUNPCKLQDQ, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+23208, 225},
    {I_VPUNPCKLQDQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+23216, 225},
    {I_VPUNPCKLQDQ, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+23224, 226},
    {I_VPUNPCKLQDQ, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+23232, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPXOR[] = {
    {I_VPXOR, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29306, 184},
    {I_VPXOR, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+29313, 184},
    {I_VPXOR, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+32379, 203},
    {I_VPXOR, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+32386, 203},
    ITEMPLATE_END
};

static const struct itemplate instrux_VRCPPS[] = {
    {I_VRCPPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+29320, 184},
    {I_VRCPPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+29327, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VRCPSS[] = {
    {I_VRCPSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+29334, 184},
    {I_VRCPSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+29341, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VRSQRTPS[] = {
    {I_VRSQRTPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+29348, 184},
    {I_VRSQRTPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+29355, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VRSQRTSS[] = {
    {I_VRSQRTSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+29362, 184},
    {I_VRSQRTSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+29369, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VROUNDPD[] = {
    {I_VROUNDPD, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9336, 184},
    {I_VROUNDPD, 3, {YMM_L16,RM_YMM_L16|BITS256,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9344, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VROUNDPS[] = {
    {I_VROUNDPS, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9352, 184},
    {I_VROUNDPS, 3, {YMM_L16,RM_YMM_L16|BITS256,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9360, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VROUNDSD[] = {
    {I_VROUNDSD, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+9368, 184},
    {I_VROUNDSD, 3, {XMM_L16,RM_XMM_L16|BITS64,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9376, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VROUNDSS[] = {
    {I_VROUNDSS, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+9384, 184},
    {I_VROUNDSS, 3, {XMM_L16,RM_XMM_L16|BITS32,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9392, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSHUFPD[] = {
    {I_VSHUFPD, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+9400, 184},
    {I_VSHUFPD, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9408, 184},
    {I_VSHUFPD, 4, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+9416, 184},
    {I_VSHUFPD, 3, {YMM_L16,RM_YMM_L16|BITS256,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9424, 184},
    {I_VSHUFPD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+7476, 225},
    {I_VSHUFPD, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+7485, 225},
    {I_VSHUFPD, 4, {YMMREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+7494, 225},
    {I_VSHUFPD, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+7503, 225},
    {I_VSHUFPD, 4, {ZMMREG,ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+7512, 226},
    {I_VSHUFPD, 3, {ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+7521, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSHUFPS[] = {
    {I_VSHUFPS, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+9432, 184},
    {I_VSHUFPS, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9440, 184},
    {I_VSHUFPS, 4, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+9448, 184},
    {I_VSHUFPS, 3, {YMM_L16,RM_YMM_L16|BITS256,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9456, 184},
    {I_VSHUFPS, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+7530, 225},
    {I_VSHUFPS, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+7539, 225},
    {I_VSHUFPS, 4, {YMMREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+7548, 225},
    {I_VSHUFPS, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+7557, 225},
    {I_VSHUFPS, 4, {ZMMREG,ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+7566, 226},
    {I_VSHUFPS, 3, {ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+7575, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSQRTPD[] = {
    {I_VSQRTPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+29376, 184},
    {I_VSQRTPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+29383, 184},
    {I_VSQRTPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+23768, 225},
    {I_VSQRTPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+23776, 225},
    {I_VSQRTPD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64|ER,0,0,0}, nasm_bytecodes+23784, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSQRTPS[] = {
    {I_VSQRTPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+29390, 184},
    {I_VSQRTPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+29397, 184},
    {I_VSQRTPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+23792, 225},
    {I_VSQRTPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+23800, 225},
    {I_VSQRTPS, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32|ER,0,0,0}, nasm_bytecodes+23808, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSQRTSD[] = {
    {I_VSQRTSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+29404, 184},
    {I_VSQRTSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+29411, 184},
    {I_VSQRTSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, {MASK|Z,0,ER,0,0}, nasm_bytecodes+23816, 226},
    {I_VSQRTSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, {MASK|Z,ER,0,0,0}, nasm_bytecodes+23824, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSQRTSS[] = {
    {I_VSQRTSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+29418, 184},
    {I_VSQRTSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+29425, 184},
    {I_VSQRTSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, {MASK|Z,0,ER,0,0}, nasm_bytecodes+23832, 226},
    {I_VSQRTSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, {MASK|Z,ER,0,0,0}, nasm_bytecodes+23840, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSTMXCSR[] = {
    {I_VSTMXCSR, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+29432, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSUBPD[] = {
    {I_VSUBPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29439, 184},
    {I_VSUBPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+29446, 184},
    {I_VSUBPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29453, 184},
    {I_VSUBPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+29460, 184},
    {I_VSUBPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+23848, 225},
    {I_VSUBPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+23856, 225},
    {I_VSUBPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+23864, 225},
    {I_VSUBPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+23872, 225},
    {I_VSUBPD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64|ER,0,0}, nasm_bytecodes+23880, 226},
    {I_VSUBPD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64|ER,0,0,0}, nasm_bytecodes+23888, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSUBPS[] = {
    {I_VSUBPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29467, 184},
    {I_VSUBPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+29474, 184},
    {I_VSUBPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29481, 184},
    {I_VSUBPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+29488, 184},
    {I_VSUBPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+23896, 225},
    {I_VSUBPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+23904, 225},
    {I_VSUBPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+23912, 225},
    {I_VSUBPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+23920, 225},
    {I_VSUBPS, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32|ER,0,0}, nasm_bytecodes+23928, 226},
    {I_VSUBPS, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32|ER,0,0,0}, nasm_bytecodes+23936, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSUBSD[] = {
    {I_VSUBSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+29495, 184},
    {I_VSUBSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+29502, 184},
    {I_VSUBSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, {MASK|Z,0,ER,0,0}, nasm_bytecodes+23944, 226},
    {I_VSUBSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, {MASK|Z,ER,0,0,0}, nasm_bytecodes+23952, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSUBSS[] = {
    {I_VSUBSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+29509, 184},
    {I_VSUBSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+29516, 184},
    {I_VSUBSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, {MASK|Z,0,ER,0,0}, nasm_bytecodes+23960, 226},
    {I_VSUBSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, {MASK|Z,ER,0,0,0}, nasm_bytecodes+23968, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VTESTPS[] = {
    {I_VTESTPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+29523, 184},
    {I_VTESTPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+29530, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VTESTPD[] = {
    {I_VTESTPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+29537, 184},
    {I_VTESTPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+29544, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VUCOMISD[] = {
    {I_VUCOMISD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+29551, 184},
    {I_VUCOMISD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, {0,SAE,0,0,0}, nasm_bytecodes+23976, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VUCOMISS[] = {
    {I_VUCOMISS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+29558, 184},
    {I_VUCOMISS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, {0,SAE,0,0,0}, nasm_bytecodes+23984, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VUNPCKHPD[] = {
    {I_VUNPCKHPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29565, 184},
    {I_VUNPCKHPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+29572, 184},
    {I_VUNPCKHPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29579, 184},
    {I_VUNPCKHPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+29586, 184},
    {I_VUNPCKHPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+23992, 225},
    {I_VUNPCKHPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+24000, 225},
    {I_VUNPCKHPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+24008, 225},
    {I_VUNPCKHPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+24016, 225},
    {I_VUNPCKHPD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+24024, 226},
    {I_VUNPCKHPD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+24032, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VUNPCKHPS[] = {
    {I_VUNPCKHPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29593, 184},
    {I_VUNPCKHPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+29600, 184},
    {I_VUNPCKHPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29607, 184},
    {I_VUNPCKHPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+29614, 184},
    {I_VUNPCKHPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+24040, 225},
    {I_VUNPCKHPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+24048, 225},
    {I_VUNPCKHPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+24056, 225},
    {I_VUNPCKHPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+24064, 225},
    {I_VUNPCKHPS, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+24072, 226},
    {I_VUNPCKHPS, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+24080, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VUNPCKLPD[] = {
    {I_VUNPCKLPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29621, 184},
    {I_VUNPCKLPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+29628, 184},
    {I_VUNPCKLPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29635, 184},
    {I_VUNPCKLPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+29642, 184},
    {I_VUNPCKLPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+24088, 225},
    {I_VUNPCKLPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+24096, 225},
    {I_VUNPCKLPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+24104, 225},
    {I_VUNPCKLPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+24112, 225},
    {I_VUNPCKLPD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+24120, 226},
    {I_VUNPCKLPD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+24128, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VUNPCKLPS[] = {
    {I_VUNPCKLPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29649, 184},
    {I_VUNPCKLPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+29656, 184},
    {I_VUNPCKLPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29663, 184},
    {I_VUNPCKLPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+29670, 184},
    {I_VUNPCKLPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+24136, 225},
    {I_VUNPCKLPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+24144, 225},
    {I_VUNPCKLPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+24152, 225},
    {I_VUNPCKLPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+24160, 225},
    {I_VUNPCKLPS, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+24168, 226},
    {I_VUNPCKLPS, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+24176, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VXORPD[] = {
    {I_VXORPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29677, 184},
    {I_VXORPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+29684, 184},
    {I_VXORPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29691, 184},
    {I_VXORPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+29698, 184},
    {I_VXORPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+24184, 227},
    {I_VXORPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+24192, 227},
    {I_VXORPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+24200, 227},
    {I_VXORPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+24208, 227},
    {I_VXORPD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+24216, 228},
    {I_VXORPD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+24224, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VXORPS[] = {
    {I_VXORPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29705, 184},
    {I_VXORPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+29712, 184},
    {I_VXORPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29719, 184},
    {I_VXORPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+29726, 184},
    {I_VXORPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+24232, 227},
    {I_VXORPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+24240, 227},
    {I_VXORPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+24248, 227},
    {I_VXORPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+24256, 227},
    {I_VXORPS, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+24264, 228},
    {I_VXORPS, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+24272, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VZEROALL[] = {
    {I_VZEROALL, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+35806, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_VZEROUPPER[] = {
    {I_VZEROUPPER, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+35812, 184},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCLMULLQLQDQ[] = {
    {I_PCLMULLQLQDQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+3768, 183},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCLMULHQLQDQ[] = {
    {I_PCLMULHQLQDQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+3777, 183},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCLMULLQHQDQ[] = {
    {I_PCLMULLQHQDQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+3786, 183},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCLMULHQHQDQ[] = {
    {I_PCLMULHQHQDQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+3795, 183},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCLMULQDQ[] = {
    {I_PCLMULQDQ, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9464, 183},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCLMULLQLQDQ[] = {
    {I_VPCLMULLQLQDQ, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+3804, 184},
    {I_VPCLMULLQLQDQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+3813, 184},
    {I_VPCLMULLQLQDQ, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+3876, 194},
    {I_VPCLMULLQLQDQ, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+3885, 194},
    {I_VPCLMULLQLQDQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+0, 195},
    {I_VPCLMULLQLQDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+10, 195},
    {I_VPCLMULLQLQDQ, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+80, 195},
    {I_VPCLMULLQLQDQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+90, 195},
    {I_VPCLMULLQLQDQ, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, NO_DECORATOR, nasm_bytecodes+160, 196},
    {I_VPCLMULLQLQDQ, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, NO_DECORATOR, nasm_bytecodes+170, 196},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCLMULHQLQDQ[] = {
    {I_VPCLMULHQLQDQ, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+3822, 184},
    {I_VPCLMULHQLQDQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+3831, 184},
    {I_VPCLMULHQLQDQ, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+3894, 194},
    {I_VPCLMULHQLQDQ, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+3903, 194},
    {I_VPCLMULHQLQDQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+20, 195},
    {I_VPCLMULHQLQDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+30, 195},
    {I_VPCLMULHQLQDQ, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+100, 195},
    {I_VPCLMULHQLQDQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+110, 195},
    {I_VPCLMULHQLQDQ, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, NO_DECORATOR, nasm_bytecodes+180, 196},
    {I_VPCLMULHQLQDQ, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, NO_DECORATOR, nasm_bytecodes+190, 196},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCLMULLQHQDQ[] = {
    {I_VPCLMULLQHQDQ, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+3840, 184},
    {I_VPCLMULLQHQDQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+3849, 184},
    {I_VPCLMULLQHQDQ, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+3912, 194},
    {I_VPCLMULLQHQDQ, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+3921, 194},
    {I_VPCLMULLQHQDQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+40, 195},
    {I_VPCLMULLQHQDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+50, 195},
    {I_VPCLMULLQHQDQ, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+120, 195},
    {I_VPCLMULLQHQDQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+130, 195},
    {I_VPCLMULLQHQDQ, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, NO_DECORATOR, nasm_bytecodes+200, 196},
    {I_VPCLMULLQHQDQ, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, NO_DECORATOR, nasm_bytecodes+210, 196},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCLMULHQHQDQ[] = {
    {I_VPCLMULHQHQDQ, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+3858, 184},
    {I_VPCLMULHQHQDQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+3867, 184},
    {I_VPCLMULHQHQDQ, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+3930, 194},
    {I_VPCLMULHQHQDQ, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+3939, 194},
    {I_VPCLMULHQHQDQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+60, 195},
    {I_VPCLMULHQHQDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+70, 195},
    {I_VPCLMULHQHQDQ, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+140, 195},
    {I_VPCLMULHQHQDQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+150, 195},
    {I_VPCLMULHQHQDQ, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, NO_DECORATOR, nasm_bytecodes+220, 196},
    {I_VPCLMULHQHQDQ, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, NO_DECORATOR, nasm_bytecodes+230, 196},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCLMULQDQ[] = {
    {I_VPCLMULQDQ, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+9472, 184},
    {I_VPCLMULQDQ, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9480, 184},
    {I_VPCLMULQDQ, 4, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+9488, 194},
    {I_VPCLMULQDQ, 3, {YMM_L16,RM_YMM_L16|BITS256,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9496, 194},
    {I_VPCLMULQDQ, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+3948, 195},
    {I_VPCLMULQDQ, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+3957, 195},
    {I_VPCLMULQDQ, 4, {YMMREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+3966, 195},
    {I_VPCLMULQDQ, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+3975, 195},
    {I_VPCLMULQDQ, 4, {ZMMREG,ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+3984, 196},
    {I_VPCLMULQDQ, 3, {ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+3993, 196},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD132PS[] = {
    {I_VFMADD132PS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29733, 197},
    {I_VFMADD132PS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29740, 197},
    {I_VFMADD132PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+13416, 225},
    {I_VFMADD132PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+13424, 225},
    {I_VFMADD132PS, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32|ER,0,0}, nasm_bytecodes+13432, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD132PD[] = {
    {I_VFMADD132PD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29747, 197},
    {I_VFMADD132PD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29754, 197},
    {I_VFMADD132PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+13392, 225},
    {I_VFMADD132PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+13400, 225},
    {I_VFMADD132PD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64|ER,0,0}, nasm_bytecodes+13408, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD312PS[] = {
    {I_VFMADD312PS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29733, 197},
    {I_VFMADD312PS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29740, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD312PD[] = {
    {I_VFMADD312PD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29747, 197},
    {I_VFMADD312PD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29754, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD213PS[] = {
    {I_VFMADD213PS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29761, 197},
    {I_VFMADD213PS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29768, 197},
    {I_VFMADD213PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+13480, 225},
    {I_VFMADD213PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+13488, 225},
    {I_VFMADD213PS, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32|ER,0,0}, nasm_bytecodes+13496, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD213PD[] = {
    {I_VFMADD213PD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29775, 197},
    {I_VFMADD213PD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29782, 197},
    {I_VFMADD213PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+13456, 225},
    {I_VFMADD213PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+13464, 225},
    {I_VFMADD213PD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64|ER,0,0}, nasm_bytecodes+13472, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD123PS[] = {
    {I_VFMADD123PS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29761, 197},
    {I_VFMADD123PS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29768, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD123PD[] = {
    {I_VFMADD123PD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29775, 197},
    {I_VFMADD123PD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29782, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD231PS[] = {
    {I_VFMADD231PS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29789, 197},
    {I_VFMADD231PS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29796, 197},
    {I_VFMADD231PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+13544, 225},
    {I_VFMADD231PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+13552, 225},
    {I_VFMADD231PS, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32|ER,0,0}, nasm_bytecodes+13560, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD231PD[] = {
    {I_VFMADD231PD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29803, 197},
    {I_VFMADD231PD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29810, 197},
    {I_VFMADD231PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+13520, 225},
    {I_VFMADD231PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+13528, 225},
    {I_VFMADD231PD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64|ER,0,0}, nasm_bytecodes+13536, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD321PS[] = {
    {I_VFMADD321PS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29789, 197},
    {I_VFMADD321PS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29796, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD321PD[] = {
    {I_VFMADD321PD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29803, 197},
    {I_VFMADD321PD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29810, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSUB132PS[] = {
    {I_VFMADDSUB132PS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29817, 197},
    {I_VFMADDSUB132PS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29824, 197},
    {I_VFMADDSUB132PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+13608, 225},
    {I_VFMADDSUB132PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+13616, 225},
    {I_VFMADDSUB132PS, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32|ER,0,0}, nasm_bytecodes+13624, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSUB132PD[] = {
    {I_VFMADDSUB132PD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29831, 197},
    {I_VFMADDSUB132PD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29838, 197},
    {I_VFMADDSUB132PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+13584, 225},
    {I_VFMADDSUB132PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+13592, 225},
    {I_VFMADDSUB132PD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64|ER,0,0}, nasm_bytecodes+13600, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSUB312PS[] = {
    {I_VFMADDSUB312PS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29817, 197},
    {I_VFMADDSUB312PS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29824, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSUB312PD[] = {
    {I_VFMADDSUB312PD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29831, 197},
    {I_VFMADDSUB312PD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29838, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSUB213PS[] = {
    {I_VFMADDSUB213PS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29845, 197},
    {I_VFMADDSUB213PS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29852, 197},
    {I_VFMADDSUB213PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+13656, 225},
    {I_VFMADDSUB213PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+13664, 225},
    {I_VFMADDSUB213PS, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32|ER,0,0}, nasm_bytecodes+13672, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSUB213PD[] = {
    {I_VFMADDSUB213PD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29859, 197},
    {I_VFMADDSUB213PD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29866, 197},
    {I_VFMADDSUB213PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+13632, 225},
    {I_VFMADDSUB213PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+13640, 225},
    {I_VFMADDSUB213PD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64|ER,0,0}, nasm_bytecodes+13648, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSUB123PS[] = {
    {I_VFMADDSUB123PS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29845, 197},
    {I_VFMADDSUB123PS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29852, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSUB123PD[] = {
    {I_VFMADDSUB123PD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29859, 197},
    {I_VFMADDSUB123PD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29866, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSUB231PS[] = {
    {I_VFMADDSUB231PS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29873, 197},
    {I_VFMADDSUB231PS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29880, 197},
    {I_VFMADDSUB231PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+13704, 225},
    {I_VFMADDSUB231PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+13712, 225},
    {I_VFMADDSUB231PS, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32|ER,0,0}, nasm_bytecodes+13720, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSUB231PD[] = {
    {I_VFMADDSUB231PD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29887, 197},
    {I_VFMADDSUB231PD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29894, 197},
    {I_VFMADDSUB231PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+13680, 225},
    {I_VFMADDSUB231PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+13688, 225},
    {I_VFMADDSUB231PD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64|ER,0,0}, nasm_bytecodes+13696, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSUB321PS[] = {
    {I_VFMADDSUB321PS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29873, 197},
    {I_VFMADDSUB321PS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29880, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSUB321PD[] = {
    {I_VFMADDSUB321PD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29887, 197},
    {I_VFMADDSUB321PD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29894, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB132PS[] = {
    {I_VFMSUB132PS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29901, 197},
    {I_VFMSUB132PS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29908, 197},
    {I_VFMSUB132PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+13752, 225},
    {I_VFMSUB132PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+13760, 225},
    {I_VFMSUB132PS, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32|ER,0,0}, nasm_bytecodes+13768, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB132PD[] = {
    {I_VFMSUB132PD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29915, 197},
    {I_VFMSUB132PD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29922, 197},
    {I_VFMSUB132PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+13728, 225},
    {I_VFMSUB132PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+13736, 225},
    {I_VFMSUB132PD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64|ER,0,0}, nasm_bytecodes+13744, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB312PS[] = {
    {I_VFMSUB312PS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29901, 197},
    {I_VFMSUB312PS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29908, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB312PD[] = {
    {I_VFMSUB312PD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29915, 197},
    {I_VFMSUB312PD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29922, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB213PS[] = {
    {I_VFMSUB213PS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29929, 197},
    {I_VFMSUB213PS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29936, 197},
    {I_VFMSUB213PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+13816, 225},
    {I_VFMSUB213PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+13824, 225},
    {I_VFMSUB213PS, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32|ER,0,0}, nasm_bytecodes+13832, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB213PD[] = {
    {I_VFMSUB213PD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29943, 197},
    {I_VFMSUB213PD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29950, 197},
    {I_VFMSUB213PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+13792, 225},
    {I_VFMSUB213PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+13800, 225},
    {I_VFMSUB213PD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64|ER,0,0}, nasm_bytecodes+13808, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB123PS[] = {
    {I_VFMSUB123PS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29929, 197},
    {I_VFMSUB123PS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29936, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB123PD[] = {
    {I_VFMSUB123PD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29943, 197},
    {I_VFMSUB123PD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29950, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB231PS[] = {
    {I_VFMSUB231PS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29957, 197},
    {I_VFMSUB231PS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29964, 197},
    {I_VFMSUB231PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+13880, 225},
    {I_VFMSUB231PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+13888, 225},
    {I_VFMSUB231PS, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32|ER,0,0}, nasm_bytecodes+13896, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB231PD[] = {
    {I_VFMSUB231PD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29971, 197},
    {I_VFMSUB231PD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29978, 197},
    {I_VFMSUB231PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+13856, 225},
    {I_VFMSUB231PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+13864, 225},
    {I_VFMSUB231PD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64|ER,0,0}, nasm_bytecodes+13872, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB321PS[] = {
    {I_VFMSUB321PS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29957, 197},
    {I_VFMSUB321PS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29964, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB321PD[] = {
    {I_VFMSUB321PD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29971, 197},
    {I_VFMSUB321PD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29978, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBADD132PS[] = {
    {I_VFMSUBADD132PS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29985, 197},
    {I_VFMSUBADD132PS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29992, 197},
    {I_VFMSUBADD132PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+13944, 225},
    {I_VFMSUBADD132PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+13952, 225},
    {I_VFMSUBADD132PS, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32|ER,0,0}, nasm_bytecodes+13960, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBADD132PD[] = {
    {I_VFMSUBADD132PD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29999, 197},
    {I_VFMSUBADD132PD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+30006, 197},
    {I_VFMSUBADD132PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+13920, 225},
    {I_VFMSUBADD132PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+13928, 225},
    {I_VFMSUBADD132PD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64|ER,0,0}, nasm_bytecodes+13936, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBADD312PS[] = {
    {I_VFMSUBADD312PS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29985, 197},
    {I_VFMSUBADD312PS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+29992, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBADD312PD[] = {
    {I_VFMSUBADD312PD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+29999, 197},
    {I_VFMSUBADD312PD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+30006, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBADD213PS[] = {
    {I_VFMSUBADD213PS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+30013, 197},
    {I_VFMSUBADD213PS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+30020, 197},
    {I_VFMSUBADD213PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+13992, 225},
    {I_VFMSUBADD213PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+14000, 225},
    {I_VFMSUBADD213PS, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32|ER,0,0}, nasm_bytecodes+14008, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBADD213PD[] = {
    {I_VFMSUBADD213PD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+30027, 197},
    {I_VFMSUBADD213PD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+30034, 197},
    {I_VFMSUBADD213PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+13968, 225},
    {I_VFMSUBADD213PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+13976, 225},
    {I_VFMSUBADD213PD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64|ER,0,0}, nasm_bytecodes+13984, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBADD123PS[] = {
    {I_VFMSUBADD123PS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+30013, 197},
    {I_VFMSUBADD123PS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+30020, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBADD123PD[] = {
    {I_VFMSUBADD123PD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+30027, 197},
    {I_VFMSUBADD123PD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+30034, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBADD231PS[] = {
    {I_VFMSUBADD231PS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+30041, 197},
    {I_VFMSUBADD231PS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+30048, 197},
    {I_VFMSUBADD231PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+14040, 225},
    {I_VFMSUBADD231PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+14048, 225},
    {I_VFMSUBADD231PS, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32|ER,0,0}, nasm_bytecodes+14056, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBADD231PD[] = {
    {I_VFMSUBADD231PD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+30055, 197},
    {I_VFMSUBADD231PD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+30062, 197},
    {I_VFMSUBADD231PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+14016, 225},
    {I_VFMSUBADD231PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+14024, 225},
    {I_VFMSUBADD231PD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64|ER,0,0}, nasm_bytecodes+14032, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBADD321PS[] = {
    {I_VFMSUBADD321PS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+30041, 197},
    {I_VFMSUBADD321PS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+30048, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBADD321PD[] = {
    {I_VFMSUBADD321PD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+30055, 197},
    {I_VFMSUBADD321PD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+30062, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD132PS[] = {
    {I_VFNMADD132PS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+30069, 197},
    {I_VFNMADD132PS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+30076, 197},
    {I_VFNMADD132PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+14088, 225},
    {I_VFNMADD132PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+14096, 225},
    {I_VFNMADD132PS, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32|ER,0,0}, nasm_bytecodes+14104, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD132PD[] = {
    {I_VFNMADD132PD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+30083, 197},
    {I_VFNMADD132PD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+30090, 197},
    {I_VFNMADD132PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+14064, 225},
    {I_VFNMADD132PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+14072, 225},
    {I_VFNMADD132PD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64|ER,0,0}, nasm_bytecodes+14080, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD312PS[] = {
    {I_VFNMADD312PS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+30069, 197},
    {I_VFNMADD312PS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+30076, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD312PD[] = {
    {I_VFNMADD312PD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+30083, 197},
    {I_VFNMADD312PD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+30090, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD213PS[] = {
    {I_VFNMADD213PS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+30097, 197},
    {I_VFNMADD213PS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+30104, 197},
    {I_VFNMADD213PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+14152, 225},
    {I_VFNMADD213PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+14160, 225},
    {I_VFNMADD213PS, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32|ER,0,0}, nasm_bytecodes+14168, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD213PD[] = {
    {I_VFNMADD213PD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+30111, 197},
    {I_VFNMADD213PD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+30118, 197},
    {I_VFNMADD213PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+14128, 225},
    {I_VFNMADD213PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+14136, 225},
    {I_VFNMADD213PD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64|ER,0,0}, nasm_bytecodes+14144, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD123PS[] = {
    {I_VFNMADD123PS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+30097, 197},
    {I_VFNMADD123PS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+30104, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD123PD[] = {
    {I_VFNMADD123PD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+30111, 197},
    {I_VFNMADD123PD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+30118, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD231PS[] = {
    {I_VFNMADD231PS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+30125, 197},
    {I_VFNMADD231PS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+30132, 197},
    {I_VFNMADD231PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+14216, 225},
    {I_VFNMADD231PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+14224, 225},
    {I_VFNMADD231PS, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32|ER,0,0}, nasm_bytecodes+14232, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD231PD[] = {
    {I_VFNMADD231PD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+30139, 197},
    {I_VFNMADD231PD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+30146, 197},
    {I_VFNMADD231PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+14192, 225},
    {I_VFNMADD231PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+14200, 225},
    {I_VFNMADD231PD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64|ER,0,0}, nasm_bytecodes+14208, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD321PS[] = {
    {I_VFNMADD321PS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+30125, 197},
    {I_VFNMADD321PS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+30132, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD321PD[] = {
    {I_VFNMADD321PD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+30139, 197},
    {I_VFNMADD321PD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+30146, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB132PS[] = {
    {I_VFNMSUB132PS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+30153, 197},
    {I_VFNMSUB132PS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+30160, 197},
    {I_VFNMSUB132PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+14280, 225},
    {I_VFNMSUB132PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+14288, 225},
    {I_VFNMSUB132PS, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32|ER,0,0}, nasm_bytecodes+14296, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB132PD[] = {
    {I_VFNMSUB132PD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+30167, 197},
    {I_VFNMSUB132PD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+30174, 197},
    {I_VFNMSUB132PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+14256, 225},
    {I_VFNMSUB132PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+14264, 225},
    {I_VFNMSUB132PD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64|ER,0,0}, nasm_bytecodes+14272, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB312PS[] = {
    {I_VFNMSUB312PS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+30153, 197},
    {I_VFNMSUB312PS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+30160, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB312PD[] = {
    {I_VFNMSUB312PD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+30167, 197},
    {I_VFNMSUB312PD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+30174, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB213PS[] = {
    {I_VFNMSUB213PS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+30181, 197},
    {I_VFNMSUB213PS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+30188, 197},
    {I_VFNMSUB213PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+14344, 225},
    {I_VFNMSUB213PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+14352, 225},
    {I_VFNMSUB213PS, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32|ER,0,0}, nasm_bytecodes+14360, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB213PD[] = {
    {I_VFNMSUB213PD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+30195, 197},
    {I_VFNMSUB213PD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+30202, 197},
    {I_VFNMSUB213PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+14320, 225},
    {I_VFNMSUB213PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+14328, 225},
    {I_VFNMSUB213PD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64|ER,0,0}, nasm_bytecodes+14336, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB123PS[] = {
    {I_VFNMSUB123PS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+30181, 197},
    {I_VFNMSUB123PS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+30188, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB123PD[] = {
    {I_VFNMSUB123PD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+30195, 197},
    {I_VFNMSUB123PD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+30202, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB231PS[] = {
    {I_VFNMSUB231PS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+30209, 197},
    {I_VFNMSUB231PS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+30216, 197},
    {I_VFNMSUB231PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+14408, 225},
    {I_VFNMSUB231PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+14416, 225},
    {I_VFNMSUB231PS, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32|ER,0,0}, nasm_bytecodes+14424, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB231PD[] = {
    {I_VFNMSUB231PD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+30223, 197},
    {I_VFNMSUB231PD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+30230, 197},
    {I_VFNMSUB231PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+14384, 225},
    {I_VFNMSUB231PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+14392, 225},
    {I_VFNMSUB231PD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64|ER,0,0}, nasm_bytecodes+14400, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB321PS[] = {
    {I_VFNMSUB321PS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+30209, 197},
    {I_VFNMSUB321PS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+30216, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB321PD[] = {
    {I_VFNMSUB321PD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+30223, 197},
    {I_VFNMSUB321PD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+30230, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD132SS[] = {
    {I_VFMADD132SS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+30237, 197},
    {I_VFMADD132SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, {MASK|Z,0,ER,0,0}, nasm_bytecodes+13448, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD132SD[] = {
    {I_VFMADD132SD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+30244, 197},
    {I_VFMADD132SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, {MASK|Z,0,ER,0,0}, nasm_bytecodes+13440, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD312SS[] = {
    {I_VFMADD312SS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+30237, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD312SD[] = {
    {I_VFMADD312SD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+30244, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD213SS[] = {
    {I_VFMADD213SS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+30251, 197},
    {I_VFMADD213SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, {MASK|Z,0,ER,0,0}, nasm_bytecodes+13512, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD213SD[] = {
    {I_VFMADD213SD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+30258, 197},
    {I_VFMADD213SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, {MASK|Z,0,ER,0,0}, nasm_bytecodes+13504, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD123SS[] = {
    {I_VFMADD123SS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+30251, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD123SD[] = {
    {I_VFMADD123SD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+30258, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD231SS[] = {
    {I_VFMADD231SS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+30265, 197},
    {I_VFMADD231SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, {MASK|Z,0,ER,0,0}, nasm_bytecodes+13576, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD231SD[] = {
    {I_VFMADD231SD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+30272, 197},
    {I_VFMADD231SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, {MASK|Z,0,ER,0,0}, nasm_bytecodes+13568, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD321SS[] = {
    {I_VFMADD321SS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+30265, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD321SD[] = {
    {I_VFMADD321SD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+30272, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB132SS[] = {
    {I_VFMSUB132SS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+30279, 197},
    {I_VFMSUB132SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, {MASK|Z,0,ER,0,0}, nasm_bytecodes+13784, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB132SD[] = {
    {I_VFMSUB132SD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+30286, 197},
    {I_VFMSUB132SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, {MASK|Z,0,ER,0,0}, nasm_bytecodes+13776, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB312SS[] = {
    {I_VFMSUB312SS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+30279, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB312SD[] = {
    {I_VFMSUB312SD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+30286, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB213SS[] = {
    {I_VFMSUB213SS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+30293, 197},
    {I_VFMSUB213SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, {MASK|Z,0,ER,0,0}, nasm_bytecodes+13848, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB213SD[] = {
    {I_VFMSUB213SD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+30300, 197},
    {I_VFMSUB213SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, {MASK|Z,0,ER,0,0}, nasm_bytecodes+13840, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB123SS[] = {
    {I_VFMSUB123SS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+30293, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB123SD[] = {
    {I_VFMSUB123SD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+30300, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB231SS[] = {
    {I_VFMSUB231SS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+30307, 197},
    {I_VFMSUB231SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, {MASK|Z,0,ER,0,0}, nasm_bytecodes+13912, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB231SD[] = {
    {I_VFMSUB231SD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+30314, 197},
    {I_VFMSUB231SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, {MASK|Z,0,ER,0,0}, nasm_bytecodes+13904, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB321SS[] = {
    {I_VFMSUB321SS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+30307, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB321SD[] = {
    {I_VFMSUB321SD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+30314, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD132SS[] = {
    {I_VFNMADD132SS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+30321, 197},
    {I_VFNMADD132SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, {MASK|Z,0,ER,0,0}, nasm_bytecodes+14120, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD132SD[] = {
    {I_VFNMADD132SD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+30328, 197},
    {I_VFNMADD132SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, {MASK|Z,0,ER,0,0}, nasm_bytecodes+14112, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD312SS[] = {
    {I_VFNMADD312SS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+30321, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD312SD[] = {
    {I_VFNMADD312SD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+30328, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD213SS[] = {
    {I_VFNMADD213SS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+30335, 197},
    {I_VFNMADD213SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, {MASK|Z,0,ER,0,0}, nasm_bytecodes+14184, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD213SD[] = {
    {I_VFNMADD213SD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+30342, 197},
    {I_VFNMADD213SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, {MASK|Z,0,ER,0,0}, nasm_bytecodes+14176, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD123SS[] = {
    {I_VFNMADD123SS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+30335, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD123SD[] = {
    {I_VFNMADD123SD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+30342, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD231SS[] = {
    {I_VFNMADD231SS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+30349, 197},
    {I_VFNMADD231SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, {MASK|Z,0,ER,0,0}, nasm_bytecodes+14248, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD231SD[] = {
    {I_VFNMADD231SD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+30356, 197},
    {I_VFNMADD231SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, {MASK|Z,0,ER,0,0}, nasm_bytecodes+14240, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD321SS[] = {
    {I_VFNMADD321SS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+30349, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD321SD[] = {
    {I_VFNMADD321SD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+30356, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB132SS[] = {
    {I_VFNMSUB132SS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+30363, 197},
    {I_VFNMSUB132SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, {MASK|Z,0,ER,0,0}, nasm_bytecodes+14312, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB132SD[] = {
    {I_VFNMSUB132SD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+30370, 197},
    {I_VFNMSUB132SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, {MASK|Z,0,ER,0,0}, nasm_bytecodes+14304, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB312SS[] = {
    {I_VFNMSUB312SS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+30363, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB312SD[] = {
    {I_VFNMSUB312SD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+30370, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB213SS[] = {
    {I_VFNMSUB213SS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+30377, 197},
    {I_VFNMSUB213SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, {MASK|Z,0,ER,0,0}, nasm_bytecodes+14376, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB213SD[] = {
    {I_VFNMSUB213SD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+30384, 197},
    {I_VFNMSUB213SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, {MASK|Z,0,ER,0,0}, nasm_bytecodes+14368, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB123SS[] = {
    {I_VFNMSUB123SS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+30377, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB123SD[] = {
    {I_VFNMSUB123SD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+30384, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB231SS[] = {
    {I_VFNMSUB231SS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+30391, 197},
    {I_VFNMSUB231SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, {MASK|Z,0,ER,0,0}, nasm_bytecodes+14440, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB231SD[] = {
    {I_VFNMSUB231SD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+30398, 197},
    {I_VFNMSUB231SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, {MASK|Z,0,ER,0,0}, nasm_bytecodes+14432, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB321SS[] = {
    {I_VFNMSUB321SS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+30391, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB321SD[] = {
    {I_VFNMSUB321SD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+30398, 197},
    ITEMPLATE_END
};

static const struct itemplate instrux_RDFSBASE[] = {
    {I_RDFSBASE, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+30405, 134},
    {I_RDFSBASE, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+30412, 134},
    ITEMPLATE_END
};

static const struct itemplate instrux_RDGSBASE[] = {
    {I_RDGSBASE, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+30419, 134},
    {I_RDGSBASE, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+30426, 134},
    ITEMPLATE_END
};

static const struct itemplate instrux_RDRAND[] = {
    {I_RDRAND, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+35818, 133},
    {I_RDRAND, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+35824, 133},
    {I_RDRAND, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+35830, 134},
    ITEMPLATE_END
};

static const struct itemplate instrux_WRFSBASE[] = {
    {I_WRFSBASE, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+30433, 134},
    {I_WRFSBASE, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+30440, 134},
    ITEMPLATE_END
};

static const struct itemplate instrux_WRGSBASE[] = {
    {I_WRGSBASE, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+30447, 134},
    {I_WRGSBASE, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+30454, 134},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTPH2PS[] = {
    {I_VCVTPH2PS, 2, {YMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+30461, 198},
    {I_VCVTPH2PS, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+30468, 198},
    {I_VCVTPH2PS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+12512, 225},
    {I_VCVTPH2PS, 2, {YMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+12520, 225},
    {I_VCVTPH2PS, 2, {ZMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,SAE,0,0,0}, nasm_bytecodes+12528, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTPS2PH[] = {
    {I_VCVTPS2PH, 3, {RM_XMM_L16|BITS128,YMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9504, 198},
    {I_VCVTPS2PH, 3, {RM_XMM_L16|BITS64,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9512, 198},
    {I_VCVTPS2PH, 3, {XMMREG,XMMREG,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+4182, 225},
    {I_VCVTPS2PH, 3, {XMMREG,YMMREG,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+4191, 225},
    {I_VCVTPS2PH, 3, {YMMREG,ZMMREG,IMMEDIATE|BITS8,0,0}, {MASK|Z,SAE,0,0,0}, nasm_bytecodes+4200, 226},
    {I_VCVTPS2PH, 3, {MEMORY|BITS64,XMMREG,IMMEDIATE|BITS8,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+4182, 225},
    {I_VCVTPS2PH, 3, {MEMORY|BITS128,YMMREG,IMMEDIATE|BITS8,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+4191, 225},
    {I_VCVTPS2PH, 3, {MEMORY|BITS256,ZMMREG,IMMEDIATE|BITS8,0,0}, {MASK,SAE,0,0,0}, nasm_bytecodes+4200, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_ADCX[] = {
    {I_ADCX, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+9520, 133},
    {I_ADCX, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+9528, 134},
    ITEMPLATE_END
};

static const struct itemplate instrux_ADOX[] = {
    {I_ADOX, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+9536, 133},
    {I_ADOX, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+9544, 134},
    ITEMPLATE_END
};

static const struct itemplate instrux_RDSEED[] = {
    {I_RDSEED, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+35836, 133},
    {I_RDSEED, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+35842, 133},
    {I_RDSEED, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+35848, 134},
    ITEMPLATE_END
};

static const struct itemplate instrux_CLAC[] = {
    {I_CLAC, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38905, 199},
    ITEMPLATE_END
};

static const struct itemplate instrux_STAC[] = {
    {I_STAC, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38910, 199},
    ITEMPLATE_END
};

static const struct itemplate instrux_XSTORE[] = {
    {I_XSTORE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38915, 36},
    ITEMPLATE_END
};

static const struct itemplate instrux_XCRYPTECB[] = {
    {I_XCRYPTECB, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+35854, 36},
    ITEMPLATE_END
};

static const struct itemplate instrux_XCRYPTCBC[] = {
    {I_XCRYPTCBC, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+35860, 36},
    ITEMPLATE_END
};

static const struct itemplate instrux_XCRYPTCTR[] = {
    {I_XCRYPTCTR, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+35866, 36},
    ITEMPLATE_END
};

static const struct itemplate instrux_XCRYPTCFB[] = {
    {I_XCRYPTCFB, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+35872, 36},
    ITEMPLATE_END
};

static const struct itemplate instrux_XCRYPTOFB[] = {
    {I_XCRYPTOFB, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+35878, 36},
    ITEMPLATE_END
};

static const struct itemplate instrux_MONTMUL[] = {
    {I_MONTMUL, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+35884, 36},
    ITEMPLATE_END
};

static const struct itemplate instrux_XSHA1[] = {
    {I_XSHA1, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+35890, 36},
    ITEMPLATE_END
};

static const struct itemplate instrux_XSHA256[] = {
    {I_XSHA256, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+35896, 36},
    ITEMPLATE_END
};

static const struct itemplate instrux_LLWPCB[] = {
    {I_LLWPCB, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+30475, 200},
    {I_LLWPCB, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+30482, 201},
    ITEMPLATE_END
};

static const struct itemplate instrux_SLWPCB[] = {
    {I_SLWPCB, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+30489, 200},
    {I_SLWPCB, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+30496, 201},
    ITEMPLATE_END
};

static const struct itemplate instrux_LWPVAL[] = {
    {I_LWPVAL, 3, {REG_GPR|BITS32,RM_GPR|BITS32,IMMEDIATE|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+9552, 200},
    {I_LWPVAL, 3, {REG_GPR|BITS64,RM_GPR|BITS32,IMMEDIATE|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+9560, 201},
    ITEMPLATE_END
};

static const struct itemplate instrux_LWPINS[] = {
    {I_LWPINS, 3, {REG_GPR|BITS32,RM_GPR|BITS32,IMMEDIATE|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+9568, 200},
    {I_LWPINS, 3, {REG_GPR|BITS64,RM_GPR|BITS32,IMMEDIATE|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+9576, 201},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDPD[] = {
    {I_VFMADDPD, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0}, NO_DECORATOR, nasm_bytecodes+9584, 202},
    {I_VFMADDPD, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+9592, 202},
    {I_VFMADDPD, 4, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,YMM_L16,0}, NO_DECORATOR, nasm_bytecodes+9600, 202},
    {I_VFMADDPD, 3, {YMM_L16,RM_YMM_L16|BITS256,YMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+9608, 202},
    {I_VFMADDPD, 4, {XMM_L16,XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0}, NO_DECORATOR, nasm_bytecodes+9616, 202},
    {I_VFMADDPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+9624, 202},
    {I_VFMADDPD, 4, {YMM_L16,YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0}, NO_DECORATOR, nasm_bytecodes+9632, 202},
    {I_VFMADDPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+9640, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDPS[] = {
    {I_VFMADDPS, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0}, NO_DECORATOR, nasm_bytecodes+9648, 202},
    {I_VFMADDPS, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+9656, 202},
    {I_VFMADDPS, 4, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,YMM_L16,0}, NO_DECORATOR, nasm_bytecodes+9664, 202},
    {I_VFMADDPS, 3, {YMM_L16,RM_YMM_L16|BITS256,YMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+9672, 202},
    {I_VFMADDPS, 4, {XMM_L16,XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0}, NO_DECORATOR, nasm_bytecodes+9680, 202},
    {I_VFMADDPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+9688, 202},
    {I_VFMADDPS, 4, {YMM_L16,YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0}, NO_DECORATOR, nasm_bytecodes+9696, 202},
    {I_VFMADDPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+9704, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSD[] = {
    {I_VFMADDSD, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,XMM_L16,0}, NO_DECORATOR, nasm_bytecodes+9712, 202},
    {I_VFMADDSD, 3, {XMM_L16,RM_XMM_L16|BITS64,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+9720, 202},
    {I_VFMADDSD, 4, {XMM_L16,XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0}, NO_DECORATOR, nasm_bytecodes+9728, 202},
    {I_VFMADDSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+9736, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSS[] = {
    {I_VFMADDSS, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,XMM_L16,0}, NO_DECORATOR, nasm_bytecodes+9744, 202},
    {I_VFMADDSS, 3, {XMM_L16,RM_XMM_L16|BITS32,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+9752, 202},
    {I_VFMADDSS, 4, {XMM_L16,XMM_L16,XMM_L16,RM_XMM_L16|BITS32,0}, NO_DECORATOR, nasm_bytecodes+9760, 202},
    {I_VFMADDSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+9768, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSUBPD[] = {
    {I_VFMADDSUBPD, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0}, NO_DECORATOR, nasm_bytecodes+9776, 202},
    {I_VFMADDSUBPD, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+9784, 202},
    {I_VFMADDSUBPD, 4, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,YMM_L16,0}, NO_DECORATOR, nasm_bytecodes+9792, 202},
    {I_VFMADDSUBPD, 3, {YMM_L16,RM_YMM_L16|BITS256,YMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+9800, 202},
    {I_VFMADDSUBPD, 4, {XMM_L16,XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0}, NO_DECORATOR, nasm_bytecodes+9808, 202},
    {I_VFMADDSUBPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+9816, 202},
    {I_VFMADDSUBPD, 4, {YMM_L16,YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0}, NO_DECORATOR, nasm_bytecodes+9824, 202},
    {I_VFMADDSUBPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+9832, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSUBPS[] = {
    {I_VFMADDSUBPS, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0}, NO_DECORATOR, nasm_bytecodes+9840, 202},
    {I_VFMADDSUBPS, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+9848, 202},
    {I_VFMADDSUBPS, 4, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,YMM_L16,0}, NO_DECORATOR, nasm_bytecodes+9856, 202},
    {I_VFMADDSUBPS, 3, {YMM_L16,RM_YMM_L16|BITS256,YMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+9864, 202},
    {I_VFMADDSUBPS, 4, {XMM_L16,XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0}, NO_DECORATOR, nasm_bytecodes+9872, 202},
    {I_VFMADDSUBPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+9880, 202},
    {I_VFMADDSUBPS, 4, {YMM_L16,YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0}, NO_DECORATOR, nasm_bytecodes+9888, 202},
    {I_VFMADDSUBPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+9896, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBADDPD[] = {
    {I_VFMSUBADDPD, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0}, NO_DECORATOR, nasm_bytecodes+9904, 202},
    {I_VFMSUBADDPD, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+9912, 202},
    {I_VFMSUBADDPD, 4, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,YMM_L16,0}, NO_DECORATOR, nasm_bytecodes+9920, 202},
    {I_VFMSUBADDPD, 3, {YMM_L16,RM_YMM_L16|BITS256,YMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+9928, 202},
    {I_VFMSUBADDPD, 4, {XMM_L16,XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0}, NO_DECORATOR, nasm_bytecodes+9936, 202},
    {I_VFMSUBADDPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+9944, 202},
    {I_VFMSUBADDPD, 4, {YMM_L16,YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0}, NO_DECORATOR, nasm_bytecodes+9952, 202},
    {I_VFMSUBADDPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+9960, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBADDPS[] = {
    {I_VFMSUBADDPS, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0}, NO_DECORATOR, nasm_bytecodes+9968, 202},
    {I_VFMSUBADDPS, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+9976, 202},
    {I_VFMSUBADDPS, 4, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,YMM_L16,0}, NO_DECORATOR, nasm_bytecodes+9984, 202},
    {I_VFMSUBADDPS, 3, {YMM_L16,RM_YMM_L16|BITS256,YMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+9992, 202},
    {I_VFMSUBADDPS, 4, {XMM_L16,XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0}, NO_DECORATOR, nasm_bytecodes+10000, 202},
    {I_VFMSUBADDPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+10008, 202},
    {I_VFMSUBADDPS, 4, {YMM_L16,YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0}, NO_DECORATOR, nasm_bytecodes+10016, 202},
    {I_VFMSUBADDPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+10024, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBPD[] = {
    {I_VFMSUBPD, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0}, NO_DECORATOR, nasm_bytecodes+10032, 202},
    {I_VFMSUBPD, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+10040, 202},
    {I_VFMSUBPD, 4, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,YMM_L16,0}, NO_DECORATOR, nasm_bytecodes+10048, 202},
    {I_VFMSUBPD, 3, {YMM_L16,RM_YMM_L16|BITS256,YMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+10056, 202},
    {I_VFMSUBPD, 4, {XMM_L16,XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0}, NO_DECORATOR, nasm_bytecodes+10064, 202},
    {I_VFMSUBPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+10072, 202},
    {I_VFMSUBPD, 4, {YMM_L16,YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0}, NO_DECORATOR, nasm_bytecodes+10080, 202},
    {I_VFMSUBPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+10088, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBPS[] = {
    {I_VFMSUBPS, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0}, NO_DECORATOR, nasm_bytecodes+10096, 202},
    {I_VFMSUBPS, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+10104, 202},
    {I_VFMSUBPS, 4, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,YMM_L16,0}, NO_DECORATOR, nasm_bytecodes+10112, 202},
    {I_VFMSUBPS, 3, {YMM_L16,RM_YMM_L16|BITS256,YMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+10120, 202},
    {I_VFMSUBPS, 4, {XMM_L16,XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0}, NO_DECORATOR, nasm_bytecodes+10128, 202},
    {I_VFMSUBPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+10136, 202},
    {I_VFMSUBPS, 4, {YMM_L16,YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0}, NO_DECORATOR, nasm_bytecodes+10144, 202},
    {I_VFMSUBPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+10152, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBSD[] = {
    {I_VFMSUBSD, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,XMM_L16,0}, NO_DECORATOR, nasm_bytecodes+10160, 202},
    {I_VFMSUBSD, 3, {XMM_L16,RM_XMM_L16|BITS64,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+10168, 202},
    {I_VFMSUBSD, 4, {XMM_L16,XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0}, NO_DECORATOR, nasm_bytecodes+10176, 202},
    {I_VFMSUBSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+10184, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBSS[] = {
    {I_VFMSUBSS, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,XMM_L16,0}, NO_DECORATOR, nasm_bytecodes+10192, 202},
    {I_VFMSUBSS, 3, {XMM_L16,RM_XMM_L16|BITS32,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+10200, 202},
    {I_VFMSUBSS, 4, {XMM_L16,XMM_L16,XMM_L16,RM_XMM_L16|BITS32,0}, NO_DECORATOR, nasm_bytecodes+10208, 202},
    {I_VFMSUBSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+10216, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADDPD[] = {
    {I_VFNMADDPD, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0}, NO_DECORATOR, nasm_bytecodes+10224, 202},
    {I_VFNMADDPD, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+10232, 202},
    {I_VFNMADDPD, 4, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,YMM_L16,0}, NO_DECORATOR, nasm_bytecodes+10240, 202},
    {I_VFNMADDPD, 3, {YMM_L16,RM_YMM_L16|BITS256,YMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+10248, 202},
    {I_VFNMADDPD, 4, {XMM_L16,XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0}, NO_DECORATOR, nasm_bytecodes+10256, 202},
    {I_VFNMADDPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+10264, 202},
    {I_VFNMADDPD, 4, {YMM_L16,YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0}, NO_DECORATOR, nasm_bytecodes+10272, 202},
    {I_VFNMADDPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+10280, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADDPS[] = {
    {I_VFNMADDPS, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0}, NO_DECORATOR, nasm_bytecodes+10288, 202},
    {I_VFNMADDPS, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+10296, 202},
    {I_VFNMADDPS, 4, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,YMM_L16,0}, NO_DECORATOR, nasm_bytecodes+10304, 202},
    {I_VFNMADDPS, 3, {YMM_L16,RM_YMM_L16|BITS256,YMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+10312, 202},
    {I_VFNMADDPS, 4, {XMM_L16,XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0}, NO_DECORATOR, nasm_bytecodes+10320, 202},
    {I_VFNMADDPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+10328, 202},
    {I_VFNMADDPS, 4, {YMM_L16,YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0}, NO_DECORATOR, nasm_bytecodes+10336, 202},
    {I_VFNMADDPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+10344, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADDSD[] = {
    {I_VFNMADDSD, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,XMM_L16,0}, NO_DECORATOR, nasm_bytecodes+10352, 202},
    {I_VFNMADDSD, 3, {XMM_L16,RM_XMM_L16|BITS64,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+10360, 202},
    {I_VFNMADDSD, 4, {XMM_L16,XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0}, NO_DECORATOR, nasm_bytecodes+10368, 202},
    {I_VFNMADDSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+10376, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADDSS[] = {
    {I_VFNMADDSS, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,XMM_L16,0}, NO_DECORATOR, nasm_bytecodes+10384, 202},
    {I_VFNMADDSS, 3, {XMM_L16,RM_XMM_L16|BITS32,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+10392, 202},
    {I_VFNMADDSS, 4, {XMM_L16,XMM_L16,XMM_L16,RM_XMM_L16|BITS32,0}, NO_DECORATOR, nasm_bytecodes+10400, 202},
    {I_VFNMADDSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+10408, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUBPD[] = {
    {I_VFNMSUBPD, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0}, NO_DECORATOR, nasm_bytecodes+10416, 202},
    {I_VFNMSUBPD, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+10424, 202},
    {I_VFNMSUBPD, 4, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,YMM_L16,0}, NO_DECORATOR, nasm_bytecodes+10432, 202},
    {I_VFNMSUBPD, 3, {YMM_L16,RM_YMM_L16|BITS256,YMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+10440, 202},
    {I_VFNMSUBPD, 4, {XMM_L16,XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0}, NO_DECORATOR, nasm_bytecodes+10448, 202},
    {I_VFNMSUBPD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+10456, 202},
    {I_VFNMSUBPD, 4, {YMM_L16,YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0}, NO_DECORATOR, nasm_bytecodes+10464, 202},
    {I_VFNMSUBPD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+10472, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUBPS[] = {
    {I_VFNMSUBPS, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0}, NO_DECORATOR, nasm_bytecodes+10480, 202},
    {I_VFNMSUBPS, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+10488, 202},
    {I_VFNMSUBPS, 4, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,YMM_L16,0}, NO_DECORATOR, nasm_bytecodes+10496, 202},
    {I_VFNMSUBPS, 3, {YMM_L16,RM_YMM_L16|BITS256,YMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+10504, 202},
    {I_VFNMSUBPS, 4, {XMM_L16,XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0}, NO_DECORATOR, nasm_bytecodes+10512, 202},
    {I_VFNMSUBPS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+10520, 202},
    {I_VFNMSUBPS, 4, {YMM_L16,YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0}, NO_DECORATOR, nasm_bytecodes+10528, 202},
    {I_VFNMSUBPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+10536, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUBSD[] = {
    {I_VFNMSUBSD, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,XMM_L16,0}, NO_DECORATOR, nasm_bytecodes+10544, 202},
    {I_VFNMSUBSD, 3, {XMM_L16,RM_XMM_L16|BITS64,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+10552, 202},
    {I_VFNMSUBSD, 4, {XMM_L16,XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0}, NO_DECORATOR, nasm_bytecodes+10560, 202},
    {I_VFNMSUBSD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+10568, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUBSS[] = {
    {I_VFNMSUBSS, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,XMM_L16,0}, NO_DECORATOR, nasm_bytecodes+10576, 202},
    {I_VFNMSUBSS, 3, {XMM_L16,RM_XMM_L16|BITS32,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+10584, 202},
    {I_VFNMSUBSS, 4, {XMM_L16,XMM_L16,XMM_L16,RM_XMM_L16|BITS32,0}, NO_DECORATOR, nasm_bytecodes+10592, 202},
    {I_VFNMSUBSS, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+10600, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFRCZPD[] = {
    {I_VFRCZPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+30503, 202},
    {I_VFRCZPD, 1, {XMM_L16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+30510, 202},
    {I_VFRCZPD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+30517, 202},
    {I_VFRCZPD, 1, {YMM_L16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+30524, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFRCZPS[] = {
    {I_VFRCZPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+30531, 202},
    {I_VFRCZPS, 1, {XMM_L16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+30538, 202},
    {I_VFRCZPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+30545, 202},
    {I_VFRCZPS, 1, {YMM_L16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+30552, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFRCZSD[] = {
    {I_VFRCZSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+30559, 202},
    {I_VFRCZSD, 1, {XMM_L16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+30566, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFRCZSS[] = {
    {I_VFRCZSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+30573, 202},
    {I_VFRCZSS, 1, {XMM_L16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+30580, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMOV[] = {
    {I_VPCMOV, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0}, NO_DECORATOR, nasm_bytecodes+10608, 202},
    {I_VPCMOV, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+10616, 202},
    {I_VPCMOV, 4, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,YMM_L16,0}, NO_DECORATOR, nasm_bytecodes+10624, 202},
    {I_VPCMOV, 3, {YMM_L16,RM_YMM_L16|BITS256,YMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+10632, 202},
    {I_VPCMOV, 4, {XMM_L16,XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0}, NO_DECORATOR, nasm_bytecodes+10640, 202},
    {I_VPCMOV, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+10648, 202},
    {I_VPCMOV, 4, {YMM_L16,YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0}, NO_DECORATOR, nasm_bytecodes+10656, 202},
    {I_VPCMOV, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+10664, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCOMB[] = {
    {I_VPCOMB, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+10672, 202},
    {I_VPCOMB, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+10680, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCOMD[] = {
    {I_VPCOMD, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+10688, 202},
    {I_VPCOMD, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+10696, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCOMQ[] = {
    {I_VPCOMQ, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+10704, 202},
    {I_VPCOMQ, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+10712, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCOMUB[] = {
    {I_VPCOMUB, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+10720, 202},
    {I_VPCOMUB, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+10728, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCOMUD[] = {
    {I_VPCOMUD, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+10736, 202},
    {I_VPCOMUD, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+10744, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCOMUQ[] = {
    {I_VPCOMUQ, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+10752, 202},
    {I_VPCOMUQ, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+10760, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCOMUW[] = {
    {I_VPCOMUW, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+10768, 202},
    {I_VPCOMUW, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+10776, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCOMW[] = {
    {I_VPCOMW, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+10784, 202},
    {I_VPCOMW, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+10792, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDBD[] = {
    {I_VPHADDBD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+30587, 202},
    {I_VPHADDBD, 1, {XMM_L16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+30594, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDBQ[] = {
    {I_VPHADDBQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+30601, 202},
    {I_VPHADDBQ, 1, {XMM_L16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+30608, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDBW[] = {
    {I_VPHADDBW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+30615, 202},
    {I_VPHADDBW, 1, {XMM_L16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+30622, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDDQ[] = {
    {I_VPHADDDQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+30629, 202},
    {I_VPHADDDQ, 1, {XMM_L16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+30636, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDUBD[] = {
    {I_VPHADDUBD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+30643, 202},
    {I_VPHADDUBD, 1, {XMM_L16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+30650, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDUBQ[] = {
    {I_VPHADDUBQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+30657, 202},
    {I_VPHADDUBQ, 1, {XMM_L16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+30664, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDUBW[] = {
    {I_VPHADDUBW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+30671, 202},
    {I_VPHADDUBW, 1, {XMM_L16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+30678, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDUDQ[] = {
    {I_VPHADDUDQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+30685, 202},
    {I_VPHADDUDQ, 1, {XMM_L16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+30692, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDUWD[] = {
    {I_VPHADDUWD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+30699, 202},
    {I_VPHADDUWD, 1, {XMM_L16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+30706, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDUWQ[] = {
    {I_VPHADDUWQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+30713, 202},
    {I_VPHADDUWQ, 1, {XMM_L16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+30720, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDWD[] = {
    {I_VPHADDWD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+30727, 202},
    {I_VPHADDWD, 1, {XMM_L16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+30734, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDWQ[] = {
    {I_VPHADDWQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+30741, 202},
    {I_VPHADDWQ, 1, {XMM_L16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+30748, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHSUBBW[] = {
    {I_VPHSUBBW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+30755, 202},
    {I_VPHSUBBW, 1, {XMM_L16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+30762, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHSUBDQ[] = {
    {I_VPHSUBDQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+30769, 202},
    {I_VPHSUBDQ, 1, {XMM_L16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+30776, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHSUBWD[] = {
    {I_VPHSUBWD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+30783, 202},
    {I_VPHSUBWD, 1, {XMM_L16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+30790, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMACSDD[] = {
    {I_VPMACSDD, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0}, NO_DECORATOR, nasm_bytecodes+10800, 202},
    {I_VPMACSDD, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+10808, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMACSDQH[] = {
    {I_VPMACSDQH, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0}, NO_DECORATOR, nasm_bytecodes+10816, 202},
    {I_VPMACSDQH, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+10824, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMACSDQL[] = {
    {I_VPMACSDQL, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0}, NO_DECORATOR, nasm_bytecodes+10832, 202},
    {I_VPMACSDQL, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+10840, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMACSSDD[] = {
    {I_VPMACSSDD, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0}, NO_DECORATOR, nasm_bytecodes+10848, 202},
    {I_VPMACSSDD, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+10856, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMACSSDQH[] = {
    {I_VPMACSSDQH, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0}, NO_DECORATOR, nasm_bytecodes+10864, 202},
    {I_VPMACSSDQH, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+10872, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMACSSDQL[] = {
    {I_VPMACSSDQL, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0}, NO_DECORATOR, nasm_bytecodes+10880, 202},
    {I_VPMACSSDQL, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+10888, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMACSSWD[] = {
    {I_VPMACSSWD, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0}, NO_DECORATOR, nasm_bytecodes+10896, 202},
    {I_VPMACSSWD, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+10904, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMACSSWW[] = {
    {I_VPMACSSWW, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0}, NO_DECORATOR, nasm_bytecodes+10912, 202},
    {I_VPMACSSWW, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+10920, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMACSWD[] = {
    {I_VPMACSWD, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0}, NO_DECORATOR, nasm_bytecodes+10928, 202},
    {I_VPMACSWD, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+10936, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMACSWW[] = {
    {I_VPMACSWW, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0}, NO_DECORATOR, nasm_bytecodes+10944, 202},
    {I_VPMACSWW, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+10952, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMADCSSWD[] = {
    {I_VPMADCSSWD, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0}, NO_DECORATOR, nasm_bytecodes+10960, 202},
    {I_VPMADCSSWD, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+10968, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMADCSWD[] = {
    {I_VPMADCSWD, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0}, NO_DECORATOR, nasm_bytecodes+10976, 202},
    {I_VPMADCSWD, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+10984, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPPERM[] = {
    {I_VPPERM, 4, {XMM_L16,XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0}, NO_DECORATOR, nasm_bytecodes+10992, 202},
    {I_VPPERM, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+11000, 202},
    {I_VPPERM, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0}, NO_DECORATOR, nasm_bytecodes+11008, 202},
    {I_VPPERM, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+11016, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPROTB[] = {
    {I_VPROTB, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+30797, 202},
    {I_VPROTB, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+30804, 202},
    {I_VPROTB, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+30811, 202},
    {I_VPROTB, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+30818, 202},
    {I_VPROTB, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+11024, 202},
    {I_VPROTB, 2, {XMM_L16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+11032, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPROTD[] = {
    {I_VPROTD, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+30825, 202},
    {I_VPROTD, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+30832, 202},
    {I_VPROTD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+30839, 202},
    {I_VPROTD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+30846, 202},
    {I_VPROTD, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+11040, 202},
    {I_VPROTD, 2, {XMM_L16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+11048, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPROTQ[] = {
    {I_VPROTQ, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+30853, 202},
    {I_VPROTQ, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+30860, 202},
    {I_VPROTQ, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+30867, 202},
    {I_VPROTQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+30874, 202},
    {I_VPROTQ, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+11056, 202},
    {I_VPROTQ, 2, {XMM_L16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+11064, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPROTW[] = {
    {I_VPROTW, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+30881, 202},
    {I_VPROTW, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+30888, 202},
    {I_VPROTW, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+30895, 202},
    {I_VPROTW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+30902, 202},
    {I_VPROTW, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+11072, 202},
    {I_VPROTW, 2, {XMM_L16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+11080, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSHAB[] = {
    {I_VPSHAB, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+30909, 202},
    {I_VPSHAB, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+30916, 202},
    {I_VPSHAB, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+30923, 202},
    {I_VPSHAB, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+30930, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSHAD[] = {
    {I_VPSHAD, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+30937, 202},
    {I_VPSHAD, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+30944, 202},
    {I_VPSHAD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+30951, 202},
    {I_VPSHAD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+30958, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSHAQ[] = {
    {I_VPSHAQ, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+30965, 202},
    {I_VPSHAQ, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+30972, 202},
    {I_VPSHAQ, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+30979, 202},
    {I_VPSHAQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+30986, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSHAW[] = {
    {I_VPSHAW, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+30993, 202},
    {I_VPSHAW, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+31000, 202},
    {I_VPSHAW, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+31007, 202},
    {I_VPSHAW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+31014, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSHLB[] = {
    {I_VPSHLB, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+31021, 202},
    {I_VPSHLB, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+31028, 202},
    {I_VPSHLB, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+31035, 202},
    {I_VPSHLB, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+31042, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSHLD[] = {
    {I_VPSHLD, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+31049, 202},
    {I_VPSHLD, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+31056, 202},
    {I_VPSHLD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+31063, 202},
    {I_VPSHLD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+31070, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSHLQ[] = {
    {I_VPSHLQ, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+31077, 202},
    {I_VPSHLQ, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+31084, 202},
    {I_VPSHLQ, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+31091, 202},
    {I_VPSHLQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+31098, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSHLW[] = {
    {I_VPSHLW, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+31105, 202},
    {I_VPSHLW, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+31112, 202},
    {I_VPSHLW, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+31119, 202},
    {I_VPSHLW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+31126, 202},
    ITEMPLATE_END
};

static const struct itemplate instrux_VBROADCASTI128[] = {
    {I_VBROADCASTI128, 2, {YMM_L16,MEMORY|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+32400, 203},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPBLENDD[] = {
    {I_VPBLENDD, 4, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+11336, 203},
    {I_VPBLENDD, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+11344, 203},
    {I_VPBLENDD, 4, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+11352, 203},
    {I_VPBLENDD, 3, {YMM_L16,RM_YMM_L16|BITS256,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+11360, 203},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPBROADCASTB[] = {
    {I_VPBROADCASTB, 2, {XMM_L16,MEMORY|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+32407, 203},
    {I_VPBROADCASTB, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+32407, 203},
    {I_VPBROADCASTB, 2, {YMM_L16,MEMORY|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+32414, 203},
    {I_VPBROADCASTB, 2, {YMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+32414, 203},
    {I_VPBROADCASTB, 2, {XMMREG,RM_XMM|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17064, 229},
    {I_VPBROADCASTB, 2, {YMMREG,RM_XMM|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17072, 229},
    {I_VPBROADCASTB, 2, {ZMMREG,RM_XMM|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17080, 230},
    {I_VPBROADCASTB, 2, {XMMREG,REG_GPR|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17088, 229},
    {I_VPBROADCASTB, 2, {XMMREG,REG_GPR|BITS16,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17088, 229},
    {I_VPBROADCASTB, 2, {XMMREG,REG_GPR|BITS32,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17088, 229},
    {I_VPBROADCASTB, 2, {XMMREG,REG_GPR|BITS64,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17088, 229},
    {I_VPBROADCASTB, 2, {YMMREG,REG_GPR|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17096, 229},
    {I_VPBROADCASTB, 2, {YMMREG,REG_GPR|BITS16,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17096, 229},
    {I_VPBROADCASTB, 2, {YMMREG,REG_GPR|BITS32,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17096, 229},
    {I_VPBROADCASTB, 2, {YMMREG,REG_GPR|BITS64,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17096, 229},
    {I_VPBROADCASTB, 2, {ZMMREG,REG_GPR|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17104, 230},
    {I_VPBROADCASTB, 2, {ZMMREG,REG_GPR|BITS16,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17104, 230},
    {I_VPBROADCASTB, 2, {ZMMREG,REG_GPR|BITS32,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17104, 230},
    {I_VPBROADCASTB, 2, {ZMMREG,REG_GPR|BITS64,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17104, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPBROADCASTW[] = {
    {I_VPBROADCASTW, 2, {XMM_L16,MEMORY|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+32421, 203},
    {I_VPBROADCASTW, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+32421, 203},
    {I_VPBROADCASTW, 2, {YMM_L16,MEMORY|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+32428, 203},
    {I_VPBROADCASTW, 2, {YMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+32428, 203},
    {I_VPBROADCASTW, 2, {XMMREG,RM_XMM|BITS16,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17304, 229},
    {I_VPBROADCASTW, 2, {YMMREG,RM_XMM|BITS16,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17312, 229},
    {I_VPBROADCASTW, 2, {ZMMREG,RM_XMM|BITS16,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17320, 230},
    {I_VPBROADCASTW, 2, {XMMREG,REG_GPR|BITS16,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17328, 229},
    {I_VPBROADCASTW, 2, {XMMREG,REG_GPR|BITS32,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17328, 229},
    {I_VPBROADCASTW, 2, {XMMREG,REG_GPR|BITS64,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17328, 229},
    {I_VPBROADCASTW, 2, {YMMREG,REG_GPR|BITS16,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17336, 229},
    {I_VPBROADCASTW, 2, {YMMREG,REG_GPR|BITS32,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17336, 229},
    {I_VPBROADCASTW, 2, {YMMREG,REG_GPR|BITS64,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17336, 229},
    {I_VPBROADCASTW, 2, {ZMMREG,REG_GPR|BITS16,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17344, 230},
    {I_VPBROADCASTW, 2, {ZMMREG,REG_GPR|BITS32,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17344, 230},
    {I_VPBROADCASTW, 2, {ZMMREG,REG_GPR|BITS64,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17344, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPBROADCASTD[] = {
    {I_VPBROADCASTD, 2, {XMM_L16,MEMORY|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+32435, 203},
    {I_VPBROADCASTD, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+32435, 203},
    {I_VPBROADCASTD, 2, {YMM_L16,MEMORY|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+32442, 203},
    {I_VPBROADCASTD, 2, {YMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+32442, 203},
    {I_VPBROADCASTD, 2, {XMMREG,MEMORY|BITS32,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17112, 225},
    {I_VPBROADCASTD, 2, {YMMREG,MEMORY|BITS32,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17120, 225},
    {I_VPBROADCASTD, 2, {ZMMREG,MEMORY|BITS32,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17128, 226},
    {I_VPBROADCASTD, 2, {XMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17136, 225},
    {I_VPBROADCASTD, 2, {YMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17144, 225},
    {I_VPBROADCASTD, 2, {ZMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17152, 226},
    {I_VPBROADCASTD, 2, {XMMREG,REG_GPR|BITS32,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17160, 225},
    {I_VPBROADCASTD, 2, {YMMREG,REG_GPR|BITS32,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17168, 225},
    {I_VPBROADCASTD, 2, {ZMMREG,REG_GPR|BITS32,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17176, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPBROADCASTQ[] = {
    {I_VPBROADCASTQ, 2, {XMM_L16,MEMORY|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+32449, 203},
    {I_VPBROADCASTQ, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+32449, 203},
    {I_VPBROADCASTQ, 2, {YMM_L16,MEMORY|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+32456, 203},
    {I_VPBROADCASTQ, 2, {YMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+32456, 203},
    {I_VPBROADCASTQ, 2, {XMMREG,MEMORY|BITS64,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17232, 225},
    {I_VPBROADCASTQ, 2, {YMMREG,MEMORY|BITS64,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17240, 225},
    {I_VPBROADCASTQ, 2, {ZMMREG,MEMORY|BITS64,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17248, 226},
    {I_VPBROADCASTQ, 2, {XMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17256, 225},
    {I_VPBROADCASTQ, 2, {YMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17264, 225},
    {I_VPBROADCASTQ, 2, {ZMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17272, 226},
    {I_VPBROADCASTQ, 2, {XMMREG,REG_GPR|BITS64,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17280, 225},
    {I_VPBROADCASTQ, 2, {YMMREG,REG_GPR|BITS64,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17288, 225},
    {I_VPBROADCASTQ, 2, {ZMMREG,REG_GPR|BITS64,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17296, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPERMD[] = {
    {I_VPERMD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+32463, 203},
    {I_VPERMD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+32470, 203},
    {I_VPERMD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+17736, 225},
    {I_VPERMD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+17744, 225},
    {I_VPERMD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+17752, 226},
    {I_VPERMD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+17760, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPERMPD[] = {
    {I_VPERMPD, 3, {YMM_L16,RM_YMM_L16|BITS256,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+11368, 203},
    {I_VPERMPD, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+5514, 225},
    {I_VPERMPD, 3, {ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+5523, 226},
    {I_VPERMPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+18008, 225},
    {I_VPERMPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+18016, 225},
    {I_VPERMPD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+18024, 226},
    {I_VPERMPD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+18032, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPERMPS[] = {
    {I_VPERMPS, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+32477, 203},
    {I_VPERMPS, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+32484, 203},
    {I_VPERMPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+18040, 225},
    {I_VPERMPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+18048, 225},
    {I_VPERMPS, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+18056, 226},
    {I_VPERMPS, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+18064, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPERMQ[] = {
    {I_VPERMQ, 3, {YMM_L16,RM_YMM_L16|BITS256,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+11376, 203},
    {I_VPERMQ, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+5532, 225},
    {I_VPERMQ, 3, {ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+5541, 226},
    {I_VPERMQ, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+18072, 225},
    {I_VPERMQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+18080, 225},
    {I_VPERMQ, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+18088, 226},
    {I_VPERMQ, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+18096, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPERM2I128[] = {
    {I_VPERM2I128, 4, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+11384, 203},
    {I_VPERM2I128, 3, {YMM_L16,RM_YMM_L16|BITS256,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+11392, 203},
    ITEMPLATE_END
};

static const struct itemplate instrux_VEXTRACTI128[] = {
    {I_VEXTRACTI128, 3, {RM_XMM_L16|BITS128,YMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+11400, 203},
    ITEMPLATE_END
};

static const struct itemplate instrux_VINSERTI128[] = {
    {I_VINSERTI128, 4, {YMM_L16,YMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0}, NO_DECORATOR, nasm_bytecodes+11408, 203},
    {I_VINSERTI128, 3, {YMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+11416, 203},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMASKMOVD[] = {
    {I_VPMASKMOVD, 3, {XMM_L16,XMM_L16,MEMORY|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+32491, 203},
    {I_VPMASKMOVD, 2, {XMM_L16,MEMORY|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+32498, 203},
    {I_VPMASKMOVD, 3, {YMM_L16,YMM_L16,MEMORY|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+32505, 203},
    {I_VPMASKMOVD, 2, {YMM_L16,MEMORY|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+32512, 203},
    {I_VPMASKMOVD, 3, {MEMORY|BITS128,XMM_L16,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+32547, 203},
    {I_VPMASKMOVD, 2, {MEMORY|BITS128,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+32554, 203},
    {I_VPMASKMOVD, 3, {MEMORY|BITS256,YMM_L16,YMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+32561, 203},
    {I_VPMASKMOVD, 2, {MEMORY|BITS256,YMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+32568, 203},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMASKMOVQ[] = {
    {I_VPMASKMOVQ, 3, {XMM_L16,XMM_L16,MEMORY|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+32519, 203},
    {I_VPMASKMOVQ, 2, {XMM_L16,MEMORY|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+32526, 203},
    {I_VPMASKMOVQ, 3, {YMM_L16,YMM_L16,MEMORY|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+32533, 203},
    {I_VPMASKMOVQ, 2, {YMM_L16,MEMORY|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+32540, 203},
    {I_VPMASKMOVQ, 3, {MEMORY|BITS128,XMM_L16,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+32575, 203},
    {I_VPMASKMOVQ, 2, {MEMORY|BITS128,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+32582, 203},
    {I_VPMASKMOVQ, 3, {MEMORY|BITS256,YMM_L16,YMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+32589, 203},
    {I_VPMASKMOVQ, 2, {MEMORY|BITS256,YMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+32596, 203},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSLLVD[] = {
    {I_VPSLLVD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+32603, 203},
    {I_VPSLLVD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+32610, 203},
    {I_VPSLLVD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+32631, 203},
    {I_VPSLLVD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+32638, 203},
    {I_VPSLLVD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+21560, 225},
    {I_VPSLLVD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+21568, 225},
    {I_VPSLLVD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+21576, 225},
    {I_VPSLLVD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+21584, 225},
    {I_VPSLLVD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+21592, 226},
    {I_VPSLLVD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+21600, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSLLVQ[] = {
    {I_VPSLLVQ, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+32617, 203},
    {I_VPSLLVQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+32624, 203},
    {I_VPSLLVQ, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+32645, 203},
    {I_VPSLLVQ, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+32652, 203},
    {I_VPSLLVQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+21608, 225},
    {I_VPSLLVQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+21616, 225},
    {I_VPSLLVQ, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+21624, 225},
    {I_VPSLLVQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+21632, 225},
    {I_VPSLLVQ, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+21640, 226},
    {I_VPSLLVQ, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+21648, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSRAVD[] = {
    {I_VPSRAVD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+32659, 203},
    {I_VPSRAVD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+32666, 203},
    {I_VPSRAVD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+32673, 203},
    {I_VPSRAVD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+32680, 203},
    {I_VPSRAVD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+21848, 225},
    {I_VPSRAVD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+21856, 225},
    {I_VPSRAVD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+21864, 225},
    {I_VPSRAVD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+21872, 225},
    {I_VPSRAVD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+21880, 226},
    {I_VPSRAVD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+21888, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSRLVD[] = {
    {I_VPSRLVD, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+32687, 203},
    {I_VPSRLVD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+32694, 203},
    {I_VPSRLVD, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+32715, 203},
    {I_VPSRLVD, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+32722, 203},
    {I_VPSRLVD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+22136, 225},
    {I_VPSRLVD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+22144, 225},
    {I_VPSRLVD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+22152, 225},
    {I_VPSRLVD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+22160, 225},
    {I_VPSRLVD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+22168, 226},
    {I_VPSRLVD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+22176, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSRLVQ[] = {
    {I_VPSRLVQ, 3, {XMM_L16,XMM_L16,RM_XMM_L16|BITS128,0,0}, NO_DECORATOR, nasm_bytecodes+32701, 203},
    {I_VPSRLVQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+32708, 203},
    {I_VPSRLVQ, 3, {YMM_L16,YMM_L16,RM_YMM_L16|BITS256,0,0}, NO_DECORATOR, nasm_bytecodes+32729, 203},
    {I_VPSRLVQ, 2, {YMM_L16,RM_YMM_L16|BITS256,0,0,0}, NO_DECORATOR, nasm_bytecodes+32736, 203},
    {I_VPSRLVQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+22184, 225},
    {I_VPSRLVQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+22192, 225},
    {I_VPSRLVQ, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+22200, 225},
    {I_VPSRLVQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+22208, 225},
    {I_VPSRLVQ, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+22216, 226},
    {I_VPSRLVQ, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+22224, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VGATHERDPD[] = {
    {I_VGATHERDPD, 3, {XMM_L16,XMEM|BITS64,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+11424, 203},
    {I_VGATHERDPD, 3, {YMM_L16,XMEM|BITS64,YMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+11440, 203},
    {I_VGATHERDPD, 2, {XMMREG,XMEM|BITS64,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+4704, 225},
    {I_VGATHERDPD, 2, {YMMREG,XMEM|BITS64,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+4713, 225},
    {I_VGATHERDPD, 2, {ZMMREG,YMEM|BITS64,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+4722, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VGATHERQPD[] = {
    {I_VGATHERQPD, 3, {XMM_L16,XMEM|BITS64,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+11432, 203},
    {I_VGATHERQPD, 3, {YMM_L16,YMEM|BITS64,YMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+11448, 203},
    {I_VGATHERQPD, 2, {XMMREG,XMEM|BITS64,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+4830, 225},
    {I_VGATHERQPD, 2, {YMMREG,YMEM|BITS64,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+4839, 225},
    {I_VGATHERQPD, 2, {ZMMREG,ZMEM|BITS64,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+4848, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VGATHERDPS[] = {
    {I_VGATHERDPS, 3, {XMM_L16,XMEM|BITS32,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+11456, 203},
    {I_VGATHERDPS, 3, {YMM_L16,YMEM|BITS32,YMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+11472, 203},
    {I_VGATHERDPS, 2, {XMMREG,XMEM|BITS32,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+4731, 225},
    {I_VGATHERDPS, 2, {YMMREG,YMEM|BITS32,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+4740, 225},
    {I_VGATHERDPS, 2, {ZMMREG,ZMEM|BITS32,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+4749, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VGATHERQPS[] = {
    {I_VGATHERQPS, 3, {XMM_L16,XMEM|BITS32,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+11464, 203},
    {I_VGATHERQPS, 3, {XMM_L16,YMEM|BITS32,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+11480, 203},
    {I_VGATHERQPS, 2, {XMMREG,XMEM|BITS32,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+4857, 225},
    {I_VGATHERQPS, 2, {XMMREG,YMEM|BITS32,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+4866, 225},
    {I_VGATHERQPS, 2, {YMMREG,ZMEM|BITS32,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+4875, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPGATHERDD[] = {
    {I_VPGATHERDD, 3, {XMM_L16,XMEM|BITS32,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+11488, 203},
    {I_VPGATHERDD, 3, {YMM_L16,YMEM|BITS32,YMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+11504, 203},
    {I_VPGATHERDD, 2, {XMMREG,XMEM|BITS32,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+5595, 225},
    {I_VPGATHERDD, 2, {YMMREG,YMEM|BITS32,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+5604, 225},
    {I_VPGATHERDD, 2, {ZMMREG,ZMEM|BITS32,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+5613, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPGATHERQD[] = {
    {I_VPGATHERQD, 3, {XMM_L16,XMEM|BITS32,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+11496, 203},
    {I_VPGATHERQD, 3, {XMM_L16,YMEM|BITS32,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+11512, 203},
    {I_VPGATHERQD, 2, {XMMREG,XMEM|BITS32,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+5649, 225},
    {I_VPGATHERQD, 2, {XMMREG,YMEM|BITS32,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+5658, 225},
    {I_VPGATHERQD, 2, {YMMREG,ZMEM|BITS32,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+5667, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPGATHERDQ[] = {
    {I_VPGATHERDQ, 3, {XMM_L16,XMEM|BITS64,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+11520, 203},
    {I_VPGATHERDQ, 3, {YMM_L16,XMEM|BITS64,YMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+11536, 203},
    {I_VPGATHERDQ, 2, {XMMREG,XMEM|BITS64,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+5622, 225},
    {I_VPGATHERDQ, 2, {YMMREG,XMEM|BITS64,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+5631, 225},
    {I_VPGATHERDQ, 2, {ZMMREG,YMEM|BITS64,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+5640, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPGATHERQQ[] = {
    {I_VPGATHERQQ, 3, {XMM_L16,XMEM|BITS64,XMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+11528, 203},
    {I_VPGATHERQQ, 3, {YMM_L16,YMEM|BITS64,YMM_L16,0,0}, NO_DECORATOR, nasm_bytecodes+11544, 203},
    {I_VPGATHERQQ, 2, {XMMREG,XMEM|BITS64,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+5676, 225},
    {I_VPGATHERQQ, 2, {YMMREG,YMEM|BITS64,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+5685, 225},
    {I_VPGATHERQQ, 2, {ZMMREG,ZMEM|BITS64,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+5694, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_XABORT[] = {
    {I_XABORT, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38920, 204},
    {I_XABORT, 1, {IMMEDIATE|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38920, 204},
    ITEMPLATE_END
};

static const struct itemplate instrux_XBEGIN[] = {
    {I_XBEGIN, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+35902, 204},
    {I_XBEGIN, 1, {IMMEDIATE|NEAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+35902, 204},
    {I_XBEGIN, 1, {IMMEDIATE|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+35908, 205},
    {I_XBEGIN, 1, {IMMEDIATE|BITS16|NEAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+35908, 205},
    {I_XBEGIN, 1, {IMMEDIATE|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+35914, 205},
    {I_XBEGIN, 1, {IMMEDIATE|BITS32|NEAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+35914, 205},
    {I_XBEGIN, 1, {IMMEDIATE|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+35920, 206},
    {I_XBEGIN, 1, {IMMEDIATE|BITS64|NEAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+35920, 206},
    ITEMPLATE_END
};

static const struct itemplate instrux_XEND[] = {
    {I_XEND, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38925, 204},
    ITEMPLATE_END
};

static const struct itemplate instrux_XTEST[] = {
    {I_XTEST, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38930, 207},
    ITEMPLATE_END
};

static const struct itemplate instrux_ANDN[] = {
    {I_ANDN, 3, {REG_GPR|BITS32,REG_GPR|BITS32,RM_GPR|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+32743, 208},
    {I_ANDN, 3, {REG_GPR|BITS64,REG_GPR|BITS64,RM_GPR|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+32750, 209},
    ITEMPLATE_END
};

static const struct itemplate instrux_BEXTR[] = {
    {I_BEXTR, 3, {REG_GPR|BITS32,RM_GPR|BITS32,REG_GPR|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+32757, 208},
    {I_BEXTR, 3, {REG_GPR|BITS64,RM_GPR|BITS64,REG_GPR|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+32764, 209},
    {I_BEXTR, 3, {REG_GPR|BITS32,RM_GPR|BITS32,IMMEDIATE|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+11552, 210},
    {I_BEXTR, 3, {REG_GPR|BITS64,RM_GPR|BITS64,IMMEDIATE|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+11560, 211},
    ITEMPLATE_END
};

static const struct itemplate instrux_BLCI[] = {
    {I_BLCI, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+32771, 210},
    {I_BLCI, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+32778, 211},
    ITEMPLATE_END
};

static const struct itemplate instrux_BLCIC[] = {
    {I_BLCIC, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+32785, 210},
    {I_BLCIC, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+32792, 211},
    ITEMPLATE_END
};

static const struct itemplate instrux_BLSI[] = {
    {I_BLSI, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+32799, 208},
    {I_BLSI, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+32806, 209},
    ITEMPLATE_END
};

static const struct itemplate instrux_BLSIC[] = {
    {I_BLSIC, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+32813, 210},
    {I_BLSIC, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+32820, 211},
    ITEMPLATE_END
};

static const struct itemplate instrux_BLCFILL[] = {
    {I_BLCFILL, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+32827, 210},
    {I_BLCFILL, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+32834, 211},
    ITEMPLATE_END
};

static const struct itemplate instrux_BLSFILL[] = {
    {I_BLSFILL, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+32841, 210},
    {I_BLSFILL, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+32848, 211},
    ITEMPLATE_END
};

static const struct itemplate instrux_BLCMSK[] = {
    {I_BLCMSK, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+32855, 210},
    {I_BLCMSK, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+32862, 211},
    ITEMPLATE_END
};

static const struct itemplate instrux_BLSMSK[] = {
    {I_BLSMSK, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+32869, 208},
    {I_BLSMSK, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+32876, 209},
    ITEMPLATE_END
};

static const struct itemplate instrux_BLSR[] = {
    {I_BLSR, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+32883, 208},
    {I_BLSR, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+32890, 209},
    ITEMPLATE_END
};

static const struct itemplate instrux_BLCS[] = {
    {I_BLCS, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+32897, 210},
    {I_BLCS, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+32904, 211},
    ITEMPLATE_END
};

static const struct itemplate instrux_BZHI[] = {
    {I_BZHI, 3, {REG_GPR|BITS32,RM_GPR|BITS32,REG_GPR|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+32911, 212},
    {I_BZHI, 3, {REG_GPR|BITS64,RM_GPR|BITS64,REG_GPR|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+32918, 213},
    ITEMPLATE_END
};

static const struct itemplate instrux_MULX[] = {
    {I_MULX, 3, {REG_GPR|BITS32,REG_GPR|BITS32,RM_GPR|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+32925, 212},
    {I_MULX, 3, {REG_GPR|BITS64,REG_GPR|BITS64,RM_GPR|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+32932, 213},
    ITEMPLATE_END
};

static const struct itemplate instrux_PDEP[] = {
    {I_PDEP, 3, {REG_GPR|BITS32,REG_GPR|BITS32,RM_GPR|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+32939, 212},
    {I_PDEP, 3, {REG_GPR|BITS64,REG_GPR|BITS64,RM_GPR|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+32946, 213},
    ITEMPLATE_END
};

static const struct itemplate instrux_PEXT[] = {
    {I_PEXT, 3, {REG_GPR|BITS32,REG_GPR|BITS32,RM_GPR|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+32953, 212},
    {I_PEXT, 3, {REG_GPR|BITS64,REG_GPR|BITS64,RM_GPR|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+32960, 213},
    ITEMPLATE_END
};

static const struct itemplate instrux_RORX[] = {
    {I_RORX, 3, {REG_GPR|BITS32,RM_GPR|BITS32,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+11568, 212},
    {I_RORX, 3, {REG_GPR|BITS64,RM_GPR|BITS64,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+11576, 213},
    ITEMPLATE_END
};

static const struct itemplate instrux_SARX[] = {
    {I_SARX, 3, {REG_GPR|BITS32,RM_GPR|BITS32,REG_GPR|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+32967, 212},
    {I_SARX, 3, {REG_GPR|BITS64,RM_GPR|BITS64,REG_GPR|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+32974, 213},
    ITEMPLATE_END
};

static const struct itemplate instrux_SHLX[] = {
    {I_SHLX, 3, {REG_GPR|BITS32,RM_GPR|BITS32,REG_GPR|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+32981, 212},
    {I_SHLX, 3, {REG_GPR|BITS64,RM_GPR|BITS64,REG_GPR|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+32988, 213},
    ITEMPLATE_END
};

static const struct itemplate instrux_SHRX[] = {
    {I_SHRX, 3, {REG_GPR|BITS32,RM_GPR|BITS32,REG_GPR|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+32995, 212},
    {I_SHRX, 3, {REG_GPR|BITS64,RM_GPR|BITS64,REG_GPR|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+33002, 213},
    ITEMPLATE_END
};

static const struct itemplate instrux_TZCNT[] = {
    {I_TZCNT, 2, {REG_GPR|BITS16,RM_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+33009, 214},
    {I_TZCNT, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+33016, 214},
    {I_TZCNT, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+33023, 215},
    ITEMPLATE_END
};

static const struct itemplate instrux_TZMSK[] = {
    {I_TZMSK, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+33030, 210},
    {I_TZMSK, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+33037, 211},
    ITEMPLATE_END
};

static const struct itemplate instrux_T1MSKC[] = {
    {I_T1MSKC, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+33044, 210},
    {I_T1MSKC, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+33051, 211},
    ITEMPLATE_END
};

static const struct itemplate instrux_PREFETCHWT1[] = {
    {I_PREFETCHWT1, 1, {MEMORY|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38935, 216},
    ITEMPLATE_END
};

static const struct itemplate instrux_BNDMK[] = {
    {I_BNDMK, 2, {BNDREG,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+35926, 217},
    ITEMPLATE_END
};

static const struct itemplate instrux_BNDCL[] = {
    {I_BNDCL, 2, {BNDREG,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+33059, 218},
    {I_BNDCL, 2, {BNDREG,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+33059, 219},
    {I_BNDCL, 2, {BNDREG,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+33058, 220},
    ITEMPLATE_END
};

static const struct itemplate instrux_BNDCU[] = {
    {I_BNDCU, 2, {BNDREG,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+33066, 218},
    {I_BNDCU, 2, {BNDREG,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+33066, 219},
    {I_BNDCU, 2, {BNDREG,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+33065, 220},
    ITEMPLATE_END
};

static const struct itemplate instrux_BNDCN[] = {
    {I_BNDCN, 2, {BNDREG,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+33073, 218},
    {I_BNDCN, 2, {BNDREG,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+33073, 219},
    {I_BNDCN, 2, {BNDREG,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+33072, 220},
    ITEMPLATE_END
};

static const struct itemplate instrux_BNDMOV[] = {
    {I_BNDMOV, 2, {BNDREG,BNDREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+35932, 218},
    {I_BNDMOV, 2, {BNDREG,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+35932, 218},
    {I_BNDMOV, 2, {BNDREG,BNDREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+35938, 218},
    {I_BNDMOV, 2, {MEMORY,BNDREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+35938, 218},
    ITEMPLATE_END
};

static const struct itemplate instrux_BNDLDX[] = {
    {I_BNDLDX, 2, {BNDREG,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+35933, 217},
    {I_BNDLDX, 3, {BNDREG,MEMORY,REG_GPR|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+35944, 221},
    {I_BNDLDX, 3, {BNDREG,MEMORY,REG_GPR|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+35944, 222},
    ITEMPLATE_END
};

static const struct itemplate instrux_BNDSTX[] = {
    {I_BNDSTX, 2, {MEMORY,BNDREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+35939, 217},
    {I_BNDSTX, 3, {MEMORY,REG_GPR|BITS32,BNDREG,0,0}, NO_DECORATOR, nasm_bytecodes+35950, 221},
    {I_BNDSTX, 3, {MEMORY,REG_GPR|BITS64,BNDREG,0,0}, NO_DECORATOR, nasm_bytecodes+35950, 222},
    {I_BNDSTX, 3, {MEMORY,BNDREG,REG_GPR|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+35956, 221},
    {I_BNDSTX, 3, {MEMORY,BNDREG,REG_GPR|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+35956, 222},
    ITEMPLATE_END
};

static const struct itemplate instrux_SHA1MSG1[] = {
    {I_SHA1MSG1, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+35962, 223},
    ITEMPLATE_END
};

static const struct itemplate instrux_SHA1MSG2[] = {
    {I_SHA1MSG2, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+35968, 223},
    ITEMPLATE_END
};

static const struct itemplate instrux_SHA1NEXTE[] = {
    {I_SHA1NEXTE, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+35974, 223},
    ITEMPLATE_END
};

static const struct itemplate instrux_SHA1RNDS4[] = {
    {I_SHA1RNDS4, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+33079, 223},
    ITEMPLATE_END
};

static const struct itemplate instrux_SHA256MSG1[] = {
    {I_SHA256MSG1, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+35980, 223},
    ITEMPLATE_END
};

static const struct itemplate instrux_SHA256MSG2[] = {
    {I_SHA256MSG2, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+35986, 223},
    ITEMPLATE_END
};

static const struct itemplate instrux_SHA256RNDS2[] = {
    {I_SHA256RNDS2, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM0,0,0}, NO_DECORATOR, nasm_bytecodes+35992, 223},
    {I_SHA256RNDS2, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+35992, 223},
    ITEMPLATE_END
};

static const struct itemplate instrux_KADDB[] = {
    {I_KADDB, 3, {KREG,KREG,KREG,0,0}, NO_DECORATOR, nasm_bytecodes+33086, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KADDD[] = {
    {I_KADDD, 3, {KREG,KREG,KREG,0,0}, NO_DECORATOR, nasm_bytecodes+33093, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KADDQ[] = {
    {I_KADDQ, 3, {KREG,KREG,KREG,0,0}, NO_DECORATOR, nasm_bytecodes+33100, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KADDW[] = {
    {I_KADDW, 3, {KREG,KREG,KREG,0,0}, NO_DECORATOR, nasm_bytecodes+33107, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KANDB[] = {
    {I_KANDB, 3, {KREG,KREG,KREG,0,0}, NO_DECORATOR, nasm_bytecodes+33114, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KANDD[] = {
    {I_KANDD, 3, {KREG,KREG,KREG,0,0}, NO_DECORATOR, nasm_bytecodes+33121, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KANDNB[] = {
    {I_KANDNB, 3, {KREG,KREG,KREG,0,0}, NO_DECORATOR, nasm_bytecodes+33128, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KANDND[] = {
    {I_KANDND, 3, {KREG,KREG,KREG,0,0}, NO_DECORATOR, nasm_bytecodes+33135, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KANDNQ[] = {
    {I_KANDNQ, 3, {KREG,KREG,KREG,0,0}, NO_DECORATOR, nasm_bytecodes+33142, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KANDNW[] = {
    {I_KANDNW, 3, {KREG,KREG,KREG,0,0}, NO_DECORATOR, nasm_bytecodes+33149, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KANDQ[] = {
    {I_KANDQ, 3, {KREG,KREG,KREG,0,0}, NO_DECORATOR, nasm_bytecodes+33156, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KANDW[] = {
    {I_KANDW, 3, {KREG,KREG,KREG,0,0}, NO_DECORATOR, nasm_bytecodes+33163, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KMOVB[] = {
    {I_KMOVB, 2, {KREG,RM_K|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+33170, 224},
    {I_KMOVB, 2, {MEMORY|BITS8,KREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+33177, 224},
    {I_KMOVB, 2, {KREG,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+33184, 224},
    {I_KMOVB, 2, {REG_GPR|BITS32,KREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+33191, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KMOVD[] = {
    {I_KMOVD, 2, {KREG,RM_K|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+33198, 224},
    {I_KMOVD, 2, {MEMORY|BITS32,KREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+33205, 224},
    {I_KMOVD, 2, {KREG,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+33212, 224},
    {I_KMOVD, 2, {REG_GPR|BITS32,KREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+33219, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KMOVQ[] = {
    {I_KMOVQ, 2, {KREG,RM_K|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+33226, 224},
    {I_KMOVQ, 2, {MEMORY|BITS64,KREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+33233, 224},
    {I_KMOVQ, 2, {KREG,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+33240, 224},
    {I_KMOVQ, 2, {REG_GPR|BITS64,KREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+33247, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KMOVW[] = {
    {I_KMOVW, 2, {KREG,RM_K|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+33254, 224},
    {I_KMOVW, 2, {MEMORY|BITS16,KREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+33261, 224},
    {I_KMOVW, 2, {KREG,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+33268, 224},
    {I_KMOVW, 2, {REG_GPR|BITS32,KREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+33275, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KNOTB[] = {
    {I_KNOTB, 2, {KREG,KREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+33282, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KNOTD[] = {
    {I_KNOTD, 2, {KREG,KREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+33289, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KNOTQ[] = {
    {I_KNOTQ, 2, {KREG,KREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+33296, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KNOTW[] = {
    {I_KNOTW, 2, {KREG,KREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+33303, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KORB[] = {
    {I_KORB, 3, {KREG,KREG,KREG,0,0}, NO_DECORATOR, nasm_bytecodes+33310, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KORD[] = {
    {I_KORD, 3, {KREG,KREG,KREG,0,0}, NO_DECORATOR, nasm_bytecodes+33317, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KORQ[] = {
    {I_KORQ, 3, {KREG,KREG,KREG,0,0}, NO_DECORATOR, nasm_bytecodes+33324, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KORTESTB[] = {
    {I_KORTESTB, 2, {KREG,KREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+33331, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KORTESTD[] = {
    {I_KORTESTD, 2, {KREG,KREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+33338, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KORTESTQ[] = {
    {I_KORTESTQ, 2, {KREG,KREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+33345, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KORTESTW[] = {
    {I_KORTESTW, 2, {KREG,KREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+33352, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KORW[] = {
    {I_KORW, 3, {KREG,KREG,KREG,0,0}, NO_DECORATOR, nasm_bytecodes+33359, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KSHIFTLB[] = {
    {I_KSHIFTLB, 3, {KREG,KREG,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+11584, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KSHIFTLD[] = {
    {I_KSHIFTLD, 3, {KREG,KREG,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+11592, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KSHIFTLQ[] = {
    {I_KSHIFTLQ, 3, {KREG,KREG,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+11600, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KSHIFTLW[] = {
    {I_KSHIFTLW, 3, {KREG,KREG,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+11608, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KSHIFTRB[] = {
    {I_KSHIFTRB, 3, {KREG,KREG,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+11616, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KSHIFTRD[] = {
    {I_KSHIFTRD, 3, {KREG,KREG,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+11624, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KSHIFTRQ[] = {
    {I_KSHIFTRQ, 3, {KREG,KREG,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+11632, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KSHIFTRW[] = {
    {I_KSHIFTRW, 3, {KREG,KREG,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+11640, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KTESTB[] = {
    {I_KTESTB, 2, {KREG,KREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+33366, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KTESTD[] = {
    {I_KTESTD, 2, {KREG,KREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+33373, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KTESTQ[] = {
    {I_KTESTQ, 2, {KREG,KREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+33380, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KTESTW[] = {
    {I_KTESTW, 2, {KREG,KREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+33387, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KUNPCKBW[] = {
    {I_KUNPCKBW, 3, {KREG,KREG,KREG,0,0}, NO_DECORATOR, nasm_bytecodes+33394, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KUNPCKDQ[] = {
    {I_KUNPCKDQ, 3, {KREG,KREG,KREG,0,0}, NO_DECORATOR, nasm_bytecodes+33401, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KUNPCKWD[] = {
    {I_KUNPCKWD, 3, {KREG,KREG,KREG,0,0}, NO_DECORATOR, nasm_bytecodes+33408, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KXNORB[] = {
    {I_KXNORB, 3, {KREG,KREG,KREG,0,0}, NO_DECORATOR, nasm_bytecodes+33415, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KXNORD[] = {
    {I_KXNORD, 3, {KREG,KREG,KREG,0,0}, NO_DECORATOR, nasm_bytecodes+33422, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KXNORQ[] = {
    {I_KXNORQ, 3, {KREG,KREG,KREG,0,0}, NO_DECORATOR, nasm_bytecodes+33429, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KXNORW[] = {
    {I_KXNORW, 3, {KREG,KREG,KREG,0,0}, NO_DECORATOR, nasm_bytecodes+33436, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KXORB[] = {
    {I_KXORB, 3, {KREG,KREG,KREG,0,0}, NO_DECORATOR, nasm_bytecodes+33443, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KXORD[] = {
    {I_KXORD, 3, {KREG,KREG,KREG,0,0}, NO_DECORATOR, nasm_bytecodes+33450, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KXORQ[] = {
    {I_KXORQ, 3, {KREG,KREG,KREG,0,0}, NO_DECORATOR, nasm_bytecodes+33457, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_KXORW[] = {
    {I_KXORW, 3, {KREG,KREG,KREG,0,0}, NO_DECORATOR, nasm_bytecodes+33464, 224},
    ITEMPLATE_END
};

static const struct itemplate instrux_VALIGND[] = {
    {I_VALIGND, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+4002, 225},
    {I_VALIGND, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+4011, 225},
    {I_VALIGND, 4, {YMMREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+4020, 225},
    {I_VALIGND, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+4029, 225},
    {I_VALIGND, 4, {ZMMREG,ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+4038, 226},
    {I_VALIGND, 3, {ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+4047, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VALIGNQ[] = {
    {I_VALIGNQ, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+4056, 225},
    {I_VALIGNQ, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+4065, 225},
    {I_VALIGNQ, 4, {YMMREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+4074, 225},
    {I_VALIGNQ, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+4083, 225},
    {I_VALIGNQ, 4, {ZMMREG,ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+4092, 226},
    {I_VALIGNQ, 3, {ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+4101, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VBLENDMPD[] = {
    {I_VBLENDMPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+11968, 225},
    {I_VBLENDMPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+11976, 225},
    {I_VBLENDMPD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+11984, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VBLENDMPS[] = {
    {I_VBLENDMPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+11992, 225},
    {I_VBLENDMPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+12000, 225},
    {I_VBLENDMPS, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+12008, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VBROADCASTF32X2[] = {
    {I_VBROADCASTF32X2, 2, {YMMREG,RM_XMM|BITS64,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+12016, 227},
    {I_VBROADCASTF32X2, 2, {ZMMREG,RM_XMM|BITS64,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+12024, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VBROADCASTF32X4[] = {
    {I_VBROADCASTF32X4, 2, {YMMREG,MEMORY|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+12032, 225},
    {I_VBROADCASTF32X4, 2, {ZMMREG,MEMORY|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+12040, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VBROADCASTF32X8[] = {
    {I_VBROADCASTF32X8, 2, {ZMMREG,MEMORY|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+12048, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VBROADCASTF64X2[] = {
    {I_VBROADCASTF64X2, 2, {YMMREG,MEMORY|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+12056, 227},
    {I_VBROADCASTF64X2, 2, {ZMMREG,MEMORY|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+12064, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VBROADCASTF64X4[] = {
    {I_VBROADCASTF64X4, 2, {ZMMREG,MEMORY|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+12072, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VBROADCASTI32X2[] = {
    {I_VBROADCASTI32X2, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+12080, 227},
    {I_VBROADCASTI32X2, 2, {YMMREG,RM_XMM|BITS64,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+12088, 227},
    {I_VBROADCASTI32X2, 2, {ZMMREG,RM_XMM|BITS64,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+12096, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VBROADCASTI32X4[] = {
    {I_VBROADCASTI32X4, 2, {YMMREG,MEMORY|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+12104, 225},
    {I_VBROADCASTI32X4, 2, {ZMMREG,MEMORY|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+12112, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VBROADCASTI32X8[] = {
    {I_VBROADCASTI32X8, 2, {ZMMREG,MEMORY|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+12120, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VBROADCASTI64X2[] = {
    {I_VBROADCASTI64X2, 2, {YMMREG,MEMORY|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+12128, 227},
    {I_VBROADCASTI64X2, 2, {ZMMREG,MEMORY|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+12136, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VBROADCASTI64X4[] = {
    {I_VBROADCASTI64X4, 2, {ZMMREG,MEMORY|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+12144, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCOMPRESSPD[] = {
    {I_VCOMPRESSPD, 2, {MEMORY|BITS128,XMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+12248, 225},
    {I_VCOMPRESSPD, 2, {MEMORY|BITS256,YMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+12256, 225},
    {I_VCOMPRESSPD, 2, {MEMORY|BITS512,ZMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+12264, 226},
    {I_VCOMPRESSPD, 2, {XMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+12272, 225},
    {I_VCOMPRESSPD, 2, {YMMREG,YMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+12280, 225},
    {I_VCOMPRESSPD, 2, {ZMMREG,ZMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+12288, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCOMPRESSPS[] = {
    {I_VCOMPRESSPS, 2, {MEMORY|BITS128,XMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+12296, 225},
    {I_VCOMPRESSPS, 2, {MEMORY|BITS256,YMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+12304, 225},
    {I_VCOMPRESSPS, 2, {MEMORY|BITS512,ZMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+12312, 226},
    {I_VCOMPRESSPS, 2, {XMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+12320, 225},
    {I_VCOMPRESSPS, 2, {YMMREG,YMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+12328, 225},
    {I_VCOMPRESSPS, 2, {ZMMREG,ZMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+12336, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTPD2QQ[] = {
    {I_VCVTPD2QQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+12440, 227},
    {I_VCVTPD2QQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+12448, 227},
    {I_VCVTPD2QQ, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64|ER,0,0,0}, nasm_bytecodes+12456, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTPD2UDQ[] = {
    {I_VCVTPD2UDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+12464, 225},
    {I_VCVTPD2UDQ, 2, {XMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+12472, 225},
    {I_VCVTPD2UDQ, 2, {YMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64|ER,0,0,0}, nasm_bytecodes+12480, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTPD2UQQ[] = {
    {I_VCVTPD2UQQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+12488, 227},
    {I_VCVTPD2UQQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+12496, 227},
    {I_VCVTPD2UQQ, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64|ER,0,0,0}, nasm_bytecodes+12504, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTPS2QQ[] = {
    {I_VCVTPS2QQ, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+12584, 227},
    {I_VCVTPS2QQ, 2, {YMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+12592, 227},
    {I_VCVTPS2QQ, 2, {ZMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32|ER,0,0,0}, nasm_bytecodes+12600, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTPS2UDQ[] = {
    {I_VCVTPS2UDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+12608, 225},
    {I_VCVTPS2UDQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+12616, 225},
    {I_VCVTPS2UDQ, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32|ER,0,0,0}, nasm_bytecodes+12624, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTPS2UQQ[] = {
    {I_VCVTPS2UQQ, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+12632, 227},
    {I_VCVTPS2UQQ, 2, {YMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+12640, 227},
    {I_VCVTPS2UQQ, 2, {ZMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32|ER,0,0,0}, nasm_bytecodes+12648, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTQQ2PD[] = {
    {I_VCVTQQ2PD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+12656, 227},
    {I_VCVTQQ2PD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+12664, 227},
    {I_VCVTQQ2PD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64|ER,0,0,0}, nasm_bytecodes+12672, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTQQ2PS[] = {
    {I_VCVTQQ2PS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+12680, 227},
    {I_VCVTQQ2PS, 2, {XMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+12688, 227},
    {I_VCVTQQ2PS, 2, {YMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64|ER,0,0,0}, nasm_bytecodes+12696, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTSD2USI[] = {
    {I_VCVTSD2USI, 2, {REG_GPR|BITS32,RM_XMM|BITS64,0,0,0}, {0,ER,0,0,0}, nasm_bytecodes+12728, 226},
    {I_VCVTSD2USI, 2, {REG_GPR|BITS64,RM_XMM|BITS64,0,0,0}, {0,ER,0,0,0}, nasm_bytecodes+12736, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTSS2USI[] = {
    {I_VCVTSS2USI, 2, {REG_GPR|BITS32,RM_XMM|BITS32,0,0,0}, {0,ER,0,0,0}, nasm_bytecodes+12800, 226},
    {I_VCVTSS2USI, 2, {REG_GPR|BITS64,RM_XMM|BITS32,0,0,0}, {0,ER,0,0,0}, nasm_bytecodes+12808, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTTPD2QQ[] = {
    {I_VCVTTPD2QQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+12840, 227},
    {I_VCVTTPD2QQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+12848, 227},
    {I_VCVTTPD2QQ, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64|SAE,0,0,0}, nasm_bytecodes+12856, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTTPD2UDQ[] = {
    {I_VCVTTPD2UDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+12864, 225},
    {I_VCVTTPD2UDQ, 2, {XMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+12872, 225},
    {I_VCVTTPD2UDQ, 2, {YMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64|SAE,0,0,0}, nasm_bytecodes+12880, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTTPD2UQQ[] = {
    {I_VCVTTPD2UQQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+12888, 227},
    {I_VCVTTPD2UQQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+12896, 227},
    {I_VCVTTPD2UQQ, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64|SAE,0,0,0}, nasm_bytecodes+12904, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTTPS2QQ[] = {
    {I_VCVTTPS2QQ, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+12936, 227},
    {I_VCVTTPS2QQ, 2, {YMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+12944, 227},
    {I_VCVTTPS2QQ, 2, {ZMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32|SAE,0,0,0}, nasm_bytecodes+12952, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTTPS2UDQ[] = {
    {I_VCVTTPS2UDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+12960, 225},
    {I_VCVTTPS2UDQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+12968, 225},
    {I_VCVTTPS2UDQ, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32|SAE,0,0,0}, nasm_bytecodes+12976, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTTPS2UQQ[] = {
    {I_VCVTTPS2UQQ, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+12984, 227},
    {I_VCVTTPS2UQQ, 2, {YMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+12992, 227},
    {I_VCVTTPS2UQQ, 2, {ZMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32|SAE,0,0,0}, nasm_bytecodes+13000, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTTSD2USI[] = {
    {I_VCVTTSD2USI, 2, {REG_GPR|BITS32,RM_XMM|BITS64,0,0,0}, {0,SAE,0,0,0}, nasm_bytecodes+13024, 226},
    {I_VCVTTSD2USI, 2, {REG_GPR|BITS64,RM_XMM|BITS64,0,0,0}, {0,SAE,0,0,0}, nasm_bytecodes+13032, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTTSS2USI[] = {
    {I_VCVTTSS2USI, 2, {REG_GPR|BITS32,RM_XMM|BITS32,0,0,0}, {0,SAE,0,0,0}, nasm_bytecodes+13056, 226},
    {I_VCVTTSS2USI, 2, {REG_GPR|BITS64,RM_XMM|BITS32,0,0,0}, {0,SAE,0,0,0}, nasm_bytecodes+13064, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTUDQ2PD[] = {
    {I_VCVTUDQ2PD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+13072, 225},
    {I_VCVTUDQ2PD, 2, {YMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+13080, 225},
    {I_VCVTUDQ2PD, 2, {ZMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32|ER,0,0,0}, nasm_bytecodes+13088, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTUDQ2PS[] = {
    {I_VCVTUDQ2PS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+13096, 225},
    {I_VCVTUDQ2PS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+13104, 225},
    {I_VCVTUDQ2PS, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32|ER,0,0,0}, nasm_bytecodes+13112, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTUQQ2PD[] = {
    {I_VCVTUQQ2PD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+13120, 227},
    {I_VCVTUQQ2PD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+13128, 227},
    {I_VCVTUQQ2PD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64|ER,0,0,0}, nasm_bytecodes+13136, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTUQQ2PS[] = {
    {I_VCVTUQQ2PS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+13144, 227},
    {I_VCVTUQQ2PS, 2, {XMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+13152, 227},
    {I_VCVTUQQ2PS, 2, {YMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64|ER,0,0,0}, nasm_bytecodes+13160, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTUSI2SD[] = {
    {I_VCVTUSI2SD, 3, {XMMREG,XMMREG,RM_GPR|BITS32,0,0}, {0,ER,0,0,0}, nasm_bytecodes+13168, 226},
    {I_VCVTUSI2SD, 3, {XMMREG,XMMREG,RM_GPR|BITS64,0,0}, {0,ER,0,0,0}, nasm_bytecodes+13176, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTUSI2SS[] = {
    {I_VCVTUSI2SS, 3, {XMMREG,XMMREG,RM_GPR|BITS32,0,0}, {0,ER,0,0,0}, nasm_bytecodes+13184, 226},
    {I_VCVTUSI2SS, 3, {XMMREG,XMMREG,RM_GPR|BITS64,0,0}, {0,ER,0,0,0}, nasm_bytecodes+13192, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VDBPSADBW[] = {
    {I_VDBPSADBW, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+4209, 229},
    {I_VDBPSADBW, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+4218, 229},
    {I_VDBPSADBW, 4, {YMMREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+4227, 229},
    {I_VDBPSADBW, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+4236, 229},
    {I_VDBPSADBW, 4, {ZMMREG,ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+4245, 230},
    {I_VDBPSADBW, 3, {ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+4254, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VEXP2PD[] = {
    {I_VEXP2PD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64|SAE,0,0,0}, nasm_bytecodes+13328, 231},
    ITEMPLATE_END
};

static const struct itemplate instrux_VEXP2PS[] = {
    {I_VEXP2PS, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32|SAE,0,0,0}, nasm_bytecodes+13336, 231},
    ITEMPLATE_END
};

static const struct itemplate instrux_VEXPANDPD[] = {
    {I_VEXPANDPD, 2, {XMMREG,MEMORY|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+13344, 225},
    {I_VEXPANDPD, 2, {YMMREG,MEMORY|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+13352, 225},
    {I_VEXPANDPD, 2, {ZMMREG,MEMORY|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+13360, 226},
    {I_VEXPANDPD, 2, {XMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+13344, 225},
    {I_VEXPANDPD, 2, {YMMREG,YMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+13352, 225},
    {I_VEXPANDPD, 2, {ZMMREG,ZMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+13360, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VEXPANDPS[] = {
    {I_VEXPANDPS, 2, {XMMREG,MEMORY|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+13368, 225},
    {I_VEXPANDPS, 2, {YMMREG,MEMORY|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+13376, 225},
    {I_VEXPANDPS, 2, {ZMMREG,MEMORY|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+13384, 226},
    {I_VEXPANDPS, 2, {XMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+13368, 225},
    {I_VEXPANDPS, 2, {YMMREG,YMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+13376, 225},
    {I_VEXPANDPS, 2, {ZMMREG,ZMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+13384, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VEXTRACTF32X4[] = {
    {I_VEXTRACTF32X4, 3, {XMMREG,YMMREG,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+4263, 225},
    {I_VEXTRACTF32X4, 3, {XMMREG,ZMMREG,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+4272, 226},
    {I_VEXTRACTF32X4, 3, {MEMORY|BITS128,YMMREG,IMMEDIATE|BITS8,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+4281, 225},
    {I_VEXTRACTF32X4, 3, {MEMORY|BITS128,ZMMREG,IMMEDIATE|BITS8,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+4290, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VEXTRACTF32X8[] = {
    {I_VEXTRACTF32X8, 3, {YMMREG,ZMMREG,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+4299, 228},
    {I_VEXTRACTF32X8, 3, {MEMORY|BITS256,ZMMREG,IMMEDIATE|BITS8,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+4308, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VEXTRACTF64X2[] = {
    {I_VEXTRACTF64X2, 3, {XMMREG,YMMREG,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+4317, 227},
    {I_VEXTRACTF64X2, 3, {XMMREG,ZMMREG,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+4326, 228},
    {I_VEXTRACTF64X2, 3, {MEMORY|BITS128,YMMREG,IMMEDIATE|BITS8,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+4335, 227},
    {I_VEXTRACTF64X2, 3, {MEMORY|BITS128,ZMMREG,IMMEDIATE|BITS8,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+4344, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VEXTRACTF64X4[] = {
    {I_VEXTRACTF64X4, 3, {YMMREG,ZMMREG,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+4353, 226},
    {I_VEXTRACTF64X4, 3, {MEMORY|BITS256,ZMMREG,IMMEDIATE|BITS8,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+4362, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VEXTRACTI32X4[] = {
    {I_VEXTRACTI32X4, 3, {XMMREG,YMMREG,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+4371, 225},
    {I_VEXTRACTI32X4, 3, {XMMREG,ZMMREG,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+4380, 226},
    {I_VEXTRACTI32X4, 3, {MEMORY|BITS128,YMMREG,IMMEDIATE|BITS8,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+4389, 225},
    {I_VEXTRACTI32X4, 3, {MEMORY|BITS128,ZMMREG,IMMEDIATE|BITS8,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+4398, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VEXTRACTI32X8[] = {
    {I_VEXTRACTI32X8, 3, {YMMREG,ZMMREG,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+4407, 228},
    {I_VEXTRACTI32X8, 3, {MEMORY|BITS256,ZMMREG,IMMEDIATE|BITS8,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+4416, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VEXTRACTI64X2[] = {
    {I_VEXTRACTI64X2, 3, {XMMREG,YMMREG,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+4425, 227},
    {I_VEXTRACTI64X2, 3, {XMMREG,ZMMREG,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+4434, 228},
    {I_VEXTRACTI64X2, 3, {MEMORY|BITS128,YMMREG,IMMEDIATE|BITS8,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+4443, 227},
    {I_VEXTRACTI64X2, 3, {MEMORY|BITS128,ZMMREG,IMMEDIATE|BITS8,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+4452, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VEXTRACTI64X4[] = {
    {I_VEXTRACTI64X4, 3, {YMMREG,ZMMREG,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+4461, 226},
    {I_VEXTRACTI64X4, 3, {MEMORY|BITS256,ZMMREG,IMMEDIATE|BITS8,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+4470, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFIXUPIMMPD[] = {
    {I_VFIXUPIMMPD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+4488, 225},
    {I_VFIXUPIMMPD, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+4497, 225},
    {I_VFIXUPIMMPD, 4, {YMMREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+4506, 225},
    {I_VFIXUPIMMPD, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+4515, 225},
    {I_VFIXUPIMMPD, 4, {ZMMREG,ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0}, {MASK|Z,0,B64|SAE,0,0}, nasm_bytecodes+4524, 226},
    {I_VFIXUPIMMPD, 3, {ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64|SAE,0,0,0}, nasm_bytecodes+4533, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFIXUPIMMPS[] = {
    {I_VFIXUPIMMPS, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+4542, 225},
    {I_VFIXUPIMMPS, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+4551, 225},
    {I_VFIXUPIMMPS, 4, {YMMREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+4560, 225},
    {I_VFIXUPIMMPS, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+4569, 225},
    {I_VFIXUPIMMPS, 4, {ZMMREG,ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0}, {MASK|Z,0,B32|SAE,0,0}, nasm_bytecodes+4578, 226},
    {I_VFIXUPIMMPS, 3, {ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32|SAE,0,0,0}, nasm_bytecodes+4587, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFIXUPIMMSD[] = {
    {I_VFIXUPIMMSD, 4, {XMMREG,XMMREG,RM_XMM|BITS64,IMMEDIATE|BITS8,0}, {MASK|Z,0,SAE,0,0}, nasm_bytecodes+4596, 226},
    {I_VFIXUPIMMSD, 3, {XMMREG,RM_XMM|BITS64,IMMEDIATE|BITS8,0,0}, {MASK|Z,SAE,0,0,0}, nasm_bytecodes+4605, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFIXUPIMMSS[] = {
    {I_VFIXUPIMMSS, 4, {XMMREG,XMMREG,RM_XMM|BITS32,IMMEDIATE|BITS8,0}, {MASK|Z,0,SAE,0,0}, nasm_bytecodes+4614, 226},
    {I_VFIXUPIMMSS, 3, {XMMREG,RM_XMM|BITS32,IMMEDIATE|BITS8,0,0}, {MASK|Z,SAE,0,0,0}, nasm_bytecodes+4623, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFPCLASSPD[] = {
    {I_VFPCLASSPD, 3, {KREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK,B64,0,0,0}, nasm_bytecodes+4632, 227},
    {I_VFPCLASSPD, 3, {KREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK,B64,0,0,0}, nasm_bytecodes+4641, 227},
    {I_VFPCLASSPD, 3, {KREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, {MASK,B64,0,0,0}, nasm_bytecodes+4650, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFPCLASSPS[] = {
    {I_VFPCLASSPS, 3, {KREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK,B32,0,0,0}, nasm_bytecodes+4659, 227},
    {I_VFPCLASSPS, 3, {KREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK,B32,0,0,0}, nasm_bytecodes+4668, 227},
    {I_VFPCLASSPS, 3, {KREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, {MASK,B32,0,0,0}, nasm_bytecodes+4677, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFPCLASSSD[] = {
    {I_VFPCLASSSD, 3, {KREG,RM_XMM|BITS64,IMMEDIATE|BITS8,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+4686, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFPCLASSSS[] = {
    {I_VFPCLASSSS, 3, {KREG,RM_XMM|BITS32,IMMEDIATE|BITS8,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+4695, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VGATHERPF0DPD[] = {
    {I_VGATHERPF0DPD, 1, {YMEM|BITS64,0,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+4758, 232},
    ITEMPLATE_END
};

static const struct itemplate instrux_VGATHERPF0DPS[] = {
    {I_VGATHERPF0DPS, 1, {ZMEM|BITS32,0,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+4767, 232},
    ITEMPLATE_END
};

static const struct itemplate instrux_VGATHERPF0QPD[] = {
    {I_VGATHERPF0QPD, 1, {ZMEM|BITS64,0,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+4776, 232},
    ITEMPLATE_END
};

static const struct itemplate instrux_VGATHERPF0QPS[] = {
    {I_VGATHERPF0QPS, 1, {ZMEM|BITS32,0,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+4785, 232},
    ITEMPLATE_END
};

static const struct itemplate instrux_VGATHERPF1DPD[] = {
    {I_VGATHERPF1DPD, 1, {YMEM|BITS64,0,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+4794, 232},
    ITEMPLATE_END
};

static const struct itemplate instrux_VGATHERPF1DPS[] = {
    {I_VGATHERPF1DPS, 1, {ZMEM|BITS32,0,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+4803, 232},
    ITEMPLATE_END
};

static const struct itemplate instrux_VGATHERPF1QPD[] = {
    {I_VGATHERPF1QPD, 1, {ZMEM|BITS64,0,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+4812, 232},
    ITEMPLATE_END
};

static const struct itemplate instrux_VGATHERPF1QPS[] = {
    {I_VGATHERPF1QPS, 1, {ZMEM|BITS32,0,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+4821, 232},
    ITEMPLATE_END
};

static const struct itemplate instrux_VGETEXPPD[] = {
    {I_VGETEXPPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+14448, 225},
    {I_VGETEXPPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+14456, 225},
    {I_VGETEXPPD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64|SAE,0,0,0}, nasm_bytecodes+14464, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VGETEXPPS[] = {
    {I_VGETEXPPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+14472, 225},
    {I_VGETEXPPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+14480, 225},
    {I_VGETEXPPS, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32|SAE,0,0,0}, nasm_bytecodes+14488, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VGETEXPSD[] = {
    {I_VGETEXPSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, {MASK|Z,0,SAE,0,0}, nasm_bytecodes+14496, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VGETEXPSS[] = {
    {I_VGETEXPSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, {MASK|Z,0,SAE,0,0}, nasm_bytecodes+14504, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VGETMANTPD[] = {
    {I_VGETMANTPD, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+4884, 225},
    {I_VGETMANTPD, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+4893, 225},
    {I_VGETMANTPD, 3, {ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64|SAE,0,0,0}, nasm_bytecodes+4902, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VGETMANTPS[] = {
    {I_VGETMANTPS, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+4911, 225},
    {I_VGETMANTPS, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+4920, 225},
    {I_VGETMANTPS, 3, {ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32|SAE,0,0,0}, nasm_bytecodes+4929, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VGETMANTSD[] = {
    {I_VGETMANTSD, 4, {XMMREG,XMMREG,RM_XMM|BITS64,IMMEDIATE|BITS8,0}, {MASK|Z,0,SAE,0,0}, nasm_bytecodes+4938, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VGETMANTSS[] = {
    {I_VGETMANTSS, 4, {XMMREG,XMMREG,RM_XMM|BITS32,IMMEDIATE|BITS8,0}, {MASK|Z,0,SAE,0,0}, nasm_bytecodes+4947, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VINSERTF32X4[] = {
    {I_VINSERTF32X4, 4, {YMMREG,YMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+4956, 225},
    {I_VINSERTF32X4, 3, {YMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+4965, 225},
    {I_VINSERTF32X4, 4, {ZMMREG,ZMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+4974, 226},
    {I_VINSERTF32X4, 3, {ZMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+4983, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VINSERTF32X8[] = {
    {I_VINSERTF32X8, 4, {ZMMREG,ZMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+4992, 228},
    {I_VINSERTF32X8, 3, {ZMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+5001, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VINSERTF64X2[] = {
    {I_VINSERTF64X2, 4, {YMMREG,YMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+5010, 227},
    {I_VINSERTF64X2, 3, {YMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+5019, 227},
    {I_VINSERTF64X2, 4, {ZMMREG,ZMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+5028, 228},
    {I_VINSERTF64X2, 3, {ZMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+5037, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VINSERTF64X4[] = {
    {I_VINSERTF64X4, 4, {ZMMREG,ZMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+5046, 226},
    {I_VINSERTF64X4, 3, {ZMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+5055, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VINSERTI32X4[] = {
    {I_VINSERTI32X4, 4, {YMMREG,YMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+5064, 225},
    {I_VINSERTI32X4, 3, {YMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+5073, 225},
    {I_VINSERTI32X4, 4, {ZMMREG,ZMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+5082, 226},
    {I_VINSERTI32X4, 3, {ZMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+5091, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VINSERTI32X8[] = {
    {I_VINSERTI32X8, 4, {ZMMREG,ZMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+5100, 228},
    {I_VINSERTI32X8, 3, {ZMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+5109, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VINSERTI64X2[] = {
    {I_VINSERTI64X2, 4, {YMMREG,YMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+5118, 227},
    {I_VINSERTI64X2, 3, {YMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+5127, 227},
    {I_VINSERTI64X2, 4, {ZMMREG,ZMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+5136, 228},
    {I_VINSERTI64X2, 3, {ZMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+5145, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VINSERTI64X4[] = {
    {I_VINSERTI64X4, 4, {ZMMREG,ZMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+5154, 226},
    {I_VINSERTI64X4, 3, {ZMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+5163, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVDQA32[] = {
    {I_VMOVDQA32, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+14952, 225},
    {I_VMOVDQA32, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+14960, 225},
    {I_VMOVDQA32, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+14968, 226},
    {I_VMOVDQA32, 2, {RM_XMM|BITS128,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+14976, 225},
    {I_VMOVDQA32, 2, {RM_YMM|BITS256,YMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+14984, 225},
    {I_VMOVDQA32, 2, {RM_ZMM|BITS512,ZMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+14992, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVDQA64[] = {
    {I_VMOVDQA64, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15000, 225},
    {I_VMOVDQA64, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15008, 225},
    {I_VMOVDQA64, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15016, 226},
    {I_VMOVDQA64, 2, {RM_XMM|BITS128,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15024, 225},
    {I_VMOVDQA64, 2, {RM_YMM|BITS256,YMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15032, 225},
    {I_VMOVDQA64, 2, {RM_ZMM|BITS512,ZMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15040, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVDQU16[] = {
    {I_VMOVDQU16, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15048, 229},
    {I_VMOVDQU16, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15056, 229},
    {I_VMOVDQU16, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15064, 230},
    {I_VMOVDQU16, 2, {RM_XMM|BITS128,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15072, 229},
    {I_VMOVDQU16, 2, {RM_YMM|BITS256,YMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15080, 229},
    {I_VMOVDQU16, 2, {RM_ZMM|BITS512,ZMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15088, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVDQU32[] = {
    {I_VMOVDQU32, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15096, 225},
    {I_VMOVDQU32, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15104, 225},
    {I_VMOVDQU32, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15112, 226},
    {I_VMOVDQU32, 2, {RM_XMM|BITS128,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15120, 225},
    {I_VMOVDQU32, 2, {RM_YMM|BITS256,YMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15128, 225},
    {I_VMOVDQU32, 2, {RM_ZMM|BITS512,ZMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15136, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVDQU64[] = {
    {I_VMOVDQU64, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15144, 225},
    {I_VMOVDQU64, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15152, 225},
    {I_VMOVDQU64, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15160, 226},
    {I_VMOVDQU64, 2, {RM_XMM|BITS128,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15168, 225},
    {I_VMOVDQU64, 2, {RM_YMM|BITS256,YMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15176, 225},
    {I_VMOVDQU64, 2, {RM_ZMM|BITS512,ZMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15184, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVDQU8[] = {
    {I_VMOVDQU8, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15192, 229},
    {I_VMOVDQU8, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15200, 229},
    {I_VMOVDQU8, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15208, 230},
    {I_VMOVDQU8, 2, {RM_XMM|BITS128,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15216, 229},
    {I_VMOVDQU8, 2, {RM_YMM|BITS256,YMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15224, 229},
    {I_VMOVDQU8, 2, {RM_ZMM|BITS512,ZMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+15232, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPABSQ[] = {
    {I_VPABSQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+16056, 225},
    {I_VPABSQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+16064, 225},
    {I_VPABSQ, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+16072, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPANDD[] = {
    {I_VPANDD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+16680, 225},
    {I_VPANDD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+16688, 225},
    {I_VPANDD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+16696, 225},
    {I_VPANDD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+16704, 225},
    {I_VPANDD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+16712, 226},
    {I_VPANDD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+16720, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPANDND[] = {
    {I_VPANDND, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+16728, 225},
    {I_VPANDND, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+16736, 225},
    {I_VPANDND, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+16744, 225},
    {I_VPANDND, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+16752, 225},
    {I_VPANDND, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+16760, 226},
    {I_VPANDND, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+16768, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPANDNQ[] = {
    {I_VPANDNQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+16776, 225},
    {I_VPANDNQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+16784, 225},
    {I_VPANDNQ, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+16792, 225},
    {I_VPANDNQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+16800, 225},
    {I_VPANDNQ, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+16808, 226},
    {I_VPANDNQ, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+16816, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPANDQ[] = {
    {I_VPANDQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+16824, 225},
    {I_VPANDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+16832, 225},
    {I_VPANDQ, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+16840, 225},
    {I_VPANDQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+16848, 225},
    {I_VPANDQ, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+16856, 226},
    {I_VPANDQ, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+16864, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPBLENDMB[] = {
    {I_VPBLENDMB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16968, 229},
    {I_VPBLENDMB, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16976, 229},
    {I_VPBLENDMB, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+16984, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPBLENDMD[] = {
    {I_VPBLENDMD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+16992, 225},
    {I_VPBLENDMD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+17000, 225},
    {I_VPBLENDMD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+17008, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPBLENDMQ[] = {
    {I_VPBLENDMQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+17016, 225},
    {I_VPBLENDMQ, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+17024, 225},
    {I_VPBLENDMQ, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+17032, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPBLENDMW[] = {
    {I_VPBLENDMW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17040, 229},
    {I_VPBLENDMW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17048, 229},
    {I_VPBLENDMW, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17056, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPBROADCASTMB2Q[] = {
    {I_VPBROADCASTMB2Q, 2, {XMMREG,KREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+17184, 233},
    {I_VPBROADCASTMB2Q, 2, {YMMREG,KREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+17192, 233},
    {I_VPBROADCASTMB2Q, 2, {ZMMREG,KREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+17200, 234},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPBROADCASTMW2D[] = {
    {I_VPBROADCASTMW2D, 2, {XMMREG,KREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+17208, 233},
    {I_VPBROADCASTMW2D, 2, {YMMREG,KREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+17216, 233},
    {I_VPBROADCASTMW2D, 2, {ZMMREG,KREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+17224, 234},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPB[] = {
    {I_VPCMPB, 4, {KREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, {MASK,0,0,0,0}, nasm_bytecodes+5244, 229},
    {I_VPCMPB, 4, {KREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, {MASK,0,0,0,0}, nasm_bytecodes+5253, 229},
    {I_VPCMPB, 4, {KREG,ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0}, {MASK,0,0,0,0}, nasm_bytecodes+5262, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPD[] = {
    {I_VPCMPD, 4, {KREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, {MASK,0,B32,0,0}, nasm_bytecodes+5271, 225},
    {I_VPCMPD, 4, {KREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, {MASK,0,B32,0,0}, nasm_bytecodes+5280, 225},
    {I_VPCMPD, 4, {KREG,ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0}, {MASK,0,B32,0,0}, nasm_bytecodes+5289, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPQ[] = {
    {I_VPCMPQ, 4, {KREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, {MASK,0,B64,0,0}, nasm_bytecodes+5298, 225},
    {I_VPCMPQ, 4, {KREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, {MASK,0,B64,0,0}, nasm_bytecodes+5307, 225},
    {I_VPCMPQ, 4, {KREG,ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0}, {MASK,0,B64,0,0}, nasm_bytecodes+5316, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPUB[] = {
    {I_VPCMPUB, 4, {KREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, {MASK,0,0,0,0}, nasm_bytecodes+5325, 229},
    {I_VPCMPUB, 4, {KREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, {MASK,0,0,0,0}, nasm_bytecodes+5334, 229},
    {I_VPCMPUB, 4, {KREG,ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0}, {MASK,0,0,0,0}, nasm_bytecodes+5343, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPUD[] = {
    {I_VPCMPUD, 4, {KREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, {MASK,0,B32,0,0}, nasm_bytecodes+5352, 225},
    {I_VPCMPUD, 4, {KREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, {MASK,0,B32,0,0}, nasm_bytecodes+5361, 225},
    {I_VPCMPUD, 4, {KREG,ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0}, {MASK,0,B32,0,0}, nasm_bytecodes+5370, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPUQ[] = {
    {I_VPCMPUQ, 4, {KREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, {MASK,0,B64,0,0}, nasm_bytecodes+5379, 225},
    {I_VPCMPUQ, 4, {KREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, {MASK,0,B64,0,0}, nasm_bytecodes+5388, 225},
    {I_VPCMPUQ, 4, {KREG,ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0}, {MASK,0,B64,0,0}, nasm_bytecodes+5397, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPUW[] = {
    {I_VPCMPUW, 4, {KREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, {MASK,0,0,0,0}, nasm_bytecodes+5406, 229},
    {I_VPCMPUW, 4, {KREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, {MASK,0,0,0,0}, nasm_bytecodes+5415, 229},
    {I_VPCMPUW, 4, {KREG,ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0}, {MASK,0,0,0,0}, nasm_bytecodes+5424, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPW[] = {
    {I_VPCMPW, 4, {KREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, {MASK,0,0,0,0}, nasm_bytecodes+5433, 229},
    {I_VPCMPW, 4, {KREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, {MASK,0,0,0,0}, nasm_bytecodes+5442, 229},
    {I_VPCMPW, 4, {KREG,ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0}, {MASK,0,0,0,0}, nasm_bytecodes+5451, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCOMPRESSD[] = {
    {I_VPCOMPRESSD, 2, {MEMORY|BITS128,XMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+17544, 225},
    {I_VPCOMPRESSD, 2, {MEMORY|BITS256,YMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+17552, 225},
    {I_VPCOMPRESSD, 2, {MEMORY|BITS512,ZMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+17560, 226},
    {I_VPCOMPRESSD, 2, {XMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17568, 225},
    {I_VPCOMPRESSD, 2, {YMMREG,YMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17576, 225},
    {I_VPCOMPRESSD, 2, {ZMMREG,ZMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17584, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCOMPRESSQ[] = {
    {I_VPCOMPRESSQ, 2, {MEMORY|BITS128,XMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+17592, 225},
    {I_VPCOMPRESSQ, 2, {MEMORY|BITS256,YMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+17600, 225},
    {I_VPCOMPRESSQ, 2, {MEMORY|BITS512,ZMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+17608, 226},
    {I_VPCOMPRESSQ, 2, {XMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17616, 225},
    {I_VPCOMPRESSQ, 2, {YMMREG,YMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17624, 225},
    {I_VPCOMPRESSQ, 2, {ZMMREG,ZMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17632, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCONFLICTD[] = {
    {I_VPCONFLICTD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+17640, 233},
    {I_VPCONFLICTD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+17648, 233},
    {I_VPCONFLICTD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+17656, 234},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCONFLICTQ[] = {
    {I_VPCONFLICTQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+17664, 233},
    {I_VPCONFLICTQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+17672, 233},
    {I_VPCONFLICTQ, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+17680, 234},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPERMB[] = {
    {I_VPERMB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17688, 235},
    {I_VPERMB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17696, 235},
    {I_VPERMB, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17704, 235},
    {I_VPERMB, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17712, 235},
    {I_VPERMB, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17720, 236},
    {I_VPERMB, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17728, 236},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPERMI2B[] = {
    {I_VPERMI2B, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17768, 235},
    {I_VPERMI2B, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17776, 235},
    {I_VPERMI2B, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17784, 236},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPERMI2D[] = {
    {I_VPERMI2D, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+17792, 225},
    {I_VPERMI2D, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+17800, 225},
    {I_VPERMI2D, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+17808, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPERMI2PD[] = {
    {I_VPERMI2PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+17816, 225},
    {I_VPERMI2PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+17824, 225},
    {I_VPERMI2PD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+17832, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPERMI2PS[] = {
    {I_VPERMI2PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+17840, 225},
    {I_VPERMI2PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+17848, 225},
    {I_VPERMI2PS, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+17856, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPERMI2Q[] = {
    {I_VPERMI2Q, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+17864, 225},
    {I_VPERMI2Q, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+17872, 225},
    {I_VPERMI2Q, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+17880, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPERMI2W[] = {
    {I_VPERMI2W, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17888, 229},
    {I_VPERMI2W, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17896, 229},
    {I_VPERMI2W, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+17904, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPERMT2B[] = {
    {I_VPERMT2B, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18104, 235},
    {I_VPERMT2B, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18112, 235},
    {I_VPERMT2B, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18120, 236},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPERMT2D[] = {
    {I_VPERMT2D, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+18128, 225},
    {I_VPERMT2D, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+18136, 225},
    {I_VPERMT2D, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+18144, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPERMT2PD[] = {
    {I_VPERMT2PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+18152, 225},
    {I_VPERMT2PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+18160, 225},
    {I_VPERMT2PD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+18168, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPERMT2PS[] = {
    {I_VPERMT2PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+18176, 225},
    {I_VPERMT2PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+18184, 225},
    {I_VPERMT2PS, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+18192, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPERMT2Q[] = {
    {I_VPERMT2Q, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+18200, 225},
    {I_VPERMT2Q, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+18208, 225},
    {I_VPERMT2Q, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+18216, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPERMT2W[] = {
    {I_VPERMT2W, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18224, 229},
    {I_VPERMT2W, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18232, 229},
    {I_VPERMT2W, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18240, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPERMW[] = {
    {I_VPERMW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18248, 229},
    {I_VPERMW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18256, 229},
    {I_VPERMW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18264, 229},
    {I_VPERMW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18272, 229},
    {I_VPERMW, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18280, 230},
    {I_VPERMW, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18288, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPEXPANDD[] = {
    {I_VPEXPANDD, 2, {XMMREG,MEMORY|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18296, 225},
    {I_VPEXPANDD, 2, {YMMREG,MEMORY|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18304, 225},
    {I_VPEXPANDD, 2, {ZMMREG,MEMORY|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18312, 226},
    {I_VPEXPANDD, 2, {XMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18296, 225},
    {I_VPEXPANDD, 2, {YMMREG,YMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18304, 225},
    {I_VPEXPANDD, 2, {ZMMREG,ZMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18312, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPEXPANDQ[] = {
    {I_VPEXPANDQ, 2, {XMMREG,MEMORY|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18320, 225},
    {I_VPEXPANDQ, 2, {YMMREG,MEMORY|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18328, 225},
    {I_VPEXPANDQ, 2, {ZMMREG,MEMORY|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18336, 226},
    {I_VPEXPANDQ, 2, {XMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18320, 225},
    {I_VPEXPANDQ, 2, {YMMREG,YMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18328, 225},
    {I_VPEXPANDQ, 2, {ZMMREG,ZMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+18336, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPLZCNTD[] = {
    {I_VPLZCNTD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+18344, 233},
    {I_VPLZCNTD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+18352, 233},
    {I_VPLZCNTD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+18360, 234},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPLZCNTQ[] = {
    {I_VPLZCNTQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+18368, 233},
    {I_VPLZCNTQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+18376, 233},
    {I_VPLZCNTQ, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+18384, 234},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMADD52HUQ[] = {
    {I_VPMADD52HUQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+18392, 237},
    {I_VPMADD52HUQ, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+18400, 237},
    {I_VPMADD52HUQ, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+18408, 238},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMADD52LUQ[] = {
    {I_VPMADD52LUQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+18416, 237},
    {I_VPMADD52LUQ, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+18424, 237},
    {I_VPMADD52LUQ, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+18432, 238},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMAXSQ[] = {
    {I_VPMAXSQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+18632, 225},
    {I_VPMAXSQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+18640, 225},
    {I_VPMAXSQ, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+18648, 225},
    {I_VPMAXSQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+18656, 225},
    {I_VPMAXSQ, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+18664, 226},
    {I_VPMAXSQ, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+18672, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMAXUQ[] = {
    {I_VPMAXUQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+18824, 225},
    {I_VPMAXUQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+18832, 225},
    {I_VPMAXUQ, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+18840, 225},
    {I_VPMAXUQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+18848, 225},
    {I_VPMAXUQ, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+18856, 226},
    {I_VPMAXUQ, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+18864, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMINSQ[] = {
    {I_VPMINSQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+19016, 225},
    {I_VPMINSQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+19024, 225},
    {I_VPMINSQ, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+19032, 225},
    {I_VPMINSQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+19040, 225},
    {I_VPMINSQ, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+19048, 226},
    {I_VPMINSQ, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+19056, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMINUQ[] = {
    {I_VPMINUQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+19208, 225},
    {I_VPMINUQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+19216, 225},
    {I_VPMINUQ, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+19224, 225},
    {I_VPMINUQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+19232, 225},
    {I_VPMINUQ, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+19240, 226},
    {I_VPMINUQ, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+19248, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVB2M[] = {
    {I_VPMOVB2M, 2, {KREG,XMMREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+19304, 229},
    {I_VPMOVB2M, 2, {KREG,YMMREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+19312, 229},
    {I_VPMOVB2M, 2, {KREG,ZMMREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+19320, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVD2M[] = {
    {I_VPMOVD2M, 2, {KREG,XMMREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+19328, 227},
    {I_VPMOVD2M, 2, {KREG,YMMREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+19336, 227},
    {I_VPMOVD2M, 2, {KREG,ZMMREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+19344, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVDB[] = {
    {I_VPMOVDB, 2, {XMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19352, 225},
    {I_VPMOVDB, 2, {XMMREG,YMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19360, 225},
    {I_VPMOVDB, 2, {XMMREG,ZMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19368, 226},
    {I_VPMOVDB, 2, {MEMORY|BITS32,XMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+19376, 225},
    {I_VPMOVDB, 2, {MEMORY|BITS64,YMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+19384, 225},
    {I_VPMOVDB, 2, {MEMORY|BITS128,ZMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+19392, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVDW[] = {
    {I_VPMOVDW, 2, {XMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19400, 225},
    {I_VPMOVDW, 2, {XMMREG,YMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19408, 225},
    {I_VPMOVDW, 2, {YMMREG,ZMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19416, 226},
    {I_VPMOVDW, 2, {MEMORY|BITS64,XMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+19424, 225},
    {I_VPMOVDW, 2, {MEMORY|BITS128,YMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+19432, 225},
    {I_VPMOVDW, 2, {MEMORY|BITS256,ZMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+19440, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVM2B[] = {
    {I_VPMOVM2B, 2, {XMMREG,KREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+19448, 229},
    {I_VPMOVM2B, 2, {YMMREG,KREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+19456, 229},
    {I_VPMOVM2B, 2, {ZMMREG,KREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+19464, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVM2D[] = {
    {I_VPMOVM2D, 2, {XMMREG,KREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+19472, 227},
    {I_VPMOVM2D, 2, {YMMREG,KREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+19480, 227},
    {I_VPMOVM2D, 2, {ZMMREG,KREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+19488, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVM2Q[] = {
    {I_VPMOVM2Q, 2, {XMMREG,KREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+19496, 227},
    {I_VPMOVM2Q, 2, {YMMREG,KREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+19504, 227},
    {I_VPMOVM2Q, 2, {ZMMREG,KREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+19512, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVM2W[] = {
    {I_VPMOVM2W, 2, {XMMREG,KREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+19520, 229},
    {I_VPMOVM2W, 2, {YMMREG,KREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+19528, 229},
    {I_VPMOVM2W, 2, {ZMMREG,KREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+19536, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVQ2M[] = {
    {I_VPMOVQ2M, 2, {KREG,XMMREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+19544, 227},
    {I_VPMOVQ2M, 2, {KREG,YMMREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+19552, 227},
    {I_VPMOVQ2M, 2, {KREG,ZMMREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+19560, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVQB[] = {
    {I_VPMOVQB, 2, {XMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19568, 225},
    {I_VPMOVQB, 2, {XMMREG,YMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19576, 225},
    {I_VPMOVQB, 2, {XMMREG,ZMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19584, 226},
    {I_VPMOVQB, 2, {MEMORY|BITS16,XMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+19592, 225},
    {I_VPMOVQB, 2, {MEMORY|BITS32,YMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+19600, 225},
    {I_VPMOVQB, 2, {MEMORY|BITS64,ZMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+19608, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVQD[] = {
    {I_VPMOVQD, 2, {XMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19616, 225},
    {I_VPMOVQD, 2, {XMMREG,YMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19624, 225},
    {I_VPMOVQD, 2, {YMMREG,ZMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19632, 226},
    {I_VPMOVQD, 2, {MEMORY|BITS64,XMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+19640, 225},
    {I_VPMOVQD, 2, {MEMORY|BITS128,YMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+19648, 225},
    {I_VPMOVQD, 2, {MEMORY|BITS256,ZMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+19656, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVQW[] = {
    {I_VPMOVQW, 2, {XMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19664, 225},
    {I_VPMOVQW, 2, {XMMREG,YMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19672, 225},
    {I_VPMOVQW, 2, {XMMREG,ZMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19680, 226},
    {I_VPMOVQW, 2, {MEMORY|BITS32,XMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+19688, 225},
    {I_VPMOVQW, 2, {MEMORY|BITS64,YMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+19696, 225},
    {I_VPMOVQW, 2, {MEMORY|BITS128,ZMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+19704, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVSDB[] = {
    {I_VPMOVSDB, 2, {XMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19712, 225},
    {I_VPMOVSDB, 2, {XMMREG,YMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19720, 225},
    {I_VPMOVSDB, 2, {XMMREG,ZMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19728, 226},
    {I_VPMOVSDB, 2, {MEMORY|BITS32,XMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+19736, 225},
    {I_VPMOVSDB, 2, {MEMORY|BITS64,YMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+19744, 225},
    {I_VPMOVSDB, 2, {MEMORY|BITS128,ZMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+19752, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVSDW[] = {
    {I_VPMOVSDW, 2, {XMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19760, 225},
    {I_VPMOVSDW, 2, {XMMREG,YMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19768, 225},
    {I_VPMOVSDW, 2, {YMMREG,ZMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19776, 226},
    {I_VPMOVSDW, 2, {MEMORY|BITS64,XMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+19784, 225},
    {I_VPMOVSDW, 2, {MEMORY|BITS128,YMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+19792, 225},
    {I_VPMOVSDW, 2, {MEMORY|BITS256,ZMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+19800, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVSQB[] = {
    {I_VPMOVSQB, 2, {XMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19808, 225},
    {I_VPMOVSQB, 2, {XMMREG,YMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19816, 225},
    {I_VPMOVSQB, 2, {XMMREG,ZMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19824, 226},
    {I_VPMOVSQB, 2, {MEMORY|BITS16,XMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+19832, 225},
    {I_VPMOVSQB, 2, {MEMORY|BITS32,YMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+19840, 225},
    {I_VPMOVSQB, 2, {MEMORY|BITS64,ZMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+19848, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVSQD[] = {
    {I_VPMOVSQD, 2, {XMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19856, 225},
    {I_VPMOVSQD, 2, {XMMREG,YMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19864, 225},
    {I_VPMOVSQD, 2, {YMMREG,ZMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19872, 226},
    {I_VPMOVSQD, 2, {MEMORY|BITS64,XMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+19880, 225},
    {I_VPMOVSQD, 2, {MEMORY|BITS128,YMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+19888, 225},
    {I_VPMOVSQD, 2, {MEMORY|BITS256,ZMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+19896, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVSQW[] = {
    {I_VPMOVSQW, 2, {XMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19904, 225},
    {I_VPMOVSQW, 2, {XMMREG,YMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19912, 225},
    {I_VPMOVSQW, 2, {XMMREG,ZMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19920, 226},
    {I_VPMOVSQW, 2, {MEMORY|BITS32,XMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+19928, 225},
    {I_VPMOVSQW, 2, {MEMORY|BITS64,YMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+19936, 225},
    {I_VPMOVSQW, 2, {MEMORY|BITS128,ZMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+19944, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVSWB[] = {
    {I_VPMOVSWB, 2, {XMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19952, 229},
    {I_VPMOVSWB, 2, {XMMREG,YMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19960, 229},
    {I_VPMOVSWB, 2, {YMMREG,ZMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+19968, 230},
    {I_VPMOVSWB, 2, {MEMORY|BITS64,XMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+19976, 229},
    {I_VPMOVSWB, 2, {MEMORY|BITS128,YMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+19984, 229},
    {I_VPMOVSWB, 2, {MEMORY|BITS256,ZMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+19992, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVUSDB[] = {
    {I_VPMOVUSDB, 2, {XMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20144, 225},
    {I_VPMOVUSDB, 2, {XMMREG,YMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20152, 225},
    {I_VPMOVUSDB, 2, {XMMREG,ZMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20160, 226},
    {I_VPMOVUSDB, 2, {MEMORY|BITS32,XMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+20168, 225},
    {I_VPMOVUSDB, 2, {MEMORY|BITS64,YMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+20176, 225},
    {I_VPMOVUSDB, 2, {MEMORY|BITS128,ZMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+20184, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVUSDW[] = {
    {I_VPMOVUSDW, 2, {XMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20192, 225},
    {I_VPMOVUSDW, 2, {XMMREG,YMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20200, 225},
    {I_VPMOVUSDW, 2, {YMMREG,ZMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20208, 226},
    {I_VPMOVUSDW, 2, {MEMORY|BITS64,XMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+20216, 225},
    {I_VPMOVUSDW, 2, {MEMORY|BITS128,YMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+20224, 225},
    {I_VPMOVUSDW, 2, {MEMORY|BITS256,ZMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+20232, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVUSQB[] = {
    {I_VPMOVUSQB, 2, {XMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20240, 225},
    {I_VPMOVUSQB, 2, {XMMREG,YMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20248, 225},
    {I_VPMOVUSQB, 2, {XMMREG,ZMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20256, 226},
    {I_VPMOVUSQB, 2, {MEMORY|BITS16,XMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+20264, 225},
    {I_VPMOVUSQB, 2, {MEMORY|BITS32,YMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+20272, 225},
    {I_VPMOVUSQB, 2, {MEMORY|BITS64,ZMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+20280, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVUSQD[] = {
    {I_VPMOVUSQD, 2, {XMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20288, 225},
    {I_VPMOVUSQD, 2, {XMMREG,YMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20296, 225},
    {I_VPMOVUSQD, 2, {YMMREG,ZMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20304, 226},
    {I_VPMOVUSQD, 2, {MEMORY|BITS64,XMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+20312, 225},
    {I_VPMOVUSQD, 2, {MEMORY|BITS128,YMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+20320, 225},
    {I_VPMOVUSQD, 2, {MEMORY|BITS256,ZMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+20328, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVUSQW[] = {
    {I_VPMOVUSQW, 2, {XMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20336, 225},
    {I_VPMOVUSQW, 2, {XMMREG,YMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20344, 225},
    {I_VPMOVUSQW, 2, {XMMREG,ZMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20352, 226},
    {I_VPMOVUSQW, 2, {MEMORY|BITS32,XMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+20360, 225},
    {I_VPMOVUSQW, 2, {MEMORY|BITS64,YMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+20368, 225},
    {I_VPMOVUSQW, 2, {MEMORY|BITS128,ZMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+20376, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVUSWB[] = {
    {I_VPMOVUSWB, 2, {XMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20384, 229},
    {I_VPMOVUSWB, 2, {XMMREG,YMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20392, 229},
    {I_VPMOVUSWB, 2, {YMMREG,ZMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20400, 230},
    {I_VPMOVUSWB, 2, {MEMORY|BITS64,XMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+20408, 229},
    {I_VPMOVUSWB, 2, {MEMORY|BITS128,YMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+20416, 229},
    {I_VPMOVUSWB, 2, {MEMORY|BITS256,ZMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+20424, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVW2M[] = {
    {I_VPMOVW2M, 2, {KREG,XMMREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+20432, 229},
    {I_VPMOVW2M, 2, {KREG,YMMREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+20440, 229},
    {I_VPMOVW2M, 2, {KREG,ZMMREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+20448, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVWB[] = {
    {I_VPMOVWB, 2, {XMMREG,XMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20456, 229},
    {I_VPMOVWB, 2, {XMMREG,YMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20464, 229},
    {I_VPMOVWB, 2, {YMMREG,ZMMREG,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+20472, 230},
    {I_VPMOVWB, 2, {MEMORY|BITS64,XMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+20480, 229},
    {I_VPMOVWB, 2, {MEMORY|BITS128,YMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+20488, 229},
    {I_VPMOVWB, 2, {MEMORY|BITS256,ZMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+20496, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMULLQ[] = {
    {I_VPMULLQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+20888, 227},
    {I_VPMULLQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+20896, 227},
    {I_VPMULLQ, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+20904, 227},
    {I_VPMULLQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+20912, 227},
    {I_VPMULLQ, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+20920, 228},
    {I_VPMULLQ, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+20928, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMULTISHIFTQB[] = {
    {I_VPMULTISHIFTQB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+20984, 235},
    {I_VPMULTISHIFTQB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+20992, 235},
    {I_VPMULTISHIFTQB, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+21000, 235},
    {I_VPMULTISHIFTQB, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+21008, 235},
    {I_VPMULTISHIFTQB, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+21016, 236},
    {I_VPMULTISHIFTQB, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+21024, 236},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPORD[] = {
    {I_VPORD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+21080, 225},
    {I_VPORD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+21088, 225},
    {I_VPORD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+21096, 225},
    {I_VPORD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+21104, 225},
    {I_VPORD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+21112, 226},
    {I_VPORD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+21120, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPORQ[] = {
    {I_VPORQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+21128, 225},
    {I_VPORQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+21136, 225},
    {I_VPORQ, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+21144, 225},
    {I_VPORQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+21152, 225},
    {I_VPORQ, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+21160, 226},
    {I_VPORQ, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+21168, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPROLD[] = {
    {I_VPROLD, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+5775, 225},
    {I_VPROLD, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+5784, 225},
    {I_VPROLD, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+5793, 225},
    {I_VPROLD, 2, {YMMREG,IMMEDIATE|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+5802, 225},
    {I_VPROLD, 3, {ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+5811, 226},
    {I_VPROLD, 2, {ZMMREG,IMMEDIATE|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+5820, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPROLQ[] = {
    {I_VPROLQ, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+5829, 225},
    {I_VPROLQ, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+5838, 225},
    {I_VPROLQ, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+5847, 225},
    {I_VPROLQ, 2, {YMMREG,IMMEDIATE|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+5856, 225},
    {I_VPROLQ, 3, {ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+5865, 226},
    {I_VPROLQ, 2, {ZMMREG,IMMEDIATE|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+5874, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPROLVD[] = {
    {I_VPROLVD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+21176, 225},
    {I_VPROLVD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+21184, 225},
    {I_VPROLVD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+21192, 225},
    {I_VPROLVD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+21200, 225},
    {I_VPROLVD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+21208, 226},
    {I_VPROLVD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+21216, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPROLVQ[] = {
    {I_VPROLVQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+21224, 225},
    {I_VPROLVQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+21232, 225},
    {I_VPROLVQ, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+21240, 225},
    {I_VPROLVQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+21248, 225},
    {I_VPROLVQ, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+21256, 226},
    {I_VPROLVQ, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+21264, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPRORD[] = {
    {I_VPRORD, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+5883, 225},
    {I_VPRORD, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+5892, 225},
    {I_VPRORD, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+5901, 225},
    {I_VPRORD, 2, {YMMREG,IMMEDIATE|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+5910, 225},
    {I_VPRORD, 3, {ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+5919, 226},
    {I_VPRORD, 2, {ZMMREG,IMMEDIATE|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+5928, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPRORQ[] = {
    {I_VPRORQ, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+5937, 225},
    {I_VPRORQ, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+5946, 225},
    {I_VPRORQ, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+5955, 225},
    {I_VPRORQ, 2, {YMMREG,IMMEDIATE|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+5964, 225},
    {I_VPRORQ, 3, {ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+5973, 226},
    {I_VPRORQ, 2, {ZMMREG,IMMEDIATE|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+5982, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPRORVD[] = {
    {I_VPRORVD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+21272, 225},
    {I_VPRORVD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+21280, 225},
    {I_VPRORVD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+21288, 225},
    {I_VPRORVD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+21296, 225},
    {I_VPRORVD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+21304, 226},
    {I_VPRORVD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+21312, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPRORVQ[] = {
    {I_VPRORVQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+21320, 225},
    {I_VPRORVQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+21328, 225},
    {I_VPRORVQ, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+21336, 225},
    {I_VPRORVQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+21344, 225},
    {I_VPRORVQ, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+21352, 226},
    {I_VPRORVQ, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+21360, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSCATTERDD[] = {
    {I_VPSCATTERDD, 2, {XMEM|BITS32,XMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+5991, 225},
    {I_VPSCATTERDD, 2, {YMEM|BITS32,YMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+6000, 225},
    {I_VPSCATTERDD, 2, {ZMEM|BITS32,ZMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+6009, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSCATTERDQ[] = {
    {I_VPSCATTERDQ, 2, {XMEM|BITS64,XMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+6018, 225},
    {I_VPSCATTERDQ, 2, {XMEM|BITS64,YMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+6027, 225},
    {I_VPSCATTERDQ, 2, {YMEM|BITS64,ZMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+6036, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSCATTERQD[] = {
    {I_VPSCATTERQD, 2, {XMEM|BITS32,XMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+6045, 225},
    {I_VPSCATTERQD, 2, {YMEM|BITS32,XMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+6054, 225},
    {I_VPSCATTERQD, 2, {ZMEM|BITS32,YMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+6063, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSCATTERQQ[] = {
    {I_VPSCATTERQQ, 2, {XMEM|BITS64,XMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+6072, 225},
    {I_VPSCATTERQQ, 2, {YMEM|BITS64,YMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+6081, 225},
    {I_VPSCATTERQQ, 2, {ZMEM|BITS64,ZMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+6090, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSLLVW[] = {
    {I_VPSLLVW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21656, 229},
    {I_VPSLLVW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21664, 229},
    {I_VPSLLVW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21672, 229},
    {I_VPSLLVW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21680, 229},
    {I_VPSLLVW, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21688, 230},
    {I_VPSLLVW, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21696, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSRAQ[] = {
    {I_VPSRAQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21800, 225},
    {I_VPSRAQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21808, 225},
    {I_VPSRAQ, 3, {YMMREG,YMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21816, 225},
    {I_VPSRAQ, 2, {YMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21824, 225},
    {I_VPSRAQ, 3, {ZMMREG,ZMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21832, 226},
    {I_VPSRAQ, 2, {ZMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21840, 226},
    {I_VPSRAQ, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+6450, 225},
    {I_VPSRAQ, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+6459, 225},
    {I_VPSRAQ, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+6468, 225},
    {I_VPSRAQ, 2, {YMMREG,IMMEDIATE|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+6477, 225},
    {I_VPSRAQ, 3, {ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+6486, 226},
    {I_VPSRAQ, 2, {ZMMREG,IMMEDIATE|BITS8,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+6495, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSRAVQ[] = {
    {I_VPSRAVQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+21896, 225},
    {I_VPSRAVQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+21904, 225},
    {I_VPSRAVQ, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+21912, 225},
    {I_VPSRAVQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+21920, 225},
    {I_VPSRAVQ, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+21928, 226},
    {I_VPSRAVQ, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+21936, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSRAVW[] = {
    {I_VPSRAVW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21944, 229},
    {I_VPSRAVW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21952, 229},
    {I_VPSRAVW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21960, 229},
    {I_VPSRAVW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21968, 229},
    {I_VPSRAVW, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21976, 230},
    {I_VPSRAVW, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+21984, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSRLVW[] = {
    {I_VPSRLVW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22232, 229},
    {I_VPSRLVW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22240, 229},
    {I_VPSRLVW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22248, 229},
    {I_VPSRLVW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22256, 229},
    {I_VPSRLVW, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22264, 230},
    {I_VPSRLVW, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+22272, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPTERNLOGD[] = {
    {I_VPTERNLOGD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+6774, 225},
    {I_VPTERNLOGD, 4, {YMMREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+6783, 225},
    {I_VPTERNLOGD, 4, {ZMMREG,ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+6792, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPTERNLOGQ[] = {
    {I_VPTERNLOGQ, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+6801, 225},
    {I_VPTERNLOGQ, 4, {YMMREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+6810, 225},
    {I_VPTERNLOGQ, 4, {ZMMREG,ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+6819, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPTESTMB[] = {
    {I_VPTESTMB, 3, {KREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+22712, 229},
    {I_VPTESTMB, 3, {KREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+22720, 229},
    {I_VPTESTMB, 3, {KREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+22728, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPTESTMD[] = {
    {I_VPTESTMD, 3, {KREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK,0,B32,0,0}, nasm_bytecodes+22736, 225},
    {I_VPTESTMD, 3, {KREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK,0,B32,0,0}, nasm_bytecodes+22744, 225},
    {I_VPTESTMD, 3, {KREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK,0,B32,0,0}, nasm_bytecodes+22752, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPTESTMQ[] = {
    {I_VPTESTMQ, 3, {KREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK,0,B64,0,0}, nasm_bytecodes+22760, 225},
    {I_VPTESTMQ, 3, {KREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK,0,B64,0,0}, nasm_bytecodes+22768, 225},
    {I_VPTESTMQ, 3, {KREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK,0,B64,0,0}, nasm_bytecodes+22776, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPTESTMW[] = {
    {I_VPTESTMW, 3, {KREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+22784, 229},
    {I_VPTESTMW, 3, {KREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+22792, 229},
    {I_VPTESTMW, 3, {KREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+22800, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPTESTNMB[] = {
    {I_VPTESTNMB, 3, {KREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+22808, 229},
    {I_VPTESTNMB, 3, {KREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+22816, 229},
    {I_VPTESTNMB, 3, {KREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+22824, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPTESTNMD[] = {
    {I_VPTESTNMD, 3, {KREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK,0,B32,0,0}, nasm_bytecodes+22832, 225},
    {I_VPTESTNMD, 3, {KREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK,0,B32,0,0}, nasm_bytecodes+22840, 225},
    {I_VPTESTNMD, 3, {KREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK,0,B32,0,0}, nasm_bytecodes+22848, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPTESTNMQ[] = {
    {I_VPTESTNMQ, 3, {KREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK,0,B64,0,0}, nasm_bytecodes+22856, 225},
    {I_VPTESTNMQ, 3, {KREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK,0,B64,0,0}, nasm_bytecodes+22864, 225},
    {I_VPTESTNMQ, 3, {KREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK,0,B64,0,0}, nasm_bytecodes+22872, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPTESTNMW[] = {
    {I_VPTESTNMW, 3, {KREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+22880, 229},
    {I_VPTESTNMW, 3, {KREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+22888, 229},
    {I_VPTESTNMW, 3, {KREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+22896, 230},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPXORD[] = {
    {I_VPXORD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+23288, 225},
    {I_VPXORD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+23296, 225},
    {I_VPXORD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+23304, 225},
    {I_VPXORD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+23312, 225},
    {I_VPXORD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+23320, 226},
    {I_VPXORD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+23328, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPXORQ[] = {
    {I_VPXORQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+23336, 225},
    {I_VPXORQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+23344, 225},
    {I_VPXORQ, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+23352, 225},
    {I_VPXORQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+23360, 225},
    {I_VPXORQ, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+23368, 226},
    {I_VPXORQ, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+23376, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VRANGEPD[] = {
    {I_VRANGEPD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+6828, 227},
    {I_VRANGEPD, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+6837, 227},
    {I_VRANGEPD, 4, {YMMREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+6846, 227},
    {I_VRANGEPD, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+6855, 227},
    {I_VRANGEPD, 4, {ZMMREG,ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0}, {MASK|Z,0,B64|SAE,0,0}, nasm_bytecodes+6864, 228},
    {I_VRANGEPD, 3, {ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64|SAE,0,0,0}, nasm_bytecodes+6873, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VRANGEPS[] = {
    {I_VRANGEPS, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+6882, 227},
    {I_VRANGEPS, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+6891, 227},
    {I_VRANGEPS, 4, {YMMREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+6900, 227},
    {I_VRANGEPS, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+6909, 227},
    {I_VRANGEPS, 4, {ZMMREG,ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0}, {MASK|Z,0,B32|SAE,0,0}, nasm_bytecodes+6918, 228},
    {I_VRANGEPS, 3, {ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32|SAE,0,0,0}, nasm_bytecodes+6927, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VRANGESD[] = {
    {I_VRANGESD, 4, {XMMREG,XMMREG,RM_XMM|BITS64,IMMEDIATE|BITS8,0}, {MASK|Z,0,SAE,0,0}, nasm_bytecodes+6936, 228},
    {I_VRANGESD, 3, {XMMREG,RM_XMM|BITS64,IMMEDIATE|BITS8,0,0}, {MASK|Z,SAE,0,0,0}, nasm_bytecodes+6945, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VRANGESS[] = {
    {I_VRANGESS, 4, {XMMREG,XMMREG,RM_XMM|BITS32,IMMEDIATE|BITS8,0}, {MASK|Z,0,SAE,0,0}, nasm_bytecodes+6954, 228},
    {I_VRANGESS, 3, {XMMREG,RM_XMM|BITS32,IMMEDIATE|BITS8,0,0}, {MASK|Z,SAE,0,0,0}, nasm_bytecodes+6963, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VRCP14PD[] = {
    {I_VRCP14PD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+23384, 225},
    {I_VRCP14PD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+23392, 225},
    {I_VRCP14PD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+23400, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VRCP14PS[] = {
    {I_VRCP14PS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+23408, 225},
    {I_VRCP14PS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+23416, 225},
    {I_VRCP14PS, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+23424, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VRCP14SD[] = {
    {I_VRCP14SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+23432, 226},
    {I_VRCP14SD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+23440, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VRCP14SS[] = {
    {I_VRCP14SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+23448, 226},
    {I_VRCP14SS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+23456, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VRCP28PD[] = {
    {I_VRCP28PD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64|SAE,0,0,0}, nasm_bytecodes+23464, 231},
    ITEMPLATE_END
};

static const struct itemplate instrux_VRCP28PS[] = {
    {I_VRCP28PS, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32|SAE,0,0,0}, nasm_bytecodes+23472, 231},
    ITEMPLATE_END
};

static const struct itemplate instrux_VRCP28SD[] = {
    {I_VRCP28SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, {MASK|Z,0,SAE,0,0}, nasm_bytecodes+23480, 231},
    {I_VRCP28SD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, {MASK|Z,SAE,0,0,0}, nasm_bytecodes+23488, 231},
    ITEMPLATE_END
};

static const struct itemplate instrux_VRCP28SS[] = {
    {I_VRCP28SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, {MASK|Z,0,SAE,0,0}, nasm_bytecodes+23496, 231},
    {I_VRCP28SS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, {MASK|Z,SAE,0,0,0}, nasm_bytecodes+23504, 231},
    ITEMPLATE_END
};

static const struct itemplate instrux_VREDUCEPD[] = {
    {I_VREDUCEPD, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+6972, 227},
    {I_VREDUCEPD, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+6981, 227},
    {I_VREDUCEPD, 3, {ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64|SAE,0,0,0}, nasm_bytecodes+6990, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VREDUCEPS[] = {
    {I_VREDUCEPS, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+6999, 227},
    {I_VREDUCEPS, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+7008, 227},
    {I_VREDUCEPS, 3, {ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32|SAE,0,0,0}, nasm_bytecodes+7017, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VREDUCESD[] = {
    {I_VREDUCESD, 4, {XMMREG,XMMREG,RM_XMM|BITS64,IMMEDIATE|BITS8,0}, {MASK|Z,0,SAE,0,0}, nasm_bytecodes+7026, 228},
    {I_VREDUCESD, 3, {XMMREG,RM_XMM|BITS64,IMMEDIATE|BITS8,0,0}, {MASK|Z,SAE,0,0,0}, nasm_bytecodes+7035, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VREDUCESS[] = {
    {I_VREDUCESS, 4, {XMMREG,XMMREG,RM_XMM|BITS32,IMMEDIATE|BITS8,0}, {MASK|Z,0,SAE,0,0}, nasm_bytecodes+7044, 228},
    {I_VREDUCESS, 3, {XMMREG,RM_XMM|BITS32,IMMEDIATE|BITS8,0,0}, {MASK|Z,SAE,0,0,0}, nasm_bytecodes+7053, 228},
    ITEMPLATE_END
};

static const struct itemplate instrux_VRNDSCALEPD[] = {
    {I_VRNDSCALEPD, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+7062, 225},
    {I_VRNDSCALEPD, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+7071, 225},
    {I_VRNDSCALEPD, 3, {ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64|SAE,0,0,0}, nasm_bytecodes+7080, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VRNDSCALEPS[] = {
    {I_VRNDSCALEPS, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+7089, 225},
    {I_VRNDSCALEPS, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+7098, 225},
    {I_VRNDSCALEPS, 3, {ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32|SAE,0,0,0}, nasm_bytecodes+7107, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VRNDSCALESD[] = {
    {I_VRNDSCALESD, 4, {XMMREG,XMMREG,RM_XMM|BITS64,IMMEDIATE|BITS8,0}, {MASK|Z,0,SAE,0,0}, nasm_bytecodes+7116, 226},
    {I_VRNDSCALESD, 3, {XMMREG,RM_XMM|BITS64,IMMEDIATE|BITS8,0,0}, {MASK|Z,SAE,0,0,0}, nasm_bytecodes+7125, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VRNDSCALESS[] = {
    {I_VRNDSCALESS, 4, {XMMREG,XMMREG,RM_XMM|BITS32,IMMEDIATE|BITS8,0}, {MASK|Z,0,SAE,0,0}, nasm_bytecodes+7134, 226},
    {I_VRNDSCALESS, 3, {XMMREG,RM_XMM|BITS32,IMMEDIATE|BITS8,0,0}, {MASK|Z,SAE,0,0,0}, nasm_bytecodes+7143, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VRSQRT14PD[] = {
    {I_VRSQRT14PD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+23512, 225},
    {I_VRSQRT14PD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+23520, 225},
    {I_VRSQRT14PD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+23528, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VRSQRT14PS[] = {
    {I_VRSQRT14PS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+23536, 225},
    {I_VRSQRT14PS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+23544, 225},
    {I_VRSQRT14PS, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+23552, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VRSQRT14SD[] = {
    {I_VRSQRT14SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+23560, 226},
    {I_VRSQRT14SD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+23568, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VRSQRT14SS[] = {
    {I_VRSQRT14SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+23576, 226},
    {I_VRSQRT14SS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, {MASK|Z,0,0,0,0}, nasm_bytecodes+23584, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VRSQRT28PD[] = {
    {I_VRSQRT28PD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64|SAE,0,0,0}, nasm_bytecodes+23592, 231},
    ITEMPLATE_END
};

static const struct itemplate instrux_VRSQRT28PS[] = {
    {I_VRSQRT28PS, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32|SAE,0,0,0}, nasm_bytecodes+23600, 231},
    ITEMPLATE_END
};

static const struct itemplate instrux_VRSQRT28SD[] = {
    {I_VRSQRT28SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, {MASK|Z,0,SAE,0,0}, nasm_bytecodes+23608, 231},
    {I_VRSQRT28SD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, {MASK|Z,SAE,0,0,0}, nasm_bytecodes+23616, 231},
    ITEMPLATE_END
};

static const struct itemplate instrux_VRSQRT28SS[] = {
    {I_VRSQRT28SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, {MASK|Z,0,SAE,0,0}, nasm_bytecodes+23624, 231},
    {I_VRSQRT28SS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, {MASK|Z,SAE,0,0,0}, nasm_bytecodes+23632, 231},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSCALEFPD[] = {
    {I_VSCALEFPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+23640, 225},
    {I_VSCALEFPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+23648, 225},
    {I_VSCALEFPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+23656, 225},
    {I_VSCALEFPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+23664, 225},
    {I_VSCALEFPD, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B64|ER,0,0}, nasm_bytecodes+23672, 226},
    {I_VSCALEFPD, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B64|ER,0,0,0}, nasm_bytecodes+23680, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSCALEFPS[] = {
    {I_VSCALEFPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+23688, 225},
    {I_VSCALEFPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+23696, 225},
    {I_VSCALEFPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+23704, 225},
    {I_VSCALEFPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+23712, 225},
    {I_VSCALEFPS, 3, {ZMMREG,ZMMREG,RM_ZMM|BITS512,0,0}, {MASK|Z,0,B32|ER,0,0}, nasm_bytecodes+23720, 226},
    {I_VSCALEFPS, 2, {ZMMREG,RM_ZMM|BITS512,0,0,0}, {MASK|Z,B32|ER,0,0,0}, nasm_bytecodes+23728, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSCALEFSD[] = {
    {I_VSCALEFSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, {MASK|Z,0,ER,0,0}, nasm_bytecodes+23736, 226},
    {I_VSCALEFSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, {MASK|Z,ER,0,0,0}, nasm_bytecodes+23744, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSCALEFSS[] = {
    {I_VSCALEFSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, {MASK|Z,0,ER,0,0}, nasm_bytecodes+23752, 226},
    {I_VSCALEFSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, {MASK|Z,ER,0,0,0}, nasm_bytecodes+23760, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSCATTERDPD[] = {
    {I_VSCATTERDPD, 2, {XMEM|BITS64,XMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+7152, 225},
    {I_VSCATTERDPD, 2, {XMEM|BITS64,YMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+7161, 225},
    {I_VSCATTERDPD, 2, {YMEM|BITS64,ZMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+7170, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSCATTERDPS[] = {
    {I_VSCATTERDPS, 2, {XMEM|BITS32,XMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+7179, 225},
    {I_VSCATTERDPS, 2, {YMEM|BITS32,YMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+7188, 225},
    {I_VSCATTERDPS, 2, {ZMEM|BITS32,ZMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+7197, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSCATTERPF0DPD[] = {
    {I_VSCATTERPF0DPD, 1, {YMEM|BITS64,0,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+7206, 232},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSCATTERPF0DPS[] = {
    {I_VSCATTERPF0DPS, 1, {ZMEM|BITS32,0,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+7215, 232},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSCATTERPF0QPD[] = {
    {I_VSCATTERPF0QPD, 1, {ZMEM|BITS64,0,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+7224, 232},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSCATTERPF0QPS[] = {
    {I_VSCATTERPF0QPS, 1, {ZMEM|BITS32,0,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+7233, 232},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSCATTERPF1DPD[] = {
    {I_VSCATTERPF1DPD, 1, {YMEM|BITS64,0,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+7242, 232},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSCATTERPF1DPS[] = {
    {I_VSCATTERPF1DPS, 1, {ZMEM|BITS32,0,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+7251, 232},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSCATTERPF1QPD[] = {
    {I_VSCATTERPF1QPD, 1, {ZMEM|BITS64,0,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+7260, 232},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSCATTERPF1QPS[] = {
    {I_VSCATTERPF1QPS, 1, {ZMEM|BITS32,0,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+7269, 232},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSCATTERQPD[] = {
    {I_VSCATTERQPD, 2, {XMEM|BITS64,XMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+7278, 225},
    {I_VSCATTERQPD, 2, {YMEM|BITS64,YMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+7287, 225},
    {I_VSCATTERQPD, 2, {ZMEM|BITS64,ZMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+7296, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSCATTERQPS[] = {
    {I_VSCATTERQPS, 2, {XMEM|BITS32,XMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+7305, 225},
    {I_VSCATTERQPS, 2, {YMEM|BITS32,XMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+7314, 225},
    {I_VSCATTERQPS, 2, {ZMEM|BITS32,YMMREG,0,0,0}, {MASK,0,0,0,0}, nasm_bytecodes+7323, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSHUFF32X4[] = {
    {I_VSHUFF32X4, 4, {YMMREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+7332, 225},
    {I_VSHUFF32X4, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+7341, 225},
    {I_VSHUFF32X4, 4, {ZMMREG,ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+7350, 226},
    {I_VSHUFF32X4, 3, {ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+7359, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSHUFF64X2[] = {
    {I_VSHUFF64X2, 4, {YMMREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+7368, 225},
    {I_VSHUFF64X2, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+7377, 225},
    {I_VSHUFF64X2, 4, {ZMMREG,ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+7386, 226},
    {I_VSHUFF64X2, 3, {ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+7395, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSHUFI32X4[] = {
    {I_VSHUFI32X4, 4, {YMMREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+7404, 225},
    {I_VSHUFI32X4, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+7413, 225},
    {I_VSHUFI32X4, 4, {ZMMREG,ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0}, {MASK|Z,0,B32,0,0}, nasm_bytecodes+7422, 226},
    {I_VSHUFI32X4, 3, {ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, {MASK|Z,B32,0,0,0}, nasm_bytecodes+7431, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSHUFI64X2[] = {
    {I_VSHUFI64X2, 4, {YMMREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+7440, 225},
    {I_VSHUFI64X2, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+7449, 225},
    {I_VSHUFI64X2, 4, {ZMMREG,ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0}, {MASK|Z,0,B64,0,0}, nasm_bytecodes+7458, 226},
    {I_VSHUFI64X2, 3, {ZMMREG,RM_ZMM|BITS512,IMMEDIATE|BITS8,0,0}, {MASK|Z,B64,0,0,0}, nasm_bytecodes+7467, 226},
    ITEMPLATE_END
};

static const struct itemplate instrux_RDPKRU[] = {
    {I_RDPKRU, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38940, 239},
    ITEMPLATE_END
};

static const struct itemplate instrux_WRPKRU[] = {
    {I_WRPKRU, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38945, 239},
    ITEMPLATE_END
};

static const struct itemplate instrux_RDPID[] = {
    {I_RDPID, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+33472, 240},
    {I_RDPID, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+33471, 239},
    {I_RDPID, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+33472, 241},
    ITEMPLATE_END
};

static const struct itemplate instrux_CLFLUSHOPT[] = {
    {I_CLFLUSHOPT, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+35998, 133},
    ITEMPLATE_END
};

static const struct itemplate instrux_CLWB[] = {
    {I_CLWB, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36004, 133},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCOMMIT[] = {
    {I_PCOMMIT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36010, 242},
    ITEMPLATE_END
};

static const struct itemplate instrux_CLZERO[] = {
    {I_CLZERO, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38950, 243},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP0[] = {
    {I_HINT_NOP0, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36016, 244},
    {I_HINT_NOP0, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36022, 244},
    {I_HINT_NOP0, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36028, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP1[] = {
    {I_HINT_NOP1, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36034, 244},
    {I_HINT_NOP1, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36040, 244},
    {I_HINT_NOP1, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36046, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP2[] = {
    {I_HINT_NOP2, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36052, 244},
    {I_HINT_NOP2, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36058, 244},
    {I_HINT_NOP2, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36064, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP3[] = {
    {I_HINT_NOP3, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36070, 244},
    {I_HINT_NOP3, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36076, 244},
    {I_HINT_NOP3, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36082, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP4[] = {
    {I_HINT_NOP4, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36088, 244},
    {I_HINT_NOP4, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36094, 244},
    {I_HINT_NOP4, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36100, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP5[] = {
    {I_HINT_NOP5, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36106, 244},
    {I_HINT_NOP5, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36112, 244},
    {I_HINT_NOP5, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36118, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP6[] = {
    {I_HINT_NOP6, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36124, 244},
    {I_HINT_NOP6, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36130, 244},
    {I_HINT_NOP6, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36136, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP7[] = {
    {I_HINT_NOP7, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36142, 244},
    {I_HINT_NOP7, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36148, 244},
    {I_HINT_NOP7, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36154, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP8[] = {
    {I_HINT_NOP8, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36160, 244},
    {I_HINT_NOP8, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36166, 244},
    {I_HINT_NOP8, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36172, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP9[] = {
    {I_HINT_NOP9, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36178, 244},
    {I_HINT_NOP9, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36184, 244},
    {I_HINT_NOP9, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36190, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP10[] = {
    {I_HINT_NOP10, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36196, 244},
    {I_HINT_NOP10, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36202, 244},
    {I_HINT_NOP10, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36208, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP11[] = {
    {I_HINT_NOP11, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36214, 244},
    {I_HINT_NOP11, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36220, 244},
    {I_HINT_NOP11, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36226, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP12[] = {
    {I_HINT_NOP12, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36232, 244},
    {I_HINT_NOP12, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36238, 244},
    {I_HINT_NOP12, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36244, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP13[] = {
    {I_HINT_NOP13, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36250, 244},
    {I_HINT_NOP13, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36256, 244},
    {I_HINT_NOP13, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36262, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP14[] = {
    {I_HINT_NOP14, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36268, 244},
    {I_HINT_NOP14, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36274, 244},
    {I_HINT_NOP14, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36280, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP15[] = {
    {I_HINT_NOP15, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36286, 244},
    {I_HINT_NOP15, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36292, 244},
    {I_HINT_NOP15, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36298, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP16[] = {
    {I_HINT_NOP16, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36304, 244},
    {I_HINT_NOP16, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36310, 244},
    {I_HINT_NOP16, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36316, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP17[] = {
    {I_HINT_NOP17, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36322, 244},
    {I_HINT_NOP17, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36328, 244},
    {I_HINT_NOP17, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36334, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP18[] = {
    {I_HINT_NOP18, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36340, 244},
    {I_HINT_NOP18, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36346, 244},
    {I_HINT_NOP18, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36352, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP19[] = {
    {I_HINT_NOP19, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36358, 244},
    {I_HINT_NOP19, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36364, 244},
    {I_HINT_NOP19, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36370, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP20[] = {
    {I_HINT_NOP20, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36376, 244},
    {I_HINT_NOP20, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36382, 244},
    {I_HINT_NOP20, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36388, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP21[] = {
    {I_HINT_NOP21, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36394, 244},
    {I_HINT_NOP21, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36400, 244},
    {I_HINT_NOP21, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36406, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP22[] = {
    {I_HINT_NOP22, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36412, 244},
    {I_HINT_NOP22, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36418, 244},
    {I_HINT_NOP22, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36424, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP23[] = {
    {I_HINT_NOP23, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36430, 244},
    {I_HINT_NOP23, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36436, 244},
    {I_HINT_NOP23, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36442, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP24[] = {
    {I_HINT_NOP24, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36448, 244},
    {I_HINT_NOP24, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36454, 244},
    {I_HINT_NOP24, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36460, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP25[] = {
    {I_HINT_NOP25, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36466, 244},
    {I_HINT_NOP25, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36472, 244},
    {I_HINT_NOP25, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36478, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP26[] = {
    {I_HINT_NOP26, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36484, 244},
    {I_HINT_NOP26, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36490, 244},
    {I_HINT_NOP26, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36496, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP27[] = {
    {I_HINT_NOP27, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36502, 244},
    {I_HINT_NOP27, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36508, 244},
    {I_HINT_NOP27, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36514, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP28[] = {
    {I_HINT_NOP28, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36520, 244},
    {I_HINT_NOP28, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36526, 244},
    {I_HINT_NOP28, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36532, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP29[] = {
    {I_HINT_NOP29, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36538, 244},
    {I_HINT_NOP29, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36544, 244},
    {I_HINT_NOP29, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36550, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP30[] = {
    {I_HINT_NOP30, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36556, 244},
    {I_HINT_NOP30, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36562, 244},
    {I_HINT_NOP30, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36568, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP31[] = {
    {I_HINT_NOP31, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36574, 244},
    {I_HINT_NOP31, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36580, 244},
    {I_HINT_NOP31, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36586, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP32[] = {
    {I_HINT_NOP32, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36592, 244},
    {I_HINT_NOP32, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36598, 244},
    {I_HINT_NOP32, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36604, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP33[] = {
    {I_HINT_NOP33, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36610, 244},
    {I_HINT_NOP33, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36616, 244},
    {I_HINT_NOP33, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36622, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP34[] = {
    {I_HINT_NOP34, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36628, 244},
    {I_HINT_NOP34, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36634, 244},
    {I_HINT_NOP34, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36640, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP35[] = {
    {I_HINT_NOP35, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36646, 244},
    {I_HINT_NOP35, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36652, 244},
    {I_HINT_NOP35, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36658, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP36[] = {
    {I_HINT_NOP36, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36664, 244},
    {I_HINT_NOP36, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36670, 244},
    {I_HINT_NOP36, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36676, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP37[] = {
    {I_HINT_NOP37, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36682, 244},
    {I_HINT_NOP37, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36688, 244},
    {I_HINT_NOP37, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36694, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP38[] = {
    {I_HINT_NOP38, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36700, 244},
    {I_HINT_NOP38, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36706, 244},
    {I_HINT_NOP38, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36712, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP39[] = {
    {I_HINT_NOP39, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36718, 244},
    {I_HINT_NOP39, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36724, 244},
    {I_HINT_NOP39, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36730, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP40[] = {
    {I_HINT_NOP40, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36736, 244},
    {I_HINT_NOP40, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36742, 244},
    {I_HINT_NOP40, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36748, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP41[] = {
    {I_HINT_NOP41, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36754, 244},
    {I_HINT_NOP41, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36760, 244},
    {I_HINT_NOP41, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36766, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP42[] = {
    {I_HINT_NOP42, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36772, 244},
    {I_HINT_NOP42, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36778, 244},
    {I_HINT_NOP42, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36784, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP43[] = {
    {I_HINT_NOP43, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36790, 244},
    {I_HINT_NOP43, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36796, 244},
    {I_HINT_NOP43, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36802, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP44[] = {
    {I_HINT_NOP44, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36808, 244},
    {I_HINT_NOP44, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36814, 244},
    {I_HINT_NOP44, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36820, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP45[] = {
    {I_HINT_NOP45, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36826, 244},
    {I_HINT_NOP45, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36832, 244},
    {I_HINT_NOP45, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36838, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP46[] = {
    {I_HINT_NOP46, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36844, 244},
    {I_HINT_NOP46, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36850, 244},
    {I_HINT_NOP46, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36856, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP47[] = {
    {I_HINT_NOP47, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36862, 244},
    {I_HINT_NOP47, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36868, 244},
    {I_HINT_NOP47, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36874, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP48[] = {
    {I_HINT_NOP48, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36880, 244},
    {I_HINT_NOP48, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36886, 244},
    {I_HINT_NOP48, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36892, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP49[] = {
    {I_HINT_NOP49, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36898, 244},
    {I_HINT_NOP49, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36904, 244},
    {I_HINT_NOP49, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36910, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP50[] = {
    {I_HINT_NOP50, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36916, 244},
    {I_HINT_NOP50, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36922, 244},
    {I_HINT_NOP50, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36928, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP51[] = {
    {I_HINT_NOP51, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36934, 244},
    {I_HINT_NOP51, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36940, 244},
    {I_HINT_NOP51, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36946, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP52[] = {
    {I_HINT_NOP52, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36952, 244},
    {I_HINT_NOP52, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36958, 244},
    {I_HINT_NOP52, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36964, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP53[] = {
    {I_HINT_NOP53, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36970, 244},
    {I_HINT_NOP53, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36976, 244},
    {I_HINT_NOP53, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36982, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP54[] = {
    {I_HINT_NOP54, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36988, 244},
    {I_HINT_NOP54, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+36994, 244},
    {I_HINT_NOP54, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37000, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP55[] = {
    {I_HINT_NOP55, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37006, 244},
    {I_HINT_NOP55, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37012, 244},
    {I_HINT_NOP55, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37018, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP56[] = {
    {I_HINT_NOP56, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+34168, 244},
    {I_HINT_NOP56, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+34174, 244},
    {I_HINT_NOP56, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+34180, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP57[] = {
    {I_HINT_NOP57, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37024, 244},
    {I_HINT_NOP57, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37030, 244},
    {I_HINT_NOP57, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37036, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP58[] = {
    {I_HINT_NOP58, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37042, 244},
    {I_HINT_NOP58, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37048, 244},
    {I_HINT_NOP58, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37054, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP59[] = {
    {I_HINT_NOP59, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37060, 244},
    {I_HINT_NOP59, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37066, 244},
    {I_HINT_NOP59, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37072, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP60[] = {
    {I_HINT_NOP60, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37078, 244},
    {I_HINT_NOP60, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37084, 244},
    {I_HINT_NOP60, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37090, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP61[] = {
    {I_HINT_NOP61, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37096, 244},
    {I_HINT_NOP61, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37102, 244},
    {I_HINT_NOP61, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37108, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP62[] = {
    {I_HINT_NOP62, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37114, 244},
    {I_HINT_NOP62, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37120, 244},
    {I_HINT_NOP62, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37126, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP63[] = {
    {I_HINT_NOP63, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37132, 244},
    {I_HINT_NOP63, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37138, 244},
    {I_HINT_NOP63, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+37144, 245},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMOVcc[] = {
    {I_CMOVcc, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+25260, 118},
    {I_CMOVcc, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+25260, 86},
    {I_CMOVcc, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+25267, 118},
    {I_CMOVcc, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+25267, 86},
    {I_CMOVcc, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+25274, 10},
    {I_CMOVcc, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+25274, 7},
    ITEMPLATE_END
};

static const struct itemplate instrux_Jcc[] = {
    {I_Jcc, 1, {IMMEDIATE|NEAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+25281, 119},
    {I_Jcc, 1, {IMMEDIATE|BITS16|NEAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+25288, 27},
    {I_Jcc, 1, {IMMEDIATE|BITS32|NEAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+25295, 27},
    {I_Jcc, 1, {IMMEDIATE|BITS64|NEAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+25302, 28},
    {I_Jcc, 1, {IMMEDIATE|SHORT,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38836, 25},
    {I_Jcc, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38835, 25},
    {I_Jcc, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+25303, 119},
    {I_Jcc, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+25309, 25},
    {I_Jcc, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+38836, 25},
    ITEMPLATE_END
};

static const struct itemplate instrux_SETcc[] = {
    {I_SETcc, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+34720, 21},
    {I_SETcc, 1, {REG_GPR|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+34720, 5},
    ITEMPLATE_END
};

const struct itemplate * const nasm_instructions[] = {
    instrux_DB,
    instrux_DW,
    instrux_DD,
    instrux_DQ,
    instrux_DT,
    instrux_DO,
    instrux_DY,
    instrux_DZ,
    instrux_RESB,
    instrux_RESW,
    instrux_RESD,
    instrux_RESQ,
    instrux_REST,
    instrux_RESO,
    instrux_RESY,
    instrux_RESZ,
    instrux_INCBIN,
    instrux_AAA,
    instrux_AAD,
    instrux_AAM,
    instrux_AAS,
    instrux_ADC,
    instrux_ADD,
    instrux_AND,
    instrux_ARPL,
    instrux_BB0_RESET,
    instrux_BB1_RESET,
    instrux_BOUND,
    instrux_BSF,
    instrux_BSR,
    instrux_BSWAP,
    instrux_BT,
    instrux_BTC,
    instrux_BTR,
    instrux_BTS,
    instrux_CALL,
    instrux_CBW,
    instrux_CDQ,
    instrux_CDQE,
    instrux_CLC,
    instrux_CLD,
    instrux_CLI,
    instrux_CLTS,
    instrux_CMC,
    instrux_CMP,
    instrux_CMPSB,
    instrux_CMPSD,
    instrux_CMPSQ,
    instrux_CMPSW,
    instrux_CMPXCHG,
    instrux_CMPXCHG486,
    instrux_CMPXCHG8B,
    instrux_CMPXCHG16B,
    instrux_CPUID,
    instrux_CPU_READ,
    instrux_CPU_WRITE,
    instrux_CQO,
    instrux_CWD,
    instrux_CWDE,
    instrux_DAA,
    instrux_DAS,
    instrux_DEC,
    instrux_DIV,
    instrux_DMINT,
    instrux_EMMS,
    instrux_ENTER,
    instrux_EQU,
    instrux_F2XM1,
    instrux_FABS,
    instrux_FADD,
    instrux_FADDP,
    instrux_FBLD,
    instrux_FBSTP,
    instrux_FCHS,
    instrux_FCLEX,
    instrux_FCMOVB,
    instrux_FCMOVBE,
    instrux_FCMOVE,
    instrux_FCMOVNB,
    instrux_FCMOVNBE,
    instrux_FCMOVNE,
    instrux_FCMOVNU,
    instrux_FCMOVU,
    instrux_FCOM,
    instrux_FCOMI,
    instrux_FCOMIP,
    instrux_FCOMP,
    instrux_FCOMPP,
    instrux_FCOS,
    instrux_FDECSTP,
    instrux_FDISI,
    instrux_FDIV,
    instrux_FDIVP,
    instrux_FDIVR,
    instrux_FDIVRP,
    instrux_FEMMS,
    instrux_FENI,
    instrux_FFREE,
    instrux_FFREEP,
    instrux_FIADD,
    instrux_FICOM,
    instrux_FICOMP,
    instrux_FIDIV,
    instrux_FIDIVR,
    instrux_FILD,
    instrux_FIMUL,
    instrux_FINCSTP,
    instrux_FINIT,
    instrux_FIST,
    instrux_FISTP,
    instrux_FISTTP,
    instrux_FISUB,
    instrux_FISUBR,
    instrux_FLD,
    instrux_FLD1,
    instrux_FLDCW,
    instrux_FLDENV,
    instrux_FLDL2E,
    instrux_FLDL2T,
    instrux_FLDLG2,
    instrux_FLDLN2,
    instrux_FLDPI,
    instrux_FLDZ,
    instrux_FMUL,
    instrux_FMULP,
    instrux_FNCLEX,
    instrux_FNDISI,
    instrux_FNENI,
    instrux_FNINIT,
    instrux_FNOP,
    instrux_FNSAVE,
    instrux_FNSTCW,
    instrux_FNSTENV,
    instrux_FNSTSW,
    instrux_FPATAN,
    instrux_FPREM,
    instrux_FPREM1,
    instrux_FPTAN,
    instrux_FRNDINT,
    instrux_FRSTOR,
    instrux_FSAVE,
    instrux_FSCALE,
    instrux_FSETPM,
    instrux_FSIN,
    instrux_FSINCOS,
    instrux_FSQRT,
    instrux_FST,
    instrux_FSTCW,
    instrux_FSTENV,
    instrux_FSTP,
    instrux_FSTSW,
    instrux_FSUB,
    instrux_FSUBP,
    instrux_FSUBR,
    instrux_FSUBRP,
    instrux_FTST,
    instrux_FUCOM,
    instrux_FUCOMI,
    instrux_FUCOMIP,
    instrux_FUCOMP,
    instrux_FUCOMPP,
    instrux_FXAM,
    instrux_FXCH,
    instrux_FXTRACT,
    instrux_FYL2X,
    instrux_FYL2XP1,
    instrux_HLT,
    instrux_IBTS,
    instrux_ICEBP,
    instrux_IDIV,
    instrux_IMUL,
    instrux_IN,
    instrux_INC,
    instrux_INSB,
    instrux_INSD,
    instrux_INSW,
    instrux_INT,
    instrux_INT01,
    instrux_INT1,
    instrux_INT03,
    instrux_INT3,
    instrux_INTO,
    instrux_INVD,
    instrux_INVPCID,
    instrux_INVLPG,
    instrux_INVLPGA,
    instrux_IRET,
    instrux_IRETD,
    instrux_IRETQ,
    instrux_IRETW,
    instrux_JCXZ,
    instrux_JECXZ,
    instrux_JRCXZ,
    instrux_JMP,
    instrux_JMPE,
    instrux_LAHF,
    instrux_LAR,
    instrux_LDS,
    instrux_LEA,
    instrux_LEAVE,
    instrux_LES,
    instrux_LFENCE,
    instrux_LFS,
    instrux_LGDT,
    instrux_LGS,
    instrux_LIDT,
    instrux_LLDT,
    instrux_LMSW,
    instrux_LOADALL,
    instrux_LOADALL286,
    instrux_LODSB,
    instrux_LODSD,
    instrux_LODSQ,
    instrux_LODSW,
    instrux_LOOP,
    instrux_LOOPE,
    instrux_LOOPNE,
    instrux_LOOPNZ,
    instrux_LOOPZ,
    instrux_LSL,
    instrux_LSS,
    instrux_LTR,
    instrux_MFENCE,
    instrux_MONITOR,
    instrux_MONITORX,
    instrux_MOV,
    instrux_MOVD,
    instrux_MOVQ,
    instrux_MOVSB,
    instrux_MOVSD,
    instrux_MOVSQ,
    instrux_MOVSW,
    instrux_MOVSX,
    instrux_MOVSXD,
    instrux_MOVZX,
    instrux_MUL,
    instrux_MWAIT,
    instrux_MWAITX,
    instrux_NEG,
    instrux_NOP,
    instrux_NOT,
    instrux_OR,
    instrux_OUT,
    instrux_OUTSB,
    instrux_OUTSD,
    instrux_OUTSW,
    instrux_PACKSSDW,
    instrux_PACKSSWB,
    instrux_PACKUSWB,
    instrux_PADDB,
    instrux_PADDD,
    instrux_PADDSB,
    instrux_PADDSIW,
    instrux_PADDSW,
    instrux_PADDUSB,
    instrux_PADDUSW,
    instrux_PADDW,
    instrux_PAND,
    instrux_PANDN,
    instrux_PAUSE,
    instrux_PAVEB,
    instrux_PAVGUSB,
    instrux_PCMPEQB,
    instrux_PCMPEQD,
    instrux_PCMPEQW,
    instrux_PCMPGTB,
    instrux_PCMPGTD,
    instrux_PCMPGTW,
    instrux_PDISTIB,
    instrux_PF2ID,
    instrux_PFACC,
    instrux_PFADD,
    instrux_PFCMPEQ,
    instrux_PFCMPGE,
    instrux_PFCMPGT,
    instrux_PFMAX,
    instrux_PFMIN,
    instrux_PFMUL,
    instrux_PFRCP,
    instrux_PFRCPIT1,
    instrux_PFRCPIT2,
    instrux_PFRSQIT1,
    instrux_PFRSQRT,
    instrux_PFSUB,
    instrux_PFSUBR,
    instrux_PI2FD,
    instrux_PMACHRIW,
    instrux_PMADDWD,
    instrux_PMAGW,
    instrux_PMULHRIW,
    instrux_PMULHRWA,
    instrux_PMULHRWC,
    instrux_PMULHW,
    instrux_PMULLW,
    instrux_PMVGEZB,
    instrux_PMVLZB,
    instrux_PMVNZB,
    instrux_PMVZB,
    instrux_POP,
    instrux_POPA,
    instrux_POPAD,
    instrux_POPAW,
    instrux_POPF,
    instrux_POPFD,
    instrux_POPFQ,
    instrux_POPFW,
    instrux_POR,
    instrux_PREFETCH,
    instrux_PREFETCHW,
    instrux_PSLLD,
    instrux_PSLLQ,
    instrux_PSLLW,
    instrux_PSRAD,
    instrux_PSRAW,
    instrux_PSRLD,
    instrux_PSRLQ,
    instrux_PSRLW,
    instrux_PSUBB,
    instrux_PSUBD,
    instrux_PSUBSB,
    instrux_PSUBSIW,
    instrux_PSUBSW,
    instrux_PSUBUSB,
    instrux_PSUBUSW,
    instrux_PSUBW,
    instrux_PUNPCKHBW,
    instrux_PUNPCKHDQ,
    instrux_PUNPCKHWD,
    instrux_PUNPCKLBW,
    instrux_PUNPCKLDQ,
    instrux_PUNPCKLWD,
    instrux_PUSH,
    instrux_PUSHA,
    instrux_PUSHAD,
    instrux_PUSHAW,
    instrux_PUSHF,
    instrux_PUSHFD,
    instrux_PUSHFQ,
    instrux_PUSHFW,
    instrux_PXOR,
    instrux_RCL,
    instrux_RCR,
    instrux_RDSHR,
    instrux_RDMSR,
    instrux_RDPMC,
    instrux_RDTSC,
    instrux_RDTSCP,
    instrux_RET,
    instrux_RETF,
    instrux_RETN,
    instrux_RETW,
    instrux_RETFW,
    instrux_RETNW,
    instrux_RETD,
    instrux_RETFD,
    instrux_RETND,
    instrux_RETQ,
    instrux_RETFQ,
    instrux_RETNQ,
    instrux_ROL,
    instrux_ROR,
    instrux_RDM,
    instrux_RSDC,
    instrux_RSLDT,
    instrux_RSM,
    instrux_RSTS,
    instrux_SAHF,
    instrux_SAL,
    instrux_SALC,
    instrux_SAR,
    instrux_SBB,
    instrux_SCASB,
    instrux_SCASD,
    instrux_SCASQ,
    instrux_SCASW,
    instrux_SFENCE,
    instrux_SGDT,
    instrux_SHL,
    instrux_SHLD,
    instrux_SHR,
    instrux_SHRD,
    instrux_SIDT,
    instrux_SLDT,
    instrux_SKINIT,
    instrux_SMI,
    instrux_SMINT,
    instrux_SMINTOLD,
    instrux_SMSW,
    instrux_STC,
    instrux_STD,
    instrux_STI,
    instrux_STOSB,
    instrux_STOSD,
    instrux_STOSQ,
    instrux_STOSW,
    instrux_STR,
    instrux_SUB,
    instrux_SVDC,
    instrux_SVLDT,
    instrux_SVTS,
    instrux_SWAPGS,
    instrux_SYSCALL,
    instrux_SYSENTER,
    instrux_SYSEXIT,
    instrux_SYSRET,
    instrux_TEST,
    instrux_UD0,
    instrux_UD1,
    instrux_UD2B,
    instrux_UD2,
    instrux_UD2A,
    instrux_UMOV,
    instrux_VERR,
    instrux_VERW,
    instrux_FWAIT,
    instrux_WBINVD,
    instrux_WRSHR,
    instrux_WRMSR,
    instrux_XADD,
    instrux_XBTS,
    instrux_XCHG,
    instrux_XLATB,
    instrux_XLAT,
    instrux_XOR,
    instrux_ADDPS,
    instrux_ADDSS,
    instrux_ANDNPS,
    instrux_ANDPS,
    instrux_CMPEQPS,
    instrux_CMPEQSS,
    instrux_CMPLEPS,
    instrux_CMPLESS,
    instrux_CMPLTPS,
    instrux_CMPLTSS,
    instrux_CMPNEQPS,
    instrux_CMPNEQSS,
    instrux_CMPNLEPS,
    instrux_CMPNLESS,
    instrux_CMPNLTPS,
    instrux_CMPNLTSS,
    instrux_CMPORDPS,
    instrux_CMPORDSS,
    instrux_CMPUNORDPS,
    instrux_CMPUNORDSS,
    instrux_CMPPS,
    instrux_CMPSS,
    instrux_COMISS,
    instrux_CVTPI2PS,
    instrux_CVTPS2PI,
    instrux_CVTSI2SS,
    instrux_CVTSS2SI,
    instrux_CVTTPS2PI,
    instrux_CVTTSS2SI,
    instrux_DIVPS,
    instrux_DIVSS,
    instrux_LDMXCSR,
    instrux_MAXPS,
    instrux_MAXSS,
    instrux_MINPS,
    instrux_MINSS,
    instrux_MOVAPS,
    instrux_MOVHPS,
    instrux_MOVLHPS,
    instrux_MOVLPS,
    instrux_MOVHLPS,
    instrux_MOVMSKPS,
    instrux_MOVNTPS,
    instrux_MOVSS,
    instrux_MOVUPS,
    instrux_MULPS,
    instrux_MULSS,
    instrux_ORPS,
    instrux_RCPPS,
    instrux_RCPSS,
    instrux_RSQRTPS,
    instrux_RSQRTSS,
    instrux_SHUFPS,
    instrux_SQRTPS,
    instrux_SQRTSS,
    instrux_STMXCSR,
    instrux_SUBPS,
    instrux_SUBSS,
    instrux_UCOMISS,
    instrux_UNPCKHPS,
    instrux_UNPCKLPS,
    instrux_XORPS,
    instrux_FXRSTOR,
    instrux_FXRSTOR64,
    instrux_FXSAVE,
    instrux_FXSAVE64,
    instrux_XGETBV,
    instrux_XSETBV,
    instrux_XSAVE,
    instrux_XSAVE64,
    instrux_XSAVEC,
    instrux_XSAVEC64,
    instrux_XSAVEOPT,
    instrux_XSAVEOPT64,
    instrux_XSAVES,
    instrux_XSAVES64,
    instrux_XRSTOR,
    instrux_XRSTOR64,
    instrux_XRSTORS,
    instrux_XRSTORS64,
    instrux_PREFETCHNTA,
    instrux_PREFETCHT0,
    instrux_PREFETCHT1,
    instrux_PREFETCHT2,
    instrux_MASKMOVQ,
    instrux_MOVNTQ,
    instrux_PAVGB,
    instrux_PAVGW,
    instrux_PEXTRW,
    instrux_PINSRW,
    instrux_PMAXSW,
    instrux_PMAXUB,
    instrux_PMINSW,
    instrux_PMINUB,
    instrux_PMOVMSKB,
    instrux_PMULHUW,
    instrux_PSADBW,
    instrux_PSHUFW,
    instrux_PF2IW,
    instrux_PFNACC,
    instrux_PFPNACC,
    instrux_PI2FW,
    instrux_PSWAPD,
    instrux_MASKMOVDQU,
    instrux_CLFLUSH,
    instrux_MOVNTDQ,
    instrux_MOVNTI,
    instrux_MOVNTPD,
    instrux_MOVDQA,
    instrux_MOVDQU,
    instrux_MOVDQ2Q,
    instrux_MOVQ2DQ,
    instrux_PADDQ,
    instrux_PMULUDQ,
    instrux_PSHUFD,
    instrux_PSHUFHW,
    instrux_PSHUFLW,
    instrux_PSLLDQ,
    instrux_PSRLDQ,
    instrux_PSUBQ,
    instrux_PUNPCKHQDQ,
    instrux_PUNPCKLQDQ,
    instrux_ADDPD,
    instrux_ADDSD,
    instrux_ANDNPD,
    instrux_ANDPD,
    instrux_CMPEQPD,
    instrux_CMPEQSD,
    instrux_CMPLEPD,
    instrux_CMPLESD,
    instrux_CMPLTPD,
    instrux_CMPLTSD,
    instrux_CMPNEQPD,
    instrux_CMPNEQSD,
    instrux_CMPNLEPD,
    instrux_CMPNLESD,
    instrux_CMPNLTPD,
    instrux_CMPNLTSD,
    instrux_CMPORDPD,
    instrux_CMPORDSD,
    instrux_CMPUNORDPD,
    instrux_CMPUNORDSD,
    instrux_CMPPD,
    instrux_COMISD,
    instrux_CVTDQ2PD,
    instrux_CVTDQ2PS,
    instrux_CVTPD2DQ,
    instrux_CVTPD2PI,
    instrux_CVTPD2PS,
    instrux_CVTPI2PD,
    instrux_CVTPS2DQ,
    instrux_CVTPS2PD,
    instrux_CVTSD2SI,
    instrux_CVTSD2SS,
    instrux_CVTSI2SD,
    instrux_CVTSS2SD,
    instrux_CVTTPD2PI,
    instrux_CVTTPD2DQ,
    instrux_CVTTPS2DQ,
    instrux_CVTTSD2SI,
    instrux_DIVPD,
    instrux_DIVSD,
    instrux_MAXPD,
    instrux_MAXSD,
    instrux_MINPD,
    instrux_MINSD,
    instrux_MOVAPD,
    instrux_MOVHPD,
    instrux_MOVLPD,
    instrux_MOVMSKPD,
    instrux_MOVUPD,
    instrux_MULPD,
    instrux_MULSD,
    instrux_ORPD,
    instrux_SHUFPD,
    instrux_SQRTPD,
    instrux_SQRTSD,
    instrux_SUBPD,
    instrux_SUBSD,
    instrux_UCOMISD,
    instrux_UNPCKHPD,
    instrux_UNPCKLPD,
    instrux_XORPD,
    instrux_ADDSUBPD,
    instrux_ADDSUBPS,
    instrux_HADDPD,
    instrux_HADDPS,
    instrux_HSUBPD,
    instrux_HSUBPS,
    instrux_LDDQU,
    instrux_MOVDDUP,
    instrux_MOVSHDUP,
    instrux_MOVSLDUP,
    instrux_CLGI,
    instrux_STGI,
    instrux_VMCALL,
    instrux_VMCLEAR,
    instrux_VMFUNC,
    instrux_VMLAUNCH,
    instrux_VMLOAD,
    instrux_VMMCALL,
    instrux_VMPTRLD,
    instrux_VMPTRST,
    instrux_VMREAD,
    instrux_VMRESUME,
    instrux_VMRUN,
    instrux_VMSAVE,
    instrux_VMWRITE,
    instrux_VMXOFF,
    instrux_VMXON,
    instrux_INVEPT,
    instrux_INVVPID,
    instrux_PABSB,
    instrux_PABSW,
    instrux_PABSD,
    instrux_PALIGNR,
    instrux_PHADDW,
    instrux_PHADDD,
    instrux_PHADDSW,
    instrux_PHSUBW,
    instrux_PHSUBD,
    instrux_PHSUBSW,
    instrux_PMADDUBSW,
    instrux_PMULHRSW,
    instrux_PSHUFB,
    instrux_PSIGNB,
    instrux_PSIGNW,
    instrux_PSIGND,
    instrux_EXTRQ,
    instrux_INSERTQ,
    instrux_MOVNTSD,
    instrux_MOVNTSS,
    instrux_LZCNT,
    instrux_BLENDPD,
    instrux_BLENDPS,
    instrux_BLENDVPD,
    instrux_BLENDVPS,
    instrux_DPPD,
    instrux_DPPS,
    instrux_EXTRACTPS,
    instrux_INSERTPS,
    instrux_MOVNTDQA,
    instrux_MPSADBW,
    instrux_PACKUSDW,
    instrux_PBLENDVB,
    instrux_PBLENDW,
    instrux_PCMPEQQ,
    instrux_PEXTRB,
    instrux_PEXTRD,
    instrux_PEXTRQ,
    instrux_PHMINPOSUW,
    instrux_PINSRB,
    instrux_PINSRD,
    instrux_PINSRQ,
    instrux_PMAXSB,
    instrux_PMAXSD,
    instrux_PMAXUD,
    instrux_PMAXUW,
    instrux_PMINSB,
    instrux_PMINSD,
    instrux_PMINUD,
    instrux_PMINUW,
    instrux_PMOVSXBW,
    instrux_PMOVSXBD,
    instrux_PMOVSXBQ,
    instrux_PMOVSXWD,
    instrux_PMOVSXWQ,
    instrux_PMOVSXDQ,
    instrux_PMOVZXBW,
    instrux_PMOVZXBD,
    instrux_PMOVZXBQ,
    instrux_PMOVZXWD,
    instrux_PMOVZXWQ,
    instrux_PMOVZXDQ,
    instrux_PMULDQ,
    instrux_PMULLD,
    instrux_PTEST,
    instrux_ROUNDPD,
    instrux_ROUNDPS,
    instrux_ROUNDSD,
    instrux_ROUNDSS,
    instrux_CRC32,
    instrux_PCMPESTRI,
    instrux_PCMPESTRM,
    instrux_PCMPISTRI,
    instrux_PCMPISTRM,
    instrux_PCMPGTQ,
    instrux_POPCNT,
    instrux_GETSEC,
    instrux_PFRCPV,
    instrux_PFRSQRTV,
    instrux_MOVBE,
    instrux_AESENC,
    instrux_AESENCLAST,
    instrux_AESDEC,
    instrux_AESDECLAST,
    instrux_AESIMC,
    instrux_AESKEYGENASSIST,
    instrux_VAESENC,
    instrux_VAESENCLAST,
    instrux_VAESDEC,
    instrux_VAESDECLAST,
    instrux_VAESIMC,
    instrux_VAESKEYGENASSIST,
    instrux_VADDPD,
    instrux_VADDPS,
    instrux_VADDSD,
    instrux_VADDSS,
    instrux_VADDSUBPD,
    instrux_VADDSUBPS,
    instrux_VANDPD,
    instrux_VANDPS,
    instrux_VANDNPD,
    instrux_VANDNPS,
    instrux_VBLENDPD,
    instrux_VBLENDPS,
    instrux_VBLENDVPD,
    instrux_VBLENDVPS,
    instrux_VBROADCASTSS,
    instrux_VBROADCASTSD,
    instrux_VBROADCASTF128,
    instrux_VCMPEQ_OSPD,
    instrux_VCMPEQPD,
    instrux_VCMPLT_OSPD,
    instrux_VCMPLTPD,
    instrux_VCMPLE_OSPD,
    instrux_VCMPLEPD,
    instrux_VCMPUNORD_QPD,
    instrux_VCMPUNORDPD,
    instrux_VCMPNEQ_UQPD,
    instrux_VCMPNEQPD,
    instrux_VCMPNLT_USPD,
    instrux_VCMPNLTPD,
    instrux_VCMPNLE_USPD,
    instrux_VCMPNLEPD,
    instrux_VCMPORD_QPD,
    instrux_VCMPORDPD,
    instrux_VCMPEQ_UQPD,
    instrux_VCMPNGE_USPD,
    instrux_VCMPNGEPD,
    instrux_VCMPNGT_USPD,
    instrux_VCMPNGTPD,
    instrux_VCMPFALSE_OQPD,
    instrux_VCMPFALSEPD,
    instrux_VCMPNEQ_OQPD,
    instrux_VCMPGE_OSPD,
    instrux_VCMPGEPD,
    instrux_VCMPGT_OSPD,
    instrux_VCMPGTPD,
    instrux_VCMPTRUE_UQPD,
    instrux_VCMPTRUEPD,
    instrux_VCMPLT_OQPD,
    instrux_VCMPLE_OQPD,
    instrux_VCMPUNORD_SPD,
    instrux_VCMPNEQ_USPD,
    instrux_VCMPNLT_UQPD,
    instrux_VCMPNLE_UQPD,
    instrux_VCMPORD_SPD,
    instrux_VCMPEQ_USPD,
    instrux_VCMPNGE_UQPD,
    instrux_VCMPNGT_UQPD,
    instrux_VCMPFALSE_OSPD,
    instrux_VCMPNEQ_OSPD,
    instrux_VCMPGE_OQPD,
    instrux_VCMPGT_OQPD,
    instrux_VCMPTRUE_USPD,
    instrux_VCMPPD,
    instrux_VCMPEQ_OSPS,
    instrux_VCMPEQPS,
    instrux_VCMPLT_OSPS,
    instrux_VCMPLTPS,
    instrux_VCMPLE_OSPS,
    instrux_VCMPLEPS,
    instrux_VCMPUNORD_QPS,
    instrux_VCMPUNORDPS,
    instrux_VCMPNEQ_UQPS,
    instrux_VCMPNEQPS,
    instrux_VCMPNLT_USPS,
    instrux_VCMPNLTPS,
    instrux_VCMPNLE_USPS,
    instrux_VCMPNLEPS,
    instrux_VCMPORD_QPS,
    instrux_VCMPORDPS,
    instrux_VCMPEQ_UQPS,
    instrux_VCMPNGE_USPS,
    instrux_VCMPNGEPS,
    instrux_VCMPNGT_USPS,
    instrux_VCMPNGTPS,
    instrux_VCMPFALSE_OQPS,
    instrux_VCMPFALSEPS,
    instrux_VCMPNEQ_OQPS,
    instrux_VCMPGE_OSPS,
    instrux_VCMPGEPS,
    instrux_VCMPGT_OSPS,
    instrux_VCMPGTPS,
    instrux_VCMPTRUE_UQPS,
    instrux_VCMPTRUEPS,
    instrux_VCMPLT_OQPS,
    instrux_VCMPLE_OQPS,
    instrux_VCMPUNORD_SPS,
    instrux_VCMPNEQ_USPS,
    instrux_VCMPNLT_UQPS,
    instrux_VCMPNLE_UQPS,
    instrux_VCMPORD_SPS,
    instrux_VCMPEQ_USPS,
    instrux_VCMPNGE_UQPS,
    instrux_VCMPNGT_UQPS,
    instrux_VCMPFALSE_OSPS,
    instrux_VCMPNEQ_OSPS,
    instrux_VCMPGE_OQPS,
    instrux_VCMPGT_OQPS,
    instrux_VCMPTRUE_USPS,
    instrux_VCMPPS,
    instrux_VCMPEQ_OSSD,
    instrux_VCMPEQSD,
    instrux_VCMPLT_OSSD,
    instrux_VCMPLTSD,
    instrux_VCMPLE_OSSD,
    instrux_VCMPLESD,
    instrux_VCMPUNORD_QSD,
    instrux_VCMPUNORDSD,
    instrux_VCMPNEQ_UQSD,
    instrux_VCMPNEQSD,
    instrux_VCMPNLT_USSD,
    instrux_VCMPNLTSD,
    instrux_VCMPNLE_USSD,
    instrux_VCMPNLESD,
    instrux_VCMPORD_QSD,
    instrux_VCMPORDSD,
    instrux_VCMPEQ_UQSD,
    instrux_VCMPNGE_USSD,
    instrux_VCMPNGESD,
    instrux_VCMPNGT_USSD,
    instrux_VCMPNGTSD,
    instrux_VCMPFALSE_OQSD,
    instrux_VCMPFALSESD,
    instrux_VCMPNEQ_OQSD,
    instrux_VCMPGE_OSSD,
    instrux_VCMPGESD,
    instrux_VCMPGT_OSSD,
    instrux_VCMPGTSD,
    instrux_VCMPTRUE_UQSD,
    instrux_VCMPTRUESD,
    instrux_VCMPLT_OQSD,
    instrux_VCMPLE_OQSD,
    instrux_VCMPUNORD_SSD,
    instrux_VCMPNEQ_USSD,
    instrux_VCMPNLT_UQSD,
    instrux_VCMPNLE_UQSD,
    instrux_VCMPORD_SSD,
    instrux_VCMPEQ_USSD,
    instrux_VCMPNGE_UQSD,
    instrux_VCMPNGT_UQSD,
    instrux_VCMPFALSE_OSSD,
    instrux_VCMPNEQ_OSSD,
    instrux_VCMPGE_OQSD,
    instrux_VCMPGT_OQSD,
    instrux_VCMPTRUE_USSD,
    instrux_VCMPSD,
    instrux_VCMPEQ_OSSS,
    instrux_VCMPEQSS,
    instrux_VCMPLT_OSSS,
    instrux_VCMPLTSS,
    instrux_VCMPLE_OSSS,
    instrux_VCMPLESS,
    instrux_VCMPUNORD_QSS,
    instrux_VCMPUNORDSS,
    instrux_VCMPNEQ_UQSS,
    instrux_VCMPNEQSS,
    instrux_VCMPNLT_USSS,
    instrux_VCMPNLTSS,
    instrux_VCMPNLE_USSS,
    instrux_VCMPNLESS,
    instrux_VCMPORD_QSS,
    instrux_VCMPORDSS,
    instrux_VCMPEQ_UQSS,
    instrux_VCMPNGE_USSS,
    instrux_VCMPNGESS,
    instrux_VCMPNGT_USSS,
    instrux_VCMPNGTSS,
    instrux_VCMPFALSE_OQSS,
    instrux_VCMPFALSESS,
    instrux_VCMPNEQ_OQSS,
    instrux_VCMPGE_OSSS,
    instrux_VCMPGESS,
    instrux_VCMPGT_OSSS,
    instrux_VCMPGTSS,
    instrux_VCMPTRUE_UQSS,
    instrux_VCMPTRUESS,
    instrux_VCMPLT_OQSS,
    instrux_VCMPLE_OQSS,
    instrux_VCMPUNORD_SSS,
    instrux_VCMPNEQ_USSS,
    instrux_VCMPNLT_UQSS,
    instrux_VCMPNLE_UQSS,
    instrux_VCMPORD_SSS,
    instrux_VCMPEQ_USSS,
    instrux_VCMPNGE_UQSS,
    instrux_VCMPNGT_UQSS,
    instrux_VCMPFALSE_OSSS,
    instrux_VCMPNEQ_OSSS,
    instrux_VCMPGE_OQSS,
    instrux_VCMPGT_OQSS,
    instrux_VCMPTRUE_USSS,
    instrux_VCMPSS,
    instrux_VCOMISD,
    instrux_VCOMISS,
    instrux_VCVTDQ2PD,
    instrux_VCVTDQ2PS,
    instrux_VCVTPD2DQ,
    instrux_VCVTPD2PS,
    instrux_VCVTPS2DQ,
    instrux_VCVTPS2PD,
    instrux_VCVTSD2SI,
    instrux_VCVTSD2SS,
    instrux_VCVTSI2SD,
    instrux_VCVTSI2SS,
    instrux_VCVTSS2SD,
    instrux_VCVTSS2SI,
    instrux_VCVTTPD2DQ,
    instrux_VCVTTPS2DQ,
    instrux_VCVTTSD2SI,
    instrux_VCVTTSS2SI,
    instrux_VDIVPD,
    instrux_VDIVPS,
    instrux_VDIVSD,
    instrux_VDIVSS,
    instrux_VDPPD,
    instrux_VDPPS,
    instrux_VEXTRACTF128,
    instrux_VEXTRACTPS,
    instrux_VHADDPD,
    instrux_VHADDPS,
    instrux_VHSUBPD,
    instrux_VHSUBPS,
    instrux_VINSERTF128,
    instrux_VINSERTPS,
    instrux_VLDDQU,
    instrux_VLDQQU,
    instrux_VLDMXCSR,
    instrux_VMASKMOVDQU,
    instrux_VMASKMOVPS,
    instrux_VMASKMOVPD,
    instrux_VMAXPD,
    instrux_VMAXPS,
    instrux_VMAXSD,
    instrux_VMAXSS,
    instrux_VMINPD,
    instrux_VMINPS,
    instrux_VMINSD,
    instrux_VMINSS,
    instrux_VMOVAPD,
    instrux_VMOVAPS,
    instrux_VMOVD,
    instrux_VMOVQ,
    instrux_VMOVDDUP,
    instrux_VMOVDQA,
    instrux_VMOVQQA,
    instrux_VMOVDQU,
    instrux_VMOVQQU,
    instrux_VMOVHLPS,
    instrux_VMOVHPD,
    instrux_VMOVHPS,
    instrux_VMOVLHPS,
    instrux_VMOVLPD,
    instrux_VMOVLPS,
    instrux_VMOVMSKPD,
    instrux_VMOVMSKPS,
    instrux_VMOVNTDQ,
    instrux_VMOVNTQQ,
    instrux_VMOVNTDQA,
    instrux_VMOVNTPD,
    instrux_VMOVNTPS,
    instrux_VMOVSD,
    instrux_VMOVSHDUP,
    instrux_VMOVSLDUP,
    instrux_VMOVSS,
    instrux_VMOVUPD,
    instrux_VMOVUPS,
    instrux_VMPSADBW,
    instrux_VMULPD,
    instrux_VMULPS,
    instrux_VMULSD,
    instrux_VMULSS,
    instrux_VORPD,
    instrux_VORPS,
    instrux_VPABSB,
    instrux_VPABSW,
    instrux_VPABSD,
    instrux_VPACKSSWB,
    instrux_VPACKSSDW,
    instrux_VPACKUSWB,
    instrux_VPACKUSDW,
    instrux_VPADDB,
    instrux_VPADDW,
    instrux_VPADDD,
    instrux_VPADDQ,
    instrux_VPADDSB,
    instrux_VPADDSW,
    instrux_VPADDUSB,
    instrux_VPADDUSW,
    instrux_VPALIGNR,
    instrux_VPAND,
    instrux_VPANDN,
    instrux_VPAVGB,
    instrux_VPAVGW,
    instrux_VPBLENDVB,
    instrux_VPBLENDW,
    instrux_VPCMPESTRI,
    instrux_VPCMPESTRM,
    instrux_VPCMPISTRI,
    instrux_VPCMPISTRM,
    instrux_VPCMPEQB,
    instrux_VPCMPEQW,
    instrux_VPCMPEQD,
    instrux_VPCMPEQQ,
    instrux_VPCMPGTB,
    instrux_VPCMPGTW,
    instrux_VPCMPGTD,
    instrux_VPCMPGTQ,
    instrux_VPERMILPD,
    instrux_VPERMILPS,
    instrux_VPERM2F128,
    instrux_VPEXTRB,
    instrux_VPEXTRW,
    instrux_VPEXTRD,
    instrux_VPEXTRQ,
    instrux_VPHADDW,
    instrux_VPHADDD,
    instrux_VPHADDSW,
    instrux_VPHMINPOSUW,
    instrux_VPHSUBW,
    instrux_VPHSUBD,
    instrux_VPHSUBSW,
    instrux_VPINSRB,
    instrux_VPINSRW,
    instrux_VPINSRD,
    instrux_VPINSRQ,
    instrux_VPMADDWD,
    instrux_VPMADDUBSW,
    instrux_VPMAXSB,
    instrux_VPMAXSW,
    instrux_VPMAXSD,
    instrux_VPMAXUB,
    instrux_VPMAXUW,
    instrux_VPMAXUD,
    instrux_VPMINSB,
    instrux_VPMINSW,
    instrux_VPMINSD,
    instrux_VPMINUB,
    instrux_VPMINUW,
    instrux_VPMINUD,
    instrux_VPMOVMSKB,
    instrux_VPMOVSXBW,
    instrux_VPMOVSXBD,
    instrux_VPMOVSXBQ,
    instrux_VPMOVSXWD,
    instrux_VPMOVSXWQ,
    instrux_VPMOVSXDQ,
    instrux_VPMOVZXBW,
    instrux_VPMOVZXBD,
    instrux_VPMOVZXBQ,
    instrux_VPMOVZXWD,
    instrux_VPMOVZXWQ,
    instrux_VPMOVZXDQ,
    instrux_VPMULHUW,
    instrux_VPMULHRSW,
    instrux_VPMULHW,
    instrux_VPMULLW,
    instrux_VPMULLD,
    instrux_VPMULUDQ,
    instrux_VPMULDQ,
    instrux_VPOR,
    instrux_VPSADBW,
    instrux_VPSHUFB,
    instrux_VPSHUFD,
    instrux_VPSHUFHW,
    instrux_VPSHUFLW,
    instrux_VPSIGNB,
    instrux_VPSIGNW,
    instrux_VPSIGND,
    instrux_VPSLLDQ,
    instrux_VPSRLDQ,
    instrux_VPSLLW,
    instrux_VPSLLD,
    instrux_VPSLLQ,
    instrux_VPSRAW,
    instrux_VPSRAD,
    instrux_VPSRLW,
    instrux_VPSRLD,
    instrux_VPSRLQ,
    instrux_VPTEST,
    instrux_VPSUBB,
    instrux_VPSUBW,
    instrux_VPSUBD,
    instrux_VPSUBQ,
    instrux_VPSUBSB,
    instrux_VPSUBSW,
    instrux_VPSUBUSB,
    instrux_VPSUBUSW,
    instrux_VPUNPCKHBW,
    instrux_VPUNPCKHWD,
    instrux_VPUNPCKHDQ,
    instrux_VPUNPCKHQDQ,
    instrux_VPUNPCKLBW,
    instrux_VPUNPCKLWD,
    instrux_VPUNPCKLDQ,
    instrux_VPUNPCKLQDQ,
    instrux_VPXOR,
    instrux_VRCPPS,
    instrux_VRCPSS,
    instrux_VRSQRTPS,
    instrux_VRSQRTSS,
    instrux_VROUNDPD,
    instrux_VROUNDPS,
    instrux_VROUNDSD,
    instrux_VROUNDSS,
    instrux_VSHUFPD,
    instrux_VSHUFPS,
    instrux_VSQRTPD,
    instrux_VSQRTPS,
    instrux_VSQRTSD,
    instrux_VSQRTSS,
    instrux_VSTMXCSR,
    instrux_VSUBPD,
    instrux_VSUBPS,
    instrux_VSUBSD,
    instrux_VSUBSS,
    instrux_VTESTPS,
    instrux_VTESTPD,
    instrux_VUCOMISD,
    instrux_VUCOMISS,
    instrux_VUNPCKHPD,
    instrux_VUNPCKHPS,
    instrux_VUNPCKLPD,
    instrux_VUNPCKLPS,
    instrux_VXORPD,
    instrux_VXORPS,
    instrux_VZEROALL,
    instrux_VZEROUPPER,
    instrux_PCLMULLQLQDQ,
    instrux_PCLMULHQLQDQ,
    instrux_PCLMULLQHQDQ,
    instrux_PCLMULHQHQDQ,
    instrux_PCLMULQDQ,
    instrux_VPCLMULLQLQDQ,
    instrux_VPCLMULHQLQDQ,
    instrux_VPCLMULLQHQDQ,
    instrux_VPCLMULHQHQDQ,
    instrux_VPCLMULQDQ,
    instrux_VFMADD132PS,
    instrux_VFMADD132PD,
    instrux_VFMADD312PS,
    instrux_VFMADD312PD,
    instrux_VFMADD213PS,
    instrux_VFMADD213PD,
    instrux_VFMADD123PS,
    instrux_VFMADD123PD,
    instrux_VFMADD231PS,
    instrux_VFMADD231PD,
    instrux_VFMADD321PS,
    instrux_VFMADD321PD,
    instrux_VFMADDSUB132PS,
    instrux_VFMADDSUB132PD,
    instrux_VFMADDSUB312PS,
    instrux_VFMADDSUB312PD,
    instrux_VFMADDSUB213PS,
    instrux_VFMADDSUB213PD,
    instrux_VFMADDSUB123PS,
    instrux_VFMADDSUB123PD,
    instrux_VFMADDSUB231PS,
    instrux_VFMADDSUB231PD,
    instrux_VFMADDSUB321PS,
    instrux_VFMADDSUB321PD,
    instrux_VFMSUB132PS,
    instrux_VFMSUB132PD,
    instrux_VFMSUB312PS,
    instrux_VFMSUB312PD,
    instrux_VFMSUB213PS,
    instrux_VFMSUB213PD,
    instrux_VFMSUB123PS,
    instrux_VFMSUB123PD,
    instrux_VFMSUB231PS,
    instrux_VFMSUB231PD,
    instrux_VFMSUB321PS,
    instrux_VFMSUB321PD,
    instrux_VFMSUBADD132PS,
    instrux_VFMSUBADD132PD,
    instrux_VFMSUBADD312PS,
    instrux_VFMSUBADD312PD,
    instrux_VFMSUBADD213PS,
    instrux_VFMSUBADD213PD,
    instrux_VFMSUBADD123PS,
    instrux_VFMSUBADD123PD,
    instrux_VFMSUBADD231PS,
    instrux_VFMSUBADD231PD,
    instrux_VFMSUBADD321PS,
    instrux_VFMSUBADD321PD,
    instrux_VFNMADD132PS,
    instrux_VFNMADD132PD,
    instrux_VFNMADD312PS,
    instrux_VFNMADD312PD,
    instrux_VFNMADD213PS,
    instrux_VFNMADD213PD,
    instrux_VFNMADD123PS,
    instrux_VFNMADD123PD,
    instrux_VFNMADD231PS,
    instrux_VFNMADD231PD,
    instrux_VFNMADD321PS,
    instrux_VFNMADD321PD,
    instrux_VFNMSUB132PS,
    instrux_VFNMSUB132PD,
    instrux_VFNMSUB312PS,
    instrux_VFNMSUB312PD,
    instrux_VFNMSUB213PS,
    instrux_VFNMSUB213PD,
    instrux_VFNMSUB123PS,
    instrux_VFNMSUB123PD,
    instrux_VFNMSUB231PS,
    instrux_VFNMSUB231PD,
    instrux_VFNMSUB321PS,
    instrux_VFNMSUB321PD,
    instrux_VFMADD132SS,
    instrux_VFMADD132SD,
    instrux_VFMADD312SS,
    instrux_VFMADD312SD,
    instrux_VFMADD213SS,
    instrux_VFMADD213SD,
    instrux_VFMADD123SS,
    instrux_VFMADD123SD,
    instrux_VFMADD231SS,
    instrux_VFMADD231SD,
    instrux_VFMADD321SS,
    instrux_VFMADD321SD,
    instrux_VFMSUB132SS,
    instrux_VFMSUB132SD,
    instrux_VFMSUB312SS,
    instrux_VFMSUB312SD,
    instrux_VFMSUB213SS,
    instrux_VFMSUB213SD,
    instrux_VFMSUB123SS,
    instrux_VFMSUB123SD,
    instrux_VFMSUB231SS,
    instrux_VFMSUB231SD,
    instrux_VFMSUB321SS,
    instrux_VFMSUB321SD,
    instrux_VFNMADD132SS,
    instrux_VFNMADD132SD,
    instrux_VFNMADD312SS,
    instrux_VFNMADD312SD,
    instrux_VFNMADD213SS,
    instrux_VFNMADD213SD,
    instrux_VFNMADD123SS,
    instrux_VFNMADD123SD,
    instrux_VFNMADD231SS,
    instrux_VFNMADD231SD,
    instrux_VFNMADD321SS,
    instrux_VFNMADD321SD,
    instrux_VFNMSUB132SS,
    instrux_VFNMSUB132SD,
    instrux_VFNMSUB312SS,
    instrux_VFNMSUB312SD,
    instrux_VFNMSUB213SS,
    instrux_VFNMSUB213SD,
    instrux_VFNMSUB123SS,
    instrux_VFNMSUB123SD,
    instrux_VFNMSUB231SS,
    instrux_VFNMSUB231SD,
    instrux_VFNMSUB321SS,
    instrux_VFNMSUB321SD,
    instrux_RDFSBASE,
    instrux_RDGSBASE,
    instrux_RDRAND,
    instrux_WRFSBASE,
    instrux_WRGSBASE,
    instrux_VCVTPH2PS,
    instrux_VCVTPS2PH,
    instrux_ADCX,
    instrux_ADOX,
    instrux_RDSEED,
    instrux_CLAC,
    instrux_STAC,
    instrux_XSTORE,
    instrux_XCRYPTECB,
    instrux_XCRYPTCBC,
    instrux_XCRYPTCTR,
    instrux_XCRYPTCFB,
    instrux_XCRYPTOFB,
    instrux_MONTMUL,
    instrux_XSHA1,
    instrux_XSHA256,
    instrux_LLWPCB,
    instrux_SLWPCB,
    instrux_LWPVAL,
    instrux_LWPINS,
    instrux_VFMADDPD,
    instrux_VFMADDPS,
    instrux_VFMADDSD,
    instrux_VFMADDSS,
    instrux_VFMADDSUBPD,
    instrux_VFMADDSUBPS,
    instrux_VFMSUBADDPD,
    instrux_VFMSUBADDPS,
    instrux_VFMSUBPD,
    instrux_VFMSUBPS,
    instrux_VFMSUBSD,
    instrux_VFMSUBSS,
    instrux_VFNMADDPD,
    instrux_VFNMADDPS,
    instrux_VFNMADDSD,
    instrux_VFNMADDSS,
    instrux_VFNMSUBPD,
    instrux_VFNMSUBPS,
    instrux_VFNMSUBSD,
    instrux_VFNMSUBSS,
    instrux_VFRCZPD,
    instrux_VFRCZPS,
    instrux_VFRCZSD,
    instrux_VFRCZSS,
    instrux_VPCMOV,
    instrux_VPCOMB,
    instrux_VPCOMD,
    instrux_VPCOMQ,
    instrux_VPCOMUB,
    instrux_VPCOMUD,
    instrux_VPCOMUQ,
    instrux_VPCOMUW,
    instrux_VPCOMW,
    instrux_VPHADDBD,
    instrux_VPHADDBQ,
    instrux_VPHADDBW,
    instrux_VPHADDDQ,
    instrux_VPHADDUBD,
    instrux_VPHADDUBQ,
    instrux_VPHADDUBW,
    instrux_VPHADDUDQ,
    instrux_VPHADDUWD,
    instrux_VPHADDUWQ,
    instrux_VPHADDWD,
    instrux_VPHADDWQ,
    instrux_VPHSUBBW,
    instrux_VPHSUBDQ,
    instrux_VPHSUBWD,
    instrux_VPMACSDD,
    instrux_VPMACSDQH,
    instrux_VPMACSDQL,
    instrux_VPMACSSDD,
    instrux_VPMACSSDQH,
    instrux_VPMACSSDQL,
    instrux_VPMACSSWD,
    instrux_VPMACSSWW,
    instrux_VPMACSWD,
    instrux_VPMACSWW,
    instrux_VPMADCSSWD,
    instrux_VPMADCSWD,
    instrux_VPPERM,
    instrux_VPROTB,
    instrux_VPROTD,
    instrux_VPROTQ,
    instrux_VPROTW,
    instrux_VPSHAB,
    instrux_VPSHAD,
    instrux_VPSHAQ,
    instrux_VPSHAW,
    instrux_VPSHLB,
    instrux_VPSHLD,
    instrux_VPSHLQ,
    instrux_VPSHLW,
    instrux_VBROADCASTI128,
    instrux_VPBLENDD,
    instrux_VPBROADCASTB,
    instrux_VPBROADCASTW,
    instrux_VPBROADCASTD,
    instrux_VPBROADCASTQ,
    instrux_VPERMD,
    instrux_VPERMPD,
    instrux_VPERMPS,
    instrux_VPERMQ,
    instrux_VPERM2I128,
    instrux_VEXTRACTI128,
    instrux_VINSERTI128,
    instrux_VPMASKMOVD,
    instrux_VPMASKMOVQ,
    instrux_VPSLLVD,
    instrux_VPSLLVQ,
    instrux_VPSRAVD,
    instrux_VPSRLVD,
    instrux_VPSRLVQ,
    instrux_VGATHERDPD,
    instrux_VGATHERQPD,
    instrux_VGATHERDPS,
    instrux_VGATHERQPS,
    instrux_VPGATHERDD,
    instrux_VPGATHERQD,
    instrux_VPGATHERDQ,
    instrux_VPGATHERQQ,
    instrux_XABORT,
    instrux_XBEGIN,
    instrux_XEND,
    instrux_XTEST,
    instrux_ANDN,
    instrux_BEXTR,
    instrux_BLCI,
    instrux_BLCIC,
    instrux_BLSI,
    instrux_BLSIC,
    instrux_BLCFILL,
    instrux_BLSFILL,
    instrux_BLCMSK,
    instrux_BLSMSK,
    instrux_BLSR,
    instrux_BLCS,
    instrux_BZHI,
    instrux_MULX,
    instrux_PDEP,
    instrux_PEXT,
    instrux_RORX,
    instrux_SARX,
    instrux_SHLX,
    instrux_SHRX,
    instrux_TZCNT,
    instrux_TZMSK,
    instrux_T1MSKC,
    instrux_PREFETCHWT1,
    instrux_BNDMK,
    instrux_BNDCL,
    instrux_BNDCU,
    instrux_BNDCN,
    instrux_BNDMOV,
    instrux_BNDLDX,
    instrux_BNDSTX,
    instrux_SHA1MSG1,
    instrux_SHA1MSG2,
    instrux_SHA1NEXTE,
    instrux_SHA1RNDS4,
    instrux_SHA256MSG1,
    instrux_SHA256MSG2,
    instrux_SHA256RNDS2,
    instrux_KADDB,
    instrux_KADDD,
    instrux_KADDQ,
    instrux_KADDW,
    instrux_KANDB,
    instrux_KANDD,
    instrux_KANDNB,
    instrux_KANDND,
    instrux_KANDNQ,
    instrux_KANDNW,
    instrux_KANDQ,
    instrux_KANDW,
    instrux_KMOVB,
    instrux_KMOVD,
    instrux_KMOVQ,
    instrux_KMOVW,
    instrux_KNOTB,
    instrux_KNOTD,
    instrux_KNOTQ,
    instrux_KNOTW,
    instrux_KORB,
    instrux_KORD,
    instrux_KORQ,
    instrux_KORTESTB,
    instrux_KORTESTD,
    instrux_KORTESTQ,
    instrux_KORTESTW,
    instrux_KORW,
    instrux_KSHIFTLB,
    instrux_KSHIFTLD,
    instrux_KSHIFTLQ,
    instrux_KSHIFTLW,
    instrux_KSHIFTRB,
    instrux_KSHIFTRD,
    instrux_KSHIFTRQ,
    instrux_KSHIFTRW,
    instrux_KTESTB,
    instrux_KTESTD,
    instrux_KTESTQ,
    instrux_KTESTW,
    instrux_KUNPCKBW,
    instrux_KUNPCKDQ,
    instrux_KUNPCKWD,
    instrux_KXNORB,
    instrux_KXNORD,
    instrux_KXNORQ,
    instrux_KXNORW,
    instrux_KXORB,
    instrux_KXORD,
    instrux_KXORQ,
    instrux_KXORW,
    instrux_VALIGND,
    instrux_VALIGNQ,
    instrux_VBLENDMPD,
    instrux_VBLENDMPS,
    instrux_VBROADCASTF32X2,
    instrux_VBROADCASTF32X4,
    instrux_VBROADCASTF32X8,
    instrux_VBROADCASTF64X2,
    instrux_VBROADCASTF64X4,
    instrux_VBROADCASTI32X2,
    instrux_VBROADCASTI32X4,
    instrux_VBROADCASTI32X8,
    instrux_VBROADCASTI64X2,
    instrux_VBROADCASTI64X4,
    instrux_VCOMPRESSPD,
    instrux_VCOMPRESSPS,
    instrux_VCVTPD2QQ,
    instrux_VCVTPD2UDQ,
    instrux_VCVTPD2UQQ,
    instrux_VCVTPS2QQ,
    instrux_VCVTPS2UDQ,
    instrux_VCVTPS2UQQ,
    instrux_VCVTQQ2PD,
    instrux_VCVTQQ2PS,
    instrux_VCVTSD2USI,
    instrux_VCVTSS2USI,
    instrux_VCVTTPD2QQ,
    instrux_VCVTTPD2UDQ,
    instrux_VCVTTPD2UQQ,
    instrux_VCVTTPS2QQ,
    instrux_VCVTTPS2UDQ,
    instrux_VCVTTPS2UQQ,
    instrux_VCVTTSD2USI,
    instrux_VCVTTSS2USI,
    instrux_VCVTUDQ2PD,
    instrux_VCVTUDQ2PS,
    instrux_VCVTUQQ2PD,
    instrux_VCVTUQQ2PS,
    instrux_VCVTUSI2SD,
    instrux_VCVTUSI2SS,
    instrux_VDBPSADBW,
    instrux_VEXP2PD,
    instrux_VEXP2PS,
    instrux_VEXPANDPD,
    instrux_VEXPANDPS,
    instrux_VEXTRACTF32X4,
    instrux_VEXTRACTF32X8,
    instrux_VEXTRACTF64X2,
    instrux_VEXTRACTF64X4,
    instrux_VEXTRACTI32X4,
    instrux_VEXTRACTI32X8,
    instrux_VEXTRACTI64X2,
    instrux_VEXTRACTI64X4,
    instrux_VFIXUPIMMPD,
    instrux_VFIXUPIMMPS,
    instrux_VFIXUPIMMSD,
    instrux_VFIXUPIMMSS,
    instrux_VFPCLASSPD,
    instrux_VFPCLASSPS,
    instrux_VFPCLASSSD,
    instrux_VFPCLASSSS,
    instrux_VGATHERPF0DPD,
    instrux_VGATHERPF0DPS,
    instrux_VGATHERPF0QPD,
    instrux_VGATHERPF0QPS,
    instrux_VGATHERPF1DPD,
    instrux_VGATHERPF1DPS,
    instrux_VGATHERPF1QPD,
    instrux_VGATHERPF1QPS,
    instrux_VGETEXPPD,
    instrux_VGETEXPPS,
    instrux_VGETEXPSD,
    instrux_VGETEXPSS,
    instrux_VGETMANTPD,
    instrux_VGETMANTPS,
    instrux_VGETMANTSD,
    instrux_VGETMANTSS,
    instrux_VINSERTF32X4,
    instrux_VINSERTF32X8,
    instrux_VINSERTF64X2,
    instrux_VINSERTF64X4,
    instrux_VINSERTI32X4,
    instrux_VINSERTI32X8,
    instrux_VINSERTI64X2,
    instrux_VINSERTI64X4,
    instrux_VMOVDQA32,
    instrux_VMOVDQA64,
    instrux_VMOVDQU16,
    instrux_VMOVDQU32,
    instrux_VMOVDQU64,
    instrux_VMOVDQU8,
    instrux_VPABSQ,
    instrux_VPANDD,
    instrux_VPANDND,
    instrux_VPANDNQ,
    instrux_VPANDQ,
    instrux_VPBLENDMB,
    instrux_VPBLENDMD,
    instrux_VPBLENDMQ,
    instrux_VPBLENDMW,
    instrux_VPBROADCASTMB2Q,
    instrux_VPBROADCASTMW2D,
    instrux_VPCMPB,
    instrux_VPCMPD,
    instrux_VPCMPQ,
    instrux_VPCMPUB,
    instrux_VPCMPUD,
    instrux_VPCMPUQ,
    instrux_VPCMPUW,
    instrux_VPCMPW,
    instrux_VPCOMPRESSD,
    instrux_VPCOMPRESSQ,
    instrux_VPCONFLICTD,
    instrux_VPCONFLICTQ,
    instrux_VPERMB,
    instrux_VPERMI2B,
    instrux_VPERMI2D,
    instrux_VPERMI2PD,
    instrux_VPERMI2PS,
    instrux_VPERMI2Q,
    instrux_VPERMI2W,
    instrux_VPERMT2B,
    instrux_VPERMT2D,
    instrux_VPERMT2PD,
    instrux_VPERMT2PS,
    instrux_VPERMT2Q,
    instrux_VPERMT2W,
    instrux_VPERMW,
    instrux_VPEXPANDD,
    instrux_VPEXPANDQ,
    instrux_VPLZCNTD,
    instrux_VPLZCNTQ,
    instrux_VPMADD52HUQ,
    instrux_VPMADD52LUQ,
    instrux_VPMAXSQ,
    instrux_VPMAXUQ,
    instrux_VPMINSQ,
    instrux_VPMINUQ,
    instrux_VPMOVB2M,
    instrux_VPMOVD2M,
    instrux_VPMOVDB,
    instrux_VPMOVDW,
    instrux_VPMOVM2B,
    instrux_VPMOVM2D,
    instrux_VPMOVM2Q,
    instrux_VPMOVM2W,
    instrux_VPMOVQ2M,
    instrux_VPMOVQB,
    instrux_VPMOVQD,
    instrux_VPMOVQW,
    instrux_VPMOVSDB,
    instrux_VPMOVSDW,
    instrux_VPMOVSQB,
    instrux_VPMOVSQD,
    instrux_VPMOVSQW,
    instrux_VPMOVSWB,
    instrux_VPMOVUSDB,
    instrux_VPMOVUSDW,
    instrux_VPMOVUSQB,
    instrux_VPMOVUSQD,
    instrux_VPMOVUSQW,
    instrux_VPMOVUSWB,
    instrux_VPMOVW2M,
    instrux_VPMOVWB,
    instrux_VPMULLQ,
    instrux_VPMULTISHIFTQB,
    instrux_VPORD,
    instrux_VPORQ,
    instrux_VPROLD,
    instrux_VPROLQ,
    instrux_VPROLVD,
    instrux_VPROLVQ,
    instrux_VPRORD,
    instrux_VPRORQ,
    instrux_VPRORVD,
    instrux_VPRORVQ,
    instrux_VPSCATTERDD,
    instrux_VPSCATTERDQ,
    instrux_VPSCATTERQD,
    instrux_VPSCATTERQQ,
    instrux_VPSLLVW,
    instrux_VPSRAQ,
    instrux_VPSRAVQ,
    instrux_VPSRAVW,
    instrux_VPSRLVW,
    instrux_VPTERNLOGD,
    instrux_VPTERNLOGQ,
    instrux_VPTESTMB,
    instrux_VPTESTMD,
    instrux_VPTESTMQ,
    instrux_VPTESTMW,
    instrux_VPTESTNMB,
    instrux_VPTESTNMD,
    instrux_VPTESTNMQ,
    instrux_VPTESTNMW,
    instrux_VPXORD,
    instrux_VPXORQ,
    instrux_VRANGEPD,
    instrux_VRANGEPS,
    instrux_VRANGESD,
    instrux_VRANGESS,
    instrux_VRCP14PD,
    instrux_VRCP14PS,
    instrux_VRCP14SD,
    instrux_VRCP14SS,
    instrux_VRCP28PD,
    instrux_VRCP28PS,
    instrux_VRCP28SD,
    instrux_VRCP28SS,
    instrux_VREDUCEPD,
    instrux_VREDUCEPS,
    instrux_VREDUCESD,
    instrux_VREDUCESS,
    instrux_VRNDSCALEPD,
    instrux_VRNDSCALEPS,
    instrux_VRNDSCALESD,
    instrux_VRNDSCALESS,
    instrux_VRSQRT14PD,
    instrux_VRSQRT14PS,
    instrux_VRSQRT14SD,
    instrux_VRSQRT14SS,
    instrux_VRSQRT28PD,
    instrux_VRSQRT28PS,
    instrux_VRSQRT28SD,
    instrux_VRSQRT28SS,
    instrux_VSCALEFPD,
    instrux_VSCALEFPS,
    instrux_VSCALEFSD,
    instrux_VSCALEFSS,
    instrux_VSCATTERDPD,
    instrux_VSCATTERDPS,
    instrux_VSCATTERPF0DPD,
    instrux_VSCATTERPF0DPS,
    instrux_VSCATTERPF0QPD,
    instrux_VSCATTERPF0QPS,
    instrux_VSCATTERPF1DPD,
    instrux_VSCATTERPF1DPS,
    instrux_VSCATTERPF1QPD,
    instrux_VSCATTERPF1QPS,
    instrux_VSCATTERQPD,
    instrux_VSCATTERQPS,
    instrux_VSHUFF32X4,
    instrux_VSHUFF64X2,
    instrux_VSHUFI32X4,
    instrux_VSHUFI64X2,
    instrux_RDPKRU,
    instrux_WRPKRU,
    instrux_RDPID,
    instrux_CLFLUSHOPT,
    instrux_CLWB,
    instrux_PCOMMIT,
    instrux_CLZERO,
    instrux_HINT_NOP0,
    instrux_HINT_NOP1,
    instrux_HINT_NOP2,
    instrux_HINT_NOP3,
    instrux_HINT_NOP4,
    instrux_HINT_NOP5,
    instrux_HINT_NOP6,
    instrux_HINT_NOP7,
    instrux_HINT_NOP8,
    instrux_HINT_NOP9,
    instrux_HINT_NOP10,
    instrux_HINT_NOP11,
    instrux_HINT_NOP12,
    instrux_HINT_NOP13,
    instrux_HINT_NOP14,
    instrux_HINT_NOP15,
    instrux_HINT_NOP16,
    instrux_HINT_NOP17,
    instrux_HINT_NOP18,
    instrux_HINT_NOP19,
    instrux_HINT_NOP20,
    instrux_HINT_NOP21,
    instrux_HINT_NOP22,
    instrux_HINT_NOP23,
    instrux_HINT_NOP24,
    instrux_HINT_NOP25,
    instrux_HINT_NOP26,
    instrux_HINT_NOP27,
    instrux_HINT_NOP28,
    instrux_HINT_NOP29,
    instrux_HINT_NOP30,
    instrux_HINT_NOP31,
    instrux_HINT_NOP32,
    instrux_HINT_NOP33,
    instrux_HINT_NOP34,
    instrux_HINT_NOP35,
    instrux_HINT_NOP36,
    instrux_HINT_NOP37,
    instrux_HINT_NOP38,
    instrux_HINT_NOP39,
    instrux_HINT_NOP40,
    instrux_HINT_NOP41,
    instrux_HINT_NOP42,
    instrux_HINT_NOP43,
    instrux_HINT_NOP44,
    instrux_HINT_NOP45,
    instrux_HINT_NOP46,
    instrux_HINT_NOP47,
    instrux_HINT_NOP48,
    instrux_HINT_NOP49,
    instrux_HINT_NOP50,
    instrux_HINT_NOP51,
    instrux_HINT_NOP52,
    instrux_HINT_NOP53,
    instrux_HINT_NOP54,
    instrux_HINT_NOP55,
    instrux_HINT_NOP56,
    instrux_HINT_NOP57,
    instrux_HINT_NOP58,
    instrux_HINT_NOP59,
    instrux_HINT_NOP60,
    instrux_HINT_NOP61,
    instrux_HINT_NOP62,
    instrux_HINT_NOP63,
    instrux_CMOVcc,
    instrux_Jcc,
    instrux_SETcc,
};
