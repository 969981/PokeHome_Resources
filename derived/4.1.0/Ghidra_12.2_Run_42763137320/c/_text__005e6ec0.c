/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e6ec0; name: FUN_.text__005e6ec0
 */


void FUN__text__005e6ec0(long param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long local_28;
  long local_8;
  
  plVar4 = *(long **)(param_1 + 0x60);
  plVar3 = *(long **)(param_1 + 0x68);
  if (plVar4 != plVar3) {
    do {
      if (*plVar4 == param_2) goto LAB__text__005e6f00;
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar3);
    plVar4 = plVar3;
  }
LAB__text__005e6f00:
  local_8 = param_2;
  if (plVar4 == plVar3) {
    if (plVar3 != *(long **)(param_1 + 0x70)) {
      uVar2 = tpidr_el0;
      uVar2 = uVar2 & 0xffffffffffffe000;
      if (*(long *)(uVar2 + 0x98) == 0x10) goto LAB__text__005e7044;
      *(undefined8 *)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x78);
      *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + 1;
      *plVar3 = param_2;
      *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + -1;
      *(long **)(param_1 + 0x68) = plVar3 + 1;
      goto LAB__text__005e6f58;
    }
    FUN__text__005e5380((long *)(param_1 + 0x60),&local_8);
    plVar3 = *(long **)(local_8 + 0x98);
    puVar1 = (undefined8 *)(local_8 + 0x90);
    plVar4 = (long *)*puVar1;
    param_2 = local_8;
    if (plVar4 != plVar3) goto LAB__text__005e6f70;
  }
  else {
LAB__text__005e6f58:
    plVar3 = *(long **)(param_2 + 0x98);
    puVar1 = (undefined8 *)(param_2 + 0x90);
    plVar4 = (long *)*puVar1;
    if (plVar4 != plVar3) {
LAB__text__005e6f70:
      do {
        if (*plVar4 == param_1) goto LAB__text__005e6f8c;
        plVar4 = plVar4 + 1;
      } while (plVar4 != plVar3);
      plVar4 = plVar3;
    }
  }
LAB__text__005e6f8c:
  if (plVar4 != plVar3) {
    return;
  }
  local_28 = param_1;
  if (*(long **)(param_2 + 0xa0) <= plVar3) {
    FUN__text__005e8060(puVar1,&local_28);
    return;
  }
  uVar2 = tpidr_el0;
  uVar2 = uVar2 & 0xffffffffffffe000;
  if (*(long *)(uVar2 + 0x98) != 0x10) {
    *(undefined8 *)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_2 + 0xa8);
    *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + 1;
    *plVar3 = param_1;
    *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + -1;
    *(long **)(param_2 + 0x98) = plVar3 + 1;
    return;
  }
LAB__text__005e7044:
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10();
}


