/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00448180; name: FUN_.text__00448180
 */


undefined8
FUN__text__00448180(long param_1,long param_2,undefined8 param_3,int param_4,undefined4 param_5,
                   uint param_6)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (uVar1 == 0) {
    return 2;
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = (uint)param_2 / uVar1;
  }
  plVar3 = (long *)(*(long *)(param_1 + 0x30) + (ulong)((uint)param_2 - uVar2 * uVar1) * 8);
  do {
    plVar3 = (long *)*plVar3;
    if (plVar3 == (long *)0x0) {
      return 2;
    }
  } while (plVar3[1] != param_2);
  if (((param_6 & 1) != 0) && (*(long *)(plVar3[2] + 8) != 0)) {
    FUN__text__0044af20(*(long *)(plVar3[2] + 8),param_3,param_4,param_5);
  }
  if (((param_4 != 0) && (((param_6 & 0xff) >> 1 & 1) != 0)) && (*(long *)(plVar3[2] + 0x20) != 0))
  {
    FUN__text__0047d5a8(*(long *)(plVar3[2] + 0x20),param_3);
  }
  return 1;
}


