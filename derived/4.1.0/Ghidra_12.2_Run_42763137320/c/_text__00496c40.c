/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00496c40; name: FUN_.text__00496c40
 */


void FUN__text__00496c40(long param_1,long param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  
  if (*(uint *)(param_1 + 0x60) != 0) {
    plVar1 = *(long **)(param_1 + 0x58);
    lVar3 = (ulong)*(uint *)(param_1 + 0x60) << 5;
    do {
      if (*(long *)(*plVar1 + 8) != 0 && *(long *)(*plVar1 + 8) == param_3) {
        uVar2 = FUN__text__00496d20(plVar1,param_2);
        if ((uVar2 & 1) == 0) {
          return;
        }
        plVar6 = (long *)(param_2 + 0x18);
        lVar3 = *(long *)(param_1 + 0x50);
        plVar1 = (long *)0x0;
        if (param_2 != 0) {
          plVar1 = plVar6;
        }
        uVar2 = (**(code **)(*plVar6 + 0x38))(plVar6);
        uVar4 = (ulong)*(uint *)(lVar3 + 0x28);
        if (*(uint *)(lVar3 + 0x28) == 0) {
          return;
        }
        plVar5 = *(long **)(lVar3 + 0x20);
        plVar6 = plVar5;
        do {
          if ((uVar2 >> ((ulong)*(uint *)(*plVar6 + 8) & 0x3f) & 1) != 0) {
            FUN__text__0046c5c4(plVar1);
            plVar5 = *(long **)(lVar3 + 0x20);
            uVar4 = (ulong)*(uint *)(lVar3 + 0x28);
          }
          plVar6 = plVar6 + 1;
        } while (plVar6 != plVar5 + uVar4);
        return;
      }
      plVar1 = plVar1 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  return;
}


