/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00192c60; name: FUN_.text__00192c60
 */


undefined8 FUN__text__00192c60(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 == 0) {
    return 0;
  }
  if (uVar1 == 1) {
    uVar3 = 0;
    uVar2 = 0;
  }
  else {
    uVar3 = 0;
    uVar2 = 0;
    plVar4 = (long *)(param_1 + 0x30);
    do {
      uVar3 = uVar3 + 2;
      uVar2 = *(int *)(*plVar4 + 8) + *(int *)(plVar4[-4] + 8) + uVar2;
      plVar4 = plVar4 + 8;
    } while (((ulong)uVar1 & 0xfffffffe) != uVar3);
  }
  if ((uVar1 & 1) != 0) {
    uVar2 = *(int *)(*(long *)(param_1 + uVar3 * 0x20 + 0x10) + 8) + uVar2;
  }
  if (param_2 < uVar2) {
    uVar1 = (param_2 % 0x1e) % 6;
    if (uVar1 < 6) {
      return *(undefined8 *)
              (*(long *)(param_1 + (ulong)(param_2 / 0x1e) * 0x20 + 0x10) + (ulong)uVar1 * 0xa0 +
               (ulong)((param_2 % 0x1e) / 6) * 0x20 + 0x10);
    }
  }
  return 0;
}


