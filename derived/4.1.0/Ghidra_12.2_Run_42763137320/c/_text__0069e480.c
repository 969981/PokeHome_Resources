/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069e480; name: FUN_.text__0069e480
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0069e480(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = _DAT_008a68e0;
  plVar1 = param_1 + 3;
  param_1[2] = (long)(param_1 + 1);
  param_1[3] = (long)plVar1;
  param_1[4] = (long)plVar1;
  lVar2 = param_2 + 0x18;
  *param_1 = lVar6 + 0x10;
  param_1[1] = (long)(param_1 + 1);
  lVar6 = *(long *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[5] = lVar6;
  lVar6 = *(long *)(param_2 + 0x20);
  bVar3 = lVar6 != lVar2;
  if (param_3 == (long *)0x0) {
    while (bVar3) {
      lVar4 = *(long *)(lVar6 + 0x10);
      plVar5 = (long *)FUN__text__006a0f04(0x18);
      if (plVar5 != (long *)0x0) {
        *plVar5 = (long)plVar5;
        plVar5[1] = (long)plVar5;
        plVar5[2] = lVar4;
        *plVar5 = *plVar1;
        plVar5[1] = (long)plVar1;
        *(long **)(*plVar1 + 8) = plVar5;
        *plVar1 = (long)plVar5;
      }
      lVar6 = *(long *)(lVar6 + 8);
      bVar3 = lVar6 != lVar2;
    }
  }
  else {
    while (bVar3) {
      lVar4 = (**(code **)(*param_3 + 0x78))(param_3,*(long *)(lVar6 + 0x10) + 0xb0,1);
      plVar5 = (long *)FUN__text__006a0f04(0x18);
      if (plVar5 != (long *)0x0) {
        *plVar5 = (long)plVar5;
        plVar5[1] = (long)plVar5;
        plVar5[2] = lVar4;
        *plVar5 = *plVar1;
        plVar5[1] = (long)plVar1;
        *(long **)(*plVar1 + 8) = plVar5;
        *plVar1 = (long)plVar5;
      }
      lVar6 = *(long *)(lVar6 + 8);
      bVar3 = lVar6 != lVar2;
    }
  }
  return;
}


