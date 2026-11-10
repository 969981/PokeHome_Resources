/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068cafc; name: FUN_.text__0068cafc
 */


undefined8 FUN__text__0068cafc(long param_1,undefined8 param_2,undefined4 param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN__text__0068c7d0(param_1,param_3);
  if (((uVar2 ^ 0xffffffff) & 0xffff) == 0) {
    if (*(char *)(param_1 + 0x104) == '\0') {
      uVar1 = *(ushort *)(*(long *)(param_1 + 0x20) + 6);
    }
    else {
      uVar1 = *(ushort *)(*(long *)(param_1 + 0x20) + 0x1c);
    }
    uVar2 = (uint)uVar1;
    uVar3 = 2;
  }
  else {
    uVar3 = 0;
  }
  FUN__text__0068cb70(param_1,param_2,uVar2);
  return uVar3;
}


