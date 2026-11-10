/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00447940; name: FUN_.text__00447940
 */


void FUN__text__00447940(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  uVar2 = *(uint *)(param_1 + 0x38);
  if (uVar2 != 0) {
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = (uint)param_2 / uVar2;
    }
    plVar1 = (long *)(*(long *)(param_1 + 0x30) + (ulong)((uint)param_2 - uVar4 * uVar2) * 8);
    plVar5 = (long *)*plVar1;
    if (plVar5 != (long *)0x0) {
      if (plVar5[1] == param_2) {
        plVar6 = (long *)0x0;
      }
      else {
        do {
          plVar6 = plVar5;
          plVar5 = (long *)*plVar6;
          if (plVar5 == (long *)0x0) {
            return;
          }
        } while (plVar5[1] != param_2);
      }
      puVar7 = (undefined8 *)plVar5[2];
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6;
      }
      *plVar1 = *plVar5;
      FUN__text__00400fc0(0);
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
      *(undefined1 *)((long)puVar7 + 100) = 0;
      iVar3 = *(int *)(puVar7 + 0xc);
      *(int *)(puVar7 + 0xc) = iVar3 + -1;
      if ((iVar3 + -1 == 0) && (FUN__text__004473f0(puVar7), *(int *)(puVar7 + 0xc) == 0)) {
        (**(code **)*puVar7)(puVar7);
        FUN__text__00400fc0(4,puVar7);
        return;
      }
    }
  }
  return;
}


