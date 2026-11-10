/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d4aa8; name: FUN_.text__003d4aa8
 */


void FUN__text__003d4aa8(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                        undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x138);
  lVar2 = *param_3;
  if (lVar2 == 0) {
    lVar1 = *(long *)(lVar4 + 0x10);
    *(undefined8 *)(lVar4 + 8) = param_2;
    *(undefined8 *)(lVar4 + 0x10) = 0;
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    *(undefined8 *)(lVar4 + 8) = param_2;
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar1 = *(long *)(lVar4 + 0x10);
    *(long *)(lVar4 + 0x10) = lVar2;
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  *(undefined8 *)(lVar4 + 0x18) = param_4;
  *(int *)(lVar4 + 0x20) = (int)param_5;
  *(short *)(lVar4 + 0x24) = (short)((ulong)param_5 >> 0x20);
  *(undefined1 *)(lVar4 + 0x28) = 0;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003d4b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  return;
}


