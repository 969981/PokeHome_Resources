/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00434b30; name: FUN_.text__00434b30
 */


undefined8
FUN__text__00434b30(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  long *plVar5;
  
  if (0 < *(short *)(param_1 + 0x48)) {
    return 2;
  }
  plVar5 = (long *)(param_1 + (param_2 >> 0x20 & 0xff) * 0x18);
  uVar1 = *(uint *)(plVar5 + 1);
  if (uVar1 != 0) {
    uVar2 = 0;
    uVar4 = (uint)param_2;
    if (uVar1 != 0) {
      uVar2 = uVar4 / uVar1;
    }
    plVar5 = (long *)(*plVar5 + (ulong)(uVar4 - uVar2 * uVar1) * 8);
    while (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0) {
      if (*(uint *)(plVar5 + 1) == uVar4) {
        *(short *)(param_1 + 0x48) = *(short *)(param_1 + 0x48) + 1;
        uVar3 = FUN__text__004371ac(plVar5,param_3,param_4,param_5 & 1);
        *(short *)(param_1 + 0x48) = *(short *)(param_1 + 0x48) + -1;
        return uVar3;
      }
    }
  }
  return 0xf;
}


