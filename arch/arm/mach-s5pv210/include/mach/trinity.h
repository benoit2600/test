/* arch/arm/mach-s5pv210/include/mach/trinity.h
 *
 *  Copyright (c) 2011,2012 morfic
 *
 * S5PV210/S5PC110 CPU frequency voltage table support
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __MACH_TRINITY_H
#define __MACH_TRINITY_H

//#include <mach/trinity_speed.h>
#define BEN

#ifdef THALAMUS
#define TOPCPUFREQ 1000000
#define VDDARM1 1250000
#define VDDARM2 1200000
#define VDDARM3 1050000
#define VDDARM4 950000
#define VDDINT1 1100000
#define VDDINT2 1000000
#define TOP_DIV 4
#define TRIN_M 125
#define TRINITY_BUS 200000
#undef OCKERNEL
#endif


#ifdef BEN
#define TOPCPUFREQ 1320000
#define VDDARM1 1425000 // Voltage of L0 and L1 
#define VDDARM2 1175000
#define VDDARM3 1050000
#define VDDARM4 975000
#define VDDINT1 1170000 // Voltage off all freq except L5 
#define VDDINT2 1050000
#define TOP_DIV 5   //I don't really know the goal of this value
#define OCKERNEL 1
#define TRIN_M 165 // I don't really know the goal of this value
#define TRINITY_BUS 240000 // GPU voltage
#endif

#ifdef TEUV
#define TOPCPUFREQ 880000
#define VDDARM1 1200000
#define VDDARM2 1150000
#define VDDARM3 1025000
#define VDDARM4 950000
#define VDDINT1 1075000
#define VDDINT2 950000
#define TOP_DIV 3
#define TRIN_M 110
#define TRINITY_BUS 220000
#define TRINITY_SPLASH 1
#undef OCKERNEL
#endif

#ifdef AUFGEBOHRT
#define TOPCPUFREQ 1000000
#define VDDARM1 1325000
#define VDDARM2 1175000
#define VDDARM3 1000000
#define VDDARM4 875000
#define VDDINT1 1175000
#define VDDINT2 950000
#define TOP_DIV 3
#define TRIN_M 125
#undef OCKERNEL
#endif

#ifdef EINTAUSEND
#define TOPCPUFREQ 1000000
#define VDDARM1 1200000
#define VDDARM2 1125000
#define VDDARM3 1000000
#define VDDARM4 875000
#define VDDINT1 1075000
#define VDDINT2 950000
#define TOP_DIV 3
#define TRIN_M 125
#undef OCKERNEL
#endif


#ifdef ELF
#define TOPCPUFREQ 1096000
#define VDDARM1 1300000
#define VDDARM2 1150000
#define VDDARM3 1025000
#define VDDARM4 925000
#define VDDINT1 1125000
#define VDDINT2 950000
#define TOP_DIV 4
#define OCKERNEL 1
#define TRIN_M 137
#define TRINITY_BUS 220000
#define TRINITY_SPLASH 1
#endif

#ifdef ZWOELF
#define TOPCPUFREQ 1200000
#define VDDARM1 1375000
#define VDDARM2 1175000
#define VDDARM3 1025000
#define VDDARM4 925000
#define VDDINT1 1150000
#define VDDINT2 950000
#define TOP_DIV 5
#define OCKERNEL 1
#define TRINITY_BUS 200000
#define TRIN_M 150
#endif

#ifdef DREIZEHN
#define TOPCPUFREQ 1320000
#define VDDARM1 1425000
#define VDDARM2 1175000
#define VDDARM3 1050000
#define VDDARM4 950000
#define VDDINT1 1150000
#define VDDINT2 1050000
#define TOP_DIV 5
#define OCKERNEL 1
#define TRIN_M 165
#define TRINITY_BUS 220000
#define TRINITY_SPLASH 1
#endif


#ifdef VIERZEHN
#define TOPCPUFREQ 1440000
#define VDDARM1 1450000
#define VDDARM2 1200000
#define VDDARM3 1025000
#define VDDARM4 975000
#define VDDINT1 1175000
#define VDDINT2 1025000
#define TOP_DIV 5
#define OCKERNEL 1
#define TRIN_M 180
#define TRINITY_BUS 240000
#define TRINITY_SPLASH 1
#endif

#ifdef THERMITE
#define TOPCPUFREQ 1520000
#define VDDARM1 1525000
#define VDDARM2 1375000
#define VDDARM3 1050000
#define VDDARM4 975000
#define VDDINT1 1200000
#define VDDINT2 1075000
#define TOP_DIV 5
#define OCKERNEL 1
#define TRIN_M 180
#endif

#ifdef FUENFZEHN
#define TOPCPUFREQ 1544000
#define VDDARM1 1525000
#define VDDARM2 1300000
#define VDDARM3 1100000
#define VDDARM4 950000
#define VDDINT1 1200000
#define VDDINT2 1000000
#endif

#ifdef SECHZEN
#define TOPCPUFREQ 1600000
#define BOOTUPVARM 1375000
#define BOOTUPVINT 1075000
#define VDDARM1 1550000
#define VDDARM2 1375000
#define VDDARM3 1000000
#define VDDARM4 975000
#define VDDINT1 1200000
#define VDDINT2 1075000
#endif

#ifdef TEW
#define TOPCPUFREQ 1680000
#define BOOTUPVARM 1500000
#define BOOTUPVINT 1175000
#define VDDARM1 1550000
#define VDDARM2 1350000
#define VDDARM3 1000000
#define VDDARM4 950000
#define VDDINT1 1200000
#define VDDINT2 1050000
#endif


//#define TRINITY_BUS (TOPCPUFREQ / (TOP_DIV + 1))
//#define TRIN_M (TOPCPUFREQ / 1000)

#endif /* __MACH_TRINITY_H */
