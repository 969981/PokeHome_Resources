/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d91a4; name: FUN_.text__003d91a4
 */


undefined8 FUN__text__003d91a4(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  uVar5 = (ulong)(uint)param_1[5] - 1;
  if (uVar5 < (uint)param_1[4]) {
    plVar7 = (long *)(param_1 + 6);
  }
  else {
    iVar4 = (int)uVar5 - param_1[4];
    lVar6 = LZCOUNT(iVar4 + 0x10);
    uVar5 = (ulong)(uint)(iVar4 - *(int *)((0x1c - lVar6) * 4 + 0x734874));
    plVar7 = (long *)(*(long *)(param_1 + 8) + (0x1b - lVar6) * 8 + 8);
  }
  puVar1 = (uint *)(*plVar7 + uVar5 * 8);
  uVar2 = *puVar1;
  if (uVar2 < 7) {
                    /* WARNING: Could not emulate address calculation at 0x003d9224 */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)(&UNK__text__003d9230 + (ulong)*(byte *)((ulong)uVar2 + 0x73aabd) * 4))();
    return uVar3;
  }
  if (*param_1 != 0) {
    return 0;
  }
  iVar4 = 0xb;
  if (uVar2 != 1) {
    iVar4 = 1;
  }
  *param_1 = iVar4;
  *puVar1 = 5;
  return 0;
}


