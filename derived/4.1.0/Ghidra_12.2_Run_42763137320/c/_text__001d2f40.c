/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001d2f40; name: FUN_.text__001d2f40
 */


void FUN__text__001d2f40(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 local_58;
  
  lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  if (lVar8 == 0) {
    lVar9 = 0;
  }
  else {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    lVar9 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  }
  lVar7 = *(long *)(param_1 + 0x38);
  lVar6 = *(long *)(lVar7 + 0x148);
  lVar7 = *(long *)(lVar7 + (ulong)(*(int *)(lVar7 + 0x1b0) != *(int *)(lVar6 + 0x20) &&
                                   *(int *)(lVar7 + 0x1b4) == *(int *)(lVar6 + 0x20)) * 0x20 + 0xa8)
  ;
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    lVar6 = *(long *)(*(long *)(param_1 + 0x38) + 0x148);
  }
  FUN__text__003c7c60(lVar9,param_1 + (ulong)*(uint *)(lVar6 + 0x38) * 0x3c0 +
                            (ulong)*(uint *)(lVar6 + 0x3c) * 0xc0 + 0x13f8,1);
  (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  FUN__text__001d2690(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0xa8));
  FUN__text__001d2690(*(undefined8 *)(*(long *)(param_1 + 0x38) + 200));
  lVar9 = *(long *)(*(long *)(lVar7 + 8) + 0x2d0);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(*(long *)(lVar7 + 0x38) + 0x148);
  iVar1 = *(int *)(lVar6 + 0x20);
  iVar3 = *(int *)(lVar6 + 0x24);
  uVar2 = *(uint *)(lVar6 + 0x28);
  uVar4 = *(uint *)(lVar6 + 0x2c);
  uVar5 = FUN__text__00192b40(*(undefined8 *)(lVar7 + 0x5788),*(undefined4 *)(lVar7 + 0x5790));
  local_58 = 0;
  lVar6 = FUN__text__001920e4(uVar5,&local_58);
  if (iVar3 == *(int *)(lVar7 + 0x5790) && iVar1 == *(int *)(lVar6 + 8)) {
    FUN__text__003c7c60(lVar9,lVar7 + (ulong)uVar2 * 0x3c0 + (ulong)uVar4 * 0xc0 + 0x13f8,1);
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  return;
}


