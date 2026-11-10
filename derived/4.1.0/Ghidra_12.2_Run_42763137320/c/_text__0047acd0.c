/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047acd0; name: FUN_.text__0047acd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0047acd0(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  uint uVar9;
  long *plVar10;
  long *plVar11;
  float fVar12;
  
  if ((*(ushort *)(param_1 + 0x208) >> 6 & 1) != 0) {
    return;
  }
  lVar1 = param_1 + 0x58;
  uVar9 = *(int *)(param_1 + 0x1e8) + *(int *)(param_1 + 0x60);
  iVar2 = uVar9 - *(uint *)(param_1 + 100);
  if ((*(uint *)(param_1 + 100) <= uVar9 && iVar2 != 0) &&
     (uVar3 = FUN__text__00433280(lVar1,iVar2), (uVar3 & 1) == 0)) {
    return;
  }
  puVar6 = (undefined8 *)(param_1 + 0x1e0);
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x1e8) == 0) {
      return;
    }
    puVar6 = (undefined8 *)*puVar6;
    do {
      FUN__text__00432b54(lVar1,puVar6[2]);
      puVar7 = puVar6 + 3;
      FUN__text__00433670(param_1,*puVar6);
      puVar6 = puVar7;
    } while (puVar7 != (undefined8 *)
                       (*(long *)(param_1 + 0x1e0) + (ulong)*(uint *)(param_1 + 0x1e8) * 0x18));
    return;
  }
  uVar9 = *(uint *)(param_2 + 0x218);
  iVar2 = uVar9 - *(uint *)(param_1 + 0x1ec);
  if (*(uint *)(param_1 + 0x1ec) <= uVar9 && iVar2 != 0) {
    uVar3 = FUN__text__00433280(puVar6,iVar2);
    if ((uVar3 & 1) == 0) {
      return;
    }
    uVar9 = *(uint *)(param_2 + 0x218);
  }
  plVar11 = *(long **)(param_2 + 0x210);
  if (uVar9 == 0) {
    plVar8 = plVar11;
  }
  else {
    if (*(int *)(*plVar11 + 8) != 0x1a) {
      plVar10 = plVar11 + uVar9;
      if (plVar11 == plVar10) {
        return;
      }
      goto LAB__text__0047ae64;
    }
    *(undefined4 *)(param_1 + 400) = 0;
    puVar7 = _DAT_008a45f0;
    lVar4 = *plVar11;
    lVar5 = (ulong)uVar9 * 8;
    plVar10 = plVar11;
    do {
      lVar5 = lVar5 + -8;
      fVar12 = (float)FUN__text__00435a30(*puVar7,lVar4,param_1 + 8);
      *(float *)(param_1 + 400) = *(float *)(param_1 + 400) + fVar12;
      FUN__text__00432b54(puVar6,*plVar10);
      FUN__text__00432b54(lVar1,*plVar10);
      plVar8 = plVar10 + 1;
      FUN__text__00433670(param_1,(ulong)CONCAT14(*(undefined1 *)(*plVar10 + 0xd),
                                                  *(undefined4 *)*plVar10));
      if (lVar5 == 0) {
        return;
      }
      lVar4 = plVar10[1];
      plVar10 = plVar8;
    } while (*(int *)(lVar4 + 8) == 0x1a);
  }
  plVar10 = plVar11 + uVar9;
  plVar11 = plVar8;
  if (plVar8 == plVar10) {
    return;
  }
LAB__text__0047ae64:
  if (*(int *)(*plVar11 + 8) == 0x1b) {
    *(undefined4 *)(param_1 + 0x194) = 0;
    puVar7 = _DAT_008a45f0;
    lVar5 = *plVar11;
    plVar8 = plVar11;
    do {
      fVar12 = (float)FUN__text__00435a30(*puVar7,lVar5,param_1 + 8);
      *(float *)(param_1 + 0x194) = *(float *)(param_1 + 0x194) + fVar12;
      FUN__text__00432b54(puVar6,*plVar8);
      FUN__text__00432b54(lVar1,*plVar8);
      plVar11 = plVar8 + 1;
      FUN__text__00433670(param_1,(ulong)CONCAT14(*(undefined1 *)(*plVar8 + 0xd),
                                                  *(undefined4 *)*plVar8));
      if (plVar11 == plVar10) {
        return;
      }
      lVar5 = *plVar11;
      plVar8 = plVar11;
    } while (*(int *)(lVar5 + 8) == 0x1b);
  }
  if (*(int *)(*plVar11 + 8) == 0x1c) {
    *(undefined4 *)(param_1 + 0x198) = 0;
    puVar7 = _DAT_008a45f0;
    lVar5 = *plVar11;
    do {
      plVar8 = plVar11 + 1;
      fVar12 = (float)FUN__text__00435a30(*puVar7,lVar5,param_1 + 8);
      *(float *)(param_1 + 0x198) = *(float *)(param_1 + 0x198) + fVar12;
      FUN__text__00432b54(puVar6,*plVar11);
      FUN__text__00432b54(lVar1,*plVar11);
      FUN__text__00433670(param_1,(ulong)CONCAT14(*(undefined1 *)(*plVar11 + 0xd),
                                                  *(undefined4 *)*plVar11));
      if (plVar8 == plVar10) {
        return;
      }
      lVar5 = *plVar8;
      plVar11 = plVar8;
    } while (*(int *)(lVar5 + 8) == 0x1c);
  }
  return;
}


