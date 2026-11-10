/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006dddf8; name: FUN_.text__006dddf8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006dddf8(long *param_1,long *param_2,long param_3,undefined4 param_4,int param_5)

{
  void *__s;
  long lVar1;
  
  param_1[1] = param_3;
  lVar1 = _DAT_008a6bd8;
  param_1[2] = (long)param_2;
  *(undefined4 *)(param_1 + 3) = param_4;
  *(int *)((long)param_1 + 0x1c) = param_5;
  param_1[6] = 0;
  *param_1 = lVar1 + 0x10;
  param_1[4] = (long)param_5 * 0xa0;
  param_1[5] = 0;
  __s = (void *)(**(code **)(*param_2 + 0x10))(param_2,(long)param_5 * 0xa0,0x80);
  param_1[6] = (long)__s;
  memset(__s,0,(long)*(int *)((long)param_1 + 0x1c) * 0xa0);
  lVar1 = param_1[1];
  *(undefined8 *)(lVar1 + 0xf70) = _DAT_008a6be0;
  *(undefined1 **)(lVar1 + 0xf78) = &LAB__text__006de3a0;
  *(undefined **)(lVar1 + 0xf88) = &DAT__text__006de3f0;
  *(code **)(lVar1 + 0xf90) = FUN__text__006de408;
  *(undefined8 *)(lVar1 + 0xf68) = 0;
  *(undefined8 *)(lVar1 + 0xf80) = 0;
  *(code **)(lVar1 + 0xf98) = FUN__text__006de470;
  *(code **)(lVar1 + 4000) = FUN__text__006de184;
  *(undefined1 **)(lVar1 + 0xfa8) = &LAB__text__006de230;
  *(undefined1 **)(lVar1 + 0xfb0) = &LAB__text__006de338;
  *(undefined1 **)(lVar1 + 0xfb8) = &LAB__text__006db950;
  return;
}


