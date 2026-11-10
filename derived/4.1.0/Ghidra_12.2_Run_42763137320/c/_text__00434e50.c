/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00434e50; name: FUN_.text__00434e50
 */


undefined8 FUN__text__00434e50(undefined4 param_1,long param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined4 local_14;
  
  uVar5 = param_3 >> 0x20 & 0xff;
  plVar4 = (long *)(param_2 + uVar5 * 0x18);
  uVar1 = *(uint *)(plVar4 + 1);
  if (uVar1 == 0) {
LAB__text__00434e9c:
    plVar4 = (long *)FUN__text__00434fac(param_2,param_3 & 0xffffff0000000000 |
                                                 param_3 & 0xffffffff | uVar5 << 0x20);
    if (plVar4 == (long *)0x0) {
      return 0;
    }
  }
  else {
    uVar2 = 0;
    uVar3 = (uint)param_3;
    if (uVar1 != 0) {
      uVar2 = uVar3 / uVar1;
    }
    plVar4 = (long *)(*plVar4 + (ulong)(uVar3 - uVar2 * uVar1) * 8);
    do {
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) goto LAB__text__00434e9c;
    } while (*(uint *)(plVar4 + 1) != uVar3);
  }
  local_14 = param_1;
  FUN__text__00436f70(plVar4,&local_14);
  return 1;
}


