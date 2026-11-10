/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ce150; name: FUN_.text__006ce150
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006ce150(undefined8 *param_1,undefined8 param_2,long param_3,undefined4 param_4,
                        undefined4 param_5,ushort *param_6)

{
  undefined8 uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  void *pvVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  undefined1 local_a0;
  undefined1 uStack_9f;
  undefined4 uStack_9e;
  undefined2 uStack_9a;
  undefined2 uStack_98;
  undefined2 uStack_96;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  param_1[1] = *(undefined8 *)(param_6 + 4);
  uVar2 = *param_6;
  *(undefined4 *)(param_1 + 2) = 0;
  if (param_3 != 0) {
    uVar3 = *param_6;
    if (uVar3 != 0) {
      if (uVar3 == 1) {
        uVar8 = 0;
        iVar6 = 0;
      }
      else {
        uVar8 = 0;
        iVar6 = 0;
        piVar9 = (int *)(*(long *)(param_6 + 4) + 0x3c);
        do {
          uVar8 = uVar8 + 2;
          if (piVar9[-0xe] != 0) {
            iVar6 = iVar6 + 1;
          }
          if (*piVar9 != 0) {
            iVar6 = iVar6 + 1;
          }
          piVar9 = piVar9 + 0x1c;
        } while (((ulong)uVar3 & 0xfffe) != uVar8);
      }
      if (((uVar3 & 1) != 0) && (*(int *)(*(long *)(param_6 + 4) + uVar8 * 0x38 + 4) != 0)) {
        iVar6 = iVar6 + 1;
      }
      *(int *)(param_1 + 2) = iVar6;
      if (iVar6 != 0) {
        plVar13 = *(long **)(param_1[8] + 0x10);
        *(long **)(param_1[8] + 0x10) = plVar13 + 0x1b;
        if (plVar13 != (long *)0x0) {
          *(undefined4 *)(plVar13 + 2) = 0;
          lVar11 = _DAT_008a68c0;
          plVar13[7] = 0;
          plVar13[3] = 0;
          plVar13[4] = 0;
          plVar13[5] = 0;
          plVar13[6] = 0;
          *plVar13 = lVar11 + 0x10;
          plVar13[1] = -1;
          FUN__text__006f5bcc(plVar13 + 8);
          FUN__text__006f4e0c(plVar13 + 0x11);
          plVar13[0x1a] = -0x100000000;
        }
        *param_1 = plVar13;
        local_70 = 0;
        uStack_68 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_90 = 0;
        uStack_8c = 0;
        uStack_88 = 0;
        local_a0 = 0;
        uStack_9f = 0;
        uStack_9e = 0;
        uStack_9a = 0;
        uStack_98 = 0;
        uStack_96 = 0;
        uStack_94 = 0;
        FUN__text__006ebe40(&local_a0);
        uStack_88 = CONCAT44(uStack_88._4_4_,param_5);
        uStack_94 = 0x201;
        local_90 = 0xa0;
        uStack_9f = 2;
        uStack_9a = 1;
        uStack_98 = 1;
        uStack_8c = param_4;
        uVar8 = (**(code **)(*(long *)*param_1 + 0x30))();
        if ((uVar8 & 1) == 0) {
          FUN__text__006c07c0(*param_1,param_2,param_3,&local_a0,0);
        }
        uVar4 = *(uint *)(param_1 + 2);
        pvVar10 = *(void **)(param_1[8] + 0x10);
        *(void **)(param_1[8] + 0x10) = (void *)((long)pvVar10 + (long)(int)uVar4 * 0x28);
        if ((0 < (int)uVar4) && (pvVar10 != (void *)0x0)) {
          memset(pvVar10,0,(ulong)uVar4 * 0x28);
        }
        param_1[3] = pvVar10;
        uVar4 = *(uint *)(param_1 + 2);
        pvVar10 = *(void **)(param_1[8] + 0x10);
        *(void **)(param_1[8] + 0x10) = (void *)((long)pvVar10 + (long)(int)uVar4 * 0x28);
        if ((0 < (int)uVar4) && (pvVar10 != (void *)0x0)) {
          memset(pvVar10,0,(ulong)uVar4 * 0x28);
        }
        param_1[4] = pvVar10;
        if (uVar2 != 0) {
          lVar11 = 0;
          iVar6 = 0;
          do {
            iVar12 = iVar6;
            if (*(int *)(param_1[1] + lVar11 + 4) != 0) {
              lVar5 = ((long)iVar6 + (long)iVar6 * 4) * 8;
              *(undefined1 *)(param_1[4] + lVar5) = 0;
              *(undefined1 *)(param_1[4] + lVar5 + 1) = 0;
              *(undefined2 *)(param_1[4] + lVar5 + 4) = 1;
              *(undefined2 *)(param_1[4] + lVar5 + 2) = 0;
              lVar7 = param_1[4];
              uVar1 = *(undefined8 *)(param_1[1] + lVar11 + 0x10);
              *(undefined8 *)(lVar7 + lVar5 + 0x18) = *(undefined8 *)(param_1[1] + lVar11 + 8);
              *(undefined8 *)(lVar7 + lVar5 + 0x20) = uVar1;
              lVar5 = param_1[4];
              plVar13 = *(long **)(param_1[8] + 0x10);
              *(long **)(param_1[8] + 0x10) = plVar13 + 7;
              if (plVar13 != (long *)0x0) {
                FUN__text__006cb840(plVar13,lVar5 + (long)iVar6 * 0x28);
              }
              *(undefined4 *)(plVar13 + 6) = 0x3dcccccd;
              (**(code **)(*plVar13 + 0x10))(plVar13);
              iVar12 = iVar6 + 1;
              *(long **)(param_1[3] + (long)iVar6 * 0x28 + 8) = plVar13;
            }
            lVar11 = lVar11 + 0x38;
            iVar6 = iVar12;
          } while ((ulong)uVar2 * 0x38 != lVar11);
        }
      }
    }
  }
  return;
}


