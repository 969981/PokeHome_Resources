/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047dae0; name: FUN_.text__0047dae0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0047dae0(undefined8 param_1,byte param_2,ulong param_3,void *param_4)

{
  size_t __n;
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  void *__dest;
  float *pfVar7;
  uint uVar8;
  long *plVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  
  puVar1 = _DAT_008a45e0;
  lVar6 = FUN__text__00447b30(*_DAT_008a45e0,param_1);
  if ((lVar6 == 0) || (plVar9 = *(long **)(lVar6 + 0x20), plVar9 == (long *)0x0)) {
    lVar6 = FUN__text__00447b30(*puVar1,param_1);
    if (lVar6 == 0) {
      return 0x1f;
    }
    plVar9 = *(long **)(lVar6 + 0x20);
    if (plVar9 == (long *)0x0) {
      plVar9 = (long *)FUN__text__00400f80(4,0xa0);
      if (plVar9 == (long *)0x0) {
        return 0x34;
      }
      FUN__text__0047d448();
      *(long **)(lVar6 + 0x20) = plVar9;
      plVar9[1] = lVar6;
      iVar5 = (**(code **)(*plVar9 + 0x10))(plVar9,*(undefined8 *)(lVar6 + 0x58));
      if (iVar5 != 1) {
        (**(code **)*plVar9)(plVar9);
        FUN__text__00400fc0(4,plVar9);
        *(undefined8 *)(lVar6 + 0x20) = 0;
        return 0x34;
      }
    }
  }
  plVar10 = plVar9 + 4;
  *(byte *)((long)plVar9 + 0x94) = param_2 & 1;
  if (*plVar10 != 0) {
    FUN__text__00400fc0(4);
    plVar9[5] = 0;
    plVar9[6] = 0;
    *plVar10 = 0;
  }
  if (param_4 != (void *)0x0) {
    if ((param_3 & 0xff) == 0) {
      return 0x4e;
    }
    uVar8 = ((uint)param_3 & 0xff) * 4 + 0xc & 0x7f0;
    __dest = (void *)FUN__text__00400f90(4,uVar8 << 1,0x10);
    *plVar10 = (long)__dest;
    if (__dest == (void *)0x0) {
      return 2;
    }
    *(uint *)(plVar9 + 7) = (uint)param_3;
    plVar9[5] = (long)__dest;
    plVar9[6] = (long)__dest + (ulong)uVar8;
    __n = (param_3 & 0xff) << 2;
    memcpy(__dest,param_4,__n);
    memcpy((void *)plVar9[6],(void *)plVar9[5],__n);
    param_3 = param_3 & 0xff;
    pfVar7 = (float *)plVar9[6];
    do {
      fVar12 = *pfVar7 * 0.05;
      fVar11 = 0.0;
      bVar2 = false;
      bVar3 = false;
      bVar4 = false;
      if (-37.0 <= fVar12) {
        bVar2 = false;
        bVar3 = false;
        bVar4 = true;
        if (!NAN(fVar12)) {
          bVar2 = fVar12 < 37.0;
          bVar3 = fVar12 == 37.0;
          bVar4 = false;
        }
      }
      if (bVar3 || bVar2 != bVar4) {
        uVar8 = (uint)(*pfVar7 * 1393317.6 + 1.0653532e+09);
        fVar11 = (float)(uVar8 & 0x7fffff | 0x3f800000);
        fVar11 = (fVar11 * (fVar11 * 0.32518977 + 0.020805772) + 0.65304345) *
                 (float)(uVar8 & 0xff800000);
      }
      param_3 = param_3 - 1;
      *pfVar7 = fVar11;
      pfVar7 = pfVar7 + 1;
    } while (param_3 != 0);
  }
  return 1;
}


