/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046a010; name: FUN_.text__0046a010
 */


void FUN__text__0046a010(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  puVar7 = *(undefined8 **)(param_1 + 0x70);
  plVar2 = (long *)*puVar7;
  uVar3 = *(uint *)(puVar7 + 1);
  uVar4 = (ulong)uVar3;
  plVar1 = plVar2;
  if (uVar3 != 0) {
    lVar5 = uVar4 << 4;
    while (*plVar1 != param_2) {
      plVar1 = plVar1 + 2;
      lVar5 = lVar5 + -0x10;
      if (lVar5 == 0) {
        return;
      }
    }
  }
  if (plVar1 == plVar2 + (ulong)uVar3 * 2) {
    return;
  }
  plVar6 = (long *)plVar1[1];
  if (plVar6 != (long *)0x0) {
    if (((short)plVar6[0x12] != 0) || (*(short *)((long)plVar6 + 0x92) != 0))
    goto LAB__text__0046a148;
    if (plVar6[0xd] == 0) {
LAB__text__0046a0b4:
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN__text__00400fc0(0,plVar6);
    }
    else {
      *(undefined4 *)(plVar6 + 0xe) = 0;
      FUN__text__00400fc0(0);
      plVar6[0xd] = 0;
      *(undefined4 *)((long)plVar6 + 0x74) = 0;
      plVar6 = (long *)plVar1[1];
      if (plVar6 != (long *)0x0) goto LAB__text__0046a0b4;
    }
    plVar1[1] = 0;
    puVar7 = *(undefined8 **)(param_1 + 0x70);
    plVar2 = (long *)*puVar7;
    uVar4 = (ulong)*(uint *)(puVar7 + 1);
  }
  plVar1 = plVar2;
  if ((int)uVar4 == 0) {
LAB__text__0046a10c:
    if (plVar1 != plVar2 + uVar4 * 2) {
      uVar3 = (int)uVar4 - 1;
      if (plVar1 < plVar2 + (ulong)uVar3 * 2) {
        memmove(plVar1,plVar1 + 2,
                (ulong)(uint)((int)(plVar2 + (ulong)uVar3 * 2) - (int)plVar1) & 0xfffffff0);
        uVar3 = *(int *)(puVar7 + 1) - 1;
      }
      *(uint *)(puVar7 + 1) = uVar3;
      puVar7 = *(undefined8 **)(param_1 + 0x70);
    }
  }
  else {
    lVar5 = uVar4 << 4;
    do {
      if (*plVar1 == param_2) goto LAB__text__0046a10c;
      plVar1 = plVar1 + 2;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
LAB__text__0046a148:
  if ((((puVar7 == (undefined8 *)0x0) || (0 < *(short *)(puVar7 + 0x18))) ||
      (0 < *(short *)((long)puVar7 + 0xc4))) ||
     (((*(short *)(puVar7 + 0x15) != 0 || (*(short *)((long)puVar7 + 0xaa) != 0)) ||
      ((puVar7[2] != 0 || (*(int *)(puVar7 + 1) != 0)))))) {
    return;
  }
  FUN__text__00463eb0(param_1);
  return;
}


