/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00435810; name: FUN_.text__00435810
 */


void FUN__text__00435810(long param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  long *plVar5;
  
  if ((param_2 & 0xff00000000) == 0x400000000) {
    FUN__text__0046d9b0(DAT_00ae9a90);
    return;
  }
  sVar4 = *(short *)(param_1 + 0x48);
  if (0 < sVar4) {
    return;
  }
  *(short *)(param_1 + 0x48) = sVar4 + 1;
  plVar5 = (long *)(param_1 + (param_2 >> 0x20 & 0xff) * 0x18);
  uVar1 = *(uint *)(plVar5 + 1);
  if (uVar1 != 0) {
    uVar2 = 0;
    uVar3 = (uint)param_2;
    if (uVar1 != 0) {
      uVar2 = uVar3 / uVar1;
    }
    plVar5 = (long *)(*plVar5 + (ulong)(uVar3 - uVar2 * uVar1) * 8);
    do {
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) goto LAB__text__004358a8;
    } while (*(uint *)(plVar5 + 1) != uVar3);
    FUN__text__00437418(plVar5,param_3);
    sVar4 = *(short *)(param_1 + 0x48) + -1;
  }
LAB__text__004358a8:
  *(short *)(param_1 + 0x48) = sVar4;
  return;
}


