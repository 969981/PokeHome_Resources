/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00411e50; name: FUN_.text__00411e50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00411e50(uint param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong __n;
  ulong uVar8;
  ulong uVar9;
  
  plVar3 = _DAT_008a4878;
  uVar6 = (ulong)param_1 << 4;
  uVar9 = (ulong)(param_1 - 1);
  _DAT_008a4878[1] = uVar9;
  plVar3[3] = 0;
  __n = uVar6 & 0xfffffff0;
  plVar3[2] = 0;
  pvVar4 = (void *)FUN__text__00400f80(5,uVar6);
  *plVar3 = (long)pvVar4;
  if (param_1 == 0) {
    if (pvVar4 != (void *)0x0) {
      memset(pvVar4,0,0);
      plVar3[5] = 0xffffffff;
      plVar3[7] = 0;
      plVar3[6] = 0;
      pvVar4 = (void *)FUN__text__00400f80(5,0);
      plVar3[4] = (long)pvVar4;
      if (pvVar4 != (void *)0x0) {
        memset(pvVar4,0,0);
        plVar3[9] = 0xffffffff;
        plVar3[0xb] = 0;
        plVar3[10] = 0;
        pvVar4 = (void *)FUN__text__00400f80(5,0);
        plVar3[8] = (long)pvVar4;
        if (pvVar4 != (void *)0x0) {
          memset(pvVar4,0,0);
          plVar3[0xd] = 0xffffffff;
          plVar3[0xf] = 0;
          plVar3[0xe] = 0;
          pvVar4 = (void *)FUN__text__00400f80(5,0);
          plVar3[0xc] = (long)pvVar4;
          if (pvVar4 != (void *)0x0) {
            memset(pvVar4,0,0);
            return 1;
          }
        }
      }
    }
  }
  else if (pvVar4 != (void *)0x0) {
    uVar8 = (ulong)param_1;
    memset(pvVar4,0,__n);
    if (uVar8 == 1) {
      uVar5 = 0;
    }
    else {
      lVar7 = 0;
      uVar5 = 0;
      do {
        lVar1 = uVar5 + 1;
        *(undefined8 *)(*plVar3 + lVar7) = 0xffffffffffffffff;
        *(ulong *)(*plVar3 + lVar7 + 8) = uVar5;
        uVar5 = uVar5 + 2;
        *(undefined8 *)(*plVar3 + lVar7 + 0x10) = 0xffffffffffffffff;
        lVar2 = *plVar3 + lVar7;
        lVar7 = lVar7 + 0x20;
        *(long *)(lVar2 + 0x18) = lVar1;
      } while (uVar5 != (uVar8 & 0xfffffffe));
    }
    if ((param_1 & 1) != 0) {
      *(undefined8 *)(*plVar3 + uVar5 * 0x10) = 0xffffffffffffffff;
      *(ulong *)(*plVar3 + uVar5 * 0x10 + 8) = uVar5;
    }
    plVar3[5] = uVar9;
    plVar3[7] = 0;
    plVar3[6] = 0;
    pvVar4 = (void *)FUN__text__00400f80(5,uVar6);
    plVar3[4] = (long)pvVar4;
    if (pvVar4 != (void *)0x0) {
      memset(pvVar4,0,__n);
      if (uVar8 == 1) {
        uVar5 = 0;
      }
      else {
        lVar7 = 0;
        uVar5 = 0;
        do {
          lVar1 = uVar5 + 1;
          *(undefined8 *)(plVar3[4] + lVar7) = 0xffffffffffffffff;
          *(ulong *)(plVar3[4] + lVar7 + 8) = uVar5;
          uVar5 = uVar5 + 2;
          *(undefined8 *)(plVar3[4] + lVar7 + 0x10) = 0xffffffffffffffff;
          lVar2 = plVar3[4] + lVar7;
          lVar7 = lVar7 + 0x20;
          *(long *)(lVar2 + 0x18) = lVar1;
        } while (uVar5 != (uVar8 & 0xfffffffe));
      }
      if ((param_1 & 1) != 0) {
        *(undefined8 *)(plVar3[4] + uVar5 * 0x10) = 0xffffffffffffffff;
        *(ulong *)(plVar3[4] + uVar5 * 0x10 + 8) = uVar5;
      }
      plVar3[9] = uVar9;
      plVar3[0xb] = 0;
      plVar3[10] = 0;
      pvVar4 = (void *)FUN__text__00400f80(5,uVar6);
      plVar3[8] = (long)pvVar4;
      if (pvVar4 != (void *)0x0) {
        memset(pvVar4,0,__n);
        if (uVar8 == 1) {
          uVar5 = 0;
        }
        else {
          lVar7 = 0;
          uVar5 = 0;
          do {
            lVar1 = uVar5 + 1;
            *(undefined8 *)(plVar3[8] + lVar7) = 0xffffffffffffffff;
            *(ulong *)(plVar3[8] + lVar7 + 8) = uVar5;
            uVar5 = uVar5 + 2;
            *(undefined8 *)(plVar3[8] + lVar7 + 0x10) = 0xffffffffffffffff;
            lVar2 = plVar3[8] + lVar7;
            lVar7 = lVar7 + 0x20;
            *(long *)(lVar2 + 0x18) = lVar1;
          } while (uVar5 != (uVar8 & 0xfffffffe));
        }
        if ((param_1 & 1) != 0) {
          *(undefined8 *)(plVar3[8] + uVar5 * 0x10) = 0xffffffffffffffff;
          *(ulong *)(plVar3[8] + uVar5 * 0x10 + 8) = uVar5;
        }
        plVar3[0xd] = uVar9;
        plVar3[0xf] = 0;
        plVar3[0xe] = 0;
        pvVar4 = (void *)FUN__text__00400f80(5,uVar6);
        plVar3[0xc] = (long)pvVar4;
        if (pvVar4 != (void *)0x0) {
          memset(pvVar4,0,__n);
          if (uVar8 == 1) {
            uVar6 = 0;
          }
          else {
            lVar7 = 0;
            uVar6 = 0;
            do {
              lVar1 = uVar6 + 1;
              *(undefined8 *)(plVar3[0xc] + lVar7) = 0xffffffffffffffff;
              *(ulong *)(plVar3[0xc] + lVar7 + 8) = uVar6;
              uVar6 = uVar6 + 2;
              *(undefined8 *)(plVar3[0xc] + lVar7 + 0x10) = 0xffffffffffffffff;
              lVar2 = plVar3[0xc] + lVar7;
              lVar7 = lVar7 + 0x20;
              *(long *)(lVar2 + 0x18) = lVar1;
            } while (uVar6 != (uVar8 & 0xfffffffe));
          }
          if ((param_1 & 1) != 0) {
            *(undefined8 *)(plVar3[0xc] + uVar6 * 0x10) = 0xffffffffffffffff;
            *(ulong *)(plVar3[0xc] + uVar6 * 0x10 + 8) = uVar6;
          }
          return 1;
        }
      }
    }
  }
  return 0x34;
}


