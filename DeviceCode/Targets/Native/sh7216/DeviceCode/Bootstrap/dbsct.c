/***********************************************************************/
/*                                                                     */
/*  FILE        :dbsct.c                                               */
/*  DATE        :Thu, Mar 04, 2010                                     */
/*  DESCRIPTION :Setting of B,R Section                                */
/*  CPU TYPE    :SH2A                                                */
/*                                                                     */
/*  This file is generated by Renesas Project Generator (Ver.4.9).     */
/*                                                                     */
/***********************************************************************/

#pragma section $DSEC
#ifdef COPY_SECTION_P
static const struct {
    UINT8 *rom_s;       /* Start address of the initialized data section in ROM */
    UINT8 *rom_e;       /* End address of the initialized data section in ROM   */
    UINT8 *ram_s;       /* Start address of the initialized data section in RAM */
}   DTBL[] = {
    { __sectop("D"), __secend("D"), __sectop("R") }
};
#else
static const struct {
    UINT8 *rom_s;       /* Start address of the initialized data section in ROM */
    UINT8 *rom_e;       /* End address of the initialized data section in ROM   */
    UINT8 *ram_s;       /* Start address of the initialized data section in RAM */
}   DTBL[] = {
    { __sectop("D"), __secend("D"), __sectop("R") },
    { __sectop("PFRAM"), __secend("PFRAM"), __sectop("RPFRAM") }
};
#endif

#pragma section $BSEC
static const struct {
    UINT8 *b_s;         /* Start address of non-initialized data section */
    UINT8 *b_e;         /* End address of non-initialized data section */
}   BTBL[] = {
    { __sectop("B"), __secend("B") }
};
