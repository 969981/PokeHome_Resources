/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069e360; name: FUN_.text__0069e360
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0069e360(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = _DAT_008a68e0;
  plVar1 = param_1 + 3;
  param_1[2] = (long)(param_1 + 1);
  param_1[3] = (long)plVar1;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = lVar4 + 0x10;
  param_1[1] = (long)(param_1 + 1);
  param_1[4] = (long)plVar1;
  param_1[5] = param_2 + 8;
  if (*(short *)(param_2 + 0x2a) != 0) {
    uVar5 = 0;
    lVar4 = param_2 + 0x2c;
    do {
      lVar2 = (**(code **)(*param_3 + 0x78))(param_3,lVar4,1);
      if ((lVar2 != 0) && (plVar3 = (long *)FUN__text__006a0f04(0x18), plVar3 != (long *)0x0)) {
        *plVar3 = (long)plVar3;
        plVar3[1] = (long)plVar3;
        plVar3[2] = lVar2;
        *plVar3 = *plVar1;
        plVar3[1] = (long)plVar1;
        *(long **)(*plVar1 + 8) = plVar3;
        *plVar1 = (long)plVar3;
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x18;
    } while (uVar5 < *(ushort *)(param_2 + 0x2a));
  }
  return;
}


