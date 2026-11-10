/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006bd758; name: FUN_.text__006bd758
 */


void FUN__text__006bd758(long *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  ushort uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  FUN__text__006bd64c();
  uVar2 = *(ushort *)(param_2 + 0x110);
  iVar1 = 0;
  if (uVar2 != 0) {
    iVar1 = uVar2 - 1;
  }
  if (1 < uVar2) {
    if (*(long *)(param_2 + 0x148) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(*(long *)(param_2 + 0x148) + 0x98);
    }
    (**(code **)(*param_1 + 0x138))(param_1,param_3,iVar1,uVar4);
    lVar3 = 0x158;
    if (*(char *)((long)param_1 + 0x117) != '\0') {
      lVar3 = 0x160;
    }
    (**(code **)(*param_1 + lVar3))
              (param_1,*(undefined8 *)(param_2 + 0xd8),0,*(undefined2 *)(param_2 + 0x112));
  }
  uVar5 = *(undefined8 *)(param_2 + 0x140);
  lVar3 = FUN__text__006a0f04(0x50);
  if (lVar3 != 0) {
    FUN__text__006ac0cc(lVar3,uVar5,param_3);
  }
  param_1[0x28] = lVar3;
  return;
}


