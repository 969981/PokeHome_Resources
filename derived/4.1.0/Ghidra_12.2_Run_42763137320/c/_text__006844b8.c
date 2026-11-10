/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006844b8; name: FUN_.text__006844b8
 */


int FUN__text__006844b8(long param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(lVar5 + 0x18) + 4;
  *(long *)(lVar5 + 0x18) = lVar3;
  *(long *)(lVar5 + 0x20) = lVar3;
  iVar2 = FUN__text__00680e2c(param_3,param_1,param_2[3],param_2[4]);
  iVar1 = -0x20b;
  if (iVar2 != -0x1f6) {
    iVar1 = iVar2;
  }
  lVar3 = *(long *)(lVar5 + 0x18) + -4;
  *(long *)(lVar5 + 0x18) = lVar3;
  if (iVar1 == 0) {
    FUN__text__0067999c(lVar3,*(undefined4 *)(param_2 + 5));
    param_2[2] = 0;
    uVar4 = FUN__text__006834c0(param_1);
    *param_2 = uVar4;
    FUN__text__0068408c(param_1,param_2);
  }
  return iVar1;
}


