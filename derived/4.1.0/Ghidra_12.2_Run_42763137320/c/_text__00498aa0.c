/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00498aa0; name: FUN_.text__00498aa0
 */


undefined8 FUN__text__00498aa0(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  undefined4 uVar13;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x28) + 8) = 0;
  }
  uVar12 = *(uint *)(param_1 + 0x18);
  if (3 < uVar12 || uVar12 == 1) {
    if (*(long *)(param_1 + 0x28) == 0) {
      puVar5 = (undefined8 *)FUN__text__00400f80(2,0x10);
      if (puVar5 == (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x28) = 0;
        return 0x34;
      }
      *puVar5 = 0;
      puVar5[1] = 0;
      uVar12 = *(uint *)(param_1 + 0x18);
      *(undefined8 **)(param_1 + 0x28) = puVar5;
    }
    if ((uVar12 & 0xfffffffd) != 0) {
      lVar10 = 0;
      uVar13 = 0xff7fffff;
      bVar6 = false;
      uVar7 = (ulong)(uVar12 - 2);
      uVar11 = 2;
      do {
        lVar2 = *(long *)(param_1 + 0x10) + lVar10;
        if (bVar6) {
          if ((0.0 < *(float *)(lVar2 + 0x10)) ||
             ((uVar11 - 2 != (ulong)((int)uVar7 - 1) &&
              (0.0 < *(float *)(*(long *)(param_1 + 0x10) + (uVar11 & 0xffffffff) * 0xc + 4))))) {
LAB__text__00498b64:
            bVar6 = true;
          }
          else {
            plVar9 = *(long **)(param_1 + 0x28);
            uVar4 = *(undefined4 *)(lVar2 + 0xc);
            uVar12 = *(uint *)(plVar9 + 1);
            if (*(uint *)((long)plVar9 + 0xc) <= uVar12) {
              uVar7 = FUN__text__00498da0(plVar9);
              if ((uVar7 & 1) == 0) {
                return 0x34;
              }
              if (*(uint *)((long)plVar9 + 0xc) <= uVar12) {
                return 0x34;
              }
              uVar12 = *(uint *)(plVar9 + 1);
            }
            *(uint *)(plVar9 + 1) = uVar12 + 1;
            if (*plVar9 == 0) {
              return 0x34;
            }
            puVar1 = (undefined4 *)(*plVar9 + (ulong)uVar12 * 8);
            bVar6 = false;
            *puVar1 = uVar13;
            puVar1[1] = uVar4;
            uVar12 = *(uint *)(param_1 + 0x18);
          }
        }
        else {
          if (0.0 < *(float *)(lVar2 + 0x10) || *(int *)(lVar2 + 0x14) != 9) {
            uVar13 = *(undefined4 *)(lVar2 + 0xc);
            goto LAB__text__00498b64;
          }
          bVar6 = false;
        }
        uVar8 = uVar11 - 1;
        uVar3 = 0;
        if (uVar12 != 0) {
          uVar3 = uVar12 - 2;
        }
        uVar7 = (ulong)uVar3;
        uVar11 = uVar11 + 1;
        lVar10 = lVar10 + 0xc;
      } while (uVar8 < uVar7);
      if (bVar6) {
        plVar9 = *(long **)(param_1 + 0x28);
        uVar4 = *(undefined4 *)(*(long *)(param_1 + 0x10) + (ulong)(uVar12 - 2) * 0xc);
        uVar12 = *(uint *)(plVar9 + 1);
        if (*(uint *)((long)plVar9 + 0xc) <= uVar12) {
          uVar11 = FUN__text__00498da0(plVar9);
          if ((uVar11 & 1) == 0) {
            return 0x34;
          }
          if (*(uint *)((long)plVar9 + 0xc) <= uVar12) {
            return 0x34;
          }
          uVar12 = *(uint *)(plVar9 + 1);
        }
        *(uint *)(plVar9 + 1) = uVar12 + 1;
        if (*plVar9 == 0) {
          return 0x34;
        }
        puVar1 = (undefined4 *)(*plVar9 + (ulong)uVar12 * 8);
        *puVar1 = uVar13;
        puVar1[1] = uVar4;
      }
    }
  }
  return 1;
}


