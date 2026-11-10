/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006cddd0; name: FUN_.text__006cddd0
 */


void FUN__text__006cddd0(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 local_24;
  
  *(long *)(param_1 + 0x40) = param_2;
  local_24 = 0;
  iVar1 = FUN__text__006c0d80(*(undefined8 *)(param_2 + 0x38),0x52475456,1,&local_24);
  *(int *)(param_1 + 0x58) = iVar1;
  if (-1 < iVar1) {
    uVar5 = FUN__text__006b13a0(*(undefined8 *)(param_1 + 0x40),iVar1);
    uVar2 = FUN__text__006f3f40(uVar5,0,3,0x71b339);
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
    uVar5 = FUN__text__006b13f0(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x58));
    uVar2 = FUN__text__006f3f40(uVar5,4,3,0x70b4fe);
    *(undefined4 *)(param_1 + 0x60) = uVar2;
    iVar1 = *(int *)(param_1 + 0x58);
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x30);
    iVar3 = FUN__text__006b1998();
    iVar4 = *(int *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(lVar6 + (long)(iVar3 * iVar1) * 4);
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x30);
    iVar3 = FUN__text__006b1998();
    iVar1 = *(int *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(lVar6 + (long)(iVar3 * iVar4) * 4 + 4);
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x30);
    iVar4 = FUN__text__006b1998();
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(lVar6 + (long)(iVar4 * iVar1) * 4 + 8);
  }
  local_24 = 1;
  iVar1 = FUN__text__006c0d80(*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x38),0x52475456,1,
                              &local_24);
  *(int *)(param_1 + 0x70) = iVar1;
  if (-1 < iVar1) {
    uVar5 = FUN__text__006b13a0(*(undefined8 *)(param_1 + 0x40),iVar1);
    uVar2 = FUN__text__006f3f40(uVar5,0,3,0x71b339);
    *(undefined4 *)(param_1 + 0x74) = uVar2;
    uVar5 = FUN__text__006b13f0(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x70));
    uVar2 = FUN__text__006f3f40(uVar5,4,3,0x70b4fe);
    *(undefined4 *)(param_1 + 0x78) = uVar2;
    iVar1 = *(int *)(param_1 + 0x70);
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x30);
    iVar3 = FUN__text__006b1998();
    iVar4 = *(int *)(param_1 + 0x70);
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(lVar6 + (long)(iVar3 * iVar1) * 4);
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x30);
    iVar3 = FUN__text__006b1998();
    iVar1 = *(int *)(param_1 + 0x70);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(lVar6 + (long)(iVar3 * iVar4) * 4 + 4);
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x30);
    iVar4 = FUN__text__006b1998();
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(lVar6 + (long)(iVar4 * iVar1) * 4 + 8);
  }
  local_24 = 2;
  iVar1 = FUN__text__006c0d80(*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x38),0x52475456,1,
                              &local_24);
  *(int *)(param_1 + 0x88) = iVar1;
  if (-1 < iVar1) {
    uVar5 = FUN__text__006b13a0(*(undefined8 *)(param_1 + 0x40),iVar1);
    uVar2 = FUN__text__006f3f40(uVar5,0,3,0x71b339);
    *(undefined4 *)(param_1 + 0x8c) = uVar2;
    uVar5 = FUN__text__006b13f0(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x88));
    uVar2 = FUN__text__006f3f40(uVar5,4,3,0x70b4fe);
    *(undefined4 *)(param_1 + 0x90) = uVar2;
    iVar1 = *(int *)(param_1 + 0x88);
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x30);
    iVar3 = FUN__text__006b1998();
    iVar4 = *(int *)(param_1 + 0x88);
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(lVar6 + (long)(iVar3 * iVar1) * 4);
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x30);
    iVar3 = FUN__text__006b1998();
    iVar1 = *(int *)(param_1 + 0x88);
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(lVar6 + (long)(iVar3 * iVar4) * 4 + 4);
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x30);
    iVar4 = FUN__text__006b1998();
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(lVar6 + (long)(iVar4 * iVar1) * 4 + 8);
  }
  local_24 = 3;
  iVar1 = FUN__text__006c0d80(*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x38),0x52475456,1,
                              &local_24);
  *(int *)(param_1 + 0xa0) = iVar1;
  if (-1 < iVar1) {
    uVar5 = FUN__text__006b13a0(*(undefined8 *)(param_1 + 0x40),iVar1);
    uVar2 = FUN__text__006f3f40(uVar5,0,3,0x71b339);
    *(undefined4 *)(param_1 + 0xa4) = uVar2;
    uVar5 = FUN__text__006b13f0(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0xa0));
    uVar2 = FUN__text__006f3f40(uVar5,4,3,0x70b4fe);
    *(undefined4 *)(param_1 + 0xa8) = uVar2;
    iVar1 = *(int *)(param_1 + 0xa0);
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x30);
    iVar3 = FUN__text__006b1998();
    iVar4 = *(int *)(param_1 + 0xa0);
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(lVar6 + (long)(iVar3 * iVar1) * 4);
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x30);
    iVar3 = FUN__text__006b1998();
    iVar1 = *(int *)(param_1 + 0xa0);
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(lVar6 + (long)(iVar3 * iVar4) * 4 + 4);
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x30);
    iVar4 = FUN__text__006b1998();
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(lVar6 + (long)(iVar4 * iVar1) * 4 + 8);
  }
  return;
}


