/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0054d364; name: FUN_.text__0054d364
 */


undefined8
FUN__text__0054d364(uint param_1,uint param_2,uint param_3,float param_4,uint *param_5,long *param_6
                   ,uint param_7)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  if (param_7 < 9) {
    param_7 = 8;
  }
  param_5[0xb] = param_2;
  param_5[0xc] = param_3;
  param_5[7] = param_1;
  param_5[8] = param_2;
  param_5[9] = param_3;
  param_5[10] = param_1;
  uVar1 = param_7 + 3 & 0xfffffffc;
  uVar2 = 0x3000;
  if (0xfffe6fff < (int)((float)uVar1 * param_4) * 8 - 0x18000U) {
    uVar2 = (int)((float)uVar1 * param_4) & 0xfffffffc;
  }
  if (uVar1 <= uVar2) {
    uVar2 = uVar2 - 4;
  }
  *param_5 = uVar1;
  param_5[1] = uVar2;
  uVar1 = uVar1 * 2 + 0x400;
  param_5[2] = uVar1;
  lVar3 = (**(code **)(*param_6 + 0x10))(param_6,(ulong)uVar1 << 2,0x711e2b,0x2f);
  *(long *)(param_5 + 4) = lVar3;
  if (lVar3 == 0) {
    return 0x34;
  }
  param_5[6] = 0;
  return 1;
}


