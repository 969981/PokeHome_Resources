/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0058ea50; name: FUN_.text__0058ea50
 */


undefined4 FUN__text__0058ea50(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  iVar1 = 1 << (ulong)(param_3 & 0x1f);
  iVar2 = 1 << (ulong)(param_2 & 0x1f);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar3 = 0xffffff7b;
  if ((iVar1 < 0x2001 && iVar2 <= iVar1) && 0x3f < iVar2) {
    uVar3 = 0;
  }
  *param_1 = iVar2;
  param_1[1] = iVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return uVar3;
}


