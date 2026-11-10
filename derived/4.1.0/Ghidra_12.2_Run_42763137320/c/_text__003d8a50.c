/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d8a50; name: FUN_.text__003d8a50
 */


undefined8 FUN__text__003d8a50(int *param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  long lVar6;
  
  if (param_2 >> 0x20 != 0) {
    if (*param_1 == 0) {
      *param_1 = 0xe;
    }
    puVar4 = (undefined4 *)FUN__text__003d9014(param_1 + 4);
    *puVar4 = 5;
    return 0;
  }
  uVar5 = (ulong)(uint)param_1[5] - 1;
  if (uVar5 < (uint)param_1[4]) {
    uVar1 = *(uint *)(*(long *)(param_1 + 6) + uVar5 * 8);
  }
  else {
    iVar2 = (int)uVar5 - param_1[4];
    lVar6 = LZCOUNT(iVar2 + 0x10);
    uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 8) + (0x1b - lVar6) * 8 + 8) +
                     (ulong)(uint)(iVar2 - *(int *)((0x1c - lVar6) * 4 + 0x734874)) * 8);
  }
  if (uVar1 < 8) {
                    /* WARNING: Could not recover jumptable at 0x003d8b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)(&UNK__text__003d8b04 + (ulong)*(byte *)((ulong)uVar1 + 0x73aab5) * 4))();
    return uVar3;
  }
  return 0;
}


