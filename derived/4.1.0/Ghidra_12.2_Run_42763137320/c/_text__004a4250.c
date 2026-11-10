/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a4250; name: FUN_.text__004a4250
 */


/* WARNING: Type propagation algorithm not settling */

int FUN__text__004a4250(long param_1,long param_2,int param_3,uint param_4)

{
  MutexType *pMVar1;
  undefined4 uVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  void *__dest;
  void *pvVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  uint *puVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  int iVar21;
  long *plVar22;
  float fVar23;
  uint local_b0;
  uint local_84;
  uint local_80;
  int iStack_7c;
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [4];
  int local_70 [2];
  ushort *local_68;
  
  if (param_3 != 0) {
    uVar9 = *(uint *)(param_2 + 0x34);
    uVar13 = *(uint *)(param_2 + 0x38);
    if (uVar9 < uVar13) {
      pMVar1 = (MutexType *)(param_1 + 0x68);
      iVar6 = 0;
      uVar19 = 0;
      uVar17 = 0;
      do {
        while( true ) {
          uVar16 = uVar19;
          puVar15 = (uint *)(*(long *)(param_2 + 0x20) + uVar16 * 0xc);
          uVar3 = *puVar15;
          uVar18 = puVar15[1];
          iVar6 = (uVar18 - uVar17) + iVar6;
          if (uVar3 != 0) break;
          uVar9 = uVar9 + 1;
          *(uint *)(param_2 + 0x34) = uVar9;
          uVar19 = uVar16 + 1;
          uVar17 = uVar18;
          if (uVar13 <= uVar9) goto LAB__text__004a47a0;
        }
        uVar13 = *(uint *)(*(long *)(param_2 + 0x20) + uVar16 * 0xc + 8);
        nn::os::LockMutex(pMVar1);
        uVar9 = *(uint *)(param_1 + 0x98);
        iVar21 = (int)uVar16;
        if (uVar9 == 0) {
LAB__text__004a43a4:
          FUN__text__004acf60(param_1 + 0x88);
          uVar9 = *(uint *)(param_1 + 0x98);
          if (uVar9 == 0) {
LAB__text__004a47c4:
            iVar5 = 0x34;
            nn::os::UnlockMutex(pMVar1);
            goto joined_r0x004a47d4;
          }
          uVar17 = 0;
          if (uVar9 != 0) {
            uVar17 = uVar3 / uVar9;
          }
          lVar10 = *(long *)(param_1 + 0x90);
          uVar19 = (ulong)(uVar3 - uVar17 * uVar9);
LAB__text__004a43c0:
          plVar11 = (long *)(lVar10 + uVar19 * 8);
          do {
            plVar11 = (long *)*plVar11;
            if (plVar11 == (long *)0x0) {
              puVar20 = (undefined8 *)FUN__text__00400f80(0,0x28);
              if (puVar20 == (undefined8 *)0x0) goto LAB__text__004a47c4;
              uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x90) + uVar19 * 8);
              *(uint *)(puVar20 + 1) = uVar3;
              plVar11 = puVar20 + 2;
              *plVar11 = 0;
              *puVar20 = uVar12;
              puVar20[3] = 0;
              puVar20[4] = 0xffffffff00000001;
              *(undefined8 **)(*(long *)(param_1 + 0x90) + uVar19 * 8) = puVar20;
              *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
              goto LAB__text__004a4428;
            }
          } while (*(uint *)(plVar11 + 1) != uVar3);
          plVar11 = plVar11 + 2;
LAB__text__004a4428:
          lVar10 = *plVar11;
          *(uint *)((long)plVar11 + 0x14) = uVar3;
        }
        else {
          uVar17 = 0;
          if (uVar9 != 0) {
            uVar17 = uVar3 / uVar9;
          }
          uVar19 = (ulong)(uVar3 - uVar17 * uVar9);
          lVar10 = *(long *)(param_1 + 0x90);
          plVar22 = (long *)(lVar10 + uVar19 * 8);
          do {
            plVar22 = (long *)*plVar22;
            if (plVar22 == (long *)0x0) {
              fVar23 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xa0));
              if (0.9 < fVar23 / (float)uVar9) goto LAB__text__004a43a4;
              goto LAB__text__004a43c0;
            }
          } while (*(uint *)(plVar22 + 1) != uVar3);
          plVar11 = plVar22 + 2;
          lVar10 = *plVar11;
          *(int *)(plVar22 + 4) = *(int *)(plVar22 + 4) + 1;
          if (*(uint *)(plVar22 + 3) != 0) {
            lVar14 = 0;
            do {
              if (*(char *)(lVar10 + lVar14 + 0xc) == '\x01') goto LAB__text__004a46dc;
              lVar14 = lVar14 + 0x18;
            } while ((ulong)*(uint *)(plVar22 + 3) * 0x18 != lVar14);
          }
        }
        uVar2 = 0x20000003;
        if ((*(byte *)(param_2 + 0x68) & 8) != 0) {
          uVar2 = 0x60000003;
        }
        if (*(uint *)(plVar11 + 1) != 0) {
          puVar15 = (uint *)(lVar10 + 8);
          lVar10 = (ulong)*(uint *)(plVar11 + 1) * 0x18;
          do {
            if ((char)puVar15[1] == '\x02') {
              uVar13 = *puVar15;
              __dest = (void *)FUN__text__00400f90(uVar2,(ulong)uVar13,0x10);
              if (__dest == (void *)0x0) goto LAB__text__004a47bc;
              memcpy(__dest,*(void **)(puVar15 + -2),(ulong)uVar13);
              uVar9 = *(uint *)(plVar11 + 1);
              if (*(uint *)((long)plVar11 + 0xc) <= uVar9) goto LAB__text__004a4668;
              goto LAB__text__004a4684;
            }
            puVar15 = puVar15 + 6;
            lVar10 = lVar10 + -0x18;
          } while (lVar10 != 0);
        }
        pvVar7 = (void *)FUN__text__00400f90(uVar2,uVar13,0x10);
        if (pvVar7 == (void *)0x0) {
LAB__text__004a47bc:
          iVar5 = 0x34;
LAB__text__004a4808:
          FUN__text__004a6c80(param_1,plVar11);
          nn::os::UnlockMutex(pMVar1);
          goto joined_r0x004a47d4;
        }
        nn::os::UnlockMutex(pMVar1);
        if (iVar6 != 0) {
          local_70[0] = 0;
          iVar5 = FUN__text__004ae7a0(param_1 + 8,iVar6,local_70);
          if (iVar6 != local_70[0]) goto LAB__text__004a47b4;
          if (iVar5 == 1) goto LAB__text__004a44c4;
LAB__text__004a47f4:
          nn::os::LockMutex(pMVar1);
LAB__text__004a4800:
          FUN__text__00400fc0(uVar2,pvVar7);
          goto LAB__text__004a4808;
        }
LAB__text__004a44c4:
        local_84 = 0;
        iVar5 = FUN__text__004aea70(param_1 + 8,pvVar7,uVar13,&local_84,0xffffffff);
        uVar9 = local_84;
        if ((iVar5 == 1) && (uVar13 != local_84)) {
LAB__text__004a47b4:
          iVar5 = 0x38;
          goto LAB__text__004a47f4;
        }
        __dest = pvVar7;
        if ((((param_4 & 1) != 0) &&
            (iVar6 = FUN__text__004aed30(pvVar7,uVar13,local_70,0,auStack_74,auStack_78,&iStack_7c,
                                         &local_80,0,0,1), iVar6 == 1)) &&
           (local_80 + iStack_7c <= uVar13)) {
          uVar4 = *local_68;
          uVar17 = uVar4 - 0x3040;
          if ((uVar17 < 2) || (uVar4 == 0xffff)) {
            local_b0 = local_80;
            if ((local_80 & 3) != 0) {
              local_b0 = (local_80 & 0xfffffffc) + 0xc;
            }
            if ((uVar17 < 2) || (uVar4 == 0xffff)) {
              local_b0 = local_b0 + *(int *)(local_68 + 0xc) * (uint)local_68[1] * 2;
              pvVar8 = (void *)FUN__text__00400f90(uVar2,local_b0,4);
            }
            else {
              local_b0 = 0;
              pvVar8 = (void *)FUN__text__00400f90(uVar2,0,4);
            }
            if (pvVar8 != (void *)0x0) {
              iVar6 = FUN__text__004a9d54(pvVar8,local_b0,pvVar7,uVar13,(int)local_68 - (int)pvVar7,
                                          local_80,(ulong)local_68[1] << 1,local_70);
              __dest = pvVar8;
              if (iVar6 != 1) {
                __dest = pvVar7;
                local_b0 = uVar13;
                pvVar7 = pvVar8;
              }
              uVar13 = local_b0;
              FUN__text__00400fc0(uVar2,pvVar7);
            }
          }
        }
        nn::os::LockMutex(pMVar1);
        pvVar7 = __dest;
        if (iVar5 != 1) goto LAB__text__004a4800;
        iVar6 = 0;
        uVar18 = uVar9 + uVar18;
        uVar9 = *(uint *)(plVar11 + 1);
        if (*(uint *)((long)plVar11 + 0xc) <= uVar9) {
LAB__text__004a4668:
          uVar19 = FUN__text__004ad700(plVar11);
          if (((uVar19 & 1) == 0) || (*(uint *)((long)plVar11 + 0xc) <= uVar9)) {
            iVar5 = 0x34;
            pvVar7 = __dest;
            goto LAB__text__004a4800;
          }
          uVar9 = *(uint *)(plVar11 + 1);
        }
LAB__text__004a4684:
        puVar20 = (undefined8 *)*plVar11;
        if (uVar9 != 0) {
          memmove(puVar20 + 3,puVar20,(ulong)(uVar9 * 0x18));
        }
        if (puVar20 != (undefined8 *)0x0) {
          puVar20[1] = 0;
          puVar20[2] = 0;
          *puVar20 = 0;
        }
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        plVar22 = (long *)*plVar11;
        if (plVar22 == (long *)0x0) {
          iVar5 = 0x34;
          pvVar7 = __dest;
          goto LAB__text__004a4800;
        }
        *plVar22 = (long)__dest;
        *(uint *)(plVar22 + 1) = uVar13;
        *(undefined4 *)(plVar22 + 2) = uVar2;
        *(undefined1 *)((long)plVar22 + 0xc) = 1;
LAB__text__004a46dc:
        *(int *)(param_2 + 0x34) = *(int *)(param_2 + 0x34) + 1;
        nn::os::UnlockMutex(pMVar1);
        uVar9 = *(uint *)(param_2 + 0x34);
        uVar13 = *(uint *)(param_2 + 0x38);
        uVar19 = uVar16 + 1;
        uVar17 = uVar18;
      } while (uVar9 < uVar13);
LAB__text__004a47a0:
      uVar16 = uVar16 + 1;
      param_3 = (param_3 - uVar18) + iVar6;
    }
    else {
      uVar16 = 0;
    }
    if (param_3 != 0) {
      local_70[0] = 0;
      FUN__text__004ae7a0(param_1 + 8,param_3,local_70);
      if (param_3 != local_70[0]) {
        iVar5 = 0x38;
        iVar21 = (int)uVar16;
joined_r0x004a47d4:
        if (iVar21 < 1) {
          return iVar5;
        }
        uVar16 = (uVar16 & 0xffffffff) + 1;
        do {
          if (*(int *)(*(long *)(param_2 + 0x20) + (ulong)((int)uVar16 - 2) * 0xc) != 0) {
            FUN__text__004a9ef0(param_1);
          }
          uVar16 = uVar16 - 1;
        } while (1 < uVar16);
        return iVar5;
      }
    }
    *(byte *)(param_2 + 0x68) = *(byte *)(param_2 + 0x68) | 4;
  }
  return 1;
}


