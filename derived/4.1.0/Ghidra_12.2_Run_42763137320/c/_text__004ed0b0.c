/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ed0b0; name: FUN_.text__004ed0b0
 */


void FUN__text__004ed0b0(long param_1,long param_2,int param_3,int param_4)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  if (param_4 <= param_3) {
    param_3 = param_4;
  }
  plVar4 = *(long **)(param_1 + 0x70);
  if (plVar4 != (long *)0x0) {
    plVar6 = (long *)0x0;
    do {
      while (plVar5 = plVar4, iVar2 = (**(code **)(*plVar5 + 0x10))(plVar5), iVar2 == 1) {
        if ((((int)plVar5[2] < param_3) ||
            (*(long *)(plVar5[3] + 0x80) != *(long *)(param_2 + 0x50))) ||
           (uVar3 = FUN__text__004edb20(param_2,*(undefined4 *)(plVar5[3] + 0x88)), (uVar3 & 1) == 0
           )) goto LAB__text__004ed1c4;
LAB__text__004ed170:
        plVar4 = (long *)plVar5[1];
        plVar1 = (long *)(param_1 + 0x70);
        if (*(long **)(param_1 + 0x70) != plVar5) {
          plVar1 = plVar6 + 1;
        }
        *plVar1 = (long)plVar4;
        if (*(long **)(param_1 + 0x68) == plVar5) {
          *(long **)(param_1 + 0x68) = plVar6;
        }
        (**(code **)*plVar5)(plVar5);
        FUN__text__00400fc0(0,plVar5);
        if (plVar4 == (long *)0x0) {
          return;
        }
      }
      if ((((iVar2 == 0) && (param_3 <= (int)plVar5[2])) && (plVar5[3] == *(long *)(param_2 + 0x50))
          ) && (uVar3 = FUN__text__004edb20(param_2,(int)plVar5[4]), (uVar3 & 1) == 0))
      goto LAB__text__004ed170;
LAB__text__004ed1c4:
      plVar4 = (long *)plVar5[1];
      plVar6 = plVar5;
    } while ((long *)plVar5[1] != (long *)0x0);
  }
  return;
}


