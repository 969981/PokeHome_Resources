/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00434f30; name: FUN_.text__00434f30
 */


undefined8 FUN__text__00434f30(long param_1,ulong param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar5 = param_2 >> 0x20 & 0xff;
  plVar4 = (long *)(param_1 + uVar5 * 0x18);
  uVar1 = *(uint *)(plVar4 + 1);
  if (uVar1 == 0) {
LAB__text__00434f7c:
    plVar4 = (long *)FUN__text__00434fac(param_1,param_2 & 0xffffff0000000000 |
                                                 param_2 & 0xffffffff | uVar5 << 0x20);
    if (plVar4 == (long *)0x0) {
      return 0;
    }
  }
  else {
    uVar2 = 0;
    uVar3 = (uint)param_2;
    if (uVar1 != 0) {
      uVar2 = uVar3 / uVar1;
    }
    plVar4 = (long *)(*plVar4 + (ulong)(uVar3 - uVar2 * uVar1) * 8);
    do {
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) goto LAB__text__00434f7c;
    } while (*(uint *)(plVar4 + 1) != uVar3);
  }
  uVar6 = *param_3;
  *(undefined4 *)((long)plVar4 + 0x18) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)((long)plVar4 + 0x10) = uVar6;
  return 1;
}


