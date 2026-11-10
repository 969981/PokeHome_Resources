/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0049ef40; name: FUN_.text__0049ef40
 */


undefined8 FUN__text__0049ef40(long param_1,long param_2,undefined4 param_3)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  
  if (*(short *)(param_1 + 0x13a) == 0) {
    return 1;
  }
  plVar7 = *(long **)(param_1 + 0x108);
  lVar8 = *(long *)(param_2 + 0x18);
  *(short *)(param_2 + 0x10) = *(short *)(param_2 + 0x10) + -1;
  uVar1 = *(uint *)(param_2 + 0x20);
  uVar9 = (ulong)uVar1;
  uVar5 = *(uint *)(param_2 + 0x24);
  if (uVar1 < uVar5) {
    *(uint *)(param_2 + 0x20) = uVar1 + 1;
    if (lVar8 == 0) goto LAB__text__0049f164;
  }
  else {
    iVar3 = uVar5 + (uVar5 >> 1);
    if (uVar5 == 0) {
      iVar3 = 1;
    }
    uVar5 = iVar3 + uVar5;
    if (lVar8 == 0) {
      lVar8 = FUN__text__00400f80(0,(ulong)uVar5 << 1);
      if (lVar8 == 0) goto LAB__text__0049f164;
      lVar4 = *(long *)(param_2 + 0x18);
      if ((lVar4 != 0) && (lVar4 != lVar8)) {
        if (uVar1 != 0) {
          if (uVar1 == 1) {
            uVar6 = 0;
          }
          else {
            uVar6 = 0;
            do {
              lVar4 = uVar6 * 2;
              uVar6 = uVar6 + 2;
              *(undefined2 *)(lVar8 + lVar4) = *(undefined2 *)(*(long *)(param_2 + 0x18) + lVar4);
              ((undefined2 *)(lVar8 + lVar4))[1] =
                   *(undefined2 *)(*(long *)(param_2 + 0x18) + lVar4 + 2);
            } while ((uVar9 & 0xfffffffe) != uVar6);
          }
          if ((uVar1 & 1) != 0) {
            *(undefined2 *)(lVar8 + uVar6 * 2) =
                 *(undefined2 *)(*(long *)(param_2 + 0x18) + uVar6 * 2);
          }
          lVar4 = *(long *)(param_2 + 0x18);
        }
        FUN__text__00400fc0(0,lVar4);
      }
    }
    else {
      lVar8 = FUN__text__00400fa0(0,lVar8);
      if (lVar8 == 0) goto LAB__text__0049f164;
    }
    *(long *)(param_2 + 0x18) = lVar8;
    *(uint *)(param_2 + 0x24) = uVar5;
    if (uVar5 <= uVar1) {
LAB__text__0049f164:
      *(undefined2 *)(param_2 + 0x12) = 0;
      return 2;
    }
    uVar9 = (ulong)*(uint *)(param_2 + 0x20);
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) + 1;
  }
  *(short *)(lVar8 + uVar9 * 2) = (short)param_3;
  FUN__text__004cdb00(param_2,param_3);
  iVar3 = (**(code **)(*plVar7 + 0x58))(plVar7,param_3);
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - iVar3;
  iVar3 = (**(code **)(**(long **)(param_1 + 0x108) + 0x20))();
  uVar5 = iVar3 - 1U & 0xffff;
  uVar1 = (uint)*(ushort *)(param_1 + 0x13a);
  if (uVar5 <= *(ushort *)(param_1 + 0x13a)) {
    uVar1 = uVar5;
  }
  if (*(uint *)(param_2 + 0x20) <= uVar1) {
    return 1;
  }
  uVar2 = **(undefined2 **)(param_2 + 0x18);
  FUN__text__004cdb24(param_2,uVar2);
  iVar3 = (**(code **)(*plVar7 + 0x58))(plVar7,uVar2);
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + iVar3;
  uVar5 = *(uint *)(param_2 + 0x20);
  *(short *)(param_2 + 0x10) = *(short *)(param_2 + 0x10) + 1;
  if (1 < uVar5) {
    memmove(*(void **)(param_2 + 0x18),(void *)((long)*(void **)(param_2 + 0x18) + 2),
            (ulong)(uVar5 * 2 - 2));
    uVar5 = *(uint *)(param_2 + 0x20);
  }
  *(uint *)(param_2 + 0x20) = uVar5 - 1;
  return 1;
}


