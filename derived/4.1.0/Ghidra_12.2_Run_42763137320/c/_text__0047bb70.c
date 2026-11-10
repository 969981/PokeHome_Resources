/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047bb70; name: FUN_.text__0047bb70
 */


undefined8 FUN__text__0047bb70(undefined8 *param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  plVar2 = plVar3;
  if (uVar1 != 0) {
    lVar4 = (ulong)uVar1 << 3;
    while (*plVar2 != param_2) {
      plVar2 = plVar2 + 1;
      lVar4 = lVar4 + -8;
      if (lVar4 == 0) {
        return 0x24;
      }
    }
  }
  plVar3 = plVar3 + uVar1;
  if (plVar2 == plVar3) {
    return 0x24;
  }
  lVar4 = *plVar2;
  if (plVar2 < plVar3 + -1) {
    *plVar2 = plVar3[-1];
    uVar1 = *(uint *)(param_1 + 1);
  }
  *(uint *)(param_1 + 1) = uVar1 - 1;
  FUN__text__0047c508(lVar4);
  FUN__text__0047c4a8(lVar4);
  FUN__text__00400fc0(0,lVar4);
  return 1;
}


