/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045a2a0; name: FUN_.text__0045a2a0
 */


void FUN__text__0045a2a0(long param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  ulong uVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  ulong uVar15;
  size_t __n;
  char *pcVar16;
  long lVar17;
  char *pcVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  uint *puVar22;
  undefined4 uVar23;
  char acStack_100 [16];
  long alStack_f0 [4];
  long local_d0;
  long local_c8;
  ulong local_c0;
  undefined4 *local_b8;
  long *local_b0;
  uint local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long local_68;
  
  local_b0 = (long *)((long)alStack_f0 - ((ulong)*(uint *)(param_3 + 0x1b0) * 8 + 0xf & 0xffffffff0)
                     );
  puVar11 = (undefined4 *)
            ((long)local_b0 - ((ulong)*(uint *)(param_3 + 0x1b0) * 4 + 0xf & 0x7fffffff0));
  alStack_f0[3] = param_4;
  local_d0 = param_2;
  local_b8 = puVar11;
  local_a4 = FUN__text__0047e778(param_1,param_3 + 0x1a8);
  if ((1 < local_a4) && (uVar10 = FUN__text__00478ecc(param_3), (uVar10 & 1) != 0)) {
    FUN__text__0047e840(*(undefined4 *)(param_1 + 0x180),*(undefined4 *)(param_1 + 0x184),local_a4,
                        local_b0,local_b8);
  }
  alStack_f0[1] = param_3;
  local_c8 = FUN__text__0047d7d0(*(undefined8 *)(param_1 + 0x170));
  uVar4 = *(uint *)(param_1 + 0x148);
  uVar10 = (ulong)uVar4;
  lVar19 = *(long *)(param_1 + 0x140);
  alStack_f0[2] = param_1;
  pcVar18 = (char *)((long)puVar11 - (uVar10 + 0xf & 0x1fffffff0));
  if (uVar4 != 0) {
    uVar20 = 0;
    local_c0 = (ulong)local_a4;
    do {
      lVar21 = lVar19 + uVar20 * 0x118;
      pcVar18[uVar20] = '\0';
      uVar15 = (ulong)*(uint *)(lVar21 + 0x10c) & 0xff;
      puVar22 = (uint *)(lVar21 + 0xc0);
      if ((uint)uVar15 == (uint)*(byte *)puVar22) {
LAB__text__0045a460:
        lVar12 = local_d0;
        if (*(long *)(lVar19 + uVar20 * 0x118 + 0xe8) != 0) {
          lVar17 = lVar19 + uVar20 * 0x118;
          puVar13 = (undefined8 *)(lVar17 + 0xf8);
          uVar2 = *puVar13;
          *puVar13 = *(undefined8 *)(lVar17 + 0x100);
          *(undefined8 *)(lVar17 + 0x100) = uVar2;
          if (local_a4 != 0) {
            puVar11 = local_b8;
            uVar15 = local_c0;
            plVar14 = local_b0;
            do {
              if (*(int *)(*plVar14 + 0x68) == *(int *)(lVar19 + uVar20 * 0x118 + 0x10)) {
                local_68 = *plVar14;
                if (local_c8 != 0) {
                  lVar17 = lVar19 + uVar20 * 0x118;
                  uVar23 = *puVar11;
                  *(float *)(lVar17 + 0x58) = *(float *)(lVar17 + 0x58) * *(float *)(local_d0 + 4);
                  *(float *)(lVar17 + 0x5c) = *(float *)(lVar17 + 0x5c) + *(float *)(local_d0 + 8);
                  *(float *)(lVar17 + 0x60) = *(float *)(lVar17 + 0x60) + *(float *)(local_d0 + 0xc)
                  ;
                  *(float *)(lVar17 + 100) = *(float *)(lVar17 + 100) + *(float *)(local_d0 + 0x10);
                  *(float *)(lVar17 + 0x68) =
                       *(float *)(lVar17 + 0x68) * *(float *)(local_d0 + 0x14);
                  cVar8 = *(char *)(lVar17 + 0x6d);
                  if (*(char *)(local_d0 + 0x19) != '\0') {
                    cVar8 = *(char *)(local_d0 + 0x19);
                  }
                  *(char *)(lVar17 + 0x6d) = cVar8;
                  *(byte *)(lVar17 + 0x6e) = *(byte *)(lVar17 + 0x6e) & *(byte *)(local_d0 + 0x1a);
                  bVar6 = *(byte *)(lVar17 + 0x6c);
                  uVar2 = *(undefined8 *)(local_d0 + 0x20);
                  uVar3 = *(undefined8 *)(local_d0 + 0x28);
                  uVar7 = *(undefined1 *)(local_d0 + 0x18);
                  local_78 = 0xffff3f800000;
                  local_88 = 0;
                  uStack_80 = 0x3f80000000000000;
                  local_a0 = 0;
                  uStack_98 = 0x3f800000;
                  local_90 = 0x3f800000;
                  *(undefined8 **)(pcVar18 + -0x10) = &local_a0;
                  FUN__text__0047e310(lVar17 + 0x28,1,&local_68,bVar6,uVar7,local_c8,uVar2,uVar3);
                  if (bVar6 < *(byte *)(lVar12 + 0x18)) {
                    *(byte *)(lVar17 + 0x6c) = *(byte *)(lVar12 + 0x18);
                  }
                  FUN__text__0047f810(uVar23,&local_a0,*puVar22,lVar21);
                  goto LAB__text__0045a3a0;
                }
                break;
              }
              puVar11 = puVar11 + 1;
              plVar14 = plVar14 + 1;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          uVar5 = *(uint *)(lVar19 + uVar20 * 0x118 + 0xb8);
          uVar1 = *puVar22;
          if ((uVar5 & 0xf00) != 0x300) {
            uVar1 = uVar5;
          }
          lVar21 = (ulong)((uVar1 & 0xff) + 3 & 0x1fc) * (ulong)(*puVar22 & 0xff);
          if ((int)lVar21 != 0) {
            memset((void *)*puVar13,0,lVar21 * 4);
          }
        }
      }
      else {
        iVar9 = FUN__text__00451e0c(puVar22);
        if (iVar9 == 1) {
          lVar12 = lVar19 + uVar20 * 0x118;
          uVar5 = *(uint *)(lVar12 + 0xb8);
          lVar12 = lVar12 + 0xe8;
          uVar1 = *puVar22;
          if ((uVar5 & 0xf00) != 0x300) {
            uVar1 = uVar5;
          }
          FUN__text__0045cc00(lVar12);
          iVar9 = FUN__text__0045cb64(lVar12,uVar15,uVar1 & 0xff);
          if (iVar9 == 1) {
            lVar12 = ((uVar1 & 0xff) + 3 & 0x1fc) * uVar15;
            if ((int)lVar12 != 0) {
              lVar17 = lVar19 + uVar20 * 0x118;
              __n = lVar12 * 4;
              memset(*(void **)(lVar17 + 0x100),0,__n);
              memset(*(void **)(lVar17 + 0xf8),0,__n);
            }
            pcVar18[uVar20] = '\x01';
            goto LAB__text__0045a460;
          }
        }
      }
LAB__text__0045a3a0:
      uVar20 = uVar20 + 1;
    } while (uVar20 != uVar10);
  }
  lVar21 = alStack_f0[2];
  if ((1 < local_a4) && (cVar8 = FUN__text__00478e78(alStack_f0[1]), cVar8 != '\x01')) {
    FUN__text__0047e960(local_a4,local_b0,local_b8,lVar21 + 0x28);
  }
  if (alStack_f0[3] != 0) {
    FUN__text__00480a40(alStack_f0[3],lVar21);
  }
  if (uVar4 != 0) {
    pcVar16 = (char *)(lVar19 + 0x108);
    do {
      if ((*pcVar18 != '\0') && (*pcVar16 != '\0')) {
        uVar4 = *(uint *)(pcVar16 + -0x48);
        if ((*(uint *)(pcVar16 + -0x50) & 0xf00) != 0x300) {
          uVar4 = *(uint *)(pcVar16 + -0x50);
        }
        lVar19 = (ulong)((uVar4 & 0xff) + 3 & 0x1fc) * (ulong)(*(uint *)(pcVar16 + -0x48) & 0xff);
        if ((int)lVar19 != 0) {
          memcpy(*(void **)(pcVar16 + -8),*(void **)(pcVar16 + -0x10),lVar19 * 4);
        }
      }
      pcVar16 = pcVar16 + 0x118;
      uVar10 = uVar10 - 1;
      pcVar18 = pcVar18 + 1;
    } while (uVar10 != 0);
  }
  return;
}


