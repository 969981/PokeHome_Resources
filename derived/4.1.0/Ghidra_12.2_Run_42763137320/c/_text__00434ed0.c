/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00434ed0; name: FUN_.text__00434ed0
 */


undefined8 FUN__text__00434ed0(long param_1,ulong param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  
  uVar3 = (uint)param_2;
  plVar4 = (long *)(param_1 + (param_2 >> 0x20 & 0xff) * 0x18);
  uVar1 = *(uint *)(plVar4 + 1);
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar3 / uVar1;
    }
    plVar4 = (long *)(*plVar4 + (ulong)(uVar3 - uVar2 * uVar1) * 8);
    while (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0) {
      if (*(uint *)(plVar4 + 1) == uVar3) {
        *param_3 = *(undefined4 *)(plVar4 + 0xe);
        return 1;
      }
    }
  }
  *param_3 = 0;
  return 0xf;
}


