/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006862e0; name: FUN_.text__006862e0
 */


undefined8 FUN__text__006862e0(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + *(int *)(param_2 + 0xd0);
  lVar3 = *(long *)(param_1 + 0x78);
  if (lVar3 != 0) {
    *(long *)(param_2 + 0x88) = lVar3;
    *(long *)(lVar3 + 0x80) = param_2;
  }
  *(long *)(param_1 + 0x78) = param_2;
  *(long *)(param_2 + 0x70) = param_1;
  if ((((*(long *)(param_2 + 0xa8) == 0) || ((*(byte *)(param_2 + 0xe4) & 0xc) != 0)) &&
      (iVar1 = FUN__text__00685a20(param_2 + 0x18), iVar1 != 0)) ||
     (uVar2 = FUN__text__00685f68(param_1,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  return uVar2;
}


