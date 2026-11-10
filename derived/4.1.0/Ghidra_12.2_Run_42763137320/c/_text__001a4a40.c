/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a4a40; name: FUN_.text__001a4a40
 */


void FUN__text__001a4a40(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [176];
  undefined1 auStack_58 [8];
  
  lVar4 = *(long *)(param_1 + 0x20);
  lVar9 = *(long *)(param_1 + 8);
  lVar5 = *(long *)(lVar4 + 0x148);
  lVar6 = *(long *)(lVar9 + 0x2d0);
  uVar1 = *(uint *)(lVar5 + 0x28);
  uVar2 = *(uint *)(lVar5 + 0x2c);
  lVar4 = *(long *)(lVar4 + (ulong)(*(int *)(lVar4 + 0x1b0) != *(int *)(lVar5 + 0x20) &&
                                   *(int *)(lVar4 + 0x1b4) == *(int *)(lVar5 + 0x20)) * 0x20 + 0xa8)
  ;
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  uVar7 = *(undefined8 *)(lVar9 + 0x2d0);
  memcpy(auStack_110,(void *)(lVar4 + (ulong)uVar1 * 0x3c0 + (ulong)uVar2 * 0xc0 + 0x40f0),0xc0);
  uVar7 = FUN__text__003c79c0(uVar7,auStack_110);
  uVar3 = FUN__text__003c79c0(*(undefined8 *)(lVar9 + 0x2d0),auStack_108);
  FUN__text__003c8320(lVar6,auStack_108);
  FUN__text__006b2dd0(uVar7,uVar3);
  FUN__text__003c7960(lVar6,auStack_108,auStack_58);
  lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  if (lVar4 == 0) {
    FUN__text__003c7c60(0,param_1 + 0x80,0);
    FUN__text__003c7c60(0,param_1 + 0x188,0);
  }
  else {
    plVar8 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN__text__003c7c60(lVar4,param_1 + 0x80,0);
    FUN__text__003c7c60(lVar4,param_1 + 0x188,0);
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  FUN__text__0012c378(lVar9 + 0x110,param_1 + 0x208);
  *(undefined1 *)(param_1 + 0x286) = 0;
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  return;
}


