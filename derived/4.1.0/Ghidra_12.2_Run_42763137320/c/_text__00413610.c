/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00413610; name: FUN_.text__00413610
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__00413610(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 *puVar4;
  long *plVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  long lVar9;
  void *__s;
  
  lVar9 = nn::os::GetSystemTickFrequency();
  *_DAT_008a46b8 = (float)((double)lVar9 * 0.001);
  puVar4 = _DAT_008a48a0;
  plVar3 = _DAT_008a4880;
  if (*_DAT_008a4880 == 0) {
    *_DAT_008a48a0 = 0;
    puVar6 = _DAT_008a48c0;
    *_DAT_008a48c0 = 0;
    puVar4[1] = 0;
    puVar6[1] = 0;
    puVar4[2] = 0;
    puVar6[2] = 0;
    puVar4[3] = 0;
    puVar6[3] = 0;
    plVar5 = _DAT_008a48a8;
    lVar9 = *param_1;
    *(undefined4 *)((long)_DAT_008a48a8 + 0xc) = 1;
    if (lVar9 == 0) {
      *(undefined4 *)(plVar5 + 1) = 0;
      *plVar5 = 0;
    }
    else {
      *plVar5 = param_1[1];
      *(int *)(plVar5 + 1) = (int)param_1[2];
    }
    iVar8 = FUN__text__004140a0(_DAT_008a48c8,*(undefined4 *)((long)param_1 + 0x14),(int)param_1[3])
    ;
    if (iVar8 == 1) {
      nn::os::InitializeEvent(_DAT_008a48b0,0,1);
      *plVar3 = *param_1;
      lVar9 = param_1[1];
      lVar1 = param_1[2];
      lVar2 = param_1[4];
      plVar3[3] = param_1[3];
      plVar3[4] = lVar2;
      plVar3[1] = lVar9;
      plVar3[2] = lVar1;
      iVar8 = FUN__text__00411e50(0x2000);
      if (iVar8 != 1) {
        FUN__text__004137f0();
        return iVar8;
      }
      __s = (void *)FUN__text__00400f80(0x10,0x38000);
      *_DAT_008a4888 = __s;
      if (__s == (void *)0x0) {
        FUN__text__004137f0();
        return 0x34;
      }
      memset(__s,0,0x38000);
      lVar9 = _DAT_008a48d0;
      *_DAT_008a4890 = 0xfff;
      *(undefined1 *)(lVar9 + 0x1e4) = 0;
      puVar7 = _DAT_008a48d8;
      *(undefined4 *)(lVar9 + 0x1e0) = 3;
      *(undefined8 *)(lVar9 + 0x1d8) = 0x718c4f;
      *puVar7 = 1;
      return 1;
    }
  }
  else {
    iVar8 = 3;
  }
  return iVar8;
}


