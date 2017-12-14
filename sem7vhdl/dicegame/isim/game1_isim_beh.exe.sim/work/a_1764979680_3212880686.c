/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Administrator/Documents/sem7vhdl/dicegame/game1.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1764979680_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int t11;
    char *t12;

LAB0:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 1328U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    if (t3 == 0)
        goto LAB3;

LAB7:    if (t3 == 1)
        goto LAB4;

LAB8:    if (t3 == 2)
        goto LAB5;

LAB9:
LAB6:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t5 = *((unsigned char *)t2);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB37;

LAB39:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 2656);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(95, ng0);
    t1 = (t0 + 2764);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 1604U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 1512U);
    t4 = *((char **)t1);
    t11 = *((int *)t4);
    t5 = (t3 == t11);
    if (t5 != 0)
        goto LAB46;

LAB48:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 2692);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(99, ng0);
    t1 = (t0 + 2728);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);

LAB47:
LAB38:
LAB2:    t1 = (t0 + 2604);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 592U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 2656);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((int *)t8) = 1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 2692);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 2728);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 2764);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 5133);
    t4 = (t0 + 2800);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 9U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(58, ng0);
    t1 = (t0 + 2836);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((int *)t8) = 1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(58, ng0);
    t1 = (t0 + 2872);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);

LAB12:    goto LAB2;

LAB4:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t5 = *((unsigned char *)t2);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 2656);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((int *)t8) = 2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 2764);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 2872);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((int *)t9) = t3;
    xsi_driver_first_trans_fast(t1);

LAB15:    goto LAB2;

LAB5:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t5 = (t3 == 1);
    if (t5 != 0)
        goto LAB23;

LAB25:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t5 = (t3 == 2);
    if (t5 != 0)
        goto LAB26;

LAB27:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t5 = (t3 == 3);
    if (t5 != 0)
        goto LAB28;

LAB29:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t5 = (t3 == 4);
    if (t5 != 0)
        goto LAB30;

LAB31:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t5 = (t3 == 5);
    if (t5 != 0)
        goto LAB32;

LAB33:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 5187);
    t4 = (t0 + 2800);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 9U);
    xsi_driver_first_trans_fast_port(t4);

LAB24:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t5 = *((unsigned char *)t2);
    t6 = (t5 == (unsigned char)2);
    if (t6 != 0)
        goto LAB34;

LAB36:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 2656);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((int *)t8) = 3;
    xsi_driver_first_trans_fast(t1);

LAB35:    goto LAB2;

LAB10:;
LAB11:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 2656);
    t7 = (t1 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    *((int *)t10) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(54, ng0);
    t1 = (t0 + 2692);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(54, ng0);
    t1 = (t0 + 2728);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(54, ng0);
    t1 = (t0 + 2764);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(54, ng0);
    t1 = (t0 + 5124);
    t4 = (t0 + 2800);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 9U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 2836);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((int *)t8) = 1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 2872);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

LAB14:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 2656);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((int *)t9) = 1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 752U);
    t5 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t5 != 0)
        goto LAB17;

LAB19:
LAB18:    goto LAB15;

LAB17:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t3 = *((int *)t4);
    t6 = (t3 == 6);
    if (t6 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t11 = (t3 + 1);
    t1 = (t0 + 2836);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((int *)t9) = t11;
    xsi_driver_first_trans_fast(t1);

LAB21:    goto LAB18;

LAB20:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2836);
    t7 = (t2 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    *((int *)t10) = 1;
    xsi_driver_first_trans_fast(t2);
    goto LAB21;

LAB23:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 5142);
    t7 = (t0 + 2800);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t12 = *((char **)t10);
    memcpy(t12, t1, 9U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB24;

LAB26:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 5151);
    t7 = (t0 + 2800);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t12 = *((char **)t10);
    memcpy(t12, t1, 9U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB24;

LAB28:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 5160);
    t7 = (t0 + 2800);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t12 = *((char **)t10);
    memcpy(t12, t1, 9U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB24;

LAB30:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 5169);
    t7 = (t0 + 2800);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t12 = *((char **)t10);
    memcpy(t12, t1, 9U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB24;

LAB32:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 5178);
    t7 = (t0 + 2800);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t12 = *((char **)t10);
    memcpy(t12, t1, 9U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB24;

LAB34:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 2656);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((int *)t9) = 2;
    xsi_driver_first_trans_fast(t1);
    goto LAB35;

LAB37:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 2656);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((int *)t9) = 3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(87, ng0);
    t1 = (t0 + 752U);
    t5 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t5 != 0)
        goto LAB40;

LAB42:
LAB41:    goto LAB38;

LAB40:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t3 = *((int *)t4);
    t6 = (t3 == 6);
    if (t6 != 0)
        goto LAB43;

LAB45:    xsi_set_current_line(91, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t11 = (t3 + 1);
    t1 = (t0 + 2836);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((int *)t9) = t11;
    xsi_driver_first_trans_fast(t1);

LAB44:    goto LAB41;

LAB43:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2836);
    t7 = (t2 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    *((int *)t10) = 1;
    xsi_driver_first_trans_fast(t2);
    goto LAB44;

LAB46:    xsi_set_current_line(97, ng0);
    t1 = (t0 + 2692);
    t7 = (t1 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(97, ng0);
    t1 = (t0 + 2728);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB47;

}

static void work_a_1764979680_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;

LAB0:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 660U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 2612);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(108, ng0);
    t1 = (t0 + 2908);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 1420U);
    t5 = *((char **)t2);
    t9 = *((int *)t5);
    t2 = (t0 + 2908);
    t6 = (t2 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t10 = *((char **)t8);
    *((int *)t10) = t9;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

}


extern void work_a_1764979680_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1764979680_3212880686_p_0,(void *)work_a_1764979680_3212880686_p_1};
	xsi_register_didat("work_a_1764979680_3212880686", "isim/game1_isim_beh.exe.sim/work/a_1764979680_3212880686.didat");
	xsi_register_executes(pe);
}
