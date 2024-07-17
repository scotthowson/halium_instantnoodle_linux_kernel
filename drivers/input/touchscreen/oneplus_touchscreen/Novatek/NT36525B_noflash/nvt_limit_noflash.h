/***************************************************
 * File:nvt_limit.h
 * Copyright (c)  2017 - 2030  Oneplus Mobile communication Corp.ltd.
 * Description:
 *             nova nt36525b test limit data
 * Version:1.0:
 * Date created:2017-09-15
 * Author: Cong.Dai@Bsp.Driver
 * TAG: BSP.TP.Init
 * *
 * -------------- Revision History: -----------------
 *  <author >  <data>  <version>  <desc>
 ***************************************************/

#define NVT_TOUCH_MP_LIMIT 1	/* support nvt criteria format */
//---Screen on test---
static uint32_t IC_X_CFG_SIZE = 18;
static uint32_t IC_Y_CFG_SIZE = 32;
static uint32_t IC_KEY_CFG_SIZE = 4;
static uint32_t X_Channel = 18;
static uint32_t Y_Channel = 32;
static uint8_t AIN_X[40] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
static uint8_t AIN_Y[40] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
	21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31};


static int32_t PS_Config_Lmt_Short_Rawdata_P[40 * 40] = {
	14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,
	14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,
	14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,
	14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,
	14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,
	14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,
	14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,
	14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,
	14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,
	14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,
	14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,
	14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,
	14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,
	14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,
	14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,
	14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,
	14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,
	14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,
	14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,
	14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,
	14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,
	14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,
	14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,
	14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,
	14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,
	14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,
	14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,
	14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,
	14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,
	14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,
	14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,
	14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,14008,
};

static int32_t PS_Config_Lmt_Short_Rawdata_N[40 * 40] = {
	10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,
	10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,
	10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,
	10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,
	10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,
	10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,
	10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,
	10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,
	10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,
	10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,
	10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,
	10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,
	10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,
	10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,
	10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,
	10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,
	10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,
	10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,
	10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,
	10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,
	10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,
	10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,
	10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,
	10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,
	10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,
	10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,
	10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,
	10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,
	10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,
	10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,
	10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,
	10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,
};

static int32_t PS_Config_Lmt_Open_Rawdata_P[40 * 40] = {
	5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,
	5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,
	5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,
	5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,
	5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,
	5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,
	5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,
	5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,
	5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,
	5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,
	5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,
	5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,
	5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,
	5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,
	5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,
	5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,
	5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,
	5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,
	5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,
	5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,
	5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,
	5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,
	5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,
	5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,
	5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,
	5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,
	5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,
	5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,
	5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,
	5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,
	5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,
	5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,5120,
};

static int32_t PS_Config_Lmt_Open_Rawdata_N[40 * 40] = {
	50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,
	50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,
	50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,
	50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,
	50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,
	50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,
	50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,
	50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,
	50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,
	50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,
	50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,
	50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,
	50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,
	50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,
	50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,
	50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,
	50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,
	50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,
	50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,
	50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,
	50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,
	50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,
	50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,
	50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,
	50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,
	50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,
	50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,
	50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,
	50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,
	50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,
	50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,
	50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,
};

static int32_t PS_Config_Lmt_FW_Rawdata_P[40 * 40] = {
	2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,
	2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,
	2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,
	2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,
	2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,
	2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,
	2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,
	2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,
	2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,
	2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,
	2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,
	2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,
	2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,
	2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,
	2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,
	2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,
	2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,
	2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,
	2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,
	2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,
	2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,
	2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,
	2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,
	2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,
	2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,
	2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,
	2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,
	2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,
	2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,
	2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,
	2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,
	2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,2560,
};

static int32_t PS_Config_Lmt_FW_Rawdata_N[40 * 40] = {
	240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,
	240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,
	240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,
	240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,
	240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,
	240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,
	240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,
	240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,
	240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,
	240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,
	240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,
	240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,
	240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,
	240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,
	240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,
	240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,
	240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,
	240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,
	240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,
	240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,
	240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,
	240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,
	240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,
	240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,
	240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,
	240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,
	240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,
	240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,
	240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,
	240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,
	240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,
	240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,
};

static int32_t PS_Config_Lmt_FW_CC_P[40 * 40] = {
	314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,
	314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,
	314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,
	314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,
	314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,
	314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,
	314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,
	314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,
	314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,
	314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,
	314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,
	314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,
	314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,
	314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,
	314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,
	314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,
	314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,
	314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,
	314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,
	314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,
	314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,
	314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,
	314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,
	314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,
	314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,
	314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,
	314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,
	314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,
	314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,
	314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,
	314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,
	314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,314,
};

static int32_t PS_Config_Lmt_FW_CC_N[40 * 40] = {
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
};

static int32_t PS_Config_Lmt_FW_Diff_P[40 * 40] = {
	75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,
	75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,
	75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,
	75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,
	75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,
	75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,
	75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,
	75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,
	75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,
	75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,
	75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,
	75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,
	75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,
	75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,
	75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,
	75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,
	75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,
	75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,
	75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,
	75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,
	75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,
	75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,
	75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,
	75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,
	75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,
	75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,
	75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,
	75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,
	75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,
	75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,
	75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,
	75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,
};

static int32_t PS_Config_Lmt_FW_Diff_N[40 *40] = {
	-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,
	-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,
	-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,
	-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,
	-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,
	-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,
	-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,
	-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,
	-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,
	-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,
	-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,
	-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,
	-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,
	-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,
	-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,
	-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,
	-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,
	-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,
	-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,
	-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,
	-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,
	-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,
	-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,
	-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,
	-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,
	-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,
	-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,
	-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,
	-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,
	-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,
	-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,
	-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,-75,
};

static int32_t PS_Config_Diff_Test_Frame = 50;
//---Customized Test---

//---DozeModeTest---
static uint32_t Doze_X_Channel = 2;
static int32_t PS_Config_Lmt_Doze_Rawdata_P[40 * 40] = {
	800,800,
	800,800,
	800,800,
	800,800,
	800,800,
	800,800,
	800,800,
	800,800,
	800,800,
	800,800,
	800,800,
	800,800,
	800,800,
	800,800,
	800,800,
	800,800,
	800,800,
	800,800,
	800,800,
	800,800,
	800,800,
	800,800,
	800,800,
	800,800,
	800,800,
	800,800,
	800,800,
	800,800,
	800,800,
	800,800,
	800,800,
	800,800,
};

static int32_t PS_Config_Lmt_Doze_Rawdata_N[40 * 40] = {
	200,200,
	200,200,
	200,200,
	200,200,
	200,200,
	200,200,
	200,200,
	200,200,
	200,200,
	200,200,
	200,200,
	200,200,
	200,200,
	200,200,
	200,200,
	200,200,
	200,200,
	200,200,
	200,200,
	200,200,
	200,200,
	200,200,
	200,200,
	200,200,
	200,200,
	200,200,
	200,200,
	200,200,
	200,200,
	200,200,
	200,200,
	200,200,
};

static int32_t PS_Config_Doze_Noise_Test_Frame = 50;
static int32_t PS_Config_Lmt_Doze_Diff_P[40 * 40] = {
	80,80,
	80,80,
	80,80,
	80,80,
	80,80,
	80,80,
	80,80,
	80,80,
	80,80,
	80,80,
	80,80,
	80,80,
	80,80,
	80,80,
	80,80,
	80,80,
	80,80,
	80,80,
	80,80,
	80,80,
	80,80,
	80,80,
	80,80,
	80,80,
	80,80,
	80,80,
	80,80,
	80,80,
	80,80,
	80,80,
	80,80,
	80,80,
};

static int32_t PS_Config_Lmt_Doze_Diff_N[40 *40] = {
	-80,-80,
	-80,-80,
	-80,-80,
	-80,-80,
	-80,-80,
	-80,-80,
	-80,-80,
	-80,-80,
	-80,-80,
	-80,-80,
	-80,-80,
	-80,-80,
	-80,-80,
	-80,-80,
	-80,-80,
	-80,-80,
	-80,-80,
	-80,-80,
	-80,-80,
	-80,-80,
	-80,-80,
	-80,-80,
	-80,-80,
	-80,-80,
	-80,-80,
	-80,-80,
	-80,-80,
	-80,-80,
	-80,-80,
	-80,-80,
	-80,-80,
	-80,-80,
};
//---LPWGModeTest---
static int32_t PS_Config_Lmt_LPWG_Rawdata_P[40 * 40] = {
	1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,
	1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,
	1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,
	1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,
	1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,
	1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,
	1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,
	1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,
	1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,
	1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,
	1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,
	1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,
	1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,
	1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,
	1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,
	1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,
	1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,
	1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,
	1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,
	1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,
	1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,
	1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,
	1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,
	1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,
	1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,
	1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,
	1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,
	1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,
	1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,
	1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,
	1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,
	1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,1680,
};

static int32_t PS_Config_Lmt_LPWG_Rawdata_N[40 * 40] = {
	720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,
	720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,
	720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,
	720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,
	720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,
	720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,
	720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,
	720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,
	720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,
	720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,
	720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,
	720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,
	720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,
	720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,
	720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,
	720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,
	720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,
	720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,
	720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,
	720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,
	720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,
	720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,
	720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,
	720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,
	720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,
	720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,
	720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,
	720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,
	720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,
	720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,
	720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,
	720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,720,
};

static int32_t PS_Config_Lmt_LPWG_Diff_P[40 * 40] = {
	55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,
	55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,
	55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,
	55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,
	55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,
	55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,
	55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,
	55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,
	55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,
	55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,
	55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,
	55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,
	55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,
	55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,
	55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,
	55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,
	55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,
	55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,
	55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,
	55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,
	55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,
	55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,
	55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,
	55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,
	55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,
	55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,
	55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,
	55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,
	55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,
	55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,
	55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,
	55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,
};

static int32_t PS_Config_Lmt_LPWG_Diff_N[40 *40] = {
	-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,
	-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,
	-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,
	-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,
	-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,
	-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,
	-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,
	-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,
	-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,
	-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,
	-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,
	-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,
	-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,
	-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,
	-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,
	-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,
	-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,
	-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,
	-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,
	-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,
	-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,
	-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,
	-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,
	-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,
	-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,
	-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,
	-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,
	-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,
	-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,
	-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,
	-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,
	-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,-55,
};

static uint32_t FDM_X_Channel = 2;
static int32_t PS_Config_Lmt_FDM_Rawdata_P[40 * 40] = {
	760,760,
	760,760,
	760,760,
	760,760,
	760,760,
	760,760,
	760,760,
	760,760,
	760,760,
	760,760,
	760,760,
	760,760,
	760,760,
	760,760,
	760,760,
	760,760,
	760,760,
	760,760,
	760,760,
	760,760,
	760,760,
	760,760,
	760,760,
	760,760,
	760,760,
	760,760,
	760,760,
	760,760,
	760,760,
	760,760,
	760,760,
	760,760,
};

static int32_t PS_Config_Lmt_FDM_Rawdata_N[40 * 40] = {
	240,240,
	240,240,
	240,240,
	240,240,
	240,240,
	240,240,
	240,240,
	240,240,
	240,240,
	240,240,
	240,240,
	240,240,
	240,240,
	240,240,
	240,240,
	240,240,
	240,240,
	240,240,
	240,240,
	240,240,
	240,240,
	240,240,
	240,240,
	240,240,
	240,240,
	240,240,
	240,240,
	240,240,
	240,240,
	240,240,
	240,240,
	240,240,
};

static int32_t PS_Config_FDM_Noise_Test_Frame = 50;
static int32_t PS_Config_Lmt_FDM_Diff_P[40 * 40] = {
	140,140,
	140,140,
	140,140,
	140,140,
	140,140,
	140,140,
	140,140,
	140,140,
	140,140,
	140,140,
	140,140,
	140,140,
	140,140,
	140,140,
	140,140,
	140,140,
	140,140,
	140,140,
	140,140,
	140,140,
	140,140,
	140,140,
	140,140,
	140,140,
	140,140,
	140,140,
	140,140,
	140,140,
	140,140,
	140,140,
	140,140,
	140,140,
};

static int32_t PS_Config_Lmt_FDM_Diff_N[40 *40] = {
	-140,-140,
	-140,-140,
	-140,-140,
	-140,-140,
	-140,-140,
	-140,-140,
	-140,-140,
	-140,-140,
	-140,-140,
	-140,-140,
	-140,-140,
	-140,-140,
	-140,-140,
	-140,-140,
	-140,-140,
	-140,-140,
	-140,-140,
	-140,-140,
	-140,-140,
	-140,-140,
	-140,-140,
	-140,-140,
	-140,-140,
	-140,-140,
	-140,-140,
	-140,-140,
	-140,-140,
	-140,-140,
	-140,-140,
	-140,-140,
	-140,-140,
	-140,-140,
};