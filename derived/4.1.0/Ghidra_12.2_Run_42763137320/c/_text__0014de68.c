/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0014de68; name: FUN_.text__0014de68
 */


void FUN__text__0014de68(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 600);
  lVar1 = *param_2;
  if (lVar1 == 0) {
    lVar4 = *(long *)(lVar3 + 0x10);
    lVar3 = *(long *)(lVar4 + 0xb0);
    *(undefined8 *)(lVar4 + 0xb0) = 0;
  }
  else {
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar4 = *(long *)(lVar3 + 0x10);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar3 = *(long *)(lVar4 + 0xb0);
    *(long *)(lVar4 + 0xb0) = lVar1;
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  if (lVar1 == 0) {
    return;
  }
  plVar2 = (long *)(lVar1 + 0x48);
  (**(code **)(*plVar2 + 0x18))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x0014df00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2);
  return;
}


