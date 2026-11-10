/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d7d00; name: FUN_.text__003d7d00
 */


long FUN__text__003d7d00(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  long lVar5;
  
  if (param_2 < 0) {
    if (*(int *)((long)param_1 + 0x3c) == 0) {
      *(undefined4 *)((long)param_1 + 0x3c) = 0x16;
      return 0;
    }
    return 0;
  }
  puVar4 = (ulong *)(param_1 + 2);
  uVar2 = param_1[3];
  uVar1 = *puVar4 + param_2;
  if (uVar2 < uVar1) {
    lVar5 = uVar2 - *puVar4;
    *puVar4 = 0;
    param_1[3] = 0;
    param_1[1] = param_1[1] + uVar2;
    lVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_2 - lVar5);
    param_1[1] = param_1[1] + lVar3;
    return lVar3 + lVar5;
  }
  *puVar4 = uVar1;
  return param_2;
}


