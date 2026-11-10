/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001ec5e0; name: FUN_.text__001ec5e0
 */


void FUN__text__001ec5e0(long param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  long local_138;
  long local_130;
  long local_128;
  undefined1 *local_120;
  code *local_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  long local_100 [12];
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  int local_80;
  undefined4 uStack_7c;
  int local_78;
  undefined2 local_74;
  undefined1 local_72;
  
  if (*(long *)(param_1 + 0x68) == 0) {
LAB__text__001ec964:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  if (puVar11 == (undefined8 *)0x0) goto LAB__text__001ec964;
  plVar5 = (long *)(**(code **)*puVar11)(puVar11);
  plVar6 = (long *)FUN__text__0018d6a0();
  if (plVar6 != plVar5) {
    do {
      plVar5 = (long *)*plVar5;
    } while (plVar5 != plVar6 && plVar5 != (long *)0x0);
    if (plVar5 == (long *)0x0) goto LAB__text__001ec964;
  }
  local_72 = 1;
  local_120 = &LAB__text__001ece20;
  local_118 = FUN__text__001ece58;
  local_110 = &LAB__text__001ece5c;
  puStack_108 = &LAB__text__001ece68;
  local_a0 = puVar11[0x16];
  lVar9 = *(long *)(param_1 + 0x78);
  local_90 = 0;
  uStack_88 = 0;
  local_74 = 0;
  local_100[0] = param_1;
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  bVar3 = *(int *)(puVar11 + 0xb) == 0;
  local_90 = 0x7269a0;
  if (!bVar3) {
    local_90 = 0x726978;
  }
  local_80 = 5;
  if (bVar3) {
    local_80 = 6;
  }
  uVar8 = 0x72695c;
  if (!bVar3) {
    uVar8 = 0x726948;
  }
  local_78 = local_80 + -1;
  *(undefined8 *)(param_1 + 0x88) = uVar8;
  *(int *)(param_1 + 0x90) = local_80;
  uStack_7c = 0;
  puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  local_98 = lVar9;
  plVar5 = (long *)(**(code **)*puVar10)(puVar10);
  plVar6 = (long *)FUN__text__0012615c();
  if (plVar6 != plVar5) {
    do {
      plVar5 = (long *)*plVar5;
    } while (plVar5 != plVar6 && plVar5 != (long *)0x0);
  }
  FUN__text__00133f10(0x713078,puVar10[0xaf],&local_120);
  lVar9 = puVar11[4];
  if (lVar9 == 0) goto LAB__text__001ec964;
  lVar12 = puVar11[0x48];
  local_128 = lVar12;
  if (lVar12 == 0) goto LAB__text__001ec964;
  plVar5 = (long *)(lVar12 + 0x48);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  local_130 = lVar12;
  (**(code **)(*plVar5 + 0x10))(plVar5);
  FUN__text__001916b0(lVar9,&local_130,(long)puVar11 + 0x54,0);
  if (local_130 != 0) {
    (**(code **)(*(long *)(local_130 + 0x48) + 0x18))();
    local_130 = 0;
  }
  uVar7 = FUN__text__00306a08(lVar12,1);
  if (*(int *)(param_1 + 0x90) == 0) {
    *(undefined4 *)(param_1 + 0x80) = 1;
  }
  else {
    uVar13 = 0;
    do {
      iVar1 = *(int *)(*(long *)(param_1 + 0x88) + uVar13 * 4);
      if (iVar1 == 4) {
        uVar4 = FUN__text__00307ba4(local_128);
        uVar4 = uVar4 ^ 1;
      }
      else if (iVar1 == 3) {
        if ((uVar7 & 1) == 0) {
          uVar4 = FUN__text__00193f64(lVar9,&local_128);
        }
        else {
LAB__text__001ec844:
          uVar4 = 0;
        }
      }
      else if (iVar1 == 2) {
        if ((uVar7 & 1) != 0) goto LAB__text__001ec844;
        uVar4 = FUN__text__003083f0(local_128);
      }
      else {
        uVar4 = 1;
      }
      local_150 = 0x60dd9a51c30b7a73;
      uStack_148 = 0x713078;
      puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
      local_140 = 0xb;
      local_138 = 0;
      plVar5 = (long *)(**(code **)*puVar11)(puVar11);
      plVar6 = (long *)FUN__text__0012615c();
      if (plVar6 != plVar5) {
        do {
          plVar5 = (long *)*plVar5;
        } while (plVar5 != plVar6 && plVar5 != (long *)0x0);
      }
      uVar8 = FUN__text__00134174(&local_150,puVar11[0xaf],uVar13 & 0xffffffff);
      FUN__text__003a14c4(uVar8,uVar4 & 1);
      if (local_138 != 0) {
        (**(code **)(*(long *)(local_138 + 0x48) + 0x18))();
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(uint *)(param_1 + 0x90));
    *(undefined4 *)(param_1 + 0x80) = 1;
    lVar12 = local_128;
    if (local_128 == 0) goto joined_r0x001ec95c;
  }
  (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
joined_r0x001ec95c:
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
    local_98 = 0;
  }
  pcVar2 = local_118;
  if (local_118 != (code *)0x0) {
    local_110 = (undefined1 *)0x0;
    puStack_108 = (undefined1 *)0x0;
    local_120 = (undefined1 *)0x0;
    local_118 = (code *)0x0;
    (*pcVar2)(local_100);
  }
  return;
}


