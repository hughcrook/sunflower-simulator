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
	/*	Official SH3 exception codes		*/
	POWER_ON_RESET_EXCP_CODE	= 0x000,
	H_UDI_RESET_EXCP_CODE		= 0x000,

	MANUAL_RESET_EXCP_CODE		= 0x020,

	TLB_LOAD_MISS_EXCP_CODE		= 0x040,
	TLB_LOAD_INVALID_EXCP_CODE	= 0x040,

	TLB_STORE_MISS_EXCP_CODE	= 0x060,
	TLB_STORE_INVALID_EXCP_CODE	= 0x060,

	TLB_INIT_PAGEWRITE_EXCP_CODE	= 0x080,
	TLB_LOAD_PROTECT_EXCP_CODE	= 0x0A0,
	TLB_STORE_PROTECT_EXCP_CODE	= 0x0C0,
	CPU_LOAD_ADDRERR_EXCP_CODE	= 0x0E0,
	CPU_STORE_ADDRERR_EXCP_CODE	= 0x100,
	TRAPA_EXCP_CODE			= 0x160,
	ILLEGAL_INSTR_EXCP_CODE		= 0x180,
	ILLEGAL_SLOT_INSTR_EXCP_CODE	= 0x1A0,
	USER_BKPOINT_TRAP_EXCP_CODE	= 0x1E0,
	DMA_ADDRERR_EXCP_CODE		= 0x5C0,

	/*	Official SH3 interrupt code		*/
	NMI_INTR_CODE			= 0x1C0,
	H_UDI_INTR_CODE			= 0x5E0,
	IRL3_IRL0_0000_INTR_CODE	= 0x200,
	IRL3_IRL0_0001_INTR_CODE	= 0x220,
	IRL3_IRL0_0010_INTR_CODE	= 0x240,
	IRL3_IRL0_0011_INTR_CODE	= 0x260,
	IRL3_IRL0_0100_INTR_CODE	= 0x280,
	IRL3_IRL0_0101_INTR_CODE	= 0x2A0,
	IRL3_IRL0_0110_INTR_CODE	= 0x2C0,
	IRL3_IRL0_0111_INTR_CODE	= 0x2E0,
	IRL3_IRL0_1000_INTR_CODE	= 0x300,
	IRL3_IRL0_1001_INTR_CODE	= 0x320,
	IRL3_IRL0_1010_INTR_CODE	= 0x340,
	IRL3_IRL0_1011_INTR_CODE	= 0x360,
	IRL3_IRL0_1100_INTR_CODE	= 0x380,
	IRL3_IRL0_1101_INTR_CODE	= 0x3A0,
	IRL3_IRL0_1110_INTR_CODE	= 0x3C0,

	/*	Officially reserved exception codes	*/
	RSV_CODE_1			= 0x120,
	RSV_CODE_2			= 0x140,
	RSV_CODE_3			= 0x3E0,


	/*		See network.h for why 0x5B2	*/
	BATT_LOW_EXCP_CODE		= 0x5B2,

	/*		For now, battery IRQ is 14	*/
	BATT_LOW_FIXED_INTRLEVEL	= 14,


	NODEFAULT_EXCP_CODE		= 0x5B5,

	/*						*/
	/*	These codes are spaced so to permit	*/
	/*	4096 NICs per device, with the code	*/
	/*	for NIC n being the value + n		*/
	/*						*/
	NIC_CODE_BEGIN			= 0x1000,
	NIC_RX_EXCP_CODE		= 0x1000,
	NIC_RX_EXCP_CODE_END		= 0x2000,

	NIC_TX_EXCP_CODE		= 0x2000,
	NIC_TX_EXCP_CODE_END		= 0x3000,

	NIC_ADDR_EXCP_CODE		= 0x3000,
	NIC_ADDR_EXCP_CODE_END		= 0x4000,

	NIC_FRAME_EXCP_CODE		= 0x4000,
	NIC_FRAME_EXCP_CODE_END		= 0x5000,

	NIC_COLLS_EXCP_CODE		= 0x5000,
	NIC_COLLS_EXCP_CODE_END		= 0x6000,

	NIC_CSENSE_EXCP_CODE		= 0x6000,
	NIC_CSENSE_EXCP_CODE_END	= 0x7000,

	NIC_RXOVRRUN_EXCP_CODE		= 0x7000,
	NIC_RXOVRRUN_EXCP_CODE_END	= 0x8000,

	NIC_RXUNDRRUN_EXCP_CODE		= 0x8000,
	NIC_RXUNDRRUN_EXCP_CODE_END	= 0x9000,

	NIC_TXOVRRUN_EXCP_CODE		= 0x9000,
	NIC_TXOVRRUN_EXCP_CODE_END	= 0xA000,

	NIC_TXUNDRRUN_EXCP_CODE		= 0xA000,
	NIC_TXUNDRRUN_EXCP_CODE_END	= 0xB000,

	NIC_CSUM_EXCP_CODE		= 0xB000,
	NIC_CSUM_EXCP_CODE_END		= 0xC000,
	NIC_CODE_END			= 0xC000,

	NIC_FIXED_INTRLEVEL		= 15,


	TMU0_TUNI0_EXCP_CODE		= 0x400,
	TMU1_TUNI1_EXCP_CODE		= 0x420,
	TMU2_TUNI2_EXCP_CODE		= 0x440,
	TMU0_TICPI2_EXCP_CODE		= 0x460,

	/*		Fixed level for Dale		*/
	TIMER_FIXED_INTRLEVEL		= 15,
};

/*							*/
/*	Unique exception types. This is useful for	*/
/*	differentiation, since some exceptions share 	*/
/*	the same EXCP_CODE.				*/
/*							*/
enum
{
	POWER_ON_RESET_EXCP,
	H_UDI_RESET_EXCP,
	MANUAL_RESET_EXCP,
	TLB_LOAD_MISS_EXCP,
	TLB_LOAD_INVALID_EXCP,
	TLB_STORE_MISS_EXCP,
	TLB_STORE_INVALID_EXCP,
	TLB_INIT_PAGEWRITE_EXCP,
	TLB_LOAD_PROTECT_EXCP,
	TLB_STORE_PROTECT_EXCP,
	CPU_LOAD_ADDRERR_EXCP,
	CPU_STORE_ADDRERR_EXCP,
	TRAPA_EXCP,
	ILLEGAL_INSTR_EXCP,
	ILLEGAL_SLOT_INSTR_EXCP,
	USER_BKPOINT_TRAP_EXCP,
	DMA_ADDRERR_EXCP,

	NMI_INTR,
	H_UDI_INTR,
	IRL3_IRL0_0000_INTR,
	IRL3_IRL0_0001_INTR,
	IRL3_IRL0_0010_INTR,
	IRL3_IRL0_0011_INTR,
	IRL3_IRL0_0100_INTR,
	IRL3_IRL0_0101_INTR,
	IRL3_IRL0_0110_INTR,
	IRL3_IRL0_0111_INTR,
	IRL3_IRL0_1000_INTR,
	IRL3_IRL0_1001_INTR,
	IRL3_IRL0_1010_INTR,
	IRL3_IRL0_1011_INTR,
	IRL3_IRL0_1100_INTR,
	IRL3_IRL0_1101_INTR,
	IRL3_IRL0_1110_INTR,

	BATT_LOW_INTR,
	NODEFAULT_INTR,

	/*								*/
	/*	Be sure to update dev7708.c and similar places		*/
	/*	if you add to, or remove items from here (for the	*/
	/*	correct clearing of NIC interrupts via NIC_NCR).	*/
	/*								*/
	NIC_RXOK_INTR,
	NIC_TXOK_INTR,
	NIC_ADDRERR_INTR,
	NIC_FRAMEERR_INTR,
	NIC_COLLSERR_INTR,
	NIC_CSENSEERR_INTR,
	NIC_RXOVRRUNERR_INTR,
	NIC_RXUNDRRUNERR_INTR,
	NIC_TXOVRRUNERR_INTR,
	NIC_TXUNDRRUNERR_INTR,
	NIC_CSUMERR_INTR,
};


/*		Official Vector offsets			*/
enum
{
	CPU_ADDRERR_OFFSET		= 0x00000100,
	CPU_INSTR_ADDRERR_OFFSET	= 0x00000100,
	DMA_ADDRERR_OFFSET		= 0x00000100,
	ILLEGAL_INSTR_OFFSET		= 0x00000100,
	ILLEGAL_SLOT_INSTR_OFFSET	= 0x00000100,
	TLB_INIT_PAGEWRITE_OFFSET	= 0x00000100,
	TLB_INVALID_OFFSET		= 0x00000100,
	TLB_MISS_OFFSET			= 0x00000400,
	TLB_PROTECT_OFFSET		= 0x00000100,
	TRAPA_OFFSET			= 0x00000100,
	USER_BKPOINT_OFFSET		= 0x00000100,

	NMI_OFFSET			= 0x00000600,
	EXT_HW_OFFSET			= 0x00000600,
	H_UDI_OFFSET			= 0x00000600,
};

/*		Fixed vector addresses			*/
enum
{
	RESET_VECTOR_ADDR	= 0xA0000000,	
};
