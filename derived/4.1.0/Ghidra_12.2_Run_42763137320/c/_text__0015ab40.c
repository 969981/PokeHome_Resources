/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0015ab40; name: FUN_.text__0015ab40
 */


undefined4 FUN__text__0015ab40(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  
  lVar3 = FUN__text__006b46d0(param_1,0x71f0dd);
  lVar4 = FUN__text__006bf32c(param_1);
  if (lVar4 != 0) {
    plVar5 = (long *)FUN__text__006bf32c(param_1);
    iVar1 = (**(code **)(*plVar5 + 0x48))();
    if (iVar1 != 2) {
      return param_3;
    }
  }
  if (lVar3 != 0) {
    param_3 = FUN__text__00161218(DAT_008e1550,*(undefined4 *)(lVar3 + (ulong)*(uint *)(lVar3 + 4)))
    ;
  }
  uVar6 = DAT_008e1550;
  uVar2 = FUN__text__00160afc(param_2);
  uVar6 = FUN__text__00160ae8(uVar6,param_3,uVar2);
  lVar3 = FUN__text__006bf32c(param_1);
  if (lVar3 == 0) {
    FUN__text__006bf334(param_1,uVar6);
    return param_3;
  }
  return param_3;
}


