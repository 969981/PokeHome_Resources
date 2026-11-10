/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002fd2e0; name: FUN_.text__002fd2e0
 */


long FUN__text__002fd2e0(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  
  lVar1 = 0;
  if ((param_2 & 0xfff) != 0) {
    lVar1 = 0x1000 - (param_2 & 0xfff);
  }
  lVar2 = 0;
  uVar3 = lVar1 + param_2 >> 0xc;
  if (uVar3 <= *(ulong *)(param_1 + 8)) {
    plVar5 = (long *)(param_1 + 0x20);
    lVar2 = *plVar5;
    uVar4 = *(long *)(param_1 + 0x28) - lVar2 >> 0xc;
    if (uVar3 < uVar4 || uVar3 - uVar4 == 0) {
      if (uVar3 < uVar4) {
        *(ulong *)(param_1 + 0x28) = lVar2 + uVar3 * 0x1000;
      }
    }
    else {
      FUN__text__002fd3d0(plVar5,uVar3 - uVar4);
      lVar2 = *plVar5;
    }
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x30) - lVar2 >> 0xc;
  }
  return lVar2;
}


