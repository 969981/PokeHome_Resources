/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00680e2c; name: FUN_.text__00680e2c
 */


int FUN__text__00680e2c(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  ulong uVar5;
  size_t sVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  char cVar15;
  size_t __n;
  size_t *psVar16;
  long *plVar17;
  long lVar18;
  uint uVar19;
  ulong local_78;
  undefined8 local_70;
  uint5 local_68;
  undefined3 uStack_63;
  
  if (*(char *)((long)param_1 + 0x3c) != '\0') {
    return -0x20b;
  }
  if ((char)param_1[0x8a] == '\0') {
LAB__text__00680ec4:
    if (param_4 != 0) {
      lVar18 = 0;
      do {
        puVar13 = (undefined8 *)(param_3 + lVar18 * 0x28);
        lVar8 = param_1[4];
        __n = puVar13[2];
        pbVar4 = (byte *)*puVar13;
        uVar7 = FUN__text__00681ffc(pbVar4,__n);
        uVar2 = (uint)uVar7;
        uVar5 = uVar7 & 0xffffffff;
        if (uVar2 == 0xffffffff) {
          uVar19 = 0x811c9dc5;
          if (__n != 0) {
            pbVar9 = pbVar4;
            sVar6 = __n;
            do {
              sVar6 = sVar6 - 1;
              uVar19 = (uVar19 ^ *pbVar9) * 0x1000193;
              pbVar9 = pbVar9 + 1;
            } while (sVar6 != 0);
            goto LAB__text__00680f84;
          }
LAB__text__00680fac:
          if ((*(byte *)(param_3 + lVar18 * 0x28 + 0x20) & 1) != 0) goto LAB__text__00681000;
          if ((uVar2 < 0x37) && ((1L << (uVar7 & 0x3f) & 0x40218208100008U) != 0)) {
            cVar15 = '\x01';
          }
          else {
            cVar15 = (ulong)(param_1[6] * 3) >> 2 <
                     __n + *(long *)(param_3 + lVar18 * 0x28 + 0x18) + 0x20;
          }
        }
        else {
          if (uVar2 < 0x3d) {
            uVar19 = *(uint *)(uVar5 * 0x80 + 0x89a5d4);
          }
          else {
            uVar19 = 0;
          }
LAB__text__00680f84:
          if ((uVar2 != 0x16) &&
             ((uVar2 != 0x1f || (0x13 < *(ulong *)(param_3 + lVar18 * 0x28 + 0x18)))))
          goto LAB__text__00680fac;
LAB__text__00681000:
          cVar15 = '\x02';
        }
        plVar14 = (long *)(param_1 + 8)[uVar19 & 0x7f];
        if (plVar14 == (long *)0x0) {
          uVar7 = 0xffffffffffffffff;
          if (uVar2 < 0x3d) goto LAB__text__006810dc;
joined_r0x00681170:
          uVar5 = uVar7;
          if (cVar15 == '\0') {
            local_70 = 0;
            _local_68 = 0;
            local_78 = 0;
            if (uVar5 == 0xffffffffffffffff) {
              iVar3 = FUN__text__00683104(&local_78,pbVar4,__n,lVar8);
              if (iVar3 != 0) goto LAB__text__00680eb8;
            }
            else {
              if (uVar5 < 0x3d) {
                local_78 = uVar5 * 0x80 + 0x89a558;
              }
              else {
                local_78 = **(ulong **)(*param_1 + ((uVar5 + param_1[2]) - 0x3d & param_1[1]) * 8);
              }
              FUN__text__00683168();
            }
            lVar10 = param_3 + lVar18 * 0x28;
            iVar3 = FUN__text__00683104(&local_70,*(undefined8 *)(lVar10 + 8),
                                        *(undefined8 *)(lVar10 + 0x18),lVar8);
            if (iVar3 != 0) {
              FUN__text__00683180(local_78);
              goto LAB__text__00680eb8;
            }
            local_68 = (uint5)uVar2;
            iVar3 = FUN__text__00682d04(param_1,&local_78,param_1 + 8,uVar19);
            FUN__text__00683180(local_70);
            FUN__text__00683180(local_78);
            if (iVar3 != 0) {
              iVar3 = -0x20b;
              goto LAB__text__00680eb8;
            }
          }
          if (uVar5 != 0xffffffffffffffff) goto LAB__text__00681258;
          iVar3 = FUN__text__00681e98(param_2,puVar13,cVar15);
        }
        else {
          lVar10 = param_3 + lVar18 * 0x28;
          plVar17 = (long *)0x0;
          do {
            if ((*(uint *)(plVar14 + 2) == uVar2) &&
               ((uVar2 != 0xffffffff ||
                (((*(uint *)((long)plVar14 + 0x4c) == uVar19 &&
                  (*(size_t *)(*plVar14 + 0x18) == __n)) &&
                 (iVar3 = memcmp(*(void **)(*plVar14 + 0x10),pbVar4,__n), iVar3 == 0)))))) {
              plVar1 = plVar17;
              if (plVar17 == (long *)0x0) {
                plVar1 = plVar14;
              }
              if ((cVar15 == '\x02') && (plVar17 == (long *)0x0)) {
                plVar17 = plVar14;
                break;
              }
              sVar6 = *(size_t *)(plVar14[1] + 0x18);
              plVar17 = plVar1;
              if ((sVar6 == *(size_t *)(lVar10 + 0x18)) &&
                 (iVar3 = memcmp(*(void **)(plVar14[1] + 0x10),*(void **)(lVar10 + 8),sVar6),
                 iVar3 == 0)) {
                uVar5 = (ulong)((int)param_1[7] + ~*(uint *)(plVar14 + 9) + 0x3d);
                goto LAB__text__006812c0;
              }
            }
            plVar14 = (long *)plVar14[8];
          } while (plVar14 != (long *)0x0);
          if (0x3c < uVar2) {
            if (plVar17 == (long *)0x0) {
              uVar7 = 0xffffffffffffffff;
            }
            else {
              uVar7 = (ulong)((int)param_1[7] + ~*(uint *)(plVar17 + 9) + 0x3d);
            }
            goto joined_r0x00681170;
          }
LAB__text__006810dc:
          if (cVar15 != '\x02') {
            lVar10 = -1;
            lVar11 = param_3 + lVar18 * 0x28;
            psVar16 = (size_t *)(uVar5 * 0x80 + 0x89a598);
LAB__text__00681108:
            uVar7 = uVar5;
            if ((uint)psVar16[7] == uVar2) {
              if ((*psVar16 != *(size_t *)(lVar11 + 0x18)) ||
                 (iVar3 = memcmp((void *)psVar16[-1],*(void **)(lVar11 + 8),*psVar16), iVar3 != 0))
              goto LAB__text__00681134;
              uVar5 = uVar5 + lVar10 + 1;
LAB__text__006812c0:
              local_78 = 0;
              local_70 = 0;
              if (uVar5 + 1 < 0x7f) {
                lVar8 = 1;
                local_78 = (ulong)(byte)((byte)(uVar5 + 1) | 0x80);
LAB__text__00681384:
                iVar3 = FUN__text__006834ec(param_2,&local_78,lVar8);
              }
              else {
                uVar5 = uVar5 - 0x7e;
                if (uVar5 < 0x80) {
                  lVar8 = 2;
                  pbVar4 = (byte *)((ulong)&local_78 | 1);
LAB__text__00681380:
                  local_78 = 0xff;
                  *pbVar4 = (byte)uVar5;
                  goto LAB__text__00681384;
                }
                lVar8 = 2;
                uVar7 = uVar5;
                do {
                  lVar10 = lVar8;
                  uVar12 = uVar7 >> 0xe;
                  uVar7 = uVar7 >> 7;
                  lVar8 = lVar10 + 1;
                } while (uVar12 != 0);
                iVar3 = -0x20b;
                if (lVar10 - 1U < 0xf) {
                  pbVar9 = (byte *)((ulong)&local_78 | 1);
                  do {
                    pbVar4 = pbVar9 + 1;
                    *pbVar9 = (byte)uVar5 | 0x80;
                    uVar7 = uVar5 >> 0xe;
                    uVar5 = uVar5 >> 7;
                    pbVar9 = pbVar4;
                  } while (uVar7 != 0);
                  goto LAB__text__00681380;
                }
              }
              goto LAB__text__00681284;
            }
            goto joined_r0x00681170;
          }
LAB__text__00681258:
          iVar3 = FUN__text__00681d84(param_2,uVar5,puVar13,cVar15);
        }
LAB__text__00681284:
        if (iVar3 != 0) goto LAB__text__00680eb8;
        lVar18 = lVar18 + 1;
      } while (lVar18 != param_4);
    }
    iVar3 = 0;
  }
  else {
    uVar5 = param_1[0x89];
    *(undefined1 *)(param_1 + 0x8a) = 0;
    param_1[0x89] = 0xffffffff;
    uVar7 = param_1[6];
    if (uVar5 < uVar7) {
      iVar3 = FUN__text__006813dc(param_2);
      if (iVar3 == 0) {
        uVar7 = param_1[6];
        goto LAB__text__00680ea4;
      }
    }
    else {
LAB__text__00680ea4:
      iVar3 = FUN__text__006813dc(param_2,uVar7);
      if (iVar3 == 0) goto LAB__text__00680ec4;
    }
LAB__text__00680eb8:
    *(undefined1 *)((long)param_1 + 0x3c) = 1;
  }
  return iVar3;
LAB__text__00681134:
  lVar10 = lVar10 + 1;
  psVar16 = psVar16 + 0x10;
  if (0x3b < (int)(uVar2 + (int)lVar10)) goto joined_r0x00681170;
  goto LAB__text__00681108;
}


