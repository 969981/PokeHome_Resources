/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003e0354; name: FUN_.text__003e0354
 */


long FUN__text__003e0354(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = (long *)*param_1;
  if (param_2 < 0) {
    if (*(int *)((long)plVar5 + 0x3c) == 0) {
      *(undefined4 *)((long)plVar5 + 0x3c) = 0x16;
      return 0;
    }
    return 0;
  }
  puVar4 = (ulong *)(plVar5 + 2);
  uVar2 = plVar5[3];
  uVar1 = *puVar4 + param_2;
  if (uVar2 < uVar1) {
    lVar6 = uVar2 - *puVar4;
    *puVar4 = 0;
    plVar5[3] = 0;
    plVar5[1] = plVar5[1] + uVar2;
    lVar3 = (**(code **)(*plVar5 + 0x20))(plVar5,param_2 - lVar6);
    plVar5[1] = plVar5[1] + lVar3;
    return lVar3 + lVar6;
  }
  *puVar4 = uVar1;
  return param_2;
}


