/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00213830; name: FUN_.text__00213830
 */


undefined8 FUN__text__00213830(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar4 == (undefined8 *)0x0)) {
LAB__text__00213c00:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  plVar1 = (long *)(**(code **)*puVar4)(puVar4);
  plVar2 = (long *)FUN__text__0020a9bc();
  if (plVar2 != plVar1) {
    do {
      plVar1 = (long *)*plVar1;
    } while (plVar1 != plVar2 && plVar1 != (long *)0x0);
    if (plVar1 == (long *)0x0) goto LAB__text__00213c00;
  }
  if (*(uint *)(param_1 + 0xa0) < 7) {
                    /* WARNING: Could not emulate address calculation at 0x002138ac */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)(&UNK__text__002138b8 +
                      (ulong)*(byte *)((ulong)*(uint *)(param_1 + 0xa0) + 0x729015) * 4))();
    return uVar3;
  }
  return 0;
}


