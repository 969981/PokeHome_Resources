/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00402fe0; name: FUN_.text__00402fe0
 */


void FUN__text__00402fe0(int param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  
  plVar1 = (long *)(*(ulong *)(&DAT_00ae8a50 + (long)param_1 * 0x638) & (ulong)param_2);
  if (plVar1 != (long *)0x0) {
    if (0x7d < *(uint *)((long)plVar1 + 0xc)) {
      if (*(uint *)((long)plVar1 + 0xc) == 0x7e) {
        FUN__text__004056e0();
        return;
      }
      FUN__text__00404510(param_1,plVar1);
      return;
    }
    if ((*(byte *)(plVar1 + 5) >> 2 & 1) != 0) {
      uVar2 = *(uint *)((long)plVar1 + 0x24);
      uVar5 = ((int)param_2 - (int)plVar1) - 0x80;
      uVar6 = 0;
      if (uVar2 != 0) {
        uVar6 = uVar5 / uVar2;
      }
      param_2 = (long *)((long)param_2 + (long)(int)(uVar6 * uVar2 - uVar5));
    }
    plVar8 = (long *)plVar1[8];
    lVar11 = *plVar8;
    if (lVar11 != 0) {
      lVar7 = FUN__text__00405b00(*(undefined4 *)(&DAT_00ae89c0 + (long)param_1 * 4));
      plVar8 = (long *)plVar1[8];
      if ((lVar11 != lVar7) && (*(int *)((long)plVar8 + 0xd1c) == 0)) {
        plVar8 = plVar1 + 3;
        do {
          lVar11 = *plVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == -1) {
          iVar10 = 1000;
          do {
            Yield();
            iVar10 = iVar10 + -1;
            do {
              lVar11 = *plVar8;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar4) {
                *plVar8 = -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          } while ((lVar11 == -1) && (iVar10 != 0));
          if (iVar10 == 0) {
            while (lVar11 == -1) {
              FUN__text__00405bf0();
              do {
                lVar11 = *plVar8;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                if (bVar4) {
                  *plVar8 = -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
          }
        }
        *param_2 = lVar11;
        iVar10 = (int)plVar1[4] + 1;
        *(int *)(plVar1 + 4) = iVar10;
        plVar1[3] = (long)param_2;
        if (iVar10 != (int)plVar1[1]) {
          return;
        }
        plVar8 = (long *)(plVar1[8] + 0xce0);
        do {
          lVar11 = *plVar8;
          *plVar1 = lVar11;
          while (*plVar8 == lVar11) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar4) {
              *plVar8 = (long)plVar1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              return;
            }
          }
          ClearExclusiveLocal();
        } while( true );
      }
    }
    lVar11 = *plVar1;
    if (lVar11 == 0) {
      if (*(uint *)(plVar1 + 2) < *(uint *)(plVar1 + 1)) {
        lVar11 = 0;
      }
      else {
        *(uint *)((long)plVar1 + 0x14) = *(uint *)(plVar1 + 1);
        lVar11 = plVar1[9];
        if ((long *)plVar8[(ulong)*(uint *)((long)plVar1 + 0xc) + 0x5a4] == plVar1) {
          plVar8[(ulong)*(uint *)((long)plVar1 + 0xc) + 0x5a4] = lVar11;
        }
        else {
          lVar7 = plVar1[10];
          *(long *)(lVar7 + 0x48) = lVar11;
          if (lVar11 != 0) {
            *(long *)(lVar11 + 0x50) = lVar7;
          }
        }
        plVar9 = plVar8 + (ulong)*(uint *)((long)plVar1 + 0xc) * 3 + 2;
        lVar11 = 0;
        if (*plVar9 != 0) {
          *(long **)(*plVar9 + 0x50) = plVar1;
          lVar11 = *plVar9;
        }
        plVar1[9] = lVar11;
        *plVar9 = (long)plVar1;
        plVar8[0x19d] = plVar8[0x19d] + -1;
        lVar11 = *plVar1;
      }
    }
    *param_2 = lVar11;
    *plVar1 = (long)param_2;
    iVar10 = *(int *)((long)plVar1 + 0x14) + -1;
    *(int *)((long)plVar1 + 0x14) = iVar10;
    if (iVar10 == (int)plVar1[4]) {
      lVar11 = plVar1[9];
      if ((long *)plVar8[(ulong)*(uint *)((long)plVar1 + 0xc) * 3 + 2] == plVar1) {
        plVar8[(ulong)*(uint *)((long)plVar1 + 0xc) * 3 + 2] = lVar11;
      }
      else {
        lVar7 = plVar1[10];
        *(long *)(lVar7 + 0x48) = lVar11;
        if (lVar11 != 0) {
          *(long *)(lVar11 + 0x50) = lVar7;
          FUN__text__00405840(param_1,plVar8,plVar1);
          return;
        }
      }
      FUN__text__00405840(param_1,plVar8,plVar1);
      return;
    }
  }
  return;
}


