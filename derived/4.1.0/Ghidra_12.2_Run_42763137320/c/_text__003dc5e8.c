/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003dc5e8; name: FUN_.text__003dc5e8
 */


long * FUN__text__003dc5e8(long *param_1,uint param_2,ulong *param_3,ulong param_4)

{
  void *pvVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  int *piVar4;
  long *plVar5;
  undefined8 uVar6;
  size_t sVar7;
  undefined4 *puVar8;
  int iVar9;
  ulong uVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  long local_78;
  char acStack_70 [32];
  undefined8 local_48;
  
  piVar4 = (int *)*param_1;
  if (param_4 >> 0x20 != 0) {
    if (*piVar4 == 0) {
      *piVar4 = 0xe;
    }
    puVar8 = (undefined4 *)FUN__text__003d9014(piVar4 + 4);
    *puVar8 = 5;
    return param_1;
  }
  if ((*(byte *)(piVar4 + 1) >> 1 & 1) != 0) {
    uVar10 = FUN__text__003d91a4();
    if ((uVar10 & 1) == 0) {
      return param_1;
    }
    lVar16 = *param_1;
    lVar13 = *(long *)(lVar16 + 8);
    uVar15 = (uint)param_4;
    if (param_4 < 0x3b) {
      if (param_4 + *(long *)(lVar16 + 0x50) + 6 <= lVar16 + 0x98U) goto LAB__text__003dc860;
      pvVar1 = (void *)(lVar16 + 0x58);
      sVar7 = *(long *)(lVar16 + 0x50) - (long)pvVar1;
      *(void **)(lVar16 + 0x50) = pvVar1;
      if (-1 < (long)sVar7) {
        if (*(long *)(lVar13 + 0x10) + sVar7 <= *(ulong *)(lVar13 + 0x20)) {
          memcpy((void *)(*(long *)(lVar13 + 0x18) + *(long *)(lVar13 + 0x10)),pvVar1,sVar7);
          *(size_t *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + sVar7;
LAB__text__003dc860:
          uVar6 = FUN__text__003dcc20(*(undefined8 *)(lVar16 + 0x50),lVar16 + 0x98U,param_2,param_3,
                                      param_4 & 0xffffffff);
          *(undefined8 *)(lVar16 + 0x50) = uVar6;
          return param_1;
        }
        uVar10 = FUN__text__003d6a74(lVar13,pvVar1,sVar7);
        if ((uVar10 & 1) != 0) goto LAB__text__003dc860;
        goto LAB__text__003dcb7c;
      }
    }
    else {
      puVar2 = (undefined1 *)(lVar16 + 0x98);
      uVar3 = (undefined1)param_2;
      if (puVar2 < (undefined1 *)(*(long *)(lVar16 + 0x50) + 5)) {
        pvVar1 = (void *)(lVar16 + 0x58);
        sVar7 = *(long *)(lVar16 + 0x50) - (long)pvVar1;
        *(void **)(lVar16 + 0x50) = pvVar1;
        if (-1 < (long)sVar7) {
          if (*(ulong *)(lVar13 + 0x20) < *(long *)(lVar13 + 0x10) + sVar7) {
            uVar10 = FUN__text__003d6a74(lVar13,pvVar1,sVar7);
            if ((uVar10 & 1) == 0) goto LAB__text__003dcb7c;
            goto LAB__text__003dc700;
          }
          memcpy((void *)(*(long *)(lVar13 + 0x18) + *(long *)(lVar13 + 0x10)),pvVar1,sVar7);
          *(size_t *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + sVar7;
          puVar11 = *(undefined1 **)(lVar16 + 0x50);
          if (0xff < uVar15) goto LAB__text__003dc8a8;
          goto LAB__text__003dc70c;
        }
      }
      else {
LAB__text__003dc700:
        puVar11 = *(undefined1 **)(lVar16 + 0x50);
        if (uVar15 < 0x100) {
LAB__text__003dc70c:
          if (uVar15 - 1 < 0x10) {
                    /* WARNING: Could not emulate address calculation at 0x003dc724 */
                    /* WARNING: Treating indirect jump as call */
            plVar5 = (long *)(*(code *)(&UNK__text__003dc730 +
                                       (ulong)*(byte *)((ulong)(uVar15 - 1) + 0x73aaec) * 4))();
            return plVar5;
          }
          if (puVar2 < puVar11 + 3) {
LAB__text__003dcb58:
            sVar7 = -(lVar16 + 0x58);
            *(long *)(lVar16 + 0x50) = lVar16 + 0x58;
          }
          else {
            puVar11[1] = (char)param_4;
            *puVar11 = 199;
            puVar11[2] = uVar3;
            sVar7 = (long)(puVar11 + 3) - (lVar16 + 0x58);
            *(long *)(lVar16 + 0x50) = lVar16 + 0x58;
          }
        }
        else {
LAB__text__003dc8a8:
          if (uVar15 >> 0x10 == 0) {
            if (puVar2 < puVar11 + 4) goto LAB__text__003dcb58;
            *puVar11 = 200;
            *(ushort *)(puVar11 + 1) =
                 (ushort)(param_4 >> 8) & 0xff | (ushort)((uVar15 & 0xff00ff) << 8);
            puVar11[3] = uVar3;
            sVar7 = (long)(puVar11 + 4) - (lVar16 + 0x58);
            *(long *)(lVar16 + 0x50) = lVar16 + 0x58;
          }
          else {
            if (puVar2 < puVar11 + 6) goto LAB__text__003dcb58;
            *puVar11 = 0xc9;
            uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
            *(uint *)(puVar11 + 1) = uVar15 >> 0x10 | uVar15 << 0x10;
            puVar11[5] = uVar3;
            sVar7 = (long)(puVar11 + 6) - (lVar16 + 0x58);
            *(long *)(lVar16 + 0x50) = lVar16 + 0x58;
          }
        }
        if (-1 < (long)sVar7) {
          if (*(ulong *)(lVar13 + 0x20) < *(long *)(lVar13 + 0x10) + sVar7) {
            uVar10 = FUN__text__003d6a74(lVar13,(void *)(lVar16 + 0x58),sVar7);
            if ((uVar10 & 1) == 0) goto LAB__text__003dcb7c;
            lVar16 = *(long *)(lVar13 + 0x10);
            if (lVar16 + param_4 <= *(ulong *)(lVar13 + 0x20)) goto LAB__text__003dcacc;
          }
          else {
            memcpy((void *)(*(long *)(lVar13 + 0x18) + *(long *)(lVar13 + 0x10)),
                   (void *)(lVar16 + 0x58),sVar7);
            lVar16 = *(long *)(lVar13 + 0x10) + sVar7;
            *(long *)(lVar13 + 0x10) = lVar16;
            if (lVar16 + param_4 <= *(ulong *)(lVar13 + 0x20)) {
LAB__text__003dcacc:
              memcpy((void *)(*(long *)(lVar13 + 0x18) + lVar16),param_3,param_4);
              *(ulong *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + param_4;
              return param_1;
            }
          }
          uVar10 = FUN__text__003d6a74(lVar13,param_3,param_4);
          if ((uVar10 & 1) != 0) {
            return param_1;
          }
          goto LAB__text__003dcb7c;
        }
      }
    }
    if (*(int *)(lVar13 + 0x28) == 0) {
      *(int *)(lVar13 + 0x28) = 0x16;
    }
LAB__text__003dcb7c:
    piVar4 = (int *)*param_1;
    uVar10 = (ulong)(uint)piVar4[5] - 1;
    if (uVar10 < (uint)piVar4[4]) {
      puVar8 = (undefined4 *)(*(long *)(piVar4 + 6) + uVar10 * 8);
      iVar9 = *piVar4;
    }
    else {
      iVar9 = (int)uVar10 - piVar4[4];
      lVar13 = LZCOUNT(iVar9 + 0x10);
      puVar8 = (undefined4 *)
               (*(long *)(*(long *)(piVar4 + 8) + (0x1b - lVar13) * 8 + 8) +
               (ulong)(uint)(iVar9 - *(int *)((0x1c - lVar13) * 4 + 0x734874)) * 8);
      iVar9 = *piVar4;
    }
    if (iVar9 == 0) {
      *piVar4 = 8;
    }
    *puVar8 = 5;
    return param_1;
  }
  if (((param_2 ^ 0xffffffff) & 0xff) == 0) {
    if (param_4 == 0xc) {
      uVar14 = *(ulong *)((long)param_3 + 4);
      uVar10 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = ((uint)*param_3 & 0xff00ff00) >> 8 | ((uint)*param_3 & 0xff00ff) << 8;
      uVar15 = uVar15 >> 0x10 | uVar15 << 0x10;
      uVar10 = (ulong)uVar15;
      if ((long)uVar12 < 0xd6bf94d5e5) {
        if ((-0xd6bf94d5e6 < (long)uVar12) ||
           ((uVar14 == 0x1a2a6b4029ffffff && (uVar12 = 0xffffff29406b2a1a, 0x1f237bff < uVar15))))
        goto LAB__text__003dc964;
      }
      else if ((uVar14 == 0xe5d594bfd6000000) && (uVar15 < 0x1c774d9d)) {
        uVar12 = 0xd6bf94d5e5;
        goto LAB__text__003dc964;
      }
      if (*piVar4 == 0) {
        iVar9 = 0xe;
LAB__text__003dc9f0:
        *piVar4 = iVar9;
      }
    }
    else {
      if (param_4 == 8) {
        uVar10 = (*param_3 & 0xff00ff00ff00ff00) >> 8 | (*param_3 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar10 & 0xffff0000ffff0000) >> 0x10;
        uVar10 = uVar12 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar12 = uVar10 >> 0x20 | (uVar12 & 3) << 0x20;
        uVar10 = (uVar10 & 0xffffffff) >> 2;
LAB__text__003dc964:
        local_48 = 0;
        local_78 = uVar12 * 10000000 + uVar10 / 100;
        FUN__text__003d70a8(&local_78,acStack_70,&local_48);
        sVar7 = strlen(acStack_70);
        lVar13 = *param_1;
        uVar10 = FUN__text__003d91a4(lVar13);
        if ((uVar10 & 1) == 0) {
          return param_1;
        }
        if ((*(byte *)(lVar13 + 4) >> 1 & 1) == 0) {
          FUN__text__003d9d90(lVar13,acStack_70,sVar7);
          return param_1;
        }
        FUN__text__003da214(lVar13,acStack_70,sVar7);
        return param_1;
      }
      if (param_4 == 4) {
        uVar10 = 0;
        uVar15 = ((uint)*param_3 & 0xff00ff00) >> 8 | ((uint)*param_3 & 0xff00ff) << 8;
        uVar12 = (ulong)(uVar15 >> 0x10 | uVar15 << 0x10);
        goto LAB__text__003dc964;
      }
      if (*piVar4 == 0) {
        iVar9 = 0xd;
        goto LAB__text__003dc9f0;
      }
    }
LAB__text__003dc638:
    uVar15 = piVar4[4];
    uVar10 = (ulong)(uint)piVar4[5] - 1;
    if (uVar15 <= uVar10) {
LAB__text__003dc784:
      iVar9 = (int)uVar10 - uVar15;
      lVar13 = LZCOUNT(iVar9 + 0x10);
      uVar10 = (ulong)(uint)(iVar9 - *(int *)((0x1c - lVar13) * 4 + 0x734874));
      plVar5 = (long *)(*(long *)(piVar4 + 8) + (0x1b - lVar13) * 8 + 8);
      goto LAB__text__003dc7bc;
    }
  }
  else {
    if (*piVar4 != 0) goto LAB__text__003dc638;
    *piVar4 = 0xd;
    uVar15 = piVar4[4];
    uVar10 = (ulong)(uint)piVar4[5] - 1;
    if (uVar15 <= uVar10) goto LAB__text__003dc784;
  }
  plVar5 = (long *)(piVar4 + 6);
LAB__text__003dc7bc:
  *(undefined4 *)(*plVar5 + uVar10 * 8) = 5;
  return param_1;
}


