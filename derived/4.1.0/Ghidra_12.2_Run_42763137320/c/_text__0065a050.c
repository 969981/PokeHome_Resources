/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065a050; name: FUN_.text__0065a050
 */


void FUN__text__0065a050(long param_1,long param_2,uint param_3)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
  lVar9 = *(long *)(param_1 + 0xd8);
  if (lVar9 == 0) {
    return;
  }
  auVar12 = FUN__text__0066c6a8();
  lVar1 = auVar12._0_8_ + param_2 / 1000;
  uVar3 = auVar12._8_4_ + ((int)param_2 + (int)(param_2 / 1000) * -1000) * 1000;
  if (999999 < (int)uVar3) {
    lVar1 = lVar1 + 1;
    uVar3 = uVar3 - 1000000;
  }
  uVar7 = auVar12._8_8_ & 0xffffffff00000000 | (ulong)uVar3;
  FUN__text__0065ca34(param_1,(ulong)param_3);
  lVar11 = param_1 + (ulong)param_3 * 0x30;
  puVar2 = (undefined8 *)(param_1 + 0x12d8);
  *(long *)(lVar11 + 0x1310) = lVar1;
  *(ulong *)(lVar11 + 0x1318) = uVar7;
  *(uint *)(lVar11 + 0x1320) = param_3;
  lVar5 = FUN__text__00656c60(puVar2);
  if ((lVar5 != 0) && (plVar10 = (long *)*puVar2, plVar10 != (long *)0x0)) {
    iVar4 = FUN__text__0066c6d8(*(undefined8 *)(*plVar10 + 0x18),*(undefined8 *)(*plVar10 + 0x20),
                                *(undefined8 *)(lVar11 + 0x1310),*(undefined8 *)(lVar11 + 0x1318));
    if (iVar4 < 1) {
      do {
        plVar8 = plVar10;
        plVar10 = (long *)plVar8[2];
        if (plVar10 == (long *)0x0) break;
        iVar4 = FUN__text__0066c6d8(*(undefined8 *)(*plVar10 + 0x18),
                                    *(undefined8 *)(*plVar10 + 0x20),
                                    *(undefined8 *)(lVar11 + 0x1310),
                                    *(undefined8 *)(lVar11 + 0x1318));
      } while (iVar4 < 1);
      goto LAB__text__0065a138;
    }
  }
  plVar8 = (long *)0x0;
LAB__text__0065a138:
  lVar5 = param_1 + (ulong)param_3 * 0x30 + 0x12f8;
  FUN__text__00656b20(puVar2,plVar8,lVar5,lVar5);
  if ((*(long *)(param_1 + 0x1290) != 0) || (*(int *)(param_1 + 0x1298) != 0)) {
    iVar4 = FUN__text__0066c6d8(lVar1,uVar7,*(long *)(param_1 + 0x1290),
                                *(undefined8 *)(param_1 + 0x1298));
    if (0 < iVar4) {
      return;
    }
    iVar4 = FUN__text__0066c120(*(undefined8 *)(lVar9 + 0xb0),param_1 + 0x12a0);
    if (iVar4 != 0) {
      FUN__text__00666f74(param_1,0x70f1b1,iVar4);
    }
  }
  *(long *)(param_1 + 0x1290) = lVar1;
  *(ulong *)(param_1 + 0x1298) = uVar7;
  *(long *)(param_1 + 0x12d0) = param_1;
  uVar6 = FUN__text__0066bf98(lVar1,uVar7,*(undefined8 *)(lVar9 + 0xb0),param_1 + 0x12a0);
  *(undefined8 *)(lVar9 + 0xb0) = uVar6;
  return;
}


