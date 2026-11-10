/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b5ad0; name: FUN_.text__006b5ad0
 */


void FUN__text__006b5ad0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                        long param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_4 == 0) {
    if (param_5 == 0) {
      iVar1 = *(int *)(param_1 + 0x220);
      goto LAB__text__006b5b60;
    }
    uVar5 = 0x48535244;
    local_18 = 8;
    lVar3 = FUN__text__006a4248(param_3,param_2,0x48535244,1,&local_18);
    *(long *)(param_1 + 0x218) = lVar3;
    puVar4 = &local_18;
  }
  else {
    uVar5 = 0x4b53414d;
    local_14 = 1;
    lVar3 = FUN__text__006a4248(param_3,param_2,0x4b53414d,1,&local_14);
    *(long *)(param_1 + 0x218) = lVar3;
    puVar4 = &local_14;
  }
  iVar1 = FUN__text__006c0d80(*(undefined8 *)(lVar3 + 0x38),uVar5,1,puVar4);
  *(int *)(param_1 + 0x220) = iVar1;
LAB__text__006b5b60:
  lVar3 = *(long *)(*(long *)(param_1 + 0x218) + 0x30);
  iVar2 = FUN__text__006b1998();
  *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(lVar3 + (long)(iVar2 * iVar1) * 4);
  return;
}


