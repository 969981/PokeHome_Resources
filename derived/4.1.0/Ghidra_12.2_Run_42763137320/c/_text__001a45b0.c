/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a45b0; name: FUN_.text__001a45b0
 */


void FUN__text__001a45b0(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [184];
  undefined1 auStack_78 [8];
  uint local_70;
  uint uStack_6c;
  
  lVar13 = *(long *)(param_1 + 8);
  lVar8 = *(long *)(lVar13 + 0x2d0);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  lVar7 = *(long *)(param_1 + 0x20);
  lVar10 = *(long *)(lVar7 + 0x128);
  uVar9 = *(uint *)(lVar10 + 0x48);
  uVar1 = *(uint *)(lVar10 + 0x50);
  if (uVar9 <= uVar1) {
    uVar2 = *(uint *)(lVar10 + 0x44);
    uVar3 = *(uint *)(lVar10 + 0x4c);
    if (uVar3 < uVar2) {
      do {
        uVar9 = uVar9 + 1;
      } while (uVar9 <= uVar1);
    }
    else {
      lVar7 = *(long *)(lVar7 + (ulong)(*(int *)(lVar7 + 0x1b0) != *(int *)(lVar10 + 0x24) &&
                                       *(int *)(lVar7 + 0x1b4) == *(int *)(lVar10 + 0x24)) * 0x20 +
                       0x68);
      do {
        uVar12 = uVar2;
        do {
          local_70 = uVar12;
          uStack_6c = uVar9;
          uVar4 = FUN__text__001a56dc(lVar10,&local_70);
          if ((uVar4 & 1) != 0) {
            memcpy(auStack_138,
                   (void *)(lVar7 + (ulong)local_70 * 1000 + (ulong)uStack_6c * 200 + 0x42d0),200);
            uVar5 = FUN__text__003c79c0(*(undefined8 *)(lVar13 + 0x2d0),auStack_138);
            uVar6 = FUN__text__003c79c0(*(undefined8 *)(lVar13 + 0x2d0),auStack_130);
            FUN__text__003c8320(lVar8,auStack_130);
            FUN__text__006b2dd0(uVar5,uVar6);
            FUN__text__003c7960(lVar8,auStack_130,auStack_78);
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 <= uVar3);
        uVar9 = uVar9 + 1;
      } while (uVar9 <= uVar1);
    }
  }
  lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  if (lVar7 == 0) {
    FUN__text__003c7c60(0,param_1 + 0x80,0);
    FUN__text__003c7c60(0,param_1 + 0x188,0);
    FUN__text__0012c378(lVar13 + 0x110,param_1 + 0x208);
    *(undefined1 *)(param_1 + 0x285) = 0;
  }
  else {
    plVar11 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    FUN__text__003c7c60(lVar7,param_1 + 0x80,0);
    FUN__text__003c7c60(lVar7,param_1 + 0x188,0);
    (**(code **)(*plVar11 + 0x18))(plVar11);
    FUN__text__0012c378(lVar13 + 0x110,param_1 + 0x208);
    *(undefined1 *)(param_1 + 0x285) = 0;
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  return;
}


