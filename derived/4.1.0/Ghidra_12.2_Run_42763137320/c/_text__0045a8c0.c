/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045a8c0; name: FUN_.text__0045a8c0
 */


void FUN__text__0045a8c0(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  void *__s;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  char *pcVar19;
  uint uVar20;
  uint uVar21;
  size_t __n;
  ulong uVar22;
  char *pcVar23;
  uint *puVar24;
  char acStack_c0 [8];
  char *local_b8;
  ulong uStack_b0;
  uint local_a4;
  ulong local_a0;
  long local_98;
  long lStack_90;
  ulong local_88;
  uint local_7c;
  long local_78;
  undefined8 local_70;
  undefined1 uStack_61;
  
  pcVar23 = acStack_c0;
  uVar7 = FUN__text__0045c058();
  uVar20 = *(uint *)(param_1 + 0x148);
  local_78 = 0;
  local_70 = 0;
  if (uVar20 == 0) {
    lVar8 = *(long *)(param_1 + 0x140);
LAB__text__0045aab8:
    uVar22 = 0;
    uVar20 = 1;
  }
  else {
    lVar8 = FUN__text__00400f80(0,(ulong)uVar20 << 4);
    if (lVar8 == 0) goto LAB__text__0045ac2c;
    uVar5 = *(uint *)(param_1 + 0x148);
    uVar22 = (ulong)uVar5;
    local_78 = lVar8;
    lVar8 = *(long *)(param_1 + 0x140);
    local_70 = CONCAT44(uVar20,(undefined4)local_70);
    pcVar23 = acStack_c0 + -(uVar22 + 0xf & 0x1fffffff0);
    if (uVar5 == 0) goto LAB__text__0045aab8;
    local_98 = param_2;
    lStack_90 = param_1;
    lVar18 = 0;
    uVar20 = 0;
    local_88 = (ulong)((int)(uVar7 & 0xff) + 3) & 0x1fc;
    local_b8 = pcVar23;
    uStack_b0 = uVar7 & 0xffffffff;
    local_a4 = (uint)(uVar22 == 0);
    local_a0 = uVar7 & 0xff;
    do {
      puVar2 = (undefined8 *)(lVar8 + lVar18);
      *pcVar23 = '\0';
      puVar24 = (uint *)(puVar2 + 0x18);
      uVar7 = (ulong)*(uint *)((long)puVar2 + 0x10c) & 0xff;
      if ((uint)uVar7 == (uint)(byte)*puVar24) {
        lVar12 = puVar2[0x1d];
joined_r0x0045aa8c:
        if (lVar12 != 0) {
          uVar4 = puVar2[0x1f];
          __s = (void *)puVar2[0x20];
          uVar21 = *puVar24;
          puVar2[0x1f] = __s;
          puVar2[0x20] = uVar4;
          lVar12 = (ulong)(byte)uVar21 * (local_88 & 0xffffffff);
          if ((int)lVar12 != 0) {
            memset(__s,0,lVar12 * 4);
          }
          puVar9 = (undefined8 *)FUN__text__0045b560(&local_78,*puVar2,&uStack_61);
          *puVar9 = *puVar2;
          puVar9[1] = puVar2;
          uVar20 = (byte)uVar21 + uVar20;
        }
      }
      else {
        iVar6 = FUN__text__00451e0c(puVar24);
        if (iVar6 == 1) {
          uVar21 = *puVar24;
          if ((*(uint *)(puVar2 + 0x17) & 0xf00) != 0x300) {
            uVar21 = *(uint *)(puVar2 + 0x17);
          }
          local_7c = uVar20;
          FUN__text__0045cc00(puVar2 + 0x1d);
          iVar6 = FUN__text__0045cb64(puVar2 + 0x1d,uVar7,uVar21 & 0xff);
          if (iVar6 == 1) {
            lVar12 = ((uVar21 & 0xff) + 3 & 0x1fc) * uVar7;
            if ((int)lVar12 != 0) {
              __n = lVar12 * 4;
              memset((void *)puVar2[0x20],0,__n);
              memset((void *)puVar2[0x1f],0,__n);
            }
            uVar20 = local_7c;
            *pcVar23 = '\x01';
            lVar12 = puVar2[0x1d];
            goto joined_r0x0045aa8c;
          }
          uVar20 = local_7c;
        }
      }
      lVar18 = lVar18 + 0x118;
      pcVar23 = pcVar23 + 1;
    } while ((ulong)uVar5 * 0x118 != lVar18);
    uVar21 = (uint)local_a0;
    uVar5 = uVar21;
    if (uVar20 <= uVar21) {
      uVar5 = uVar20;
    }
    param_1 = lStack_90;
    param_2 = local_98;
    pcVar23 = local_b8;
    uVar20 = local_a4;
    if (uVar5 != 0) {
      uVar16 = 0;
      uVar13 = 0;
      uVar7 = (uStack_b0 & 0xff) + 3 >> 2;
      lVar18 = uVar7 * 0x20;
      do {
        uVar14 = (ulong)uVar16;
        uVar17 = (uint)*(byte *)(*(long *)(local_78 + (ulong)uVar16 * 0x10 + 8) + 0xc0);
        uVar3 = uVar17;
        if (uVar21 - uVar13 <= uVar17) {
          uVar3 = uVar21 - uVar13;
        }
        if (uVar3 != 0) {
          if (uVar3 == 1) {
            uVar15 = 0;
          }
          else {
            lVar12 = 0;
            uVar15 = 0;
            uVar17 = uVar13 + 1;
            lVar11 = uVar7 << 4;
            uVar10 = uVar13;
            do {
              lVar1 = lVar12 + (ulong)uVar10 * 4;
              uVar15 = uVar15 + 2;
              lVar12 = lVar12 + lVar18;
              uVar10 = uVar10 + 2;
              *(undefined4 *)(*(long *)(*(long *)(local_78 + uVar14 * 0x10 + 8) + 0xf8) + lVar1) =
                   0x3f800000;
              lVar1 = lVar11 + (ulong)uVar17 * 4;
              lVar11 = lVar11 + lVar18;
              uVar17 = uVar17 + 2;
              *(undefined4 *)(*(long *)(*(long *)(local_78 + uVar14 * 0x10 + 8) + 0xf8) + lVar1) =
                   0x3f800000;
            } while (((ulong)uVar3 & 0xfe) != uVar15);
          }
          if ((uVar3 & 1) != 0) {
            *(undefined4 *)
             (*(long *)(*(long *)(local_78 + uVar14 * 0x10 + 8) + 0xf8) +
              uVar15 * (uVar21 + 3 & 0x1fc) * 4 + (ulong)(uVar13 + (int)uVar15) * 4) = 0x3f800000;
          }
          uVar17 = (uint)*(byte *)(*(long *)(local_78 + uVar14 * 0x10 + 8) + 0xc0);
        }
        uVar13 = uVar17 + uVar13;
        uVar16 = uVar16 + 1;
      } while (uVar13 < uVar5);
    }
  }
  if (param_2 != 0) {
    FUN__text__00480a40(param_2,param_1);
  }
  if ((uVar20 & 1) == 0) {
    pcVar19 = (char *)(lVar8 + 0x108);
    do {
      if ((*pcVar23 != '\0') && (*pcVar19 != '\0')) {
        uVar20 = *(uint *)(pcVar19 + -0x48);
        if ((*(uint *)(pcVar19 + -0x50) & 0xf00) != 0x300) {
          uVar20 = *(uint *)(pcVar19 + -0x50);
        }
        lVar8 = (ulong)((uVar20 & 0xff) + 3 & 0x1fc) * (ulong)(*(uint *)(pcVar19 + -0x48) & 0xff);
        if ((int)lVar8 != 0) {
          memcpy(*(void **)(pcVar19 + -8),*(void **)(pcVar19 + -0x10),lVar8 * 4);
        }
      }
      pcVar19 = pcVar19 + 0x118;
      uVar22 = uVar22 - 1;
      pcVar23 = pcVar23 + 1;
    } while (uVar22 != 0);
  }
LAB__text__0045ac2c:
  if (local_78 != 0) {
    local_70 = local_70 & 0xffffffff00000000;
    FUN__text__00400fc0(0);
  }
  return;
}


