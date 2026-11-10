/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0037bc90; name: FUN_.text__0037bc90
 */


undefined4 FUN__text__0037bc90(undefined8 param_1,undefined8 *param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  
  uVar9 = nn::fs::IsSaveDataExisting(*param_2,param_1);
  if ((uVar9 & 1) == 0) {
    return 2;
  }
  uVar9 = FUN__text__0039bc04(DAT_008e1620);
  if ((uVar9 & 1) == 0) {
    FUN__text__0039bc24(DAT_008e1620);
  }
  lVar1 = DAT_00ae8238;
  uVar9 = FUN__text__0039bc04(DAT_008e1620);
  if ((uVar9 & 1) == 0) {
    FUN__text__0039bc24(DAT_008e1620);
  }
  FUN__text__0039bb68(DAT_008e1620,param_1,param_2);
  uVar6 = DAT_008e1620;
  bVar7 = param_3 != 1;
  uVar2 = 0xa1c095aa5d022ebc;
  if (bVar7) {
    uVar2 = 0xb7ccf6cdd6f11f63;
  }
  uVar3 = 0x717f08;
  if (bVar7) {
    uVar3 = 0x70d12b;
  }
  uVar4 = 7;
  if (bVar7) {
    uVar4 = 5;
  }
  puVar11 = (undefined8 *)(lVar1 + 0x78);
  *puVar11 = uVar2;
  *(undefined8 *)(lVar1 + 0x80) = uVar3;
  *(undefined8 *)(lVar1 + 0x88) = uVar4;
  uVar9 = FUN__text__0039c06c(uVar6,puVar11);
  if ((uVar9 & 1) != 0) {
    FUN__text__0039c1d4(uVar6,puVar11);
  }
  lVar5 = DAT_00ae8238;
  uVar2 = DAT_008e1620;
  lVar1 = DAT_00ae8238 + 0x78;
  uVar9 = FUN__text__0039c244(DAT_008e1620,lVar1);
  while ((uVar9 & 1) == 0) {
    nn::os::SleepThread(&DAT_00989680);
    lVar5 = DAT_00ae8238;
    uVar2 = DAT_008e1620;
    lVar1 = DAT_00ae8238 + 0x78;
    uVar9 = FUN__text__0039c244(DAT_008e1620,lVar1);
  }
  iVar8 = FUN__text__0039c2b4(uVar2,lVar1);
  if (iVar8 - 2U < 3) {
    uVar10 = *(undefined4 *)((long)(int)(iVar8 - 2U) * 4 + 0x735460);
  }
  else {
    uVar10 = 3;
  }
  *(undefined4 *)(lVar5 + 0x98) = uVar10;
  FUN__text__0039c324(uVar2,lVar1);
  return *(undefined4 *)(DAT_00ae8238 + 0x98);
}


