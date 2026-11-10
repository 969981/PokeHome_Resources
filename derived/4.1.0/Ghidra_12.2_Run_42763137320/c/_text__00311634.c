/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00311634; name: FUN_.text__00311634
 */


ushort FUN__text__00311634(long param_1)

{
  long *plVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  undefined8 uVar5;
  
  plVar1 = (long *)(param_1 + 0x7ef98);
  uVar2 = *(ushort *)(*plVar1 + 0x62);
  if (999 < uVar2) {
    return 0x3e9;
  }
  param_1 = param_1 + (ulong)uVar2 * 8;
  thunk_FUN__text__00631018(*(undefined8 *)(param_1 + 0x7efa0));
  uVar5 = *(undefined8 *)(param_1 + 0x7efa0);
  iVar4 = FUN__text__00631008(uVar5);
  sVar3 = FUN__text__00631010(uVar5);
  if ((iVar4 == 0x85 || iVar4 == 0x19) && sVar3 != 0) {
    *(ushort *)(*plVar1 + 0x60) = uVar2;
  }
  *(ushort *)(*plVar1 + 0x62) = uVar2 + 1;
  return uVar2;
}


