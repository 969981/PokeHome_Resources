/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f0bd0; name: FUN_.text__004f0bd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004f0bd0(undefined4 param_1,long param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  int *piVar3;
  MutexType *pMVar4;
  int *piVar5;
  undefined8 *puVar6;
  long *plVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  char cVar11;
  bool bVar12;
  uint uVar13;
  undefined8 *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  long *plVar25;
  undefined4 uVar26;
  undefined8 *local_80;
  long *local_78;
  undefined4 local_68;
  undefined4 local_64;
  
  lVar1 = param_2 + 0x60;
  iVar15 = FUN__text__004ed7ec(lVar1,param_3,param_4,&local_78);
  if (iVar15 == 0x2d) {
    iVar15 = (int)param_4 + (int)param_3;
    plVar2 = (long *)(param_2 + 0x78);
    do {
      iVar16 = (int)local_78[2] - (int)param_3;
      iVar17 = (**(code **)(*local_78 + 0x10))();
      plVar23 = local_78;
      if (iVar17 == 0) {
        local_80 = (undefined8 *)0x0;
        uVar18 = FUN__text__004f111c(param_1,param_2,local_78,(long)local_78 + 0x14,iVar16,&local_80
                                    );
        puVar14 = local_80;
        if ((uVar18 & 1) != 0) {
          if ((*(byte *)(param_2 + 0x5a) >> 1 & 1) == 0) {
            lVar24 = plVar23[4];
            iVar16 = *(int *)((long)plVar23 + 0x24);
            puVar19 = (undefined8 *)FUN__text__00400f80(0,0x28);
            if (puVar19 == (undefined8 *)0x0) {
              (**(code **)*puVar14)(puVar14,0);
            }
            else {
              puVar19[3] = puVar14;
              *(int *)(puVar19 + 2) = iVar16 + (int)lVar24;
              *(undefined1 *)(puVar19 + 4) = 0;
              *puVar19 = 0x88fba8;
              FUN__text__004ed750(lVar1,puVar19);
              plVar21 = (long *)plVar23[8];
              if (plVar21 != (long *)0x0) {
                puVar6 = (undefined8 *)0x0;
                if (puVar14 != (undefined8 *)0x0) {
                  puVar6 = puVar14 + -0x71;
                }
                do {
                  plVar23[8] = plVar21[3];
                  plVar21[3] = 0;
                  plVar21[1] = (long)puVar6;
                  *(undefined1 *)(puVar19 + 4) = 1;
                  if (*plVar2 == 0) {
                    *plVar2 = (long)plVar21;
                    plVar21[3] = 0;
                    iVar16 = *(int *)(*plVar21 + 4);
                    if (iVar16 == 4) goto LAB__text__004f0d90;
LAB__text__004f0df8:
                    if (iVar16 == 3) {
                      FUN__text__004f1dfc(puVar14 + -0x71);
                    }
                  }
                  else {
                    plVar21[3] = *plVar2;
                    *plVar2 = (long)plVar21;
                    iVar16 = *(int *)(*plVar21 + 4);
                    if (iVar16 != 4) goto LAB__text__004f0df8;
LAB__text__004f0d90:
                    *(byte *)((long)puVar14 + 0x3c) = *(byte *)((long)puVar14 + 0x3c) | 1;
                  }
                  plVar21 = (long *)plVar23[8];
                } while (plVar21 != (long *)0x0);
              }
            }
          }
          else {
            (**(code **)*local_80)(local_80,*(undefined4 *)(param_2 + 0x54));
            plVar21 = (long *)plVar23[8];
            if (plVar21 != (long *)0x0) {
              do {
                plVar23[8] = plVar21[3];
                plVar21[3] = 0;
                plVar21[1] = (long)(puVar14 + -0x71);
                lVar24 = *plVar21;
                uVar9 = *(undefined4 *)(lVar24 + 4);
                if (*(long *)(lVar24 + 8) == 0) {
                  uVar26 = 0;
                }
                else {
                  local_64 = *(undefined4 *)(lVar24 + 0x18);
                  local_68 = 0;
                  FUN__text__0041a060((float)(iVar15 - (int)plVar21[2]),(long *)(lVar24 + 8),
                                      &local_64,&local_68);
                  *(undefined4 *)(lVar24 + 0x18) = local_64;
                  uVar26 = local_68;
                }
                FUN__text__004f18b4(uVar26,puVar14 + -0x71,uVar9);
                FUN__text__00400fc0(0,plVar21);
                plVar21 = (long *)plVar23[8];
              } while (plVar21 != (long *)0x0);
            }
          }
        }
      }
      else if (iVar17 == 1) {
        (*(code *)**(undefined8 **)local_78[3])((undefined8 *)local_78[3],iVar16);
        if (((char)plVar23[4] != '\0') && ((long *)*plVar2 != (long *)0x0)) {
          plVar21 = (long *)*plVar2;
          plVar25 = (long *)0x0;
          do {
            while( true ) {
              plVar22 = plVar21;
              lVar20 = plVar22[1];
              lVar24 = 0;
              if (lVar20 != 0) {
                lVar24 = lVar20 + 0x388;
              }
              if (lVar24 != plVar23[3]) break;
              lVar24 = *plVar22;
              uVar9 = *(undefined4 *)(lVar24 + 4);
              if (*(long *)(lVar24 + 8) == 0) {
                uVar26 = 0;
              }
              else {
                local_64 = 0;
                local_80 = (undefined8 *)CONCAT44(local_80._4_4_,*(undefined4 *)(lVar24 + 0x18));
                FUN__text__0041a060((float)(iVar15 - (int)plVar22[2]),(long *)(lVar24 + 8),&local_80
                                    ,&local_64);
                *(undefined4 *)(lVar24 + 0x18) = local_80._0_4_;
                uVar26 = local_64;
              }
              FUN__text__004f18b4(uVar26,lVar20,uVar9);
              plVar21 = (long *)plVar22[3];
              plVar7 = plVar2;
              if ((long *)*plVar2 != plVar22) {
                plVar7 = plVar25 + 3;
              }
              *plVar7 = (long)plVar21;
              FUN__text__00400fc0(0,plVar22);
              if (plVar21 == (long *)0x0) goto LAB__text__004f10d0;
            }
            plVar21 = (long *)plVar22[3];
            plVar25 = plVar22;
          } while ((long *)plVar22[3] != (long *)0x0);
        }
      }
      else if (iVar17 == 3) {
        uVar8 = *(uint *)((long)local_78 + 0x14);
        lVar24 = *_DAT_008a45c8;
        piVar3 = (int *)(lVar24 + 0x168);
        pMVar4 = (MutexType *)(lVar24 + 0x178);
        while( true ) {
          while (iVar17 = *piVar3, -1 < iVar17) {
            while (*piVar3 == iVar17) {
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar12) {
                *piVar3 = iVar17 + 1;
                cVar11 = ExclusiveMonitorsStatus();
              }
              if (cVar11 == '\0') goto LAB__text__004f0ef4;
            }
            ClearExclusiveLocal();
          }
          nn::os::LockMutex(pMVar4);
          if (*piVar3 < 0) break;
          nn::os::UnlockMutex(pMVar4);
        }
LAB__text__004f0ef4:
        uVar10 = *(uint *)(lVar24 + 0x1d0);
        if (uVar10 == 0) {
          plVar23 = (long *)0x0;
        }
        else {
          uVar13 = 0;
          if (uVar10 != 0) {
            uVar13 = uVar8 / uVar10;
          }
          plVar23 = *(long **)(*(long *)(lVar24 + 0x1c8) + (ulong)(uVar8 - uVar13 * uVar10) * 8);
          if (plVar23 != (long *)0x0) {
LAB__text__004f0f10:
            if (*(uint *)(plVar23 + 2) != uVar8) goto code_r0x004f0f1c;
            piVar5 = (int *)((long)plVar23 + 0x14);
            do {
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar5,0x10);
              if (bVar12) {
                *piVar5 = *piVar5 + 1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
          }
        }
LAB__text__004f0ff8:
        while (iVar17 = *piVar3, -1 < iVar17) {
          while (*piVar3 == iVar17) {
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar12) {
              *piVar3 = iVar17 + -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
            if (cVar11 == '\0') {
              if ((iVar17 + -1 == 0) && (0 < *(int *)(lVar24 + 0x198))) {
                nn::os::SignalEvent((EventType *)(lVar24 + 0x1a0));
              }
              goto LAB__text__004f1060;
            }
          }
          ClearExclusiveLocal();
        }
        nn::os::UnlockMutex(pMVar4);
LAB__text__004f1060:
        lVar24 = FUN__text__004ec6d4(*(undefined8 *)(param_2 + 0x10));
        lVar20 = FUN__text__004ec6e4(*(undefined8 *)(param_2 + 0x10));
        if (plVar23 != (long *)0x0) {
          FUN__text__004b27a0(plVar23,lVar24,*(undefined8 *)(lVar24 + 0x58),
                              *(undefined4 *)(lVar20 + 0x14),0,lVar20,iVar16,1);
          piVar3 = (int *)((long)plVar23 + 0x14);
          do {
            iVar16 = *piVar3;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar12) {
              *piVar3 = iVar16 + -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (iVar16 + -1 == 0) {
            (**(code **)(*plVar23 + 0x20))(plVar23);
          }
        }
      }
LAB__text__004f10d0:
      plVar23 = local_78;
      if (local_78 != (long *)0x0) {
        (**(code **)*local_78)(local_78);
        FUN__text__00400fc0(0,plVar23);
      }
      iVar16 = FUN__text__004ed7ec(lVar1,param_3 & 0xffffffff,(int)param_4,&local_78);
    } while (iVar16 == 0x2d);
  }
  return;
code_r0x004f0f1c:
  plVar23 = (long *)plVar23[1];
  if (plVar23 == (long *)0x0) goto LAB__text__004f0ff8;
  goto LAB__text__004f0f10;
}


