/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a4200; name: FUN_.text__001a4200
 */


void FUN__text__001a4200(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  uint uVar19;
  long local_148 [3];
  undefined1 auStack_130 [192];
  uint local_70;
  uint uStack_6c;
  
  lVar15 = *(long *)(param_1 + 8);
  lVar12 = *(long *)(lVar15 + 0x2d0);
  if (lVar12 == 0) {
    lVar16 = 0;
  }
  else {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
    lVar16 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  }
  lVar11 = *(long *)(param_1 + 0x20);
  lVar17 = *(long *)(lVar11 + 0x128);
  lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x1b0) != *(int *)(lVar17 + 0x24) &&
                                     *(int *)(lVar11 + 0x1b4) == *(int *)(lVar17 + 0x24)) * 0x20 +
                    0x68);
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
  }
  local_148[2] = 0;
  FUN__text__003c7960(lVar16,param_1 + 0x88,local_148 + 2);
  lVar1 = param_1 + 0x188;
  local_148[2] = 0;
  FUN__text__003c7960(lVar16,lVar1,local_148 + 2);
  (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
  uVar4 = *(uint *)(lVar17 + 0x44);
  uVar13 = *(uint *)(lVar17 + 0x48);
  uVar5 = *(uint *)(lVar17 + 0x4c);
  uVar6 = *(uint *)(lVar17 + 0x50);
  iVar8 = FUN__text__001a5700(lVar17);
  if (iVar8 == 0) goto LAB__text__001a4564;
  if (uVar13 <= uVar6) {
    if (uVar5 < uVar4) {
      do {
        uVar13 = uVar13 + 1;
      } while (uVar13 <= uVar6);
    }
    else {
      uVar19 = uVar13;
      do {
        uVar14 = uVar4;
        do {
          local_70 = uVar14;
          uStack_6c = uVar19;
          uVar10 = FUN__text__001a56dc(lVar17,&local_70);
          uVar7 = uStack_6c;
          uVar3 = local_70;
          if ((uVar10 & 1) != 0) {
            memcpy(local_148 + 2,
                   (void *)(lVar11 + (ulong)local_70 * 1000 + (ulong)uStack_6c * 200 + 0x42d0),200);
            uVar2 = 0;
            if (uVar4 <= uVar3) {
              uVar2 = uVar3 - uVar4;
            }
            uVar3 = 0;
            if (uVar13 <= uVar7) {
              uVar3 = uVar7 - uVar13;
            }
            FUN__text__003c8320(lVar12,auStack_130);
            FUN__text__003c81e0(lVar12,param_1 + (ulong)uVar2 * 0x28 + (ulong)uVar3 * 8 + 0x90,
                                auStack_130);
            local_148[1] = 0;
            FUN__text__003c7960(lVar12,auStack_130,local_148 + 1);
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 <= uVar5);
        uVar19 = uVar19 + 1;
      } while (uVar19 <= uVar6);
    }
  }
  uVar9 = FUN__text__001281d4(*(undefined8 *)(param_1 + 8));
  FUN__text__001156d0(local_148 + 2,uVar9,0);
  lVar16 = *(long *)(local_148[2] + 0x60);
  local_148[0] = lVar16;
  if ((lVar16 == 0) || ((**(code **)(*(long *)(lVar16 + 0x48) + 0x10))(), local_148[2] != 0)) {
    (**(code **)(*(long *)(local_148[2] + 0x48) + 0x18))();
    lVar11 = *(long *)(param_1 + 0x10);
    if (lVar11 == 0) goto LAB__text__001a45a8;
    if (lVar16 != 0) goto LAB__text__001a4464;
  }
  else {
    lVar11 = *(long *)(param_1 + 0x10);
    if (lVar11 == 0) {
LAB__text__001a45a8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl();
    }
LAB__text__001a4464:
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
  }
  local_148[2] = 0x5cee54657e408716;
  FUN__text__001ac0e0(lVar11,param_1 + 400,local_148,local_148 + 2,0,iVar8);
  if (local_148[0] != 0) {
    (**(code **)(*(long *)(local_148[0] + 0x48) + 0x18))();
    local_148[0] = 0;
  }
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
  }
  lVar16 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  if (lVar16 == 0) {
    FUN__text__003c7c60(0,param_1 + 0x80,1);
    FUN__text__003c7c60(0,lVar1,0);
  }
  else {
    plVar18 = (long *)(lVar16 + 0x48);
    (**(code **)(*plVar18 + 0x10))(plVar18);
    FUN__text__003c7c60(lVar16,param_1 + 0x80,1);
    FUN__text__003c7c60(lVar16,lVar1,0);
    (**(code **)(*plVar18 + 0x18))(plVar18);
  }
  FUN__text__0012c378(lVar15 + 0x110,param_1 + 0x200);
  *(undefined1 *)(param_1 + 0x285) = 1;
LAB__text__001a4564:
  FUN__text__003c7c60(lVar12,param_1 + 0x30,0);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  return;
}


