/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00489034; name: FUN_.text__00489034
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00489034(long *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_1[0x10] != 0) {
    FUN__text__00400fc0(0);
    param_1[0x10] = 0;
  }
  plVar1 = _DAT_008a47e8;
  lVar4 = *param_1;
  lVar2 = lVar4;
  if ((int)param_1[1] != 0) {
    do {
      while (uVar5 = *(undefined8 *)(lVar2 + 8), (*(ushort *)(lVar2 + 2) & 0xff9c) != 0) {
        FUN__text__0048c118(uVar5,plVar1);
        FUN__text__0048b760(uVar5);
        (**(code **)(*plVar1 + 0x18))(plVar1,uVar5);
        lVar4 = *param_1;
        lVar2 = lVar2 + 0x10;
        if (lVar2 == lVar4 + (ulong)*(uint *)(param_1 + 1) * 0x10) goto LAB__text__0048911c;
      }
      FUN__text__00400fc0(0,uVar5);
      lVar4 = *param_1;
      lVar2 = lVar2 + 0x10;
    } while (lVar2 != lVar4 + (ulong)*(uint *)(param_1 + 1) * 0x10);
  }
LAB__text__0048911c:
  if (lVar4 != 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    FUN__text__00400fc0(0,lVar4);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  lVar4 = param_1[4];
  lVar2 = lVar4;
  if ((int)param_1[5] != 0) {
    do {
      FUN__text__00400fc0(0,*(undefined8 *)(lVar2 + 8));
      lVar4 = param_1[4];
      lVar2 = lVar2 + 0x10;
    } while (lVar2 != lVar4 + (ulong)*(uint *)(param_1 + 5) * 0x10);
  }
  if (lVar4 != 0) {
    *(undefined4 *)(param_1 + 5) = 0;
    FUN__text__00400fc0(0,lVar4);
    param_1[4] = 0;
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
  }
  lVar2 = param_1[2];
  uVar3 = (ulong)*(uint *)(param_1 + 3);
  if (*(uint *)(param_1 + 3) != 0) {
    lVar4 = lVar2;
    do {
      if (*(long *)(lVar4 + 8) != 0) {
        *(undefined4 *)(lVar4 + 0x10) = 0;
        FUN__text__00400fc0(0,*(long *)(lVar4 + 8));
        *(undefined8 *)(lVar4 + 8) = 0;
        *(undefined4 *)(lVar4 + 0x14) = 0;
        lVar2 = param_1[2];
        uVar3 = (ulong)*(uint *)(param_1 + 3);
      }
      lVar4 = lVar4 + 0x18;
    } while (lVar4 != lVar2 + uVar3 * 0x18);
  }
  if (lVar2 != 0) {
    *(undefined4 *)(param_1 + 3) = 0;
    FUN__text__00400fc0(0);
    param_1[2] = 0;
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
  }
  return;
}


