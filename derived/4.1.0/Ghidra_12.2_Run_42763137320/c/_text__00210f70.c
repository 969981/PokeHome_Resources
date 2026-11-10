/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00210f70; name: FUN_.text__00210f70
 */


uint FUN__text__00210f70(long param_1,undefined4 param_2)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  char *pcVar4;
  undefined8 *puVar5;
  uint uVar6;
  
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar5 == (undefined8 *)0x0)) {
LAB__text__00211050:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  plVar2 = (long *)(**(code **)*puVar5)(puVar5);
  plVar3 = (long *)FUN__text__0020a9bc();
  if (plVar3 != plVar2) {
    do {
      plVar2 = (long *)*plVar2;
    } while (plVar2 != plVar3 && plVar2 != (long *)0x0);
    if (plVar2 == (long *)0x0) goto LAB__text__00211050;
  }
  bVar1 = FUN__text__0020c9f0(param_2);
  if (*(int *)((long)puVar5 + 0x24) != 0) {
    uVar6 = 0;
    do {
      pcVar4 = (char *)FUN__text__0020beec(puVar5 + -10,*(undefined4 *)((long)puVar5 + 0x6c),uVar6);
      if ((*pcVar4 != '\0') && ((bVar1 & pcVar4[0x11]) != 0)) {
        return uVar6;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)((long)puVar5 + 0x24));
  }
  return 0;
}


