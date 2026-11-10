/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b1570; name: FUN_.text__006b1570
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006b1570(long param_1,short *param_2,long param_3,int *param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  short sVar5;
  ulong uVar6;
  int iVar7;
  
  lVar3 = nn::util::BinaryFileHeader::GetFirstBlock();
  uVar4 = *(undefined8 *)
           (*(long *)(*(long *)(lVar3 + 0x20) + (long)param_5 * 0x40 +
                     *(long *)(_DAT_008a5970 + ((ulong)*(uint *)(param_1 + 8) & 7) * 8)) + 0x68);
  FUN__text__006ebdd8(param_2);
  iVar2 = FUN__text__006f3f40(uVar4,0,0,0x7178de);
  if (iVar2 < 0) {
    iVar7 = 0;
  }
  else {
    FUN__text__006ebdbc(param_3);
    iVar7 = 8;
    *(short *)(param_3 + 2) = (short)iVar2;
    *(undefined2 *)(param_3 + 4) = 0;
    *(undefined8 *)(param_3 + 8) = 0x170500000000;
    *(undefined8 *)(param_3 + 0x10) = 0x7178de;
  }
  bVar1 = iVar2 >= 0;
  uVar6 = (ulong)bVar1;
  iVar2 = FUN__text__006f3f40(uVar4,0,0,0x712239);
  if (-1 < iVar2) {
    lVar3 = param_3 + uVar6 * 0x28;
    FUN__text__006ebdbc(lVar3);
    uVar6 = (ulong)(bVar1 + 1);
    *(short *)(lVar3 + 2) = (short)iVar2;
    *(int *)(lVar3 + 8) = iVar7;
    *(undefined4 *)(lVar3 + 0xc) = 0x1805;
    iVar7 = iVar7 + 0xc;
    *(undefined8 *)(lVar3 + 0x10) = 0x712239;
    *(undefined2 *)(lVar3 + 4) = 0;
  }
  iVar2 = FUN__text__006f3f40(uVar4,0,0,0x715960);
  if (-1 < iVar2) {
    lVar3 = param_3 + uVar6 * 0x28;
    FUN__text__006ebdbc(lVar3);
    *(int *)(lVar3 + 8) = iVar7;
    *(undefined4 *)(lVar3 + 0xc) = 0x1705;
    uVar6 = (ulong)((int)uVar6 + 1);
    iVar7 = iVar7 + 8;
    *(short *)(lVar3 + 2) = (short)iVar2;
    *(undefined8 *)(lVar3 + 0x10) = 0x715960;
    *(undefined2 *)(lVar3 + 4) = 0;
  }
  sVar5 = (short)uVar6;
  iVar2 = FUN__text__006f3f40(uVar4,0,0,0x70bed1);
  if (-1 < iVar2) {
    lVar3 = param_3 + uVar6 * 0x28;
    FUN__text__006ebdbc(lVar3);
    *(int *)(lVar3 + 8) = iVar7;
    *(undefined4 *)(lVar3 + 0xc) = 0x1705;
    sVar5 = sVar5 + 1;
    iVar7 = iVar7 + 8;
    *(short *)(lVar3 + 2) = (short)iVar2;
    *(undefined8 *)(lVar3 + 0x10) = 0x70bed1;
    *(undefined2 *)(lVar3 + 4) = 0;
  }
  FUN__text__006ebdd0(param_4);
  *param_4 = iVar7;
  param_4[1] = 0;
  *param_2 = sVar5;
  param_2[1] = 1;
  *(long *)(param_2 + 4) = param_3;
  *(int **)(param_2 + 8) = param_4;
  return;
}


