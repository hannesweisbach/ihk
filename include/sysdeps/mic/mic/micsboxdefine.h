/**
 * \file micsboxdefine.h
 * Licence details are found in the file LICENSE.
 *  
 * \brief
 * KNF/KNC SBOX definitions taken from MPSS Linux.
 *
 * \author Taku Shimosawa  <shimosawa@is.s.u-tokyo.ac.jp> \par
 * Copyright (C) 2011 - 2012  Taku Shimosawa
 * 
 */

/*
* Intel MIC Platform Software Stack (MPSS)
* The SCIF based one
*
* Copyright(c) 2010 - 2011 Intel Corporation.
*
* This program is free software; you can redistribute it and/or modify it
* under the terms and conditions of the GNU General Public License,
* version 2, as published by the Free Software Foundation.
*
* You should have received a copy of the GNU General Public License along with
* this program; if not, write to the Free Software Foundation, Inc.,
* 51 Franklin St - Fifth Floor, Boston, MA 02110-1301 USA.
*
* The full GNU General Public License is included in this distribution in
* the file called "COPYING".
*
* Disclaimer:
*  The codes contained in these modules are specific to the
*  Intel products codenamed Knights Ferry/Knights Corner, and are not backward
*  compatible with other Intel products. Additionally, Intel makes no commitments
*  for support of the codes or instruction set in future products.
*
*  Intel offers no warranty of any kind regarding the code.  This code is
*  licensed on an "AS IS" basis and Intel is not obligated to provide any
*  support, assistance, installation, training, or other services of any kind.
*  Intel is also not obligated to provide any updates, enhancements or extensions.
*  Intel specifically disclaims any warranty of merchantability, non-infringement,
*  fitness for any particular purpose, and any other warranty.
*
*  Further, Intel disclaims all liability of any kind, including but not
*  limited to liability for infringement of any proprietary rights, relating
*  to the use of the code, even if Intel is notified of the possibility of
*  such liability.  Except as expressly stated in an Intel license agreement
*  provided with this code and agreed upon with Intel, no license, express
*  or implied, by estoppel or otherwise, to any intellectual property rights
*  is granted herein.
*/
#ifndef	_MIC_SBOXDEFINE_REGISTERS_H_
#define	_MIC_SBOXDEFINE_REGISTERS_H_

#include "mic_type.h"

#define	SBOX_OC_I2C_ICR				0x00001000
#define	SBOX_OC_I2C_ISR				0x00001004
#define	SBOX_OC_I2C_ISAR			0x00001008
#define	SBOX_OC_I2C_IDBR			0x0000100C
#define	SBOX_OC_I2C_IDMR			0x00001010
#define	SBOX_THERMAL_STATUS			0x00001018
#define	SBOX_THERMAL_INTERRUPT_ENABLE		0x0000101C
#define	SBOX_MICROCONTROLLER_FAN_STATUS		0x00001020
#define	SBOX_STATUS_FAN1			0x00001024
#define	SBOX_STATUS_FAN2			0x00001028
#define	SBOX_SPEED_OVERRIDE_FAN			0x0000102C
#define	SBOX_BOARD_TEMP1			0x00001030
#define	SBOX_BOARD_TEMP2			0x00001034
#define	SBOX_BOARD_VOLTAGE_SENSE		0x00001038
#define	SBOX_CURRENT_DIE_TEMP0			0x0000103C
#define	SBOX_CURRENT_DIE_TEMP1			0x00001040
#define	SBOX_CURRENT_DIE_TEMP2			0x00001044
#define	SBOX_MAX_DIE_TEMP0			0x00001048
#define	SBOX_MAX_DIE_TEMP1			0x0000104C
#define	SBOX_MAX_DIE_TEMP2			0x00001050
#define	SBOX_MIN_DIE_TEMP0			0x00001054
#define	SBOX_MIN_DIE_TEMP1			0x00001058
#define	SBOX_MIN_DIE_TEMP2			0x0000105C
#define	SBOX_THERMAL_CONSTANTS			0x00001060
#define	SBOX_THERMAL_TEST			0x00001064
#define	SBOX_GPU_HOT_CONFIG			0x00001068
#define	SBOX_NOM_PERF_MON			0x0000106C
#define	SBOX_THROTTLE_PERF_MON			0x00001070
#define	SBOX_FAIL_SAFE_STATUS			0x00002000
#define	SBOX_PBUS_CSR				0x00002000
#define	SBOX_SAEP_CSR				0x00002000
#define	SBOX_FAIL_SAFE_OFFSET			0x00002004
#define	SBOX_SW_OVR_CORE_DISABLE		0x00002008
#define	SBOX_CORE_DISABLE_STATUS		0x00002010
#define	SBOX_CORE_DISABLE_OFFSET		0x00002014
#define	SBOX_FLASH_COMPONENT			0x00002018
#define	SBOX_INVALID_INSTR0			0x00002020
#define	SBOX_INVALID_INSTR1			0x00002024
#define	SBOX_JEDECID				0x00002030
#define	SBOX_VENDOR_COMP_CAPP			0x00002034
#define	SBOX_POWER_ON_STATUS			0x00002038
#define	SBOX_VALID_INSTR0			0x00002040
#define	SBOX_VALID_INSTR1			0x00002044
#define	SBOX_VALID_INSTR2			0x00002048
#define	SBOX_VALID_INSTR_TYP0			0x00002050
#define	SBOX_VALID_INSTR_TYP1			0x00002054
#define	SBOX_VALID_INSTR_TYP2			0x00002058
#define	SBOX_HW_SEQ_STATUS			0x00002070
#define	SBOX_HW_SEQ_CTRL			0x00002074
#define	SBOX_FLASH_ADDR				0x00002078
#define	SBOX_FLASH_DATA0			0x00002090
#define	SBOX_FLASH_DATA1			0x00002094
#define	SBOX_FLASH_DATA2			0x00002098
#define	SBOX_FLASH_DATA3			0x0000209C
#define	SBOX_FLASH_DATA4			0x000020A0
#define	SBOX_FLASH_DATA5			0x000020A4
#define	SBOX_FLASH_DATA6			0x000020A8
#define	SBOX_FLASH_DATA7			0x000020AC
#define	SBOX_SW_SEQ_STATUS			0x000020B0
#define	SBOX_SW_SEQ_CTRL			0x000020B4
#define	SBOX_OPCODE_TYP_CONFIG			0x000020B8
#define	SBOX_OPCODE_MENU0			0x000020C0
#define	SBOX_OPCODE_MENU1			0x000020C4
#define	SBOX_SOFT_STRAP0			0x00002400
#define	SBOX_SOFT_STRAP1			0x00002404
#define	SBOX_SOFT_STRAP2			0x00002408
#define	SBOX_SOFT_STRAP3			0x0000240C
#define	SBOX_SOFT_STRAP4			0x00002410
#define	SBOX_SOFT_STRAP5			0x00002414
#define	SBOX_SOFT_STRAP6			0x00002418
#define	SBOX_SOFT_STRAP7			0x0000241C
#define	SBOX_CURRENT_CLK_RATIO			0x00003004
#define	SBOX_MSTR_DIS				0x00003008
#define	SBOX_MSTR_IS_DIS			0x0000300C
#define	SBOX_STARV_THRSH			0x00003010
#define	SBOX_TX_ARB_PRIOR			0x00003014
#define	SBOX_TX_ARB_STRV_PRIOR			0x00003018
#define	SBOX_TX_BURST_LEN			0x0000301C
#define	SBOX_PCI_EP_DBG_CAPT			0x00003024
#define	SBOX_TX_ARB_FIX				0x00003028
#define	SBOX_GH_SCRATCH				0x0000303C
#define	SBOX_TCU_LPBK				0x00003040
#define	SBOX_EP_TX_CONTROL			0x00003044
#define	SBOX_DFTUR				0x0000304C
#define	SBOX_SPARE				0x00003050
#define	SBOX_PCIE_TIMEOUT			0x00003058
#define	SBOX_RSMPT_BAR0_LO			0x0000305C
#define	SBOX_RSMPT_BAR0_HI			0x00003060
#define	SBOX_RSMPT_BAR1_LO			0x00003064
#define	SBOX_RSMPT_BAR1_HI			0x00003068
#define	SBOX_RX_HALT				0x0000306C
#define	SBOX_TX_CMPL_STATUS			0x00003070
#define	SBOX_BGF_PTR_OFFS			0x00003078
#define	SBOX_MCX_CTL_LO				0x00003090
#define	SBOX_MCX_STATUS_LO			0x00003098
#define	SBOX_MCX_STATUS_HI			0x0000309C
#define	SBOX_MCX_ADDR_LO			0x000030A0
#define	SBOX_MCX_ADDR_HI			0x000030A4
#define	SBOX_MCX_MISC				0x000030A8
#define	SBOX_MCX_MISC2				0x000030AC
#define	SBOX_SMPT00				0x00003100
#define	SBOX_SMPT01				0x00003104
#define	SBOX_SMPT02				0x00003108
#define	SBOX_SMPT03				0x0000310C
#define	SBOX_SMPT04				0x00003110
#define	SBOX_SMPT05				0x00003114
#define	SBOX_SMPT06				0x00003118
#define	SBOX_SMPT07				0x0000311C
#define	SBOX_SMPT08				0x00003120
#define	SBOX_SMPT09				0x00003124
#define	SBOX_SMPT10				0x00003128
#define	SBOX_SMPT11				0x0000312C
#define	SBOX_SMPT12				0x00003130
#define	SBOX_SMPT13				0x00003134
#define	SBOX_SMPT14				0x00003138
#define	SBOX_SMPT15				0x0000313C
#define	SBOX_SMPT16				0x00003140
#define	SBOX_SMPT17				0x00003144
#define	SBOX_SMPT18				0x00003148
#define	SBOX_SMPT19				0x0000314C
#define	SBOX_SMPT20				0x00003150
#define	SBOX_SMPT21				0x00003154
#define	SBOX_SMPT22				0x00003158
#define	SBOX_SMPT23				0x0000315C
#define	SBOX_SMPT24				0x00003160
#define	SBOX_SMPT25				0x00003164
#define	SBOX_SMPT26				0x00003168
#define	SBOX_SMPT27				0x0000316C
#define	SBOX_SMPT28				0x00003170
#define	SBOX_SMPT29				0x00003174
#define	SBOX_SMPT30				0x00003178
#define	SBOX_SMPT31				0x0000317C
#define	SBOX_PDAT				0x00003200
#define	SBOX_SDAT				0x00003208
#define	SBOX_DATOUT				0x00003210
#define	SBOX_DATIN0				0x00003218
#define	SBOX_TAP_IDCODE				0x00003A00
#define	SBOX_TAP_SUBSTEP			0x00003A04
#define	SBOX_CR_RX_BUF_STS			0x00003A08
#define	SBOX_CR_RX_LFSR_FTS			0x00003A0C
#define	SBOX_CR_P_CONSUMED			0x00003A10
#define	SBOX_CR_NP_CONSUMED			0x00003A14
#define	SBOX_CR_CPL_CONSUMED			0x00003A18
#define	SBOX_CR_P_LIMIT				0x00003A1C
#define	SBOX_CR_NP_LIMIT			0x00003A20
#define	SBOX_CR_CPL_LIMIT			0x00003A24
#define	SBOX_CR_P_ALLOCATED			0x00003A28
#define	SBOX_CR_NP_ALLOCATED			0x00003A2C
#define	SBOX_CR_CPL_ALLOCATED			0x00003A30
#define	SBOX_PSMI_ERR_STATUS			0x00003A34
#define	SBOX_PSMI_CONFIG			0x00003A38
#define	SBOX_PSMI_SEQ_NUM			0x00003A3C
#define	SBOX_REAL_TIME_CLK			0x00003A44
#define	SBOX_RGCR				0x00004010
#define	SBOX_DSTAT				0x00004014
#define	SBOX_PWR_TIMEOUT			0x00004018
#define	SBOX_RDBCTL				0x00004020
#define	SBOX_RDBSTAT				0x00004024
#define	SBOX_COREFREQ				0x00004040
#define	SBOX_COREVOLT				0x00004044
#define	SBOX_MEMORYFREQ				0x00004048
#define	SBOX_MEMVOLT				0x0000404C
#define	SBOX_PCIE_VENDOR_ID_DEVICE_ID		0x00005800
#define	SBOX_PCIE_PCI_COMMAND_AND_STATUS	0x00005804
#define	SBOX_PCIE_PCI_REVISION_ID_AND_C_0X8	0x00005808
#define	SBOX_PCIE_PCI_CACHE_LINE_SIZE_L_0XC	0x0000580C
#define	SBOX_PCIE_MEMORY_BAR_0			0x00005810
#define	SBOX_PCIE_UPPER_DWORD_OF_MEMOR_0X14	0x00005814
#define	SBOX_PCIE_IO_BAR_2			0x00005818
#define	SBOX_PCIE_MEMORY_BAR_1			0x00005820
#define	SBOX_PCIE_UPPER_DWORD_OF_MEMOR_0X24	0x00005824
#define	SBOX_PCIE_PCI_SUBSYSTEM			0x0000582C
#define	SBOX_PCIE_EXPANSION_ROM_BAR		0x00005830
#define	SBOX_PCIE_PCI_CAPABILITIES_POINTER	0x00005834
#define	SBOX_PCIE_PCI_INTERRUPT_LINE_PIN	0x0000583C
#define	SBOX_PCIE_PCI_PM_CAPABILITY		0x00005844
#define	SBOX_PCIE_PM_STATUS_AND_CONTRO_0X48	0x00005848
#define	SBOX_PCIE_PCIE_CAPABILITY		0x0000584C
#define	SBOX_PCIE_DEVICE_CAPABILITY		0x00005850
#define	SBOX_PCIE_DEVICE_CONTROL_AND_STATUS	0x00005854
#define	SBOX_PCIE_LINK_CAPABILITY		0x00005858
#define	SBOX_PCIE_LINK_CONTROL_AND_STA_0X5C	0x0000585C
#define	SBOX_PCIE_DEVICE_CAPABILITY_2		0x00005870
#define	SBOX_PCIE_DEVICE_CONTROL_AND_S_0X74	0x00005874
#define	SBOX_PCIE_LINK_CONTROL_AND_STATUS_2	0x0000587C
#define	SBOX_PCIE_MSI_CAPABILITY		0x00005888
#define	SBOX_PCIE_MESSAGE_ADDRESS		0x0000588C
#define	SBOX_PCIE_MESSAGE_UPPER_ADDRESS		0x00005890
#define	SBOX_PCIE_MESSAGE_DATA			0x00005894
#define	SBOX_PCIE_MSIX_CAPABILITY		0x00005898
#define	SBOX_PCIE_MSIX_TABLE_OFFSET_BIR		0x0000589C
#define	SBOX_PCIE_PBA_OFFSET_BIR		0x000058A0
#define	SBOX_PCIE_ADVANCED_ERROR_CAPABILITY	0x00005900
#define	SBOX_PCIE_UNCORRECTABLE_ERROR_0X104	0x00005904
#define	SBOX_PCIE_UNCORRECTABLE_ERROR_MASK	0x00005908
#define	SBOX_PCIE_UNCORRECTABLE_ERROR_0X10C	0x0000590C
#define	SBOX_PCIE_CORRECTABLE_ERROR_STATUS	0x00005910
#define	SBOX_PCIE_CORRECTABLE_ERROR_MASK	0x00005914
#define	SBOX_PCIE_ADVANCED_ERROR_CAPA_0X118	0x00005918
#define	SBOX_PCIE_ERROR_HEADER_LOG_DWORD_0	0x0000591C
#define	SBOX_PCIE_ERROR_HEADER_LOG_DWORD_1	0x00005920
#define	SBOX_PCIE_ERROR_HEADER_LOG_DWORD_2	0x00005924
#define	SBOX_PCIE_ERROR_HEADER_LOG_DWORD_3	0x00005928
#define	SBOX_PCIE_LTSSM_STATE_CONTROL		0x00005C00
#define	SBOX_PCIE_LTSSM_STATE_STATUS		0x00005C04
#define	SBOX_PCIE_SKIP_FREQUENCY_TIMER		0x00005C08
#define	SBOX_PCIE_LANE_SELECT			0x00005C0C
#define	SBOX_PCIE_LANE_DESKEW			0x00005C10
#define	SBOX_PCIE_RECEIVER_ERROR_STATUS		0x00005C14
#define	SBOX_PCIE_LANE_NUMBER_CONTROL		0x00005C18
#define	SBOX_PCIE_N_FTS_CONTROL			0x00005C1C
#define	SBOX_PCIE_LINK_STATUS			0x00005C20
#define	SBOX_PCIE_SYNC_BYPASS			0x00005C2C
#define	SBOX_PCIE_ACK_REPLAY_TIMEOUT		0x00005C38
#define	SBOX_PCIE_SEQUENCE_NUMBER_STATUS	0x00005C3C
#define	SBOX_PCIE_GPEX_PM_TIMER			0x00005C50
#define	SBOX_PCIE_PME_TIMEOUT			0x00005C54
#define	SBOX_PCIE_ASPM_L1_TIMER			0x00005C58
#define	SBOX_PCIE_ASPM_REQUEST_TIMER		0x00005C5C
#define	SBOX_PCIE_ASPM_L1_DISABLE		0x00005C60
#define	SBOX_PCIE_ADVISORY_ERROR_CONTROL	0x00005C68
#define	SBOX_PCIE_GPEX_ID			0x00005C70
#define	SBOX_PCIE_GPEX_CLASSCODE		0x00005C74
#define	SBOX_PCIE_GPEX_SUBSYSTEM_ID		0x00005C78
#define	SBOX_PCIE_GPEX_DEVICE_CAPABILITY	0x00005C7C
#define	SBOX_PCIE_GPEX_LINK_CAPABILITY		0x00005C80
#define	SBOX_PCIE_GPEX_PM_CAPABILITY		0x00005C88
#define	SBOX_PCIE_GPEX_LINK_CONTROL_STATUS	0x00005C9C
#define	SBOX_PCIE_ERROR_COUNTER			0x00005CAC
#define	SBOX_PCIE_CONFIGURATION_READY		0x00005CB0
#define	SBOX_PCIE_FC_UPDATE_TIMEOUT		0x00005CB8
#define	SBOX_PCIE_FC_UPDATE_TIMER		0x00005CBC
#define	SBOX_PCIE_LOAD_VC_BUFFER_SIZE		0x00005CC8
#define	SBOX_PCIE_VC_BUFFER_SIZE_THRESHOLD	0x00005CCC
#define	SBOX_PCIE_VC_BUFFER_SELECT		0x00005CD0
#define	SBOX_PCIE_BAR_ENABLE			0x00005CD4
#define	SBOX_PCIE_BAR_SIZE_LOWER_DWORD		0x00005CD8
#define	SBOX_PCIE_BAR_SIZE_UPPER_DWORD		0x00005CDC
#define	SBOX_PCIE_BAR_SELECT			0x00005CE0
#define	SBOX_PCIE_CREDIT_COUNTER_SELECT		0x00005CE4
#define	SBOX_PCIE_CREDIT_COUNTER_STATUS		0x00005CE8
#define	SBOX_PCIE_TLP_HEADER_SELECT		0x00005CEC
#define	SBOX_PCIE_TLP_HEADER_LOG_DWORD_0	0x00005CF0
#define	SBOX_PCIE_TLP_HEADER_LOG_DWORD_1	0x00005CF4
#define	SBOX_PCIE_TLP_HEADER_LOG_DWORD_2	0x00005CF8
#define	SBOX_PCIE_TLP_HEADER_LOG_DWORD_3	0x00005CFC
#define	SBOX_PCIE_RELAXED_ORDERING_CONTROL	0x00005D00
#define	SBOX_PCIE_BAR_PREFETCH			0x00005D04
#define	SBOX_PCIE_FC_CHECK_CONTROL		0x00005D08
#define	SBOX_PCIE_FC_UPDATE_TIMER_TRAFFIC	0x00005D18
#define	SBOX_PCIE_UNCORRECTABLE_ERROR_0X5F0	0x00005DF0
#define	SBOX_PCIE_CLOCK_GATING_CONTROL		0x00005E1C
#define	SBOX_PCIE_GEN2_CONTROL_CSR		0x00005E40
#define	SBOX_PCIE_GPEX_IP_RELEASE_VERSION	0x00005EFC
#define	SBOX_REUT_HDR_EXT			0x00006800
#define	SBOX_REUT_HDR_CAP			0x00006804
#define	SBOX_REUT_ENG_OVR			0x00006808
#define	SBOX_REUT_ENG_LD			0x0000680C
#define	SBOX_REUT_ENG_LSCAP			0x00006810
#define	SBOX_REUT_ENG_LSCTR			0x00006814
#define	SBOX_REUT_ENG_LTRCAP			0x00006818
#define	SBOX_REUT_ENG_LTRCON			0x0000681C
#define	SBOX_REUT_ERR_CED			0x00006820
#define	SBOX_REUT_ERR_ECCRCV			0x00006824
#define	SBOX_REUT_PH_CPR			0x00006828
#define	SBOX_REUT_PH_CTR			0x0000682C
#define	SBOX_REUT_PH_TDC			0x00006830
#define	SBOX_REUT_PH_TDS			0x00006834
#define	SBOX_REUT_PH_RDS			0x00006838
#define	SBOX_REUT_PH_RDC			0x0000683C
#define	SBOX_REUT_PH_PIS			0x00006840
#define	SBOX_REUT_PH_PPS			0x00006844
#define	SBOX_REUT_PH_PRE			0x00006848
#define	SBOX_REUT_PH_POST			0x0000684C
#define	SBOX_REUT_PH_PLS			0x00006850
#define	SBOX_REUT_PH_PTV			0x00006854
#define	SBOX_REUT_PH_STV			0x00006858
#define	SBOX_REUT_PH_LDC			0x0000685C
#define	SBOX_REUT_PH_LDS			0x00006860
#define	SBOX_REUT_PH_PRT			0x00006864
#define	SBOX_REUT_PAT_GCTR			0x00006868
#define	SBOX_REUT_PAT_CCTR			0x0000686C
#define	SBOX_REUT_PAT_BA			0x00006870
#define	SBOX_REUT_PAT_BS			0x00006874
#define	SBOX_REUT_PAT_REC			0x00006878
#define	SBOX_REUT_PAT_IS			0x0000687C
#define	SBOX_REUT_PAT_DCD			0x00006880
#define	SBOX_REUT_PAT_LEC			0x00006884
#define	SBOX_REUT_PAT_LCS			0x00006888
#define	SBOX_REUT_PAT_RES			0x0000688C
#define	SBOX_REUT_PM_R0				0x00006890
#define	SBOX_REUT_PM_R1				0x00006894
#define	SBOX_REUT_PM_R2				0x00006898
#define	SBOX_REUT_EP_OVR			0x0000689C
#define	SBOX_REUT_EP_SR				0x000068A0
#define	SBOX_REUT_EP_SS				0x000068A4
#define	SBOX_REUT_EP_CAP			0x000068A8
#define	SBOX_REUT_EP_OVD			0x000068AC
#define	SBOX_REUT_EP_OFT			0x000068B0
#define	SBOX_REUT_EP_MCTR			0x000068B4
#define	SBOX_REUT_EP_SCCTL			0x000068B8
#define	SBOX_REUT_EP_SCD			0x000068BC
#define	SBOX_PCS_DBG_0				0x000068C0
#define	SBOX_PEGPCS_CFG1			0x000068C4
#define	SBOX_PEGPCS_CFG2			0x000068C8
#define	SBOX_PEGPCS_STAT1			0x000068CC
#define	SBOX_PEGPLL_CFG0			0x000068D0
#define	SBOX_PEGPLL_CFG1			0x000068D4
#define	SBOX_PEGPLL_CFG2			0x000068D8
#define	SBOX_PEGPLL_CFG3			0x000068DC
#define	SBOX_PEGPLL_CFG4			0x000068E0
#define	SBOX_PEGPLL_CFG5			0x000068E4
#define	SBOX_PEGODO_CFG1			0x000068E8
#define	SBOX_PEGBIAS_CFG1			0x000068EC
#define	SBOX_PEGBIAS_CFG2			0x000068F0
#define	SBOX_PEGBIAS_CFG3			0x000068F4
#define	SBOX_PEGBIAS_CFG4			0x000068F8
#define	SBOX_PEGBIAS_CFG5			0x000068FC
#define	SBOX_PEGBIAS_CFG6			0x00006900
#define	SBOX_PEGPHY_CFG0			0x00006904
#define	SBOX_PEGPHY_CFG1			0x00006908
#define	SBOX_PEGPHY_CFG2			0x0000690C
#define	SBOX_PEGPHY_CFG3			0x00006910
#define	SBOX_PEGPHY_CFG4			0x00006914
#define	SBOX_PEGPHY_CFG5			0x00006918
#define	SBOX_PEGPHY_CFG6			0x0000691C
#define	SBOX_PEGPHY_CFG7			0x00006920
#define	SBOX_PEGPHY_CFG8			0x00006924
#define	SBOX_PEGPHY_CFG9			0x00006928
#define	SBOX_PEGPHY_CFG10			0x0000692C
#define	SBOX_PEGPHY_CFG11			0x00006930
#define	SBOX_PEGPHY_CFG12			0x00006934
#define	SBOX_PEGPHY_CFG13			0x00006938
#define	SBOX_PEGPHY_STAT0			0x0000693C
#define	SBOX_PEGPHY_STAT1			0x00006940
#define	SBOX_PEGODO_STAT1			0x00006944
#define	SBOX_HLBCC				0x00006948
#define	SBOX_HLSCS				0x0000694C
#define	SBOX_HLWCS				0x00006950
#define	SBOX_PCS_PSMICFG0			0x00006954
#define	SBOX_PCS_PSMISTAT0			0x00006958
#define	SBOX_PEGBIAS_CFG7			0x0000695C
#define	SBOX_PEGBIAS_CFG8			0x00006960
#define	SBOX_PEGBIAS_CFG9			0x00006964
#define	SBOX_PEGBIAS_CFG10			0x00006968
#define	SBOX_PEGBIAS_STAT1			0x0000696C
#define	SBOX_PEGBIAS_STAT2			0x00006970
#define	SBOX_PEGPCS_CFG3			0x00006974
#define	SBOX_PEGPHY_CFG14			0x00006978
#define	SBOX_MSIXRAM				0x00007000
#define	SBOX_SICR0				0x00009004
#define	SBOX_SICS0				0x00009008
#define	SBOX_SICE0				0x0000900C
#define	SBOX_SICC0				0x00009010
#define	SBOX_SIAC0				0x00009014
#define	SBOX_SIAE0				0x00009018
#define	SBOX_SICR1				0x0000901C
#define	SBOX_SICS1				0x00009020
#define	SBOX_SICE1				0x00009024
#define	SBOX_SICC1				0x00009028
#define	SBOX_SIAE1				0x0000902C
#ifdef CONFIG_MIC
#define	SBOX_SDBIC0				0x00009030
#define	SBOX_SDBIC1				0x00009034
#define	SBOX_SDBIC2				0x00009038
#define	SBOX_SDBIC3				0x0000903C
#else
#define	SBOX_SDBIC0				0x0000CC90
#define	SBOX_SDBIC1				0x0000CC94
#define	SBOX_SDBIC2				0x0000CC98
#define	SBOX_SDBIC3				0x0000CC9C
#endif
#define	SBOX_MXAR0				0x00009040
#define	SBOX_MXAR1				0x00009044
#define	SBOX_MXAR2				0x00009048
#define	SBOX_MXAR3				0x0000904C
#define	SBOX_MXAR4				0x00009050
#define	SBOX_MXAR5				0x00009054
#define	SBOX_MXAR6				0x00009058
#define	SBOX_MXAR7				0x0000905C
#define	SBOX_MXAR8				0x00009060
#define	SBOX_MXAR9				0x00009064
#define	SBOX_MXAR10				0x00009068
#define	SBOX_MXAR11				0x0000906C
#define	SBOX_MXAR12				0x00009070
#define	SBOX_MXAR13				0x00009074
#define	SBOX_MXAR14				0x00009078
#define	SBOX_MXAR15				0x0000907C
#define	SBOX_MSIXPBACR				0x00009080
#define	SBOX_DCAR_0				0x0000A000
#define	SBOX_DHPR_0				0x0000A004
#define	SBOX_DTPR_0				0x0000A008
#define	SBOX_DAUX_LO_0				0x0000A00C
#define	SBOX_DAUX_HI_0				0x0000A010
#define	SBOX_DRAR_LO_0				0x0000A014
#define	SBOX_DRAR_HI_0				0x0000A018
#define	SBOX_DITR_0				0x0000A01C
#define	SBOX_DSTAT_0				0x0000A020
#define	SBOX_DTPWBR_LO_0			0x0000A024
#define	SBOX_DTPWBR_HI_0			0x0000A028
#define	SBOX_DCAR_1				0x0000A040
#define	SBOX_DHPR_1				0x0000A044
#define	SBOX_DTPR_1				0x0000A048
#define	SBOX_DAUX_LO_1				0x0000A04C
#define	SBOX_DAUX_HI_1				0x0000A050
#define	SBOX_DRAR_LO_1				0x0000A054
#define	SBOX_DRAR_HI_1				0x0000A058
#define	SBOX_DITR_1				0x0000A05C
#define	SBOX_DSTAT_1				0x0000A060
#define	SBOX_DTPWBR_LO_1			0x0000A064
#define	SBOX_DTPWBR_HI_1			0x0000A068
#define	SBOX_DCAR_2				0x0000A080
#define	SBOX_DHPR_2				0x0000A084
#define	SBOX_DTPR_2				0x0000A088
#define	SBOX_DAUX_LO_2				0x0000A08C
#define	SBOX_DAUX_HI_2				0x0000A090
#define	SBOX_DRAR_LO_2				0x0000A094
#define	SBOX_DRAR_HI_2				0x0000A098
#define	SBOX_DITR_2				0x0000A09C
#define	SBOX_DSTAT_2				0x0000A0A0
#define	SBOX_DTPWBR_LO_2			0x0000A0A4
#define	SBOX_DTPWBR_HI_2			0x0000A0A8
#define	SBOX_DCAR_3				0x0000A0C0
#define	SBOX_DHPR_3				0x0000A0C4
#define	SBOX_DTPR_3				0x0000A0C8
#define	SBOX_DAUX_LO_3				0x0000A0CC
#define	SBOX_DAUX_HI_3				0x0000A0D0
#define	SBOX_DRAR_LO_3				0x0000A0D4
#define	SBOX_DRAR_HI_3				0x0000A0D8
#define	SBOX_DITR_3				0x0000A0DC
#define	SBOX_DSTAT_3				0x0000A0E0
#define	SBOX_DTPWBR_LO_3			0x0000A0E4
#define	SBOX_DTPWBR_HI_3			0x0000A0E8
#define	SBOX_DCAR_4				0x0000A100
#define	SBOX_DHPR_4				0x0000A104
#define	SBOX_DTPR_4				0x0000A108
#define	SBOX_DAUX_LO_4				0x0000A10C
#define	SBOX_DAUX_HI_4				0x0000A110
#define	SBOX_DRAR_LO_4				0x0000A114
#define	SBOX_DRAR_HI_4				0x0000A118
#define	SBOX_DITR_4				0x0000A11C
#define	SBOX_DSTAT_4				0x0000A120
#define	SBOX_DTPWBR_LO_4			0x0000A124
#define	SBOX_DTPWBR_HI_4			0x0000A128
#define	SBOX_DCAR_5				0x0000A140
#define	SBOX_DHPR_5				0x0000A144
#define	SBOX_DTPR_5				0x0000A148
#define	SBOX_DAUX_LO_5				0x0000A14C
#define	SBOX_DAUX_HI_5				0x0000A150
#define	SBOX_DRAR_LO_5				0x0000A154
#define	SBOX_DRAR_HI_5				0x0000A158
#define	SBOX_DITR_5				0x0000A15C
#define	SBOX_DSTAT_5				0x0000A160
#define	SBOX_DTPWBR_LO_5			0x0000A164
#define	SBOX_DTPWBR_HI_5			0x0000A168
#define	SBOX_DCAR_6				0x0000A180
#define	SBOX_DHPR_6				0x0000A184
#define	SBOX_DTPR_6				0x0000A188
#define	SBOX_DAUX_LO_6				0x0000A18C
#define	SBOX_DAUX_HI_6				0x0000A190
#define	SBOX_DRAR_LO_6				0x0000A194
#define	SBOX_DRAR_HI_6				0x0000A198
#define	SBOX_DITR_6				0x0000A19C
#define	SBOX_DSTAT_6				0x0000A1A0
#define	SBOX_DTPWBR_LO_6			0x0000A1A4
#define	SBOX_DTPWBR_HI_6			0x0000A1A8
#define	SBOX_DCAR_7				0x0000A1C0
#define	SBOX_DHPR_7				0x0000A1C4
#define	SBOX_DTPR_7				0x0000A1C8
#define	SBOX_DAUX_LO_7				0x0000A1CC
#define	SBOX_DAUX_HI_7				0x0000A1D0
#define	SBOX_DRAR_LO_7				0x0000A1D4
#define	SBOX_DRAR_HI_7				0x0000A1D8
#define	SBOX_DITR_7				0x0000A1DC
#define	SBOX_DSTAT_7				0x0000A1E0
#define	SBOX_DTPWBR_LO_7			0x0000A1E4
#define	SBOX_DTPWBR_HI_7			0x0000A1E8
#define	SBOX_DCR				0x0000A280
#define	SBOX_DQAR				0x0000A284
#define	SBOX_DQDR_TL				0x0000A288
#define	SBOX_DQDR_TR				0x0000A28C
#define	SBOX_DQDR_BL				0x0000A290
#define	SBOX_DQDR_BR				0x0000A294
#define	SBOX_DMA_SPARE0				0x0000A298
#define	SBOX_RING_TRANS_LIMIT			0x0000A29C
#define	SBOX_DMA_SPARE2				0x0000A2A0
#define	SBOX_DMA_SPARE3				0x0000A2A4
#define	SBOX_CP_MEMREGION_BASE			0x0000A2B0
#define	SBOX_CP_MEMREGION_TOP			0x0000A2B4
#define	SBOX_CP_DISABLE				0x0000A2B8
#define	SBOX_PSMIA_0				0x0000A3A0
#define	SBOX_PSMIA_1				0x0000A3A4
#define	SBOX_PSMIA_2				0x0000A3A8
#define	SBOX_PSMIA_3				0x0000A3AC
#define	SBOX_PSMIA_4				0x0000A3B0
#define	SBOX_PSMIA_5				0x0000A3B4
#define	SBOX_PSMIA_6				0x0000A3B8
#define	SBOX_PSMIA_7				0x0000A3BC
#define	SBOX_PSMIB_0				0x0000A3C0
#define	SBOX_PSMIB_1				0x0000A3C4
#define	SBOX_PSMIB_2				0x0000A3C8
#define	SBOX_PSMIB_3				0x0000A3CC
#define	SBOX_PSMIB_4				0x0000A3D0
#define	SBOX_PSMIB_5				0x0000A3D4
#define	SBOX_PSMIB_6				0x0000A3D8
#define	SBOX_PSMIB_7				0x0000A3DC
#define	SBOX_PSMIC_0				0x0000A3E0
#define	SBOX_PSMIC_1				0x0000A3E4
#define	SBOX_PSMIC_2				0x0000A3E8
#define	SBOX_PSMIC_3				0x0000A3EC
#define	SBOX_PSMIC_4				0x0000A3F0
#define	SBOX_PSMIC_5				0x0000A3F4
#define	SBOX_PSMIC_6				0x0000A3F8
#define	SBOX_PSMIC_7				0x0000A3FC
#define	SBOX_DMA_LOCK				0x0000A400
#define	SBOX_APICIDR				0x0000A800
#define	SBOX_APICVER				0x0000A804
#define	SBOX_APICAPR				0x0000A808
#define	SBOX_APICRT0				0x0000A840
#define	SBOX_APICRT1				0x0000A848
#define	SBOX_APICRT2				0x0000A850
#define	SBOX_APICRT3				0x0000A858
#define	SBOX_APICRT4				0x0000A860
#define	SBOX_APICRT5				0x0000A868
#define	SBOX_APICRT6				0x0000A870
#define	SBOX_APICRT7				0x0000A878
#define	SBOX_APICRT8				0x0000A880
#define	SBOX_APICRT9				0x0000A888
#define	SBOX_APICRT10				0x0000A890
#define	SBOX_APICRT11				0x0000A898
#define	SBOX_APICRT12				0x0000A8A0
#define	SBOX_APICRT13				0x0000A8A8
#define	SBOX_APICRT14				0x0000A8B0
#define	SBOX_APICRT15				0x0000A8B8
#define	SBOX_APICRT16				0x0000A8C0
#define	SBOX_APICRT17				0x0000A8C8
#define	SBOX_APICRT18				0x0000A8D0
#define	SBOX_APICRT19				0x0000A8D8
#define	SBOX_APICRT20				0x0000A8E0
#define	SBOX_APICRT21				0x0000A8E8
#define	SBOX_APICRT22				0x0000A8F0
#define	SBOX_APICRT23				0x0000A8F8
#define	SBOX_APICRT24				0x0000A900
#define	SBOX_APICRT25				0x0000A908
#define	SBOX_SGAPICESR				0x0000A940
#define	SBOX_APICESR0				0x0000A950
#define	SBOX_APICESR1				0x0000A954
#define	SBOX_APICESR2				0x0000A958
#define	SBOX_APICESR3				0x0000A95C
#define	SBOX_APICESR4				0x0000A960
#define	SBOX_APICESR5				0x0000A964
#define	SBOX_APICESR6				0x0000A968
#define	SBOX_APICESR7				0x0000A96C
#define	SBOX_APICESR8				0x0000A970
#define	SBOX_APICESR9				0x0000A974
#define	SBOX_APICESR10				0x0000A978
#define	SBOX_APICESR11				0x0000A97C
#define	SBOX_APICESR12				0x0000A980
#define	SBOX_APICESR13				0x0000A984
#define	SBOX_APICESR14				0x0000A988
#define	SBOX_APICESR15				0x0000A98C
#define	SBOX_APICESR16				0x0000A990
#define	SBOX_APICESR17				0x0000A994
#define	SBOX_APICESR18				0x0000A998
#define	SBOX_APICESR19				0x0000A99C
#define	SBOX_APICESR20				0x0000A9A0
#define	SBOX_APICESR21				0x0000A9A4
#define	SBOX_APICESR22				0x0000A9A8
#define	SBOX_APICESR23				0x0000A9AC
#define	SBOX_APICESR24				0x0000A9B0
#define	SBOX_APICESR25				0x0000A9B4
#define	SBOX_APICESR26				0x0000A9B8
#define	SBOX_APICESR27				0x0000A9BC
#define	SBOX_APICESR28				0x0000A9C0
#define	SBOX_APICESR29				0x0000A9C4
#define	SBOX_APICESR30				0x0000A9C8
#define	SBOX_APICESR31				0x0000A9CC
#define	SBOX_APICICR0				0x0000A9D0
#define	SBOX_APICICR1				0x0000A9D8
#define	SBOX_APICICR2				0x0000A9E0
#define	SBOX_APICICR3				0x0000A9E8
#define	SBOX_APICICR4				0x0000A9F0
#define	SBOX_APICICR5				0x0000A9F8
#define	SBOX_APICICR6				0x0000AA00
#define	SBOX_APICICR7				0x0000AA08
#define	SBOX_MCA_INT_STAT			0x0000AB00
#define	SBOX_MCA_INT_EN				0x0000AB04
#define	SBOX_SCRATCH0				0x0000AB20
#define	SBOX_SCRATCH1				0x0000AB24
#define	SBOX_SCRATCH2				0x0000AB28
#define	SBOX_SCRATCH3				0x0000AB2C
#define	SBOX_SCRATCH4				0x0000AB30
#define	SBOX_SCRATCH5				0x0000AB34
#define	SBOX_SCRATCH6				0x0000AB38
#define	SBOX_SCRATCH7				0x0000AB3C
#define	SBOX_SCRATCH8				0x0000AB40
#define	SBOX_SCRATCH9				0x0000AB44
#define	SBOX_SCRATCH10				0x0000AB48
#define	SBOX_SCRATCH11				0x0000AB4C
#define	SBOX_SCRATCH12				0x0000AB50
#define	SBOX_SCRATCH13				0x0000AB54
#define	SBOX_SCRATCH14				0x0000AB58
#define	SBOX_SCRATCH15				0x0000AB5C
#define	SBOX_PSMI_MEMSHADOW_CNTRL		0x0000AC00
#define	SBOX_PSMI_EN				0x0000AC04
#define	SBOX_PSMI_TIM_CNTRL			0x0000AC08
#define	SBOX_CONCAT_CORE_HALTED			0x0000AC0C
#define	SBOX_FORCE_BPM				0x0000AC48
#define	SBOX_CORE_HALTED0			0x0000AC4C
#define	SBOX_CORE_HALTED1			0x0000AC50
#define	SBOX_CORE_HALTED2			0x0000AC54
#define	SBOX_CORE_HALTED3			0x0000AC58
#define	SBOX_CORE_HALTED4			0x0000AC5C
#define	SBOX_CORE_HALTED5			0x0000AC60
#define	SBOX_CORE_HALTED6			0x0000AC64
#define	SBOX_CORE_HALTED7			0x0000AC68
#define	SBOX_CORE_HALTED8			0x0000AC6C
#define	SBOX_CORE_HALTED9			0x0000AC70
#define	SBOX_CORE_HALTED10			0x0000AC74
#define	SBOX_CORE_HALTED11			0x0000AC78
#define	SBOX_CORE_HALTED12			0x0000AC7C
#define	SBOX_CORE_HALTED13			0x0000AC80
#define	SBOX_CORE_HALTED14			0x0000AC84
#define	SBOX_CORE_HALTED15			0x0000AC88
#define	SBOX_CORE_HALTED16			0x0000AC8C
#define	SBOX_CORE_HALTED17			0x0000AC90
#define	SBOX_CORE_HALTED18			0x0000AC94
#define	SBOX_CORE_HALTED19			0x0000AC98
#define	SBOX_CORE_HALTED20			0x0000AC9C
#define	SBOX_CORE_HALTED21			0x0000ACA0
#define	SBOX_CORE_HALTED22			0x0000ACA4
#define	SBOX_CORE_HALTED23			0x0000ACA8
#define	SBOX_CORE_HALTED24			0x0000ACAC
#define	SBOX_CORE_HALTED25			0x0000ACB0
#define	SBOX_CORE_HALTED26			0x0000ACB4
#define	SBOX_CORE_HALTED27			0x0000ACB8
#define	SBOX_CORE_HALTED28			0x0000ACBC
#define	SBOX_CORE_HALTED29			0x0000ACC0
#define	SBOX_CORE_HALTED30			0x0000ACC4
#define	SBOX_CORE_HALTED31			0x0000ACC8
#define	SBOX_FENCE_CTL_0			0x0000B000
#define	SBOX_FENCE_LO_0				0x0000B004
#define	SBOX_FENCE_UP_0				0x0000B008
#define	SBOX_FENCE_CTL_1			0x0000B010
#define	SBOX_FENCE_LO_1				0x0000B014
#define	SBOX_FENCE_UP_1				0x0000B018
#define	SBOX_FENCE_CTL_2			0x0000B020
#define	SBOX_FENCE_LO_2				0x0000B024
#define	SBOX_FENCE_UP_2				0x0000B028
#define	SBOX_FENCE_CTL_3			0x0000B030
#define	SBOX_FENCE_LO_3				0x0000B034
#define	SBOX_FENCE_UP_3				0x0000B038
#define	SBOX_FENCE_CTL_4			0x0000B040
#define	SBOX_FENCE_LO_4				0x0000B044
#define	SBOX_FENCE_UP_4				0x0000B048
#define	SBOX_FENCE_CTL_5			0x0000B050
#define	SBOX_FENCE_LO_5				0x0000B054
#define	SBOX_FENCE_UP_5				0x0000B058
#define	SBOX_FENCE_CTL_6			0x0000B060
#define	SBOX_FENCE_LO_6				0x0000B064
#define	SBOX_FENCE_UP_6				0x0000B068
#define	SBOX_FENCE_CTL_7			0x0000B070
#define	SBOX_FENCE_LO_7				0x0000B074
#define	SBOX_FENCE_UP_7				0x0000B078
#define	SBOX_FENCE_CTL_8			0x0000B080
#define	SBOX_FENCE_LO_8				0x0000B084
#define	SBOX_FENCE_UP_8				0x0000B088
#define	SBOX_FENCE_CTL_9			0x0000B090
#define	SBOX_FENCE_LO_9				0x0000B094
#define	SBOX_FENCE_UP_9				0x0000B098
#define	SBOX_FENCE_CTL_10			0x0000B0A0
#define	SBOX_FENCE_LO_10			0x0000B0A4
#define	SBOX_FENCE_UP_10			0x0000B0A8
#define	SBOX_FENCE_CTL_11			0x0000B0B0
#define	SBOX_FENCE_LO_11			0x0000B0B4
#define	SBOX_FENCE_UP_11			0x0000B0B8
#define	SBOX_FENCE_CTL_12			0x0000B0C0
#define	SBOX_FENCE_LO_12			0x0000B0C4
#define	SBOX_FENCE_UP_12			0x0000B0C8
#define	SBOX_FENCE_CTL_13			0x0000B0D0
#define	SBOX_FENCE_LO_13			0x0000B0D4
#define	SBOX_FENCE_UP_13			0x0000B0D8
#define	SBOX_FENCE_CTL_14			0x0000B0E0
#define	SBOX_FENCE_LO_14			0x0000B0E4
#define	SBOX_FENCE_UP_14			0x0000B0E8
#define	SBOX_FENCE_CTL_15			0x0000B0F0
#define	SBOX_FENCE_LO_15			0x0000B0F4
#define	SBOX_FENCE_UP_15			0x0000B0F8
#define	SBOX_RDMASR0				0x0000B180
#define	SBOX_RDMASR1				0x0000B184
#define	SBOX_RDMASR2				0x0000B188
#define	SBOX_RDMASR3				0x0000B18C
#define	SBOX_RDMASR4				0x0000B190
#define	SBOX_RDMASR5				0x0000B194
#define	SBOX_RDMASR6				0x0000B198
#define	SBOX_RDMASR7				0x0000B19C
#define	SBOX_SBQ_FLUSH				0x0000B1A0 // Pseudo-register, not autogen, must add manually
#define	SBOX_TLB_FLUSH				0x0000B1A4
#define	SBOX_TLB_CONTROL			0x0000C104
#define	SBOX_TLB_ERROR_L			0x0000C108
#define	SBOX_TLB_ERROR_H			0x0000C10C
#define	SBOX_TLB_MISS_CNT			0x0000C110
#define	SBOX_TLB_FLUSH_CNT			0x0000C114
#define	SBOX_GTT_PHY_BASE			0x0000C118
#define	SBOX_APR_PHY_BASE			0x0000C11C
#define	SBOX_PTLB_FLUSH				0x0000C300
#define	SBOX_PTLB_CONTROL			0x0000C304
#define	SBOX_PTLB_ERROR_L			0x0000C308
#define	SBOX_PTLB_ERROR_H			0x0000C30C
#define	SBOX_PTLB_MISS_CNT			0x0000C310
#define	SBOX_PTLB_FLUSH_CNT			0x0000C314
#define	SBOX_PTLB_VIOLATE_CNT			0x0000C318
#define	SBOX_PTT_PHY_BASE			0x0000C31C
#define	SBOX_RS_CR_ADAK_CTL			0x0000CC00
#define	SBOX_RS_CR_BL_CTL			0x0000CC04
#define	SBOX_SBQ_LOCK				0x0000CC0C
#define	SBOX_RSC0				0x0000CC10
#define	SBOX_RSC1				0x0000CC14
#define	SBOX_PSMI_FUSE_0			0x0000CC18
#define	SBOX_PSMI_FUSE_1			0x0000CC1C
#define	SBOX_RS_EMON_SELECTORS			0x0000CC20
#define	SBOX_EMON_CNT_OVFL			0x0000CC24
#define	SBOX_EMON_CNT0				0x0000CC28
#define	SBOX_EMON_CNT1				0x0000CC2C
#define	SBOX_EMON_CNT2				0x0000CC30
#define	SBOX_EMON_CNT3				0x0000CC34
#define	SBOX_SPARE0				0x0000CC38
#define	SBOX_SPARE1				0x0000CC3C
#define	SBOX_SPARE2				0x0000CC40
#define	SBOX_SPARE3				0x0000CC44
#define	SBOX_TLB_PDAT				0x0000CCE0
#define	SBOX_TLB_SDAT				0x0000CCE8
#define	SBOX_TLB_DATOUT				0x0000CCF0
#define	SBOX_TLB_DATIN0				0x0000CCF8

#endif
