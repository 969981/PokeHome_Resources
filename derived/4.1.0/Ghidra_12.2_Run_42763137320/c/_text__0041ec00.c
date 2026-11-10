/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0041ec00; name: FUN_.text__0041ec00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0041ec00(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  float *pfVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  
  bVar4 = *(byte *)(param_1 + 1);
  uVar9 = (uint)*(ushort *)(param_1 + 2);
  uVar3 = *_DAT_008a4b70;
  if (*(ushort *)(param_1 + 2) < uVar3) {
    uVar9 = uVar3 & 0xffff;
    *(short *)(param_1 + 2) = (short)uVar3;
  }
  pfVar7 = _DAT_008a46b8;
  if ((bVar4 < 0x25) && (uVar3 == uVar9)) {
    plVar1 = &DAT_00aea318 + (bVar4 - 1);
    plVar8 = (long *)*plVar1;
    if (plVar8 != (long *)0x0) {
      lVar11 = 0;
      do {
        plVar2 = plVar8 + 1;
        do {
          if ((int)*plVar2 != 0) {
            ClearExclusiveLocal();
            if (lVar11 == 0) {
              lVar11 = nn::os::GetSystemTick();
              lVar11 = lVar11 + (long)(*pfVar7 * 0.01);
              lVar10 = nn::os::GetSystemTick();
              if (lVar11 <= lVar10) goto LAB__text__0041ed28;
            }
            else {
              lVar10 = nn::os::GetSystemTick();
              if (lVar11 <= lVar10) {
LAB__text__0041ed28:
                FUN__text__00405bf0();
                goto LAB__text__0041ec98;
              }
            }
            Yield();
            goto LAB__text__0041ec98;
          }
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *(int *)plVar2 = 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        lVar10 = *plVar8;
        while ((long *)*plVar1 == plVar8) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar10;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB__text__0041ed5c;
        }
        ClearExclusiveLocal();
        *(int *)plVar2 = 0;
LAB__text__0041ec98:
        plVar8 = (long *)*plVar1;
      } while (plVar8 != (long *)0x0);
    }
  }
  plVar8 = (long *)FUN__text__00400f90(5,(uint)bVar4 * (uint)*(ushort *)(param_1 + 2) * 4 + 0x20,
                                       0x10);
  if (plVar8 == (long *)0x0) {
    return 0x34;
  }
  *(undefined4 *)(plVar8 + 1) = 1;
LAB__text__0041ed5c:
  *(undefined4 *)((long)plVar8 + 0xc) = 0;
  *param_1 = (long)(plVar8 + 4);
  *(undefined2 *)((long)param_1 + 0x12) = 0;
  return 1;
}


