/*
 * RepeatMacros.h
 *
 *  Created on: Aug 26, 2012
 *      Author: arthur
 */

#ifndef REPEATMACROS_H_
#define REPEATMACROS_H_

#define REPEAT_0(macro)
#define REPEAT_1(macro) REPEAT_0(macro)
#define REPEAT_2(macro) REPEAT_1(macro) macro(1)
#define REPEAT_3(macro) REPEAT_2(macro) macro(2)
#define REPEAT_4(macro) REPEAT_3(macro) macro(3)
#define REPEAT_5(macro) REPEAT_4(macro) macro(4)
#define REPEAT_6(macro) REPEAT_5(macro) macro(5)
#define REPEAT_7(macro) REPEAT_6(macro) macro(6)
#define REPEAT_8(macro) REPEAT_7(macro) macro(7)
#define REPEAT_9(macro) REPEAT_8(macro) macro(8)
#define REPEAT_10(macro) REPEAT_9(macro) macro(9)
#define REPEAT_11(macro) REPEAT_10(macro) macro(10)
#define REPEAT_12(macro) REPEAT_11(macro) macro(11)
#define REPEAT_13(macro) REPEAT_12(macro) macro(12)
#define REPEAT_14(macro) REPEAT_13(macro) macro(13)
#define REPEAT_15(macro) REPEAT_14(macro) macro(14)
#define REPEAT_16(macro) REPEAT_15(macro) macro(15)
#define REPEAT_17(macro) REPEAT_16(macro) macro(16)
#define REPEAT_18(macro) REPEAT_17(macro) macro(17)
#define REPEAT_19(macro) REPEAT_18(macro) macro(18)
#define REPEAT_20(macro) REPEAT_19(macro) macro(19)
#define REPEAT_21(macro) REPEAT_20(macro) macro(20)
#define REPEAT_22(macro) REPEAT_21(macro) macro(21)
#define REPEAT_23(macro) REPEAT_22(macro) macro(22)
#define REPEAT_24(macro) REPEAT_23(macro) macro(23)
#define REPEAT_25(macro) REPEAT_24(macro) macro(24)
#define REPEAT_26(macro) REPEAT_25(macro) macro(25)
#define REPEAT_27(macro) REPEAT_26(macro) macro(26)
#define REPEAT_28(macro) REPEAT_27(macro) macro(27)
#define REPEAT_29(macro) REPEAT_28(macro) macro(28)
#define REPEAT_30(macro) REPEAT_29(macro) macro(29)
#define REPEAT_31(macro) REPEAT_30(macro) macro(30)
#define REPEAT_32(macro) REPEAT_31(macro) macro(31)
#define REPEAT_33(macro) REPEAT_32(macro) macro(32)
#define REPEAT_34(macro) REPEAT_33(macro) macro(33)
#define REPEAT_35(macro) REPEAT_34(macro) macro(34)
#define REPEAT_36(macro) REPEAT_35(macro) macro(35)
#define REPEAT_37(macro) REPEAT_36(macro) macro(36)
#define REPEAT_38(macro) REPEAT_37(macro) macro(37)
#define REPEAT_39(macro) REPEAT_38(macro) macro(38)
#define REPEAT_40(macro) REPEAT_39(macro) macro(39)


#define END_MACRO_0(macro)
#define END_MACRO_1(macro) macro(1)
#define END_MACRO_2(macro) macro(2)
#define END_MACRO_3(macro) macro(3)
#define END_MACRO_4(macro) macro(4)
#define END_MACRO_5(macro) macro(5)
#define END_MACRO_6(macro) macro(6)
#define END_MACRO_7(macro) macro(7)
#define END_MACRO_8(macro) macro(8)
#define END_MACRO_9(macro) macro(9)
#define END_MACRO_10(macro) macro(10)
#define END_MACRO_11(macro) macro(11)
#define END_MACRO_12(macro) macro(12)
#define END_MACRO_13(macro) macro(13)
#define END_MACRO_14(macro) macro(14)
#define END_MACRO_15(macro) macro(15)
#define END_MACRO_16(macro) macro(16)
#define END_MACRO_17(macro) macro(17)
#define END_MACRO_18(macro) macro(18)
#define END_MACRO_19(macro) macro(19)
#define END_MACRO_20(macro) macro(20)
#define END_MACRO_21(macro) macro(21)
#define END_MACRO_22(macro) macro(22)
#define END_MACRO_23(macro) macro(23)
#define END_MACRO_24(macro) macro(24)
#define END_MACRO_25(macro) macro(25)
#define END_MACRO_26(macro) macro(26)
#define END_MACRO_27(macro) macro(27)
#define END_MACRO_28(macro) macro(28)
#define END_MACRO_29(macro) macro(29)
#define END_MACRO_30(macro) macro(30)
#define END_MACRO_31(macro) macro(31)
#define END_MACRO_32(macro) macro(32)
#define END_MACRO_33(macro) macro(33)
#define END_MACRO_34(macro) macro(34)
#define END_MACRO_35(macro) macro(35)
#define END_MACRO_36(macro) macro(36)
#define END_MACRO_37(macro) macro(37)
#define END_MACRO_38(macro) macro(38)
#define END_MACRO_39(macro) macro(39)
#define END_MACRO_40(macro) macro(40)

#define REPEAT(n, macro, end_macro) REPEAT_##n (macro) END_MACRO_##n(end_macro)
#define SIMPLE_REPEAT(n, macro) REPEAT(n, macro, macro)


#define __PARTIAL_0(n, macro1, macro2)
#define __PARTIAL_1(n, macro1, macro2) < macro1(n) macro2(1)>
#define __PARTIAL_2(n, macro1, macro2) < macro1(n) macro2(2)>
#define __PARTIAL_3(n, macro1, macro2) < macro1(n) macro2(3)>
#define __PARTIAL_4(n, macro1, macro2) < macro1(n) macro2(4)>
#define __PARTIAL_5(n, macro1, macro2) < macro1(n) macro2(5)>
#define __PARTIAL_6(n, macro1, macro2) < macro1(n) macro2(6)>
#define __PARTIAL_7(n, macro1, macro2) < macro1(n) macro2(7)>
#define __PARTIAL_8(n, macro1, macro2) < macro1(n) macro2(8)>
#define __PARTIAL_9(n, macro1, macro2) < macro1(n) macro2(9)>
#define __PARTIAL_10(n, macro1, macro2) < macro1(n) macro2(10)>
#define __PARTIAL_11(n, macro1, macro2) < macro1(n) macro2(11)>
#define __PARTIAL_12(n, macro1, macro2) < macro1(n) macro2(12)>
#define __PARTIAL_13(n, macro1, macro2) < macro1(n) macro2(13)>
#define __PARTIAL_14(n, macro1, macro2) < macro1(n) macro2(14)>
#define __PARTIAL_15(n, macro1, macro2) < macro1(n) macro2(15)>
#define __PARTIAL_16(n, macro1, macro2) < macro1(n) macro2(16)>
#define __PARTIAL_17(n, macro1, macro2) < macro1(n) macro2(17)>
#define __PARTIAL_18(n, macro1, macro2) < macro1(n) macro2(18)>
#define __PARTIAL_19(n, macro1, macro2) < macro1(n) macro2(19)>
#define __PARTIAL_20(n, macro1, macro2) < macro1(n) macro2(20)>
#define __PARTIAL_21(n, macro1, macro2) < macro1(n) macro2(21)>
#define __PARTIAL_22(n, macro1, macro2) < macro1(n) macro2(22)>
#define __PARTIAL_23(n, macro1, macro2) < macro1(n) macro2(23)>
#define __PARTIAL_24(n, macro1, macro2) < macro1(n) macro2(24)>
#define __PARTIAL_25(n, macro1, macro2) < macro1(n) macro2(25)>
#define __PARTIAL_26(n, macro1, macro2) < macro1(n) macro2(26)>
#define __PARTIAL_27(n, macro1, macro2) < macro1(n) macro2(27)>
#define __PARTIAL_28(n, macro1, macro2) < macro1(n) macro2(28)>
#define __PARTIAL_29(n, macro1, macro2) < macro1(n) macro2(29)>
#define __PARTIAL_30(n, macro1, macro2) < macro1(n) macro2(30)>
#define __PARTIAL_31(n, macro1, macro2) < macro1(n) macro2(31)>
#define __PARTIAL_32(n, macro1, macro2) < macro1(n) macro2(32)>
#define __PARTIAL_33(n, macro1, macro2) < macro1(n) macro2(33)>
#define __PARTIAL_34(n, macro1, macro2) < macro1(n) macro2(34)>
#define __PARTIAL_35(n, macro1, macro2) < macro1(n) macro2(35)>
#define __PARTIAL_36(n, macro1, macro2) < macro1(n) macro2(36)>
#define __PARTIAL_37(n, macro1, macro2) < macro1(n) macro2(37)>
#define __PARTIAL_38(n, macro1, macro2) < macro1(n) macro2(38)>
#define __PARTIAL_39(n, macro1, macro2) < macro1(n) macro2(39)>
#define __PARTIAL_40(n, macro1, macro2) < macro1(n) macro2(40)>

////////////////////////////////////////////////////////////////////////////
#define __PARTIAL_2_0(macro1, macro2) __PARTIAL_2(0, macro1, macro2)
#define __PARTIAL_2_1(macro1, macro2) __PARTIAL_1(1, macro1, macro2)
#define __PARTIAL_2_2(macro1, macro2) __PARTIAL_0(2, macro1, macro2)

////////////////////////////////////////////////////////////////////////////
#define __PARTIAL_3_0(macro1, macro2) __PARTIAL_3(0, macro1, macro2)
#define __PARTIAL_3_1(macro1, macro2) __PARTIAL_2(1, macro1, macro2)
#define __PARTIAL_3_2(macro1, macro2) __PARTIAL_1(2, macro1, macro2)
#define __PARTIAL_3_3(macro1, macro2) __PARTIAL_0(3, macro1, macro2)

////////////////////////////////////////////////////////////////////////////
#define __PARTIAL_4_0(macro1, macro2) __PARTIAL_4(0, macro1, macro2)
#define __PARTIAL_4_1(macro1, macro2) __PARTIAL_3(1, macro1, macro2)
#define __PARTIAL_4_2(macro1, macro2) __PARTIAL_2(2, macro1, macro2)
#define __PARTIAL_4_3(macro1, macro2) __PARTIAL_1(3, macro1, macro2)
#define __PARTIAL_4_4(macro1, macro2) __PARTIAL_0(4, macro1, macro2)

////////////////////////////////////////////////////////////////////////////
#define __PARTIAL_5_0(macro1, macro2) __PARTIAL_5(0, macro1, macro2)
#define __PARTIAL_5_1(macro1, macro2) __PARTIAL_4(1, macro1, macro2)
#define __PARTIAL_5_2(macro1, macro2) __PARTIAL_3(2, macro1, macro2)
#define __PARTIAL_5_3(macro1, macro2) __PARTIAL_2(3, macro1, macro2)
#define __PARTIAL_5_4(macro1, macro2) __PARTIAL_1(4, macro1, macro2)
#define __PARTIAL_5_5(macro1, macro2) __PARTIAL_0(5, macro1, macro2)

////////////////////////////////////////////////////////////////////////////
#define __PARTIAL_6_0(macro1, macro2) __PARTIAL_6(0, macro1, macro2)
#define __PARTIAL_6_1(macro1, macro2) __PARTIAL_5(1, macro1, macro2)
#define __PARTIAL_6_2(macro1, macro2) __PARTIAL_4(2, macro1, macro2)
#define __PARTIAL_6_3(macro1, macro2) __PARTIAL_3(3, macro1, macro2)
#define __PARTIAL_6_4(macro1, macro2) __PARTIAL_2(4, macro1, macro2)
#define __PARTIAL_6_5(macro1, macro2) __PARTIAL_1(5, macro1, macro2)
#define __PARTIAL_6_6(macro1, macro2) __PARTIAL_0(6, macro1, macro2)

////////////////////////////////////////////////////////////////////////////
#define __PARTIAL_7_0(macro1, macro2) __PARTIAL_7(0, macro1, macro2)
#define __PARTIAL_7_1(macro1, macro2) __PARTIAL_6(1, macro1, macro2)
#define __PARTIAL_7_2(macro1, macro2) __PARTIAL_5(2, macro1, macro2)
#define __PARTIAL_7_3(macro1, macro2) __PARTIAL_4(3, macro1, macro2)
#define __PARTIAL_7_4(macro1, macro2) __PARTIAL_3(4, macro1, macro2)
#define __PARTIAL_7_5(macro1, macro2) __PARTIAL_2(5, macro1, macro2)
#define __PARTIAL_7_6(macro1, macro2) __PARTIAL_1(6, macro1, macro2)
#define __PARTIAL_7_7(macro1, macro2) __PARTIAL_0(7, macro1, macro2)

////////////////////////////////////////////////////////////////////////////
#define __PARTIAL_8_0(macro1, macro2) __PARTIAL_8(0, macro1, macro2)
#define __PARTIAL_8_1(macro1, macro2) __PARTIAL_7(1, macro1, macro2)
#define __PARTIAL_8_2(macro1, macro2) __PARTIAL_6(2, macro1, macro2)
#define __PARTIAL_8_3(macro1, macro2) __PARTIAL_5(3, macro1, macro2)
#define __PARTIAL_8_4(macro1, macro2) __PARTIAL_4(4, macro1, macro2)
#define __PARTIAL_8_5(macro1, macro2) __PARTIAL_3(5, macro1, macro2)
#define __PARTIAL_8_6(macro1, macro2) __PARTIAL_2(6, macro1, macro2)
#define __PARTIAL_8_7(macro1, macro2) __PARTIAL_1(7, macro1, macro2)
#define __PARTIAL_8_8(macro1, macro2) __PARTIAL_0(8, macro1, macro2)

////////////////////////////////////////////////////////////////////////////
#define __PARTIAL_9_0(macro1, macro2) __PARTIAL_9(0, macro1, macro2)
#define __PARTIAL_9_1(macro1, macro2) __PARTIAL_8(1, macro1, macro2)
#define __PARTIAL_9_2(macro1, macro2) __PARTIAL_7(2, macro1, macro2)
#define __PARTIAL_9_3(macro1, macro2) __PARTIAL_6(3, macro1, macro2)
#define __PARTIAL_9_4(macro1, macro2) __PARTIAL_5(4, macro1, macro2)
#define __PARTIAL_9_5(macro1, macro2) __PARTIAL_4(5, macro1, macro2)
#define __PARTIAL_9_6(macro1, macro2) __PARTIAL_3(6, macro1, macro2)
#define __PARTIAL_9_7(macro1, macro2) __PARTIAL_2(7, macro1, macro2)
#define __PARTIAL_9_8(macro1, macro2) __PARTIAL_1(8, macro1, macro2)
#define __PARTIAL_9_9(macro1, macro2) __PARTIAL_0(9, macro1, macro2)

////////////////////////////////////////////////////////////////////////////
#define __PARTIAL_10_0(macro1, macro2)  __PARTIAL_10(0, macro1, macro2)
#define __PARTIAL_10_1(macro1, macro2)  __PARTIAL_9(1,  macro1, macro2)
#define __PARTIAL_10_2(macro1, macro2)  __PARTIAL_8(2,  macro1, macro2)
#define __PARTIAL_10_3(macro1, macro2)  __PARTIAL_7(3,  macro1, macro2)
#define __PARTIAL_10_4(macro1, macro2)  __PARTIAL_6(4,  macro1, macro2)
#define __PARTIAL_10_5(macro1, macro2)  __PARTIAL_5(5,  macro1, macro2)
#define __PARTIAL_10_6(macro1, macro2)  __PARTIAL_4(6,  macro1, macro2)
#define __PARTIAL_10_7(macro1, macro2)  __PARTIAL_3(7,  macro1, macro2)
#define __PARTIAL_10_8(macro1, macro2)  __PARTIAL_2(8,  macro1, macro2)
#define __PARTIAL_10_9(macro1, macro2)  __PARTIAL_1(9,  macro1, macro2)
#define __PARTIAL_10_10(macro1, macro2) __PARTIAL_0(10, macro1, macro2)

////////////////////////////////////////////////////////////////////////////
#define __PARTIAL_20_0(macro1, macro2)  __PARTIAL_20(0, macro1, macro2)
#define __PARTIAL_20_1(macro1, macro2)  __PARTIAL_19(1,  macro1, macro2)
#define __PARTIAL_20_2(macro1, macro2)  __PARTIAL_18(2,  macro1, macro2)
#define __PARTIAL_20_3(macro1, macro2)  __PARTIAL_17(3,  macro1, macro2)
#define __PARTIAL_20_4(macro1, macro2)  __PARTIAL_16(4,  macro1, macro2)
#define __PARTIAL_20_5(macro1, macro2)  __PARTIAL_15(5,  macro1, macro2)
#define __PARTIAL_20_6(macro1, macro2)  __PARTIAL_14(6,  macro1, macro2)
#define __PARTIAL_20_7(macro1, macro2)  __PARTIAL_13(7,  macro1, macro2)
#define __PARTIAL_20_8(macro1, macro2)  __PARTIAL_12(8,  macro1, macro2)
#define __PARTIAL_20_9(macro1, macro2)  __PARTIAL_11(9,  macro1, macro2)
#define __PARTIAL_20_10(macro1, macro2) __PARTIAL_10(10, macro1, macro2)
#define __PARTIAL_20_11(macro1, macro2) __PARTIAL_9(11, macro1, macro2)
#define __PARTIAL_20_12(macro1, macro2) __PARTIAL_8(12, macro1, macro2)
#define __PARTIAL_20_13(macro1, macro2) __PARTIAL_7(13, macro1, macro2)
#define __PARTIAL_20_14(macro1, macro2) __PARTIAL_6(14, macro1, macro2)
#define __PARTIAL_20_15(macro1, macro2) __PARTIAL_5(15, macro1, macro2)
#define __PARTIAL_20_16(macro1, macro2) __PARTIAL_4(16, macro1, macro2)
#define __PARTIAL_20_17(macro1, macro2) __PARTIAL_3(17, macro1, macro2)
#define __PARTIAL_20_18(macro1, macro2) __PARTIAL_2(18, macro1, macro2)
#define __PARTIAL_20_19(macro1, macro2) __PARTIAL_1(19, macro1, macro2)
#define __PARTIAL_20_20(macro1, macro2) __PARTIAL_0(20, macro1, macro2)

////////////////////////////////////////////////////////////////////////////
#define __PARTIAL_30_0(macro1, macro2)  __PARTIAL_30(0, macro1, macro2)
#define __PARTIAL_30_1(macro1, macro2)  __PARTIAL_29(1,  macro1, macro2)
#define __PARTIAL_30_2(macro1, macro2)  __PARTIAL_28(2,  macro1, macro2)
#define __PARTIAL_30_3(macro1, macro2)  __PARTIAL_27(3,  macro1, macro2)
#define __PARTIAL_30_4(macro1, macro2)  __PARTIAL_26(4,  macro1, macro2)
#define __PARTIAL_30_5(macro1, macro2)  __PARTIAL_25(5,  macro1, macro2)
#define __PARTIAL_30_6(macro1, macro2)  __PARTIAL_24(6,  macro1, macro2)
#define __PARTIAL_30_7(macro1, macro2)  __PARTIAL_23(7,  macro1, macro2)
#define __PARTIAL_30_8(macro1, macro2)  __PARTIAL_22(8,  macro1, macro2)
#define __PARTIAL_30_9(macro1, macro2)  __PARTIAL_21(9,  macro1, macro2)
#define __PARTIAL_30_10(macro1, macro2) __PARTIAL_20(10, macro1, macro2)
#define __PARTIAL_30_11(macro1, macro2) __PARTIAL_19(11, macro1, macro2)
#define __PARTIAL_30_12(macro1, macro2) __PARTIAL_18(12, macro1, macro2)
#define __PARTIAL_30_13(macro1, macro2) __PARTIAL_17(13, macro1, macro2)
#define __PARTIAL_30_14(macro1, macro2) __PARTIAL_16(14, macro1, macro2)
#define __PARTIAL_30_15(macro1, macro2) __PARTIAL_15(15, macro1, macro2)
#define __PARTIAL_30_16(macro1, macro2) __PARTIAL_14(16, macro1, macro2)
#define __PARTIAL_30_17(macro1, macro2) __PARTIAL_13(17, macro1, macro2)
#define __PARTIAL_30_18(macro1, macro2) __PARTIAL_12(18, macro1, macro2)
#define __PARTIAL_30_19(macro1, macro2) __PARTIAL_11(19, macro1, macro2)
#define __PARTIAL_30_20(macro1, macro2) __PARTIAL_10(20, macro1, macro2)
#define __PARTIAL_30_21(macro1, macro2) __PARTIAL_9(21, macro1, macro2)
#define __PARTIAL_30_22(macro1, macro2) __PARTIAL_8(22, macro1, macro2)
#define __PARTIAL_30_23(macro1, macro2) __PARTIAL_7(23, macro1, macro2)
#define __PARTIAL_30_24(macro1, macro2) __PARTIAL_6(24, macro1, macro2)
#define __PARTIAL_30_25(macro1, macro2) __PARTIAL_5(25, macro1, macro2)
#define __PARTIAL_30_26(macro1, macro2) __PARTIAL_4(26, macro1, macro2)
#define __PARTIAL_30_27(macro1, macro2) __PARTIAL_3(27, macro1, macro2)
#define __PARTIAL_30_28(macro1, macro2) __PARTIAL_2(28, macro1, macro2)
#define __PARTIAL_30_29(macro1, macro2) __PARTIAL_1(29, macro1, macro2)
#define __PARTIAL_30_30(macro1, macro2) __PARTIAL_0(30, macro1, macro2)

////////////////////////////////////////////////////////////////////////////
#define __PARTIAL_40_0(macro1, macro2)  __PARTIAL_40(0,  macro1, macro2)
#define __PARTIAL_40_1(macro1, macro2)  __PARTIAL_39(1,  macro1, macro2)
#define __PARTIAL_40_2(macro1, macro2)  __PARTIAL_38(2,  macro1, macro2)
#define __PARTIAL_40_3(macro1, macro2)  __PARTIAL_37(3,  macro1, macro2)
#define __PARTIAL_40_4(macro1, macro2)  __PARTIAL_36(4,  macro1, macro2)
#define __PARTIAL_40_5(macro1, macro2)  __PARTIAL_35(5,  macro1, macro2)
#define __PARTIAL_40_6(macro1, macro2)  __PARTIAL_34(6,  macro1, macro2)
#define __PARTIAL_40_7(macro1, macro2)  __PARTIAL_33(7,  macro1, macro2)
#define __PARTIAL_40_8(macro1, macro2)  __PARTIAL_32(8,  macro1, macro2)
#define __PARTIAL_40_9(macro1, macro2)  __PARTIAL_31(9,  macro1, macro2)
#define __PARTIAL_40_10(macro1, macro2) __PARTIAL_30(10, macro1, macro2)
#define __PARTIAL_40_11(macro1, macro2) __PARTIAL_29(11, macro1, macro2)
#define __PARTIAL_40_12(macro1, macro2) __PARTIAL_28(12, macro1, macro2)
#define __PARTIAL_40_13(macro1, macro2) __PARTIAL_27(13, macro1, macro2)
#define __PARTIAL_40_14(macro1, macro2) __PARTIAL_26(14, macro1, macro2)
#define __PARTIAL_40_15(macro1, macro2) __PARTIAL_25(15, macro1, macro2)
#define __PARTIAL_40_16(macro1, macro2) __PARTIAL_24(16, macro1, macro2)
#define __PARTIAL_40_17(macro1, macro2) __PARTIAL_23(17, macro1, macro2)
#define __PARTIAL_40_18(macro1, macro2) __PARTIAL_22(18, macro1, macro2)
#define __PARTIAL_40_19(macro1, macro2) __PARTIAL_21(19, macro1, macro2)
#define __PARTIAL_40_20(macro1, macro2) __PARTIAL_20(20, macro1, macro2)
#define __PARTIAL_40_21(macro1, macro2) __PARTIAL_19(21, macro1, macro2)
#define __PARTIAL_40_22(macro1, macro2) __PARTIAL_18(22, macro1, macro2)
#define __PARTIAL_40_23(macro1, macro2) __PARTIAL_17(23, macro1, macro2)
#define __PARTIAL_40_24(macro1, macro2) __PARTIAL_16(24, macro1, macro2)
#define __PARTIAL_40_25(macro1, macro2) __PARTIAL_15(25, macro1, macro2)
#define __PARTIAL_40_26(macro1, macro2) __PARTIAL_14(26, macro1, macro2)
#define __PARTIAL_40_27(macro1, macro2) __PARTIAL_13(27, macro1, macro2)
#define __PARTIAL_40_28(macro1, macro2) __PARTIAL_12(28, macro1, macro2)
#define __PARTIAL_40_29(macro1, macro2) __PARTIAL_11(29, macro1, macro2)
#define __PARTIAL_40_30(macro1, macro2) __PARTIAL_10(30, macro1, macro2)
#define __PARTIAL_40_31(macro1, macro2) __PARTIAL_9(21, macro1, macro2)
#define __PARTIAL_40_32(macro1, macro2) __PARTIAL_8(22, macro1, macro2)
#define __PARTIAL_40_33(macro1, macro2) __PARTIAL_7(23, macro1, macro2)
#define __PARTIAL_40_34(macro1, macro2) __PARTIAL_6(24, macro1, macro2)
#define __PARTIAL_40_35(macro1, macro2) __PARTIAL_5(25, macro1, macro2)
#define __PARTIAL_40_36(macro1, macro2) __PARTIAL_4(26, macro1, macro2)
#define __PARTIAL_40_37(macro1, macro2) __PARTIAL_3(27, macro1, macro2)
#define __PARTIAL_40_38(macro1, macro2) __PARTIAL_2(28, macro1, macro2)
#define __PARTIAL_40_39(macro1, macro2) __PARTIAL_1(29, macro1, macro2)
#define __PARTIAL_40_40(macro1, macro2) __PARTIAL_0(30, macro1, macro2)

#endif /* REPEATMACROS_H_ */

