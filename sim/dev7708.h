/*										*/
/*		Copyright (C) 1999-2006 Phillip Stanley-Marbell.		*/
/*										*/
/*	You may redistribute and/or copy the source and binary			*/
/*	versions of this software provided:					*/
/*										*/
/*	1.	The source retains the copyright notice above, 			*/
/*		this list of conditions, and the following 			*/
/*		disclaimer.							*/
/*										*/
/*	2.	Redistributed binaries must reproduce the above			*/
/*		copyright notice, this list of conditions, and			*/
/*		the following disclaimer.					*/
/*										*/
/*	3.	The source and binaries are used for non-commercial 		*/
/*		purposes only.							*/
/*										*/
/*	4.	Permission is granted to all others, to redistribute		*/
/*		or make copies of the source or binaries, either		*/
/*		as it was received or with modifications, provided		*/
/*		the above three conditions are enforced and 			*/
/*		preserved, and that permission is granted for 			*/
/*		further redistribution, under the conditions of this		*/
/*		document.							*/
/*										*/
/*	The source is provided "as is", and no warranty is either		*/
/*	implied or explicitly granted. The authors will not be liable 		*/
/*	for any damages arising in any way out of the use or misuse 		*/
/*	of this software, even if advised of the possibility of such 		*/
/*	damage.									*/
/*										*/
/*	Contact: phillip Stanley-Marbell <pstanley@ece.cmu.edu>			*/
/*										*/	
enum
{
	MMU_TEA 		= 0xFFFFFFFC,
	MMU_TTB 		= 0xFFFFFFF8,
	MMU_PTEL 		= 0xFFFFFFF4,
	MMU_PTEH 		= 0xFFFFFFF0,
	UBC_BASRB 		= 0xFFFFFFE8,
	UBC_BASRA		= 0xFFFFFFE4,
	MMU_MMUCR 		= 0xFFFFFFE0,
	CACHE_CCR		= 0xFFFFFFEC,
	EXCP_INTEVT 		= 0xFFFFFFD8,
	EXCP_EXPEVT 		= 0xFFFFFFD4,
	EXCP_TRA 		= 0xFFFFFFD0,
	UBC_BBRA 		= 0xFFFFFFB8,
	UBC_BAMRA 		= 0xFFFFFFB4,
	UBC_BARA 		= 0xFFFFFFB0,
	UBC_BBRB 		= 0xFFFFFFA8,
	UBC_BAMRB 		= 0xFFFFFFA4,
	UBC_BARB 		= 0xFFFFFFA0,
	UBC_BRCR 		= 0xFFFFFF98,
	UBC_BDMRB 		= 0xFFFFFF94,
	UBC_BDRB 		= 0xFFFFFF90,
	WDOG_WTCSR 		= 0xFFFFFF86,
	WDOG_WTCNT 		= 0xFFFFFF84,
	POWER_STBCR 		= 0xFFFFFF82,
	OCOSC_FRQCR 		= 0xFFFFFF80,
	SCC_SCSPTR 		= 0xFFFFFF7C,
	GPIO_PDTR 		= 0xFFFFFF78,
	GPIO_PCTR		= 0xFFFFFF76,
	BSC_RFCR 		= 0xFFFFFF74,
	BSC_RTCCR 		= 0xFFFFFF72,
	BSC_RTCNT 		= 0xFFFFFF70,
	BSC_RTCSR 		= 0xFFFFFF6E,
	BSC_PCR 		= 0xFFFFFF6C,
	BSC_DCR 		= 0xFFFFFF6A,
	BSC_MCR 		= 0xFFFFFF68,
	BSC_WCR2 		= 0xFFFFFF66,
	BSC_WCR1 		= 0xFFFFFF64,
	BSC_BCR2 		= 0xFFFFFF62,
	BSC_BCR1 		= 0xFFFFFF60,
	ICLR_IPRB 		= 0xFFFFFEE4,
	ICLR_IPRA 		= 0xFFFFFEE2,
	ICLR_ICR 		= 0xFFFFFEE0,
	RTCLK_RCR2 		= 0xFFFFFEDE,
	RTCLK_RCR1 		= 0xFFFFFEDC,
	RTCLK_RMONAR 		= 0xFFFFFEDA,
	RTCLK_RDAYAR 		= 0xFFFFFED8,
	RTCLK_RWKAR 		= 0xFFFFFED6,
	RTCLK_RHRAR 		= 0xFFFFFED4,
	RTCLK_RMINAR 		= 0xFFFFFED2,
	RTCLK_RSECAR 		= 0xFFFFFED0,
	RTCLK_RYRCNT 		= 0xFFFFFECE,
	RTCLK_RMONCNT 		= 0xFFFFFECC,
	RTCLK_RDAYCNT 		= 0xFFFFFECA,
	RTCLK_RWKCNT 		= 0xFFFFFEC8,
	RTCLK_RHRCNT 		= 0xFFFFFEC6,
	RTCLK_RMINCNT 		= 0xFFFFFEC4,
	RTCLK_RSECCNT 		= 0xFFFFFEC2,
	RTCLK_R64CNT 		= 0xFFFFFEC0,
	TIMER_TCPR2 		= 0xFFFFFEB8,
	TIMER_TCR2 		= 0xFFFFFEB4,
	TIMER_TCNT2 		= 0xFFFFFEB0,
	TIMER_TCOR2 		= 0xFFFFFEAC,
	TIMER_TCR1 		= 0xFFFFFEA8,
	TIMER_TCNT1 		= 0xFFFFFEA4,
	TIMER_TCOR1 		= 0xFFFFFEA0,
	TIMER_TCR0 		= 0xFFFFFE9C,
	TIMER_TCNT0 		= 0xFFFFFE98,
	TIMER_TCOR0 		= 0xFFFFFE94,
	TIMER_TSTR 		= 0xFFFFFE92,
	TIMER_TOCR 		= 0xFFFFFE90,
	SMARTCARD_SCSCMR	= 0xFFFFFE8C,
	SMARTCARD_SCRDR 	= 0xFFFFFE8A,
	SCC_SCRDR 		= 0xFFFFFE8A,
	SMARTCARD_SCSSR 	= 0xFFFFFE88,
	SCC_SCSSR 		= 0xFFFFFE88,
	SMARTCARD_SCTDR 	= 0xFFFFFE86,
	SCC_SCTDR 		= 0xFFFFFE86,
	SMARTCARD_SCSCR 	= 0xFFFFFE84,
	SCC_SCSCR 		= 0xFFFFFE84,
	SMARTCARD_SCBRR 	= 0xFFFFFE82,
	SCC_SCBRR 		= 0xFFFFFE82,
	SMARTCARD_SCSMR 	= 0xFFFFFE80,
	SCC_SCSMR 		= 0xFFFFFE80,

	BSC_SDMR		= 0xFFFFD000,

	TLB_DATAARRAY_END	= 0xF3FFFFFF,
	TLB_DATAARRAY_START	= 0xF3000000,

	TLB_ADDRARRAY_END	= 0xF2FFFFFF,
	TLB_ADDRARRAY_START	= 0xF2000000,


	/*								*/
	/*	This is really for the SH7706, not the SH7708.		*/
	/*	The 7708 had it from 0x7F000FFF to 0x7F000000 IIRC.	*/
	/*	SH7708 docs are no longer available from Renesas.	*/
	/*								*/
	CACHE_SRAM_END		= 0xF1FFFFFF,
	CACHE_SRAM_START	= 0xF0000000,
};

enum
{
	BYTE = 1,
	WORD = 2,
	LONG = 4,
};
