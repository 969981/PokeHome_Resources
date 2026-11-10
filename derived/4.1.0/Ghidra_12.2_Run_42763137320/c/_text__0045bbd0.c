/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045bbd0; name: FUN_.text__0045bbd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0045bbd0(long *param_1,long *param_2,long param_3,long param_4,undefined4 param_5,
                        byte param_6)

{
  long lVar1;
  byte bVar2;
  
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[2] = 0x3f8000003f800000;
  lVar1 = _DAT_008a4948;
  param_1[0x2a] = (long)param_2;
  param_1[0x2b] = param_3;
  param_1[0x2c] = param_4;
  param_1[0x2d] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)((long)param_1 + 0x194) = param_5;
  *param_1 = lVar1 + 0x10;
  param_1[1] = 0x3f8000003f800000;
  *(undefined4 *)(param_1 + 0x32) = 0xc5800000;
  bVar2 = 2;
  if ((param_6 & 1) == 0) {
    bVar2 = 0;
  }
  param_1[0x30] = 0;
  param_1[0x31] = -0x3a7fffffc0800000;
  *(byte *)(param_1 + 0x33) = bVar2 | param_6 | *(byte *)(param_1 + 0x33) & 0xf8;
  if (*(long *)(param_3 + 0x68) == 0) {
    lVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  }
  else {
    lVar1 = FUN__text__0045cdec();
  }
  param_1[0x2e] = lVar1;
  FUN__text__0045bc90(param_1,0,0);
  FUN__text__004d4648(param_3,param_1);
  return;
}


