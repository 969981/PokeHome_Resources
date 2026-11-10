/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004fa8e0; name: FUN_.text__004fa8e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004fa8e0(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  long local_b0;
  uint local_a8;
  uint uStack_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined1 local_88;
  undefined7 uStack_87;
  undefined1 local_80;
  undefined7 uStack_7f;
  undefined8 local_78;
  long local_70;
  long *local_68;
  
  uVar6 = FUN__text__004f5e5c();
  if ((int)uVar6 == 1) {
    plVar10 = (long *)(param_1 + 0x80);
    plVar9 = (long *)*plVar10;
    if (plVar9 != (long *)0x0) {
      if (*(uint *)(param_1 + 0x88) != 0) {
        lVar16 = (ulong)*(uint *)(param_1 + 0x88) * 0x48;
        do {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          lVar16 = lVar16 + -0x48;
          plVar9 = plVar9 + 9;
        } while (lVar16 != 0);
        plVar9 = (long *)*plVar10;
      }
      *(undefined4 *)(param_1 + 0x88) = 0;
      FUN__text__00400fc0(0,plVar9);
      *(undefined8 *)(param_1 + 0x80) = 0;
      *(undefined4 *)(param_1 + 0x8c) = 0;
    }
    uVar2 = *(uint *)(*(long *)(param_1 + 0x78) + 0x150);
    if (uVar2 != 0) {
      if ((*(uint *)(param_1 + 0x8c) < uVar2) &&
         (uVar7 = FUN__text__004fd870(plVar10,uVar2 - *(uint *)(param_1 + 0x8c)), (uVar7 & 1) == 0))
      {
        return 0x34;
      }
      puVar3 = _DAT_008a45f0;
      lVar18 = 0;
      uVar7 = 0;
      lVar16 = _DAT_008a50c0 + 0x10;
      do {
        local_a0 = 0;
        local_98 = 0;
        local_90 = 0;
        local_88 = 0xff;
        local_80 = 0xff;
        uStack_a4 = 0xffffffff;
        uVar17 = *(uint *)(param_1 + 0x88);
        uVar1 = *(uint *)(param_1 + 0x8c);
        local_78 = 0;
        local_70 = 0;
        if (uVar17 < uVar1) {
LAB__text__004faa2c:
          *(uint *)(param_1 + 0x88) = uVar17 + 1;
          if (*(long *)(param_1 + 0x80) != 0) {
            puVar11 = (undefined8 *)(*(long *)(param_1 + 0x80) + (ulong)uVar17 * 0x48);
            puVar11[2] = 0;
            *(undefined4 *)(puVar11 + 3) = 0;
            *(undefined4 *)(puVar11 + 4) = 0;
            *(undefined1 *)(puVar11 + 5) = 0xff;
            *(undefined1 *)(puVar11 + 6) = 0xff;
            puVar11[7] = 0;
            puVar11[8] = 0;
            *puVar11 = 0x891510;
            *(undefined4 *)((long)puVar11 + 0xc) = 0xffffffff;
            puVar11[3] = CONCAT44(uStack_94,local_98);
            puVar11[4] = CONCAT44(uStack_8c,local_90);
            puVar11[1] = CONCAT44(uStack_a4,local_a8);
            puVar11[2] = local_a0;
            puVar11[7] = local_78;
            puVar11[8] = local_70;
            puVar11[5] = CONCAT71(uStack_87,local_88);
            puVar11[6] = CONCAT71(uStack_7f,local_80);
          }
        }
        else {
          iVar5 = uVar1 + (uVar1 >> 1);
          if (uVar1 == 0) {
            iVar5 = 1;
          }
          local_b0 = lVar16;
          uVar8 = FUN__text__004fd870(plVar10,iVar5);
          if (((uVar8 & 1) != 0) && (uVar17 < *(uint *)(param_1 + 0x8c))) {
            uVar17 = *(uint *)(param_1 + 0x88);
            goto LAB__text__004faa2c;
          }
        }
        local_b0 = 0x891510;
        if ((local_70 != 0) && (lVar13 = *(long *)(local_70 + 0x78), lVar13 != 0)) {
          if ((*(long *)(lVar13 + 0x178) == 0) || (*(long *)(lVar13 + 0x170) == 0)) {
            uVar8 = 0;
            uVar14 = 0x800000000;
          }
          else {
            uVar8 = (ulong)*(uint *)(*(long *)(lVar13 + 0x170) + (ulong)uStack_a4 * 4);
            uVar14 = (ulong)*(byte *)(*(long *)(lVar13 + 0x178) + (ulong)uStack_a4) << 0x20;
          }
          FUN__text__00434930(*puVar3,uVar8 | uVar14,&local_b0);
        }
        lVar13 = *(long *)(param_1 + 0x80) + lVar18;
        *(undefined4 *)(lVar13 + 8) = 0;
        *(int *)(lVar13 + 0xc) = (int)uVar7;
        *(long *)(lVar13 + 0x40) = param_1;
        uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x30);
        uVar4 = *(undefined4 *)(*(long *)(param_1 + 0x60) + 0x2c);
        *(undefined4 *)(lVar13 + 0x20) = 0;
        *(undefined1 *)(lVar13 + 0x28) = 0xff;
        *(undefined1 *)(lVar13 + 0x30) = 0xff;
        *(undefined8 *)(lVar13 + 0x38) = 0;
        *(undefined8 *)(lVar13 + 0x10) = uVar6;
        *(undefined4 *)(lVar13 + 0x18) = uVar4;
        lVar12 = *(long *)(*(long *)(param_1 + 0x78) + 0x178);
        if ((lVar12 == 0) || (lVar15 = *(long *)(*(long *)(param_1 + 0x78) + 0x170), lVar15 == 0)) {
          uVar8 = 0;
          uVar14 = 0x800000000;
        }
        else {
          uVar8 = (ulong)*(uint *)(lVar15 + uVar7 * 4);
          uVar14 = (ulong)*(byte *)(lVar12 + uVar7) << 0x20;
        }
        uVar6 = FUN__text__004345d0(*puVar3,uVar8 | uVar14,lVar13);
        if ((int)uVar6 != 1) {
          return uVar6;
        }
        uVar4 = FUN__text__00435b28(*puVar3,(undefined8 *)(lVar13 + 0x10),uVar8 | uVar14);
        uVar7 = uVar7 + 1;
        lVar18 = lVar18 + 0x48;
        *(undefined4 *)(lVar13 + 8) = uVar4;
      } while (uVar7 < uVar2);
    }
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | 2;
    if (*(long *)(param_1 + 0x10) == 0) {
      iVar5 = FUN__text__004facf0(param_1,1);
      if (iVar5 == 1) {
        local_b0 = 0;
        local_a8 = local_a8 & 0xffffff00;
        *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) & 0xfe;
        if ((*(byte *)(param_1 + 0x5a) & 0xe) == 0) {
          uVar4 = FUN__text__004fb000(param_1);
          local_68 = (long *)FUN__text__004fb0ac(param_1,uVar4);
          if ((local_68 != (long *)0x0) &&
             (FUN__text__004fb1a0(param_1,uVar4,&local_b0,&local_68), local_68 != (long *)0x0)) {
            (**(code **)(*local_68 + 0x80))();
          }
        }
        uVar6 = 1;
      }
      else {
        uVar6 = 2;
      }
    }
    else {
      uVar6 = FUN__text__004facf0(param_1,0);
    }
  }
  return uVar6;
}


