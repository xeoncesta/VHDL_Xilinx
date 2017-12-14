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
static const char *ng0 = "C:/Users/Administrator/Documents/sem7vhdl/sipo_reg/sipo_code.vhd";



static void work_a_0287360395_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;

LAB0:    xsi_set_current_line(44, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t11 = (t4 == (unsigned char)3);
    if (t11 == 1)
        goto LAB8;

LAB9:    t3 = (unsigned char)0;

LAB10:    if (t3 != 0)
        goto LAB5;

LAB7:
LAB6:
LAB3:    t1 = (t0 + 1724);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 3091);
    t6 = (t0 + 1768);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 6U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(49, ng0);
    t5 = (t0 + 592U);
    t6 = *((char **)t5);
    t13 = *((unsigned char *)t6);
    t5 = (t0 + 1768);
    t7 = (t5 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t13;
    xsi_driver_first_trans_delta(t5, 0U, 1, 0LL);
    xsi_set_current_line(50, ng0);
    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t14 = (0 - 0);
    t15 = (t14 * 1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t1 = (t2 + t17);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 1768);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t3;
    xsi_driver_first_trans_delta(t5, 1U, 1, 0LL);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t14 = (1 - 0);
    t15 = (t14 * 1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t1 = (t2 + t17);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 1768);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t3;
    xsi_driver_first_trans_delta(t5, 2U, 1, 0LL);
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t14 = (2 - 0);
    t15 = (t14 * 1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t1 = (t2 + t17);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 1768);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t3;
    xsi_driver_first_trans_delta(t5, 3U, 1, 0LL);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t14 = (3 - 0);
    t15 = (t14 * 1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t1 = (t2 + t17);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 1768);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t3;
    xsi_driver_first_trans_delta(t5, 4U, 1, 0LL);
    xsi_set_current_line(54, ng0);
    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t14 = (4 - 0);
    t15 = (t14 * 1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t1 = (t2 + t17);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 1768);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t3;
    xsi_driver_first_trans_delta(t5, 5U, 1, 0LL);
    goto LAB6;

LAB8:    t1 = (t0 + 660U);
    t12 = xsi_signal_has_event(t1);
    t3 = t12;
    goto LAB10;

}


extern void work_a_0287360395_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0287360395_3212880686_p_0};
	xsi_register_didat("work_a_0287360395_3212880686", "isim/sipo_tb_isim_beh.exe.sim/work/a_0287360395_3212880686.didat");
	xsi_register_executes(pe);
}
