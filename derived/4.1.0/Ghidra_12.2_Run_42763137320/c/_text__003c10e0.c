/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c10e0; name: FUN_.text__003c10e0
 */


void FUN__text__003c10e0(long *param_1,undefined8 *param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  plVar1 = (long *)(**(code **)param_1[10])();
  plVar2 = (long *)FUN__text__003a18b4();
  if (plVar2 != plVar1) {
    do {
      plVar1 = (long *)*plVar1;
    } while (plVar1 != plVar2 && plVar1 != (long *)0x0);
    if (plVar1 == (long *)0x0) goto LAB__text__003c1158;
  }
  uVar3 = (**(code **)(*param_1 + 0x88))(param_1);
  if (((uVar3 & 1) != 0) && (*(long *)*param_2 == 0)) {
    *(long *)*param_2 = (long)param_1;
  }
LAB__text__003c1158:
  if (param_1[0xf] != 0) {
    plVar1 = (long *)(param_1[0xf] + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    (**(code **)(*plVar1 + 0x18))(plVar1);
    lVar4 = param_1[0xf];
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    FUN__text__003c10e0(lVar4,param_2,1);
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (((param_3 & 1) == 0) || (param_1[0xe] == 0)) {
    return;
  }
  plVar1 = (long *)(param_1[0xe] + 0x48);
  (**(code **)(*plVar1 + 0x10))(plVar1);
  (**(code **)(*plVar1 + 0x18))(plVar1);
  lVar4 = param_1[0xe];
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN__text__003c10e0(lVar4,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x003c1224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  return;
}


