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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Borys/Desktop/automat_napoje 208525/automat/automat.vhd";
extern char *IEEE_P_3620187407;

unsigned char ieee_p_3620187407_sub_1742983514_3965413181(char *, char *, char *, char *, char *);
unsigned char ieee_p_3620187407_sub_4042748798_3965413181(char *, char *, char *, char *, char *);
unsigned char ieee_p_3620187407_sub_4060537613_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767740470_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_0454327734_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 2752U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 6544);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 6688);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 3112U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t2 = (t0 + 6688);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t12 = (t8 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t11;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB7:    t2 = (t0 + 2792U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

}

static void work_a_0454327734_3212880686_p_1(char *t0)
{
    char t29[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    int t30;
    unsigned int t31;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB7, &&LAB8, &&LAB9, &&LAB10};

LAB0:    xsi_set_current_line(44, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 6752);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(45, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 6560);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t8 = *((unsigned char *)t5);
    t9 = (t8 == (unsigned char)3);
    if (t9 != 0)
        goto LAB11;

LAB13:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t8 = (t3 == (unsigned char)3);
    if (t8 != 0)
        goto LAB14;

LAB15:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t8 = (t3 == (unsigned char)3);
    if (t8 != 0)
        goto LAB16;

LAB17:
LAB12:    goto LAB2;

LAB4:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t9 = *((unsigned char *)t2);
    t12 = (t9 == (unsigned char)2);
    if (t12 == 1)
        goto LAB24;

LAB25:    t8 = (unsigned char)0;

LAB26:    if (t8 == 1)
        goto LAB21;

LAB22:    t3 = (unsigned char)0;

LAB23:    if (t3 != 0)
        goto LAB18;

LAB20:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t9 = (t8 == (unsigned char)3);
    if (t9 == 1)
        goto LAB29;

LAB30:    t3 = (unsigned char)0;

LAB31:    if (t3 != 0)
        goto LAB27;

LAB28:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t9 = (t8 == (unsigned char)3);
    if (t9 == 1)
        goto LAB40;

LAB41:    t3 = (unsigned char)0;

LAB42:    if (t3 != 0)
        goto LAB38;

LAB39:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t9 = (t8 == (unsigned char)3);
    if (t9 == 1)
        goto LAB51;

LAB52:    t3 = (unsigned char)0;

LAB53:    if (t3 != 0)
        goto LAB49;

LAB50:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t8 = (t3 == (unsigned char)3);
    if (t8 != 0)
        goto LAB60;

LAB61:
LAB19:    goto LAB2;

LAB5:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t1 = (t0 + 10596U);
    t4 = (t0 + 3432U);
    t5 = *((char **)t4);
    t4 = (t0 + 10564U);
    t9 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t2, t1, t5, t4);
    if (t9 == 1)
        goto LAB68;

LAB69:    t8 = (unsigned char)0;

LAB70:    if (t8 == 1)
        goto LAB65;

LAB66:    t3 = (unsigned char)0;

LAB67:    if (t3 != 0)
        goto LAB62;

LAB64:    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t1 = (t0 + 10596U);
    t4 = (t0 + 3272U);
    t5 = *((char **)t4);
    t4 = (t0 + 10548U);
    t9 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t2, t1, t5, t4);
    if (t9 == 1)
        goto LAB76;

LAB77:    t6 = (t0 + 3752U);
    t7 = *((char **)t6);
    t6 = (t0 + 10596U);
    t10 = (t0 + 3592U);
    t11 = *((char **)t10);
    t10 = (t0 + 10580U);
    t12 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t7, t6, t11, t10);
    t8 = t12;

LAB78:    if (t8 == 1)
        goto LAB73;

LAB74:    t20 = (t0 + 3752U);
    t21 = *((char **)t20);
    t20 = (t0 + 10596U);
    t22 = (t0 + 3432U);
    t23 = *((char **)t22);
    t22 = (t0 + 10564U);
    t13 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t21, t20, t23, t22);
    t3 = t13;

LAB75:    if (t3 != 0)
        goto LAB71;

LAB72:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t8 = (t3 == (unsigned char)3);
    if (t8 != 0)
        goto LAB79;

LAB80:
LAB63:    goto LAB2;

LAB6:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t8 = (t3 == (unsigned char)3);
    if (t8 != 0)
        goto LAB81;

LAB83:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t8 = (t3 == (unsigned char)3);
    if (t8 != 0)
        goto LAB84;

LAB85:
LAB82:    goto LAB2;

LAB7:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t1 = (t0 + 10596U);
    t4 = (t0 + 10658);
    t6 = (t29 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 3;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t30 = (3 - 0);
    t31 = (t30 * 1);
    t31 = (t31 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t31;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t4, t29);
    if (t3 != 0)
        goto LAB86;

LAB88:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t1 = (t0 + 10596U);
    t4 = (t0 + 10662);
    t6 = (t29 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 3;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t30 = (3 - 0);
    t31 = (t30 * 1);
    t31 = (t31 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t31;
    t3 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t2, t1, t4, t29);
    if (t3 != 0)
        goto LAB89;

LAB90:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t8 = (t3 == (unsigned char)3);
    if (t8 != 0)
        goto LAB91;

LAB92:
LAB87:    goto LAB2;

LAB8:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t1 = (t0 + 10596U);
    t4 = (t0 + 10666);
    t6 = (t29 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 3;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t30 = (3 - 0);
    t31 = (t30 * 1);
    t31 = (t31 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t31;
    t8 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t4, t29);
    if (t8 == 1)
        goto LAB96;

LAB97:    t3 = (unsigned char)0;

LAB98:    if (t3 != 0)
        goto LAB93;

LAB95:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t1 = (t0 + 10596U);
    t4 = (t0 + 10670);
    t6 = (t29 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 3;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t30 = (3 - 0);
    t31 = (t30 * 1);
    t31 = (t31 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t31;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t4, t29);
    if (t3 != 0)
        goto LAB99;

LAB100:
LAB94:    goto LAB2;

LAB9:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t1 = (t0 + 10596U);
    t4 = (t0 + 10674);
    t6 = (t29 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 2;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t30 = (2 - 0);
    t31 = (t30 * 1);
    t31 = (t31 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t31;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t4, t29);
    if (t3 != 0)
        goto LAB101;

LAB103:
LAB102:    goto LAB2;

LAB10:    xsi_set_current_line(106, ng0);
    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t1 = (t0 + 10596U);
    t4 = (t0 + 10677);
    t6 = (t29 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 3;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t30 = (3 - 0);
    t31 = (t30 * 1);
    t31 = (t31 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t31;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t4, t29);
    if (t3 != 0)
        goto LAB104;

LAB106:    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t1 = (t0 + 10596U);
    t4 = (t0 + 10681);
    t6 = (t29 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 3;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t30 = (3 - 0);
    t31 = (t30 * 1);
    t31 = (t31 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t31;
    t3 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t2, t1, t4, t29);
    if (t3 != 0)
        goto LAB107;

LAB108:
LAB105:    goto LAB2;

LAB11:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 6752);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)1;
    xsi_driver_first_trans_fast(t4);
    goto LAB12;

LAB14:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 6752);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

LAB16:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 6752);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

LAB18:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 6752);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB21:    t1 = (t0 + 1192U);
    t5 = *((char **)t1);
    t15 = *((unsigned char *)t5);
    t16 = (t15 == (unsigned char)3);
    t3 = t16;
    goto LAB23;

LAB24:    t1 = (t0 + 1352U);
    t4 = *((char **)t1);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)2);
    t8 = t14;
    goto LAB26;

LAB27:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 6752);
    t7 = (t1 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t20 = *((char **)t11);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB29:    t1 = (t0 + 1032U);
    t4 = *((char **)t1);
    t14 = *((unsigned char *)t4);
    t15 = (t14 == (unsigned char)3);
    if (t15 == 1)
        goto LAB35;

LAB36:    t1 = (t0 + 1352U);
    t5 = *((char **)t1);
    t16 = *((unsigned char *)t5);
    t17 = (t16 == (unsigned char)3);
    t13 = t17;

LAB37:    if (t13 == 1)
        goto LAB32;

LAB33:    t1 = (t0 + 1192U);
    t6 = *((char **)t1);
    t18 = *((unsigned char *)t6);
    t19 = (t18 == (unsigned char)3);
    t12 = t19;

LAB34:    t3 = t12;
    goto LAB31;

LAB32:    t12 = (unsigned char)1;
    goto LAB34;

LAB35:    t13 = (unsigned char)1;
    goto LAB37;

LAB38:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 6752);
    t7 = (t1 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t20 = *((char **)t11);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB40:    t1 = (t0 + 1032U);
    t4 = *((char **)t1);
    t14 = *((unsigned char *)t4);
    t15 = (t14 == (unsigned char)3);
    if (t15 == 1)
        goto LAB46;

LAB47:    t1 = (t0 + 1352U);
    t5 = *((char **)t1);
    t16 = *((unsigned char *)t5);
    t17 = (t16 == (unsigned char)3);
    t13 = t17;

LAB48:    if (t13 == 1)
        goto LAB43;

LAB44:    t1 = (t0 + 1192U);
    t6 = *((char **)t1);
    t18 = *((unsigned char *)t6);
    t19 = (t18 == (unsigned char)3);
    t12 = t19;

LAB45:    t3 = t12;
    goto LAB42;

LAB43:    t12 = (unsigned char)1;
    goto LAB45;

LAB46:    t13 = (unsigned char)1;
    goto LAB48;

LAB49:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 6752);
    t7 = (t1 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t20 = *((char **)t11);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB51:    t1 = (t0 + 1032U);
    t4 = *((char **)t1);
    t14 = *((unsigned char *)t4);
    t15 = (t14 == (unsigned char)3);
    if (t15 == 1)
        goto LAB57;

LAB58:    t1 = (t0 + 1352U);
    t5 = *((char **)t1);
    t16 = *((unsigned char *)t5);
    t17 = (t16 == (unsigned char)3);
    t13 = t17;

LAB59:    if (t13 == 1)
        goto LAB54;

LAB55:    t1 = (t0 + 1192U);
    t6 = *((char **)t1);
    t18 = *((unsigned char *)t6);
    t19 = (t18 == (unsigned char)3);
    t12 = t19;

LAB56:    t3 = t12;
    goto LAB53;

LAB54:    t12 = (unsigned char)1;
    goto LAB56;

LAB57:    t13 = (unsigned char)1;
    goto LAB59;

LAB60:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 6752);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB62:    xsi_set_current_line(69, ng0);
    t24 = (t0 + 6752);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    *((unsigned char *)t28) = (unsigned char)1;
    xsi_driver_first_trans_fast(t24);
    goto LAB63;

LAB65:    t20 = (t0 + 3752U);
    t21 = *((char **)t20);
    t20 = (t0 + 10596U);
    t22 = (t0 + 3272U);
    t23 = *((char **)t22);
    t22 = (t0 + 10548U);
    t13 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t21, t20, t23, t22);
    t3 = t13;
    goto LAB67;

LAB68:    t6 = (t0 + 3752U);
    t7 = *((char **)t6);
    t6 = (t0 + 10596U);
    t10 = (t0 + 3592U);
    t11 = *((char **)t10);
    t10 = (t0 + 10580U);
    t12 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t7, t6, t11, t10);
    t8 = t12;
    goto LAB70;

LAB71:    xsi_set_current_line(71, ng0);
    t24 = (t0 + 6752);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    *((unsigned char *)t28) = (unsigned char)3;
    xsi_driver_first_trans_fast(t24);
    goto LAB63;

LAB73:    t3 = (unsigned char)1;
    goto LAB75;

LAB76:    t8 = (unsigned char)1;
    goto LAB78;

LAB79:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 6752);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);
    goto LAB63;

LAB81:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 6752);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB82;

LAB84:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 6752);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);
    goto LAB82;

LAB86:    xsi_set_current_line(86, ng0);
    t7 = (t0 + 6752);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    t20 = (t11 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)6;
    xsi_driver_first_trans_fast(t7);
    goto LAB87;

LAB89:    xsi_set_current_line(88, ng0);
    t7 = (t0 + 6752);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    t20 = (t11 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)5;
    xsi_driver_first_trans_fast(t7);
    goto LAB87;

LAB91:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 6752);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);
    goto LAB87;

LAB93:    xsi_set_current_line(95, ng0);
    t7 = (t0 + 6752);
    t11 = (t7 + 56U);
    t20 = *((char **)t11);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = (unsigned char)0;
    xsi_driver_first_trans_fast(t7);
    goto LAB94;

LAB96:    t7 = (t0 + 2152U);
    t10 = *((char **)t7);
    t9 = *((unsigned char *)t10);
    t12 = (t9 == (unsigned char)3);
    t3 = t12;
    goto LAB98;

LAB99:    xsi_set_current_line(97, ng0);
    t7 = (t0 + 6752);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    t20 = (t11 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)6;
    xsi_driver_first_trans_fast(t7);
    goto LAB94;

LAB101:    xsi_set_current_line(102, ng0);
    t7 = (t0 + 6752);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    t20 = (t11 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)0;
    xsi_driver_first_trans_fast(t7);
    goto LAB102;

LAB104:    xsi_set_current_line(107, ng0);
    t7 = (t0 + 6752);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    t20 = (t11 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)0;
    xsi_driver_first_trans_fast(t7);
    goto LAB105;

LAB107:    xsi_set_current_line(109, ng0);
    t7 = (t0 + 6752);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    t20 = (t11 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)5;
    xsi_driver_first_trans_fast(t7);
    goto LAB105;

}

static void work_a_0454327734_3212880686_p_2(char *t0)
{
    char t17[16];
    char t25[16];
    char t29[16];
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
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    char *t18;
    int t19;
    unsigned int t20;
    unsigned char t21;
    char *t22;
    unsigned char t23;
    unsigned char t24;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    int t32;
    char *t33;
    unsigned int t34;
    unsigned char t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;

LAB0:    xsi_set_current_line(119, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 2752U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 6576);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(120, ng0);
    t1 = (t0 + 10685);
    t6 = (t0 + 6816);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 2952U);
    t6 = *((char **)t2);
    t15 = *((unsigned char *)t6);
    t16 = (t15 == (unsigned char)3);
    if (t16 == 1)
        goto LAB16;

LAB17:    t14 = (unsigned char)0;

LAB18:    if (t14 == 1)
        goto LAB13;

LAB14:    t13 = (unsigned char)0;

LAB15:    if (t13 != 0)
        goto LAB10;

LAB12:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t11 = *((unsigned char *)t2);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB26;

LAB27:    t4 = (unsigned char)0;

LAB28:    if (t4 == 1)
        goto LAB23;

LAB24:    t3 = (unsigned char)0;

LAB25:    if (t3 != 0)
        goto LAB21;

LAB22:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 2792U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(123, ng0);
    t18 = (t0 + 3912U);
    t26 = *((char **)t18);
    t18 = (t0 + 10596U);
    t27 = (t0 + 10693);
    t30 = (t29 + 0U);
    t31 = (t30 + 0U);
    *((int *)t31) = 0;
    t31 = (t30 + 4U);
    *((int *)t31) = 1;
    t31 = (t30 + 8U);
    *((int *)t31) = 1;
    t32 = (1 - 0);
    t20 = (t32 * 1);
    t20 = (t20 + 1);
    t31 = (t30 + 12U);
    *((unsigned int *)t31) = t20;
    t31 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t25, t26, t18, t27, t29);
    t33 = (t25 + 12U);
    t20 = *((unsigned int *)t33);
    t34 = (1U * t20);
    t35 = (4U != t34);
    if (t35 == 1)
        goto LAB19;

LAB20:    t36 = (t0 + 6816);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memcpy(t40, t31, 4U);
    xsi_driver_first_trans_fast(t36);
    goto LAB11;

LAB13:    t18 = (t0 + 1992U);
    t22 = *((char **)t18);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)3);
    t13 = t24;
    goto LAB15;

LAB16:    t2 = (t0 + 3912U);
    t7 = *((char **)t2);
    t2 = (t0 + 10596U);
    t8 = (t0 + 10689);
    t10 = (t17 + 0U);
    t18 = (t10 + 0U);
    *((int *)t18) = 0;
    t18 = (t10 + 4U);
    *((int *)t18) = 3;
    t18 = (t10 + 8U);
    *((int *)t18) = 1;
    t19 = (3 - 0);
    t20 = (t19 * 1);
    t20 = (t20 + 1);
    t18 = (t10 + 12U);
    *((unsigned int *)t18) = t20;
    t21 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t7, t2, t8, t17);
    t14 = t21;
    goto LAB18;

LAB19:    xsi_size_not_matching(4U, t34, 0);
    goto LAB20;

LAB21:    xsi_set_current_line(125, ng0);
    t9 = (t0 + 3912U);
    t18 = *((char **)t9);
    t9 = (t0 + 10596U);
    t22 = (t0 + 10699);
    t27 = (t29 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = 0;
    t28 = (t27 + 4U);
    *((int *)t28) = 1;
    t28 = (t27 + 8U);
    *((int *)t28) = 1;
    t32 = (1 - 0);
    t20 = (t32 * 1);
    t20 = (t20 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t20;
    t28 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t25, t18, t9, t22, t29);
    t30 = (t25 + 12U);
    t20 = *((unsigned int *)t30);
    t34 = (1U * t20);
    t16 = (4U != t34);
    if (t16 == 1)
        goto LAB29;

LAB30:    t31 = (t0 + 6816);
    t33 = (t31 + 56U);
    t36 = *((char **)t33);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memcpy(t38, t28, 4U);
    xsi_driver_first_trans_fast(t31);
    goto LAB11;

LAB23:    t9 = (t0 + 1832U);
    t10 = *((char **)t9);
    t14 = *((unsigned char *)t10);
    t15 = (t14 == (unsigned char)3);
    t3 = t15;
    goto LAB25;

LAB26:    t1 = (t0 + 3912U);
    t5 = *((char **)t1);
    t1 = (t0 + 10596U);
    t6 = (t0 + 10695);
    t8 = (t17 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 3;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t19 = (3 - 0);
    t20 = (t19 * 1);
    t20 = (t20 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t20;
    t13 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t5, t1, t6, t17);
    t4 = t13;
    goto LAB28;

LAB29:    xsi_size_not_matching(4U, t34, 0);
    goto LAB30;

}

static void work_a_0454327734_3212880686_p_3(char *t0)
{
    char t18[16];
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
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    unsigned char t17;
    unsigned int t19;
    unsigned int t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(134, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 2752U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 6592);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(135, ng0);
    t1 = (t0 + 10701);
    t6 = (t0 + 6880);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 2952U);
    t6 = *((char **)t2);
    t14 = *((unsigned char *)t6);
    t15 = (t14 == (unsigned char)2);
    if (t15 == 1)
        goto LAB13;

LAB14:    t13 = (unsigned char)0;

LAB15:    if (t13 != 0)
        goto LAB10;

LAB12:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t11 = (t4 == (unsigned char)2);
    if (t11 == 1)
        goto LAB20;

LAB21:    t3 = (unsigned char)0;

LAB22:    if (t3 != 0)
        goto LAB18;

LAB19:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t11 = (t4 == (unsigned char)2);
    if (t11 == 1)
        goto LAB27;

LAB28:    t3 = (unsigned char)0;

LAB29:    if (t3 != 0)
        goto LAB25;

LAB26:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 2792U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 3752U);
    t8 = *((char **)t2);
    t2 = (t0 + 10596U);
    t9 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t18, t8, t2, 1);
    t10 = (t18 + 12U);
    t19 = *((unsigned int *)t10);
    t20 = (1U * t19);
    t21 = (4U != t20);
    if (t21 == 1)
        goto LAB16;

LAB17:    t22 = (t0 + 6880);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t9, 4U);
    xsi_driver_first_trans_fast(t22);
    goto LAB11;

LAB13:    t2 = (t0 + 2312U);
    t7 = *((char **)t2);
    t16 = *((unsigned char *)t7);
    t17 = (t16 == (unsigned char)3);
    t13 = t17;
    goto LAB15;

LAB16:    xsi_size_not_matching(4U, t20, 0);
    goto LAB17;

LAB18:    xsi_set_current_line(140, ng0);
    t1 = (t0 + 3752U);
    t6 = *((char **)t1);
    t1 = (t0 + 10596U);
    t7 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t18, t6, t1, 10);
    t8 = (t18 + 12U);
    t19 = *((unsigned int *)t8);
    t20 = (1U * t19);
    t14 = (4U != t20);
    if (t14 == 1)
        goto LAB23;

LAB24:    t9 = (t0 + 6880);
    t10 = (t9 + 56U);
    t22 = *((char **)t10);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t7, 4U);
    xsi_driver_first_trans_fast(t9);
    goto LAB11;

LAB20:    t1 = (t0 + 2472U);
    t5 = *((char **)t1);
    t12 = *((unsigned char *)t5);
    t13 = (t12 == (unsigned char)3);
    t3 = t13;
    goto LAB22;

LAB23:    xsi_size_not_matching(4U, t20, 0);
    goto LAB24;

LAB25:    xsi_set_current_line(142, ng0);
    t1 = (t0 + 3752U);
    t6 = *((char **)t1);
    t1 = (t0 + 10596U);
    t7 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t18, t6, t1, 101);
    t8 = (t18 + 12U);
    t19 = *((unsigned int *)t8);
    t20 = (1U * t19);
    t14 = (4U != t20);
    if (t14 == 1)
        goto LAB30;

LAB31:    t9 = (t0 + 6880);
    t10 = (t9 + 56U);
    t22 = *((char **)t10);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t7, 4U);
    xsi_driver_first_trans_fast(t9);
    goto LAB11;

LAB27:    t1 = (t0 + 2632U);
    t5 = *((char **)t1);
    t12 = *((unsigned char *)t5);
    t13 = (t12 == (unsigned char)3);
    t3 = t13;
    goto LAB29;

LAB30:    xsi_size_not_matching(4U, t20, 0);
    goto LAB31;

}

static void work_a_0454327734_3212880686_p_4(char *t0)
{
    char t18[16];
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
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    unsigned char t17;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    xsi_set_current_line(149, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 2752U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 6608);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(150, ng0);
    t1 = (t0 + 10705);
    t6 = (t0 + 6944);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(152, ng0);
    t2 = (t0 + 2952U);
    t6 = *((char **)t2);
    t14 = *((unsigned char *)t6);
    t15 = (t14 == (unsigned char)4);
    if (t15 == 1)
        goto LAB13;

LAB14:    t13 = (unsigned char)0;

LAB15:    if (t13 != 0)
        goto LAB10;

LAB12:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t11 = (t4 == (unsigned char)4);
    if (t11 == 1)
        goto LAB20;

LAB21:    t3 = (unsigned char)0;

LAB22:    if (t3 != 0)
        goto LAB18;

LAB19:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t11 = (t4 == (unsigned char)4);
    if (t11 == 1)
        goto LAB27;

LAB28:    t3 = (unsigned char)0;

LAB29:    if (t3 != 0)
        goto LAB25;

LAB26:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 2792U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 3752U);
    t8 = *((char **)t2);
    t2 = (t0 + 10596U);
    t9 = (t0 + 3432U);
    t10 = *((char **)t9);
    t9 = (t0 + 10564U);
    t19 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t18, t8, t2, t10, t9);
    t20 = (t18 + 12U);
    t21 = *((unsigned int *)t20);
    t22 = (1U * t21);
    t23 = (4U != t22);
    if (t23 == 1)
        goto LAB16;

LAB17:    t24 = (t0 + 6944);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t19, 4U);
    xsi_driver_first_trans_fast(t24);
    goto LAB11;

LAB13:    t2 = (t0 + 1192U);
    t7 = *((char **)t2);
    t16 = *((unsigned char *)t7);
    t17 = (t16 == (unsigned char)3);
    t13 = t17;
    goto LAB15;

LAB16:    xsi_size_not_matching(4U, t22, 0);
    goto LAB17;

LAB18:    xsi_set_current_line(155, ng0);
    t1 = (t0 + 3752U);
    t6 = *((char **)t1);
    t1 = (t0 + 10596U);
    t7 = (t0 + 3272U);
    t8 = *((char **)t7);
    t7 = (t0 + 10548U);
    t9 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t18, t6, t1, t8, t7);
    t10 = (t18 + 12U);
    t21 = *((unsigned int *)t10);
    t22 = (1U * t21);
    t14 = (4U != t22);
    if (t14 == 1)
        goto LAB23;

LAB24:    t19 = (t0 + 6944);
    t20 = (t19 + 56U);
    t24 = *((char **)t20);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t9, 4U);
    xsi_driver_first_trans_fast(t19);
    goto LAB11;

LAB20:    t1 = (t0 + 1032U);
    t5 = *((char **)t1);
    t12 = *((unsigned char *)t5);
    t13 = (t12 == (unsigned char)3);
    t3 = t13;
    goto LAB22;

LAB23:    xsi_size_not_matching(4U, t22, 0);
    goto LAB24;

LAB25:    xsi_set_current_line(157, ng0);
    t1 = (t0 + 3752U);
    t6 = *((char **)t1);
    t1 = (t0 + 10596U);
    t7 = (t0 + 3592U);
    t8 = *((char **)t7);
    t7 = (t0 + 10580U);
    t9 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t18, t6, t1, t8, t7);
    t10 = (t18 + 12U);
    t21 = *((unsigned int *)t10);
    t22 = (1U * t21);
    t14 = (4U != t22);
    if (t14 == 1)
        goto LAB30;

LAB31:    t19 = (t0 + 6944);
    t20 = (t19 + 56U);
    t24 = *((char **)t20);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t9, 4U);
    xsi_driver_first_trans_fast(t19);
    goto LAB11;

LAB27:    t1 = (t0 + 1352U);
    t5 = *((char **)t1);
    t12 = *((unsigned char *)t5);
    t13 = (t12 == (unsigned char)3);
    t3 = t13;
    goto LAB29;

LAB30:    xsi_size_not_matching(4U, t22, 0);
    goto LAB31;

}


extern void work_a_0454327734_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0454327734_3212880686_p_0,(void *)work_a_0454327734_3212880686_p_1,(void *)work_a_0454327734_3212880686_p_2,(void *)work_a_0454327734_3212880686_p_3,(void *)work_a_0454327734_3212880686_p_4};
	xsi_register_didat("work_a_0454327734_3212880686", "isim/testautomat_isim_beh.exe.sim/work/a_0454327734_3212880686.didat");
	xsi_register_executes(pe);
}
