/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006f4610; name: FUN_.text__006f4610
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006f4610(long *param_1,undefined8 param_2,byte *param_3)

{
  long *plVar1;
  byte *pbVar2;
  ulong uVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  plVar1 = param_1 + 1;
  lVar11 = *(long *)(param_3 + 0x18);
  lVar9 = *param_1;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_3 + 0xc);
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)(param_3 + 0x10);
  (*(code *)*_DAT_008a7728)(plVar1);
  (*(code *)*_DAT_008a7758)((long)param_1 + 0xc);
  *(byte *)((long)param_1 + 0x25) = *param_3;
  if (*param_3 != 0) {
    uVar10 = 0;
    do {
      uVar3 = 0;
      if ((*(ushort *)(param_3 + 2) & 4) != 0) {
        uVar3 = uVar10;
      }
      pbVar2 = (byte *)(lVar11 + uVar3 * 0x20);
      (*DAT_00c607c0)(plVar1,uVar10 & 0xffffffff,*pbVar2 & 1);
      (*(code *)*_DAT_008a76b0)(lVar9);
      (*(code *)*_DAT_008a76b8)(lVar9,uVar10 & 0xffffffff);
      uVar5 = FUN__text__006f2310(pbVar2[1]);
      uVar6 = FUN__text__006f2310(pbVar2[2]);
      uVar7 = FUN__text__006f2310(pbVar2[4]);
      uVar8 = FUN__text__006f2310(pbVar2[5]);
      (*(code *)*_DAT_008a76c0)(lVar9,uVar5,uVar6,uVar7,uVar8);
      uVar5 = FUN__text__006f2300(pbVar2[3]);
      uVar6 = FUN__text__006f2300(pbVar2[6]);
      (*(code *)*_DAT_008a76c8)(lVar9,uVar5,uVar6);
      bVar4 = pbVar2[7];
      (*DAT_00c607f8)((long)param_1 + 0xc,uVar10 & 0xffffffff,bVar4 & 1,bVar4 >> 1 & 1,
                      bVar4 >> 2 & 1,bVar4 >> 3 & 1);
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 8;
    } while (uVar10 < *param_3);
  }
  if ((*(ushort *)(param_3 + 2) >> 3 & 1) != 0) {
    uVar5 = FUN__text__006f2320(param_3[1]);
    (*(code *)*_DAT_008a7738)(plVar1,uVar5);
  }
  *(undefined1 *)((long)param_1 + 0x24) = 1;
  return;
}


