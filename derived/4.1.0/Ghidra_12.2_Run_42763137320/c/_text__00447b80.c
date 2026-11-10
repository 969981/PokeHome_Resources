/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00447b80; name: FUN_.text__00447b80
 */


undefined8 FUN__text__00447b80(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (uVar1 == 0) {
    return 0;
  }
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = (uint)param_2 / uVar1;
  }
  plVar5 = (long *)(*(long *)(param_1 + 0x30) + (ulong)((uint)param_2 - uVar3 * uVar1) * 8);
  do {
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
      return 0;
    }
  } while (plVar5[1] != param_2);
  lVar4 = plVar5[2];
  iVar2 = *(int *)(lVar4 + 0x60);
  *(int *)(lVar4 + 0x60) = iVar2 + 1;
  if (iVar2 == 1 && *(char *)(lVar4 + 100) != '\0') {
    FUN__text__004473d0();
  }
  return plVar5[2];
}


