/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001beb50; name: FUN_.text__001beb50
 */


void FUN__text__001beb50(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  ulong local_70;
  uint local_68;
  uint uStack_64;
  
  lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 0x128);
  uVar9 = *(uint *)(lVar7 + 0x48);
  uVar1 = *(uint *)(lVar7 + 0x50);
  if (uVar9 <= uVar1) {
    uVar2 = *(uint *)(lVar7 + 0x44);
    uVar3 = *(uint *)(lVar7 + 0x4c);
    if (uVar3 < uVar2) {
      do {
        uVar9 = uVar9 + 1;
      } while (uVar9 <= uVar1);
    }
    else {
      do {
        uVar10 = uVar2;
        do {
          local_68 = uVar10;
          uStack_64 = uVar9;
          uVar5 = FUN__text__001a56dc(lVar7,&local_68);
          if ((uVar5 & 1) != 0) {
            local_70 = 0;
            uVar5 = FUN__text__001a6f8c(lVar7,&local_68,&local_70);
            if ((uVar5 & 1) != 0) {
              uVar5 = local_70 & 0xffffffff;
              uVar4 = local_70 >> 0x20;
              lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
              if (lVar8 != 0) {
                (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
              }
              lVar11 = param_1 + uVar5 * 1000 + uVar4 * 200;
              FUN__text__003c7c60(lVar8,lVar11 + 0x13f8,1);
              FUN__text__0012c378(*(long *)(param_1 + 8) + 0x110,lVar11 + 0x14a0);
              (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
            }
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 <= uVar3);
        uVar9 = uVar9 + 1;
      } while (uVar9 <= uVar1);
    }
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  return;
}


