/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00115650; name: FUN_.text__00115650
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00115650(long *param_1,long param_2,long *param_3,int param_4)

{
  long *plVar1;
  long lVar2;
  int *piVar3;
  ulong uVar4;
  
  if (*(uint *)(param_2 + 0x2230) != 0) {
    uVar4 = 0;
    piVar3 = (int *)(param_2 + 0x20);
    do {
      plVar1 = _DAT_0089f5c8;
      if (*(long *)(piVar3 + -4) != 0) {
        plVar1 = (long *)(*(long *)(piVar3 + -4) + 0x58);
      }
      if ((*plVar1 == *param_3) && (*piVar3 == param_4)) {
        if ((uint)uVar4 < 0x16c) {
          lVar2 = *(long *)(piVar3 + -2);
          *param_1 = lVar2;
          if (lVar2 == 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x001156c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
          return;
        }
        break;
      }
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 6;
    } while (*(uint *)(param_2 + 0x2230) != uVar4);
  }
  *param_1 = 0;
  return;
}


