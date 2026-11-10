/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ab388; name: FUN_.text__006ab388
 */


void FUN__text__006ab388(undefined8 param_1,ushort *param_2,long param_3,long param_4,
                        undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  int iVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_4 + 0x30);
  iVar1 = FUN__text__006a4e14(*(undefined8 *)(param_4 + 0xa0));
  uVar3 = FUN__text__006c1a70(param_5);
  if (lVar7 == param_3) {
    iVar6 = iVar1;
  }
  else {
    iVar6 = *(int *)(param_4 + 0x94);
    iVar2 = FUN__text__006c1b00(param_5);
    iVar6 = iVar2 + iVar6;
  }
  uVar4 = FUN__text__006a4e08(*(undefined8 *)(param_4 + 0xa0),iVar6);
  lVar7 = FUN__text__006a4a30(uVar4,uVar3);
  if (lVar7 == 0) {
    FUN__text__006a4600(uVar4,uVar3);
    uVar5 = *param_2 | 0x100;
  }
  else {
    uVar5 = *param_2;
  }
  *param_2 = uVar5 & 0xf1ff | ((short)iVar1 - (short)iVar6) * 0x200 & 0xe00U;
  return;
}


