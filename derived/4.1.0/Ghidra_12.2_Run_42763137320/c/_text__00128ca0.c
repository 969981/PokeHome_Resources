/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00128ca0; name: FUN_.text__00128ca0
 */


void FUN__text__00128ca0(long param_1,uint param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  FUN__text__0012bca0(param_1 + 0x110);
  if ((param_3 & 1) != 0) {
    plVar2 = (long *)(**(code **)(**(long **)(param_1 + 0x610) + 0x10))();
    plVar1 = (long *)plVar2[1];
    for (plVar2 = (long *)*plVar2; plVar2 != plVar1; plVar2 = plVar2 + 1) {
      while (lVar5 = *plVar2, lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0x48);
        (**(code **)(*plVar6 + 0x10))(plVar6);
        puVar7 = *(undefined8 **)(lVar5 + 0x60);
        plVar3 = (long *)(**(code **)*puVar7)(puVar7);
        plVar4 = (long *)FUN__text__001280e4();
        if (plVar4 != plVar3) {
          do {
            plVar3 = (long *)*plVar3;
          } while (plVar3 != plVar4 && plVar3 != (long *)0x0);
        }
        FUN__text__00128ca0(puVar7 + -10,param_2 & 1,1);
        (**(code **)(*plVar6 + 0x18))(plVar6);
        plVar2 = plVar2 + 1;
        if (plVar2 == plVar1) {
          return;
        }
      }
      FUN__text__00128ca0(0,param_2 & 1,1);
    }
  }
  return;
}


