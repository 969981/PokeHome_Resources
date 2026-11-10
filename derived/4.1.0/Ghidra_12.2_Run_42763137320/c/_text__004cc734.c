/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004cc734; name: FUN_.text__004cc734
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN__text__004cc734(int *param_1,undefined4 param_2,undefined8 param_3,ulong param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_2c [12];
  
  if (*param_1 != (int)param_4) {
    return 0;
  }
  if ((int)param_4 == 0) {
    lVar4 = *(long *)(param_1 + 2);
  }
  else if (*(char *)((long)param_1 + 0x12) == '\0') {
    lVar4 = FUN__text__004cc870(param_1,*(undefined8 *)(param_1 + 2),param_3,param_4,param_2,param_6
                                ,param_7);
  }
  else {
    lVar4 = FUN__text__004cc3d0(param_1,param_3,param_4 & 0xffffffff,param_2,param_2,auStack_2c);
  }
  if (lVar4 == 0) {
    return 0;
  }
  uVar2 = *(ushort *)(param_1 + 4);
  uVar3 = *(ushort *)(lVar4 + 10);
  if ((99 < uVar2) && (99 < uVar3)) {
    return *(undefined4 *)(lVar4 + 4);
  }
  lVar5 = *_DAT_008a45e8 * 0x5851f42d4c957f2d + 1;
  *_DAT_008a45e8 = lVar5;
  uVar1 = 0;
  if ((uint)(int)((double)(uint)((ulong)lVar5 >> 0x21) * 4.656612875245797e-06) <
      (uint)(ushort)(uVar3 * uVar2)) {
    uVar1 = *(undefined4 *)(lVar4 + 4);
  }
  return uVar1;
}


