/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051ec50; name: FUN_.text__0051ec50
 */


undefined8 FUN__text__0051ec50(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  
  uVar3 = FUN__text__0050f10c(*(undefined8 *)(param_1 + 8));
  uVar1 = *(uint *)(param_1 + 0x68);
  if (uVar1 == 0) {
    return 2;
  }
  uVar3 = uVar3 & 0xffff;
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = uVar3 / uVar1;
  }
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x60) + (ulong)(uVar3 - uVar2 * uVar1) * 8);
  while( true ) {
    if (puVar7 == (undefined8 *)0x0) {
      return 2;
    }
    if (*(uint *)(puVar7 + 3) == uVar3) break;
    puVar7 = (undefined8 *)puVar7[2];
  }
  plVar5 = (long *)*puVar7;
  uVar3 = *(uint *)(puVar7 + 1);
  plVar4 = plVar5;
  if (uVar3 != 0) {
    lVar6 = (ulong)uVar3 << 3;
    while (*plVar4 != param_3) {
      plVar4 = plVar4 + 1;
      lVar6 = lVar6 + -8;
      if (lVar6 == 0) {
        return 2;
      }
    }
  }
  if (plVar4 == plVar5 + uVar3) {
    return 2;
  }
  uVar3 = uVar3 - 1;
  if (plVar4 < plVar5 + uVar3) {
    memmove(plVar4,plVar4 + 1,(ulong)(uint)((int)(plVar5 + uVar3) - (int)plVar4) & 0xfffffff8);
    uVar3 = *(int *)(puVar7 + 1) - 1;
  }
  *(uint *)(puVar7 + 1) = uVar3;
  return 1;
}


