/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00467280; name: FUN_.text__00467280
 */


void FUN__text__00467280(long param_1,byte param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if ((((*(uint *)(param_1 + 0xd2) & 0x800) == 0 ^ param_2) & 1) == 0) {
    uVar1 = 0x800;
    if ((param_2 & 1) == 0) {
      uVar1 = 0;
    }
    *(uint *)(param_1 + 0xd2) = *(uint *)(param_1 + 0xd2) & 0xfffff7ff | uVar1;
    if (*(long *)(param_1 + 0x70) != 0) {
      *(byte *)(*(long *)(param_1 + 0x70) + 0x93) = param_2 & 1;
      plVar2 = *(long **)(param_1 + 0x70);
      if ((int)plVar2[1] != 0) {
        lVar3 = *plVar2;
        lVar4 = lVar3;
        do {
          if (*(long *)(lVar3 + 8) != 0) {
            *(byte *)(*(long *)(lVar3 + 8) + 0x7b) = param_2 & 1;
            plVar2 = *(long **)(param_1 + 0x70);
            lVar4 = *plVar2;
          }
          lVar3 = lVar3 + 0x10;
        } while (lVar3 != lVar4 + (ulong)*(uint *)(plVar2 + 1) * 0x10);
      }
    }
  }
  return;
}


