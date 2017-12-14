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
static const char *ng0 = "C:/Users/Administrator/Documents/sem7vhdl/UART/tb.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


void work_a_1344228498_0831356973_sub_3975008402_1212737304(char *t0, char *t1, char *t2, char *t3, unsigned int t4, unsigned int t5, char *t6)
{
    char t8[16];
    char t9[16];
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int64 t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;

LAB0:    t10 = (t9 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 7;
    t11 = (t10 + 4U);
    *((int *)t11) = 0;
    t11 = (t10 + 8U);
    *((int *)t11) = -1;
    t12 = (0 - 7);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t13;
    t11 = (t8 + 4U);
    t14 = (t2 != 0);
    if (t14 == 1)
        goto LAB3;

LAB2:    t15 = (t8 + 8U);
    *((char **)t15) = t9;
    t13 = (0 + t4);
    t16 = (t6 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_delta(t6, t13, 1, 0LL);
    t10 = (t0 + 1476U);
    t16 = *((char **)t10);
    t20 = *((int64 *)t16);
    xsi_process_wait(t1, t20);

LAB7:    t10 = (t1 + 48U);
    t17 = *((char **)t10);
    t18 = (t17 + 1440U);
    *((unsigned int *)t18) = 1U;
    t19 = (t1 + 48U);
    t21 = *((char **)t19);
    t22 = (t21 + 0U);
    getcontext(t22);
    t23 = (t1 + 48U);
    t24 = *((char **)t23);
    t25 = (t24 + 1440U);
    t13 = *((unsigned int *)t25);
    if (t13 == 1)
        goto LAB8;

LAB9:    t26 = (t1 + 48U);
    t27 = *((char **)t26);
    t28 = (t27 + 1440U);
    *((unsigned int *)t28) = 3U;

LAB5:
LAB6:
LAB4:    t12 = 0;
    t29 = 7;

LAB10:    if (t12 <= t29)
        goto LAB11;

LAB13:    t13 = (0 + t4);
    t10 = (t6 + 32U);
    t16 = *((char **)t10);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)3;
    xsi_driver_first_trans_delta(t6, t13, 1, 0LL);
    t10 = (t0 + 1476U);
    t16 = *((char **)t10);
    t20 = *((int64 *)t16);
    xsi_process_wait(t1, t20);

LAB24:    t10 = (t1 + 48U);
    t17 = *((char **)t10);
    t18 = (t17 + 1440U);
    *((unsigned int *)t18) = 1U;
    t19 = (t1 + 48U);
    t21 = *((char **)t19);
    t22 = (t21 + 0U);
    getcontext(t22);
    t23 = (t1 + 48U);
    t24 = *((char **)t23);
    t25 = (t24 + 1440U);
    t13 = *((unsigned int *)t25);
    if (t13 == 1)
        goto LAB25;

LAB26:    t26 = (t1 + 48U);
    t27 = *((char **)t26);
    t28 = (t27 + 1440U);
    *((unsigned int *)t28) = 3U;

LAB22:
LAB23:
LAB21:
LAB1:    return;
LAB3:    *((char **)t11) = t2;
    goto LAB2;

LAB8:    xsi_saveStackAndSuspend(t1);
    goto LAB9;

LAB11:    t10 = (t9 + 0U);
    t30 = *((int *)t10);
    t16 = (t9 + 8U);
    t31 = *((int *)t16);
    t32 = (t12 - t30);
    t13 = (t32 * t31);
    t17 = (t9 + 4U);
    t33 = *((int *)t17);
    xsi_vhdl_check_range_of_index(t30, t33, t31, t12);
    t34 = (1U * t13);
    t35 = (0 + t34);
    t18 = (t2 + t35);
    t14 = *((unsigned char *)t18);
    t36 = (0 + t4);
    t19 = (t6 + 32U);
    t21 = *((char **)t19);
    t22 = (t21 + 40U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = t14;
    xsi_driver_first_trans_delta(t6, t36, 1, 0LL);
    t10 = (t0 + 1476U);
    t16 = *((char **)t10);
    t20 = *((int64 *)t16);
    xsi_process_wait(t1, t20);

LAB17:    t10 = (t1 + 48U);
    t17 = *((char **)t10);
    t18 = (t17 + 1440U);
    *((unsigned int *)t18) = 1U;
    t19 = (t1 + 48U);
    t21 = *((char **)t19);
    t22 = (t21 + 0U);
    getcontext(t22);
    t23 = (t1 + 48U);
    t24 = *((char **)t23);
    t25 = (t24 + 1440U);
    t13 = *((unsigned int *)t25);
    if (t13 == 1)
        goto LAB18;

LAB19:    t26 = (t1 + 48U);
    t27 = *((char **)t26);
    t28 = (t27 + 1440U);
    *((unsigned int *)t28) = 3U;

LAB15:
LAB16:
LAB14:
LAB12:    if (t12 == t29)
        goto LAB13;

LAB20:    t30 = (t12 + 1);
    t12 = t30;
    goto LAB10;

LAB18:    xsi_saveStackAndSuspend(t1);
    goto LAB19;

LAB25:    xsi_saveStackAndSuspend(t1);
    goto LAB26;

}

static void work_a_1344228498_0831356973_p_0(char *t0)
{
    int64 t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(107, ng0);

LAB3:    t1 = (50 * 1000LL);
    t2 = (t0 + 592U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t4);
    t2 = (t0 + 2464);
    t6 = (t2 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t5;
    xsi_driver_first_trans_delta(t2, 0U, 1, t1);
    t10 = (t0 + 2464);
    xsi_driver_intertial_reject(t10, t1, t1);

LAB2:    t11 = (t0 + 2372);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1344228498_0831356973_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned int t11;

LAB0:    t1 = (t0 + 2176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(113, ng0);

LAB6:    t2 = (t0 + 2380);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t5 = (t0 + 2380);
    *((int *)t5) = 0;
    xsi_set_current_line(114, ng0);

LAB10:    t2 = (t0 + 2388);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    t3 = (t0 + 568U);
    t4 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    t5 = (t0 + 2388);
    *((int *)t5) = 0;
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 2500);
    t3 = (t2 + 32U);
    t5 = *((char **)t3);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 4678);
    t5 = (t0 + 2536);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(117, ng0);

LAB14:    t2 = (t0 + 2396);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    t3 = (t0 + 568U);
    t4 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB8;
    else
        goto LAB10;

LAB11:    goto LAB9;

LAB12:    t5 = (t0 + 2396);
    *((int *)t5) = 0;
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 2500);
    t3 = (t2 + 32U);
    t5 = *((char **)t3);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(119, ng0);

LAB18:    t2 = (t0 + 2404);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    t3 = (t0 + 568U);
    t4 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB12;
    else
        goto LAB14;

LAB15:    goto LAB13;

LAB16:    t3 = (t0 + 2404);
    *((int *)t3) = 0;
    xsi_set_current_line(123, ng0);

LAB22:    t2 = (t0 + 2412);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB17:    t3 = (t0 + 960U);
    t5 = *((char **)t3);
    t4 = *((unsigned char *)t5);
    t10 = (t4 == (unsigned char)3);
    if (t10 == 1)
        goto LAB16;
    else
        goto LAB18;

LAB19:    goto LAB17;

LAB20:    t5 = (t0 + 2412);
    *((int *)t5) = 0;
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 2076);
    t3 = (t0 + 4686);
    t6 = (t0 + 1212U);
    t7 = (t0 + 2572);
    work_a_1344228498_0831356973_sub_3975008402_1212737304(t0, t2, t3, t6, 0U, 0U, t7);
    xsi_set_current_line(125, ng0);

LAB26:    t2 = (t0 + 2420);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB21:    t3 = (t0 + 568U);
    t4 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB20;
    else
        goto LAB22;

LAB23:    goto LAB21;

LAB24:    t5 = (t0 + 2420);
    *((int *)t5) = 0;
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 1144U);
    t3 = *((char **)t2);
    t2 = (t0 + 4694);
    t4 = 1;
    if (8U == 8U)
        goto LAB31;

LAB32:    t4 = 0;

LAB33:    if (t4 != 0)
        goto LAB28;

LAB30:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 4737);
    xsi_report(t2, 37U, (unsigned char)0);

LAB29:    xsi_set_current_line(134, ng0);
    if ((unsigned char)0 == 0)
        goto LAB37;

LAB38:    goto LAB2;

LAB25:    t3 = (t0 + 568U);
    t4 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB24;
    else
        goto LAB26;

LAB27:    goto LAB25;

LAB28:    xsi_set_current_line(129, ng0);
    t8 = (t0 + 4702);
    xsi_report(t8, 35U, (unsigned char)0);
    goto LAB29;

LAB31:    t11 = 0;

LAB34:    if (t11 < 8U)
        goto LAB35;
    else
        goto LAB33;

LAB35:    t6 = (t3 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB32;

LAB36:    t11 = (t11 + 1);
    goto LAB34;

LAB37:    t2 = (t0 + 4774);
    xsi_report(t2, 14U, (unsigned char)3);
    goto LAB38;

}


extern void work_a_1344228498_0831356973_init()
{
	static char *pe[] = {(void *)work_a_1344228498_0831356973_p_0,(void *)work_a_1344228498_0831356973_p_1};
	static char *se[] = {(void *)work_a_1344228498_0831356973_sub_3975008402_1212737304};
	xsi_register_didat("work_a_1344228498_0831356973", "isim/uart_tb_isim_beh.exe.sim/work/a_1344228498_0831356973.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
