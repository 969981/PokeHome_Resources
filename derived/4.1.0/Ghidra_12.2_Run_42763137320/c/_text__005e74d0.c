/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e74d0; name: FUN_.text__005e74d0
 */


void FUN__text__005e74d0(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long local_8;
  
  plVar3 = *(long **)(param_1 + 0xf0);
  plVar1 = *(long **)(param_1 + 0xf8);
  if (plVar3 != plVar1) {
    do {
      if (*plVar3 == param_2) goto LAB__text__005e750c;
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1);
    plVar3 = plVar1;
  }
LAB__text__005e750c:
  local_8 = param_2;
  if (plVar3 == plVar1) {
    if (plVar1 == *(long **)(param_1 + 0x100)) {
      FUN__text__005e5380((long *)(param_1 + 0xf0),&local_8);
      uVar4 = *(ulong *)(param_1 + 0x130);
      uVar2 = (uint)uVar4;
      goto joined_r0x005e7568;
    }
    uVar4 = tpidr_el0;
    uVar4 = uVar4 & 0xffffffffffffe000;
    if (*(long *)(uVar4 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(undefined8 *)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x108);
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
    *plVar1 = param_2;
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
    *(long **)(param_1 + 0xf8) = plVar1 + 1;
  }
  uVar4 = *(ulong *)(param_1 + 0x130);
  uVar2 = (uint)uVar4;
joined_r0x005e7568:
  if ((uVar2 >> 2 & 1) == 0) {
    *(ulong *)(param_1 + 0x130) = uVar4 | 4;
    FUN__text__005e4890(*(undefined8 *)(param_1 + 0x150),param_1);
  }
  return;
}


