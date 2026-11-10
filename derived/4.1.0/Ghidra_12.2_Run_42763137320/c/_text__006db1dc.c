/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006db1dc; name: FUN_.text__006db1dc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006db1dc(long *param_1,long *param_2,long param_3,undefined4 param_4,int param_5)

{
  void *__s;
  long lVar1;
  
  param_1[1] = param_3;
  lVar1 = _DAT_008a6b88;
  param_1[2] = (long)param_2;
  *(undefined4 *)(param_1 + 3) = param_4;
  *(int *)((long)param_1 + 0x1c) = param_5;
  param_1[6] = 0;
  *param_1 = lVar1 + 0x10;
  param_1[4] = (long)param_5 * 0x90;
  param_1[5] = 0;
  __s = (void *)(**(code **)(*param_2 + 0x10))(param_2,(long)param_5 * 0x90,0x80);
  param_1[6] = (long)__s;
  memset(__s,0,(long)*(int *)((long)param_1 + 0x1c) * 0x90);
  lVar1 = param_1[1];
  *(undefined1 **)(lVar1 + 0xf20) = &LAB__text__006db768;
  *(undefined **)(lVar1 + 0xf30) = &DAT__text__006db7b8;
  *(code **)(lVar1 + 0xf38) = FUN__text__006db7dc;
  *(code **)(lVar1 + 0xf18) = FUN__text__006db2d0;
  *(undefined8 *)(lVar1 + 0xf10) = 0;
  *(undefined8 *)(lVar1 + 0xf28) = 0;
  *(code **)(lVar1 + 0xf40) = FUN__text__006db850;
  *(code **)(lVar1 + 0xf48) = FUN__text__006db56c;
  *(undefined1 **)(lVar1 + 0xf50) = &LAB__text__006db610;
  *(undefined1 **)(lVar1 + 0xf58) = &LAB__text__006db700;
  *(undefined1 **)(lVar1 + 0xf60) = &LAB__text__006db950;
  return;
}


