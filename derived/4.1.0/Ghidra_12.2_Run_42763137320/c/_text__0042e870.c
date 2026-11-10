/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042e870; name: FUN_.text__0042e870
 */


undefined8 FUN__text__0042e870(long *param_1,int param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  long *plVar5;
  uint *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  ulong uVar11;
  
  plVar5 = (long *)(**(code **)(*param_1 + 0x80))();
  if (plVar5 == (long *)0x0) {
    return 0;
  }
  lVar7 = *plVar5;
  if (lVar7 == 0) {
    return 0;
  }
  while (*(int *)(lVar7 + 0x38) != param_2) {
    lVar7 = *(long *)(lVar7 + 0x10);
    if (lVar7 == 0) {
      return 0;
    }
  }
  bVar4 = *(byte *)(lVar7 + 0x40);
  if (bVar4 == 0) {
    *(undefined4 *)(param_3 + 1) = 0;
    lVar7 = *param_3;
    if (*(int *)((long)param_3 + 0xc) == 0) {
      if (lVar7 == 0) {
        lVar7 = FUN__text__00400f80(0,4);
        if (lVar7 == 0) {
          return 1;
        }
        if ((*param_3 != 0) && (*param_3 != lVar7)) {
          FUN__text__00400fc0(0);
        }
      }
      else {
        lVar7 = FUN__text__00400fa0(0,lVar7,4);
        if (lVar7 == 0) {
          return 1;
        }
      }
      uVar11 = (ulong)*(uint *)(param_3 + 1);
      *param_3 = lVar7;
      *(uint *)(param_3 + 1) = *(uint *)(param_3 + 1) + 1;
      *(undefined4 *)((long)param_3 + 0xc) = 1;
    }
    else {
      *(undefined4 *)(param_3 + 1) = 1;
      if (lVar7 == 0) {
        return 1;
      }
      uVar11 = 0;
    }
    *(undefined4 *)(lVar7 + uVar11 * 4) = 0;
    return 1;
  }
  puVar10 = (uint *)*param_3;
  uVar2 = *(uint *)(param_3 + 1);
  uVar11 = (ulong)uVar2;
  if (uVar2 != 0) {
    lVar7 = uVar11 << 2;
    puVar6 = puVar10;
    do {
      if (*puVar6 == (uint)bVar4) {
        return 0;
      }
      puVar6 = puVar6 + 1;
      lVar7 = lVar7 + -4;
    } while (lVar7 != 0);
  }
  uVar3 = *(uint *)((long)param_3 + 0xc);
  if (uVar2 < uVar3) {
    *(uint *)(param_3 + 1) = uVar2 + 1;
    if (puVar10 != (uint *)0x0) {
LAB__text__0042eaac:
      puVar10[uVar11] = (uint)bVar4;
      return 0;
    }
  }
  else {
    iVar1 = uVar3 + (uVar3 >> 1);
    if (uVar3 == 0) {
      iVar1 = 1;
    }
    uVar3 = iVar1 + uVar3;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)FUN__text__00400f80(0,(ulong)uVar3 << 2);
      if (puVar10 == (uint *)0x0) {
        return 0;
      }
      puVar6 = (uint *)*param_3;
      if ((puVar6 != (uint *)0x0) && (puVar6 != puVar10)) {
        if (uVar2 != 0) {
          if (uVar2 == 1) {
            uVar8 = 0;
          }
          else {
            uVar9 = 0;
            do {
              uVar8 = uVar9 + 2;
              puVar10[uVar9] = *(uint *)(*param_3 + uVar9 * 4);
              (puVar10 + uVar9)[1] = *(uint *)(*param_3 + uVar9 * 4 + 4);
              uVar9 = uVar8;
            } while ((uVar11 & 0xfffffffe) != uVar8);
          }
          if ((uVar2 & 1) != 0) {
            puVar10[uVar8] = *(uint *)(*param_3 + uVar8 * 4);
          }
          puVar6 = (uint *)*param_3;
        }
        FUN__text__00400fc0(0,puVar6);
      }
    }
    else {
      puVar10 = (uint *)FUN__text__00400fa0(0,puVar10);
      if (puVar10 == (uint *)0x0) {
        return 0;
      }
    }
    *param_3 = (long)puVar10;
    *(uint *)((long)param_3 + 0xc) = uVar3;
    if (uVar2 < uVar3) {
      uVar11 = (ulong)*(uint *)(param_3 + 1);
      *(uint *)(param_3 + 1) = *(uint *)(param_3 + 1) + 1;
      goto LAB__text__0042eaac;
    }
  }
  return 0;
}


