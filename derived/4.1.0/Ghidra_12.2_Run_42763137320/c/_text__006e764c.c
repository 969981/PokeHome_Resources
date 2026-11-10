/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006e764c; name: FUN_.text__006e764c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006e764c(long *param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 4) = param_3;
  param_1[5] = 0;
  lVar1 = _DAT_008a6bb8;
  param_1[2] = 0x3f8000003f800000;
  param_1[3] = param_2;
  uVar2 = _DAT_008a6bc0;
  *param_1 = lVar1 + 0x10;
  param_1[1] = 0x3f8000003f800000;
  *(undefined8 *)(param_2 + 0xeb8) = 0;
  *(undefined8 *)(param_2 + 0xec0) = uVar2;
  *(undefined8 *)(param_2 + 0xec8) = 0;
  *(undefined8 *)(param_2 + 0xed0) = 0;
  *(undefined **)(param_2 + 0xed8) = &DAT__text__006e7844;
  *(code **)(param_2 + 0xee0) = FUN__text__006e78a0;
  *(undefined8 *)(param_2 + 0xef0) = 0;
  *(undefined8 *)(param_2 + 0xef8) = 0;
  *(undefined8 *)(param_2 + 0xf00) = 0;
  *(undefined1 **)(param_2 + 0xee8) = &LAB__text__006e78f4;
  *(undefined1 **)(param_2 + 0xf08) = &LAB__text__006db950;
  return;
}


