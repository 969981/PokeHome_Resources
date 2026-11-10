/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004668c0; name: FUN_.text__004668c0
 */


void FUN__text__004668c0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0xc0) != 0) {
    FUN__text__00466580(param_1,*(long *)(param_1 + 0xc0),param_3,param_3,param_2);
  }
  plVar3 = *(long **)(param_1 + 200);
  if (plVar3 != (long *)0x0) {
    plVar2 = (long *)*plVar3;
    uVar1 = *(uint *)(plVar3 + 1);
    plVar3 = plVar2;
    if (uVar1 == 0) {
LAB__text__00466940:
      if (plVar3 != plVar2 + (ulong)uVar1 * 2) {
        FUN__text__00466580(param_1,plVar3[1]);
        return;
      }
    }
    else {
      lVar4 = (ulong)uVar1 << 4;
      do {
        if (*plVar3 == *param_4) goto LAB__text__00466940;
        plVar3 = plVar3 + 2;
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0);
    }
  }
  return;
}


