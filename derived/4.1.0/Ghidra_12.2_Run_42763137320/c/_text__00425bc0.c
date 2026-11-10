/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00425bc0; name: FUN_.text__00425bc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00425bc0(int param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  
  puVar2 = _DAT_008a47c0;
  *param_2 = 0;
  piVar4 = (int *)*puVar2;
  uVar1 = *(uint *)(puVar2 + 1);
  piVar5 = piVar4;
  if (uVar1 != 0) {
    lVar6 = (ulong)uVar1 << 5;
    while (*piVar5 != param_1) {
      piVar5 = piVar5 + 8;
      lVar6 = lVar6 + -0x20;
      if (lVar6 == 0) {
        return 0x58;
      }
    }
  }
  if (piVar5 == piVar4 + (ulong)uVar1 * 8) {
    return 0x58;
  }
  plVar3 = (long *)(**(code **)(piVar5 + 2))(_DAT_008a47f0);
  *param_2 = (long)plVar3;
  if (plVar3 == (long *)0x0) {
    return 2;
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,param_3);
  return 1;
}


