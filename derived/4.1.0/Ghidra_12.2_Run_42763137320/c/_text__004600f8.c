/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004600f8; name: FUN_.text__004600f8
 */


int FUN__text__004600f8(long param_1,long param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  
  if ((param_3 & 1) == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN__text__0046a1b0(param_1,1,*(undefined8 *)(param_2 + 0x10));
  }
  if (((param_4 & 1) == 0) && (*(char *)(param_2 + 0x28) == '\0')) {
    FUN__text__00469970(param_1,param_2,param_3 & 1);
    *(byte *)(param_2 + 0x28) = (byte)((uint)*(undefined4 *)(param_1 + 0xd2) >> 0x1c) & 1;
    plVar3 = *(long **)(param_1 + 0x80);
  }
  else {
    plVar3 = *(long **)(param_1 + 0x80);
  }
  if ((plVar3 != (long *)0x0) &&
     (iVar2 = (**(code **)(*plVar3 + 0x118))(plVar3,param_2,param_3 & 1,param_4 & 1), iVar2 != 1)) {
    if (iVar2 == 0x50) {
      iVar2 = 0x50;
      if (iVar1 != 1) {
        iVar2 = iVar1;
      }
      iVar1 = iVar2;
    }
    else {
      iVar1 = iVar2;
    }
  }
  if ((*(long *)(param_1 + 0x70) != 0) && (*(short *)(*(long *)(param_1 + 0x70) + 0xc0) == 1)) {
    *(byte *)(param_1 + 0x19c) = *(byte *)(param_1 + 0x19c) & 0xf8 | 1;
    FUN__text__0045fe00(param_1);
  }
  return iVar1;
}


