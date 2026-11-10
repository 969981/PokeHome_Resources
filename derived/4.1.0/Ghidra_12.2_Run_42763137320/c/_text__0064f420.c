/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064f420; name: FUN_.text__0064f420
 */


undefined4 FUN__text__0064f420(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  
  iVar3 = FUN__text__00686fa4(param_1[0xa6]);
  if ((param_2 == (undefined8 *)0x0) || (iVar3 == 0)) {
    uVar4 = 0;
    uVar5 = 0;
    *(byte *)(param_1 + 0xa7) = *(byte *)(param_1 + 0xa7) | 1;
    if (param_2 == (undefined8 *)0x0) goto LAB__text__0064f498;
  }
  else {
    lVar6 = param_1[0xa6];
    uVar4 = FUN__text__006542dc(param_1,*(undefined4 *)(lVar6 + 0x34),*(undefined8 *)(lVar6 + 0x38))
    ;
    *(undefined8 *)(lVar6 + 0x38) = 0;
    *(byte *)(param_1 + 0xa7) = *(byte *)(param_1 + 0xa7) | 1;
  }
  *param_2 = param_1[0xa4];
  uVar5 = uVar4;
LAB__text__0064f498:
  if (param_1[0xa4] == 0) {
    bVar2 = (*(uint *)((long)param_1 + 0x3fc) & 0x20) != 0;
    uVar1 = 0x71bba2;
    if (bVar2) {
      uVar1 = 0x712b3c;
    }
    uVar5 = 5;
    if (!bVar2) {
      uVar5 = 6;
    }
    FUN__text__0066713c(*param_1,0x7111f9,uVar1,param_1[0xa2]);
  }
  FUN__text__0064f344(param_1 + 0xa2);
  if (param_1[0xa4] == 0) {
    FUN__text__00650d38(param_1,1);
  }
  return uVar5;
}


