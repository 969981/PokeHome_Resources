/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00475880; name: FUN_.text__00475880
 */


void FUN__text__00475880(long param_1)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar5;
  long *plVar4;
  uint local_24;
  
  puVar1 = (uint *)(param_1 + 0x313);
  if ((*puVar1 >> 0x1a & 1) != 0) {
    uVar2 = *puVar1 & 0xfbffffff;
    *puVar1 = uVar2;
    if (*(int *)(param_1 + 0x378) != 0) {
      plVar4 = *(long **)(param_1 + 0x370);
      do {
        plVar5 = plVar4 + 1;
        *(short *)(*plVar4 + 0x2a) = *(short *)(*plVar4 + 0x2a) + -1;
        plVar4 = plVar5;
      } while (plVar5 != (long *)(*(long *)(param_1 + 0x370) + (ulong)*(uint *)(param_1 + 0x378) * 8
                                 ));
      uVar2 = *puVar1;
    }
    if ((uVar2 >> 7 & 1) == 0) {
      *puVar1 = uVar2 | 0x80;
      uVar2 = FUN__text__00495c50(*(undefined8 *)(param_1 + 0x1e8),&local_24);
      if (uVar2 == 3) {
        uVar3 = (**(code **)(**(long **)(param_1 + 0x1e8) + 600))
                          (*(long **)(param_1 + 0x1e8),*(undefined8 *)(param_1 + 0x298));
        uVar2 = 1;
        if ((uVar3 & 1) != 0) {
          uVar2 = 2;
        }
      }
      *puVar1 = local_24 & 7 | (uVar2 & 0xf) << 3 | *puVar1 & 0xffffff80;
    }
    else {
      local_24 = uVar2 & 7;
      uVar2 = uVar2 >> 3 & 0xf;
    }
    if ((uVar2 == 2) && (local_24 != 1)) {
      FUN__text__00471e24();
    }
    FUN__text__00471df4();
  }
  return;
}


