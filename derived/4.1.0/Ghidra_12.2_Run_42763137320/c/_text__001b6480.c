/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001b6480; name: FUN_.text__001b6480
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001b6480(long param_1)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  long lVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_110 [24];
  long local_f8;
  undefined8 local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  if (*(char *)(param_1 + 0x5b81) != '\0') {
    lVar9 = *(long *)(param_1 + 8);
    lVar5 = lVar9 + 0x110;
    lVar4 = *(long *)(lVar9 + 0x2d0);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x108);
    if (*(int *)(param_1 + 0x5b84) == 0) {
      uVar8 = 0;
      lVar9 = 0;
      lVar11 = param_1 + 0x2050;
      do {
        local_f0 = (ulong)uVar8 << 0x20;
        uVar3 = FUN__text__001c1e4c(uVar6,*(undefined4 *)(param_1 + 0x30),&local_f0);
        if ((uVar3 & 1) != 0) {
          FUN__text__0012c378(lVar5,lVar11 + lVar9 + -3000);
        }
        local_f0 = CONCAT44(uVar8,1);
        uVar3 = FUN__text__001c1e4c(uVar6,*(undefined4 *)(param_1 + 0x30),&local_f0);
        if ((uVar3 & 1) != 0) {
          FUN__text__0012c378(lVar5,lVar11 + lVar9 + -2000);
        }
        local_f0 = CONCAT44(uVar8,2);
        uVar3 = FUN__text__001c1e4c(uVar6,*(undefined4 *)(param_1 + 0x30),&local_f0);
        if ((uVar3 & 1) == 0) {
          local_f0 = CONCAT44(uVar8,3);
          uVar3 = FUN__text__001c1e4c(uVar6,*(undefined4 *)(param_1 + 0x30),&local_f0);
          if ((uVar3 & 1) == 0) goto LAB__text__001b68d8;
LAB__text__001b6938:
          FUN__text__0012c378(lVar5,lVar11 + lVar9);
          local_f0 = CONCAT44(uVar8,4);
          uVar3 = FUN__text__001c1e4c(uVar6,*(undefined4 *)(param_1 + 0x30),&local_f0);
          if ((uVar3 & 1) != 0) goto LAB__text__001b695c;
LAB__text__001b68f0:
          local_f0 = CONCAT44(uVar8,5);
          uVar3 = FUN__text__001c1e4c(uVar6,*(undefined4 *)(param_1 + 0x30),&local_f0);
        }
        else {
          FUN__text__0012c378(lVar5,lVar11 + lVar9 + -1000);
          local_f0 = CONCAT44(uVar8,3);
          uVar3 = FUN__text__001c1e4c(uVar6,*(undefined4 *)(param_1 + 0x30),&local_f0);
          if ((uVar3 & 1) != 0) goto LAB__text__001b6938;
LAB__text__001b68d8:
          local_f0 = CONCAT44(uVar8,4);
          uVar3 = FUN__text__001c1e4c(uVar6,*(undefined4 *)(param_1 + 0x30),&local_f0);
          if ((uVar3 & 1) == 0) goto LAB__text__001b68f0;
LAB__text__001b695c:
          FUN__text__0012c378(lVar5,lVar11 + lVar9 + 1000);
          local_f0 = CONCAT44(uVar8,5);
          uVar3 = FUN__text__001c1e4c(uVar6,*(undefined4 *)(param_1 + 0x30),&local_f0);
        }
        if ((uVar3 & 1) != 0) {
          FUN__text__0012c378(lVar5,lVar11 + lVar9 + 2000);
        }
        lVar9 = lVar9 + 200;
        uVar8 = uVar8 + 1;
      } while (lVar9 != 1000);
      lVar5 = *_DAT_0089f598;
      FUN__text__005e927c(auStack_110,_DAT_008a0600);
      uVar6 = FUN__text__003eec14(lVar5);
      local_80 = 0;
      uStack_78 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = 0;
      local_e8 = (code *)0x0;
      iVar2 = FUN__text__003ef560(lVar5,auStack_110,uVar6,0);
      if ((iVar2 != 0) &&
         (FUN__text__0015e5bc(*(undefined8 *)(lVar5 + 0x210),auStack_110,iVar2,uVar6,0,&local_f0,0),
         pcVar1 = local_e8, local_e8 != (code *)0x0)) {
        local_e0 = 0;
        uStack_d8 = 0;
        local_f0 = 0;
        local_e8 = (code *)0x0;
        (*pcVar1)(&local_d0);
      }
      if (local_f8 != 0) {
        (**(code **)(*(long *)(local_f8 + 0x48) + 0x18))();
      }
      *(int *)(param_1 + 0x5b84) = *(int *)(param_1 + 0x5b84) + 1;
    }
    else if (*(int *)(param_1 + 0x5b84) == 1) {
      lVar11 = 0;
      bVar7 = true;
      do {
        while( true ) {
          uVar10 = (undefined4)lVar11;
          local_f0 = lVar11 << 0x20;
          uVar3 = FUN__text__001c1e4c(uVar6,*(undefined4 *)(param_1 + 0x30),&local_f0);
          if ((uVar3 & 1) != 0) {
            if ((*(long *)(lVar9 + 0x2d0) == 0) ||
               (uVar3 = FUN__text__003c7ec0(*(long *)(lVar9 + 0x2d0),param_1 + lVar11 * 200 + 0x1498
                                           ), (uVar3 & 1) != 0)) {
              lVar12 = param_1 + lVar11 * 200;
              FUN__text__003c7c60(lVar4,lVar12 + 0x1478,0);
              FUN__text__003c7c60(lVar4,lVar12 + 0x13f8,0);
              FUN__text__0012c378(lVar5,lVar12 + 0x1490);
            }
            else {
              bVar7 = false;
            }
          }
          local_f0 = CONCAT44(uVar10,1);
          uVar3 = FUN__text__001c1e4c(uVar6,*(undefined4 *)(param_1 + 0x30),&local_f0);
          if ((uVar3 & 1) != 0) {
            if ((*(long *)(lVar9 + 0x2d0) == 0) ||
               (uVar3 = FUN__text__003c7ec0(*(long *)(lVar9 + 0x2d0),param_1 + lVar11 * 200 + 0x1880
                                           ), (uVar3 & 1) != 0)) {
              lVar12 = param_1 + lVar11 * 200;
              FUN__text__003c7c60(lVar4,lVar12 + 0x1860,0);
              FUN__text__003c7c60(lVar4,lVar12 + 0x17e0,0);
              FUN__text__0012c378(lVar5,lVar12 + 0x1878);
            }
            else {
              bVar7 = false;
            }
          }
          local_f0 = CONCAT44(uVar10,2);
          uVar3 = FUN__text__001c1e4c(uVar6,*(undefined4 *)(param_1 + 0x30),&local_f0);
          if ((uVar3 & 1) != 0) {
            if ((*(long *)(lVar9 + 0x2d0) == 0) ||
               (uVar3 = FUN__text__003c7ec0(*(long *)(lVar9 + 0x2d0),param_1 + lVar11 * 200 + 0x1c68
                                           ), (uVar3 & 1) != 0)) {
              lVar12 = param_1 + lVar11 * 200;
              FUN__text__003c7c60(lVar4,lVar12 + 0x1c48,0);
              FUN__text__003c7c60(lVar4,lVar12 + 0x1bc8,0);
              FUN__text__0012c378(lVar5,lVar12 + 0x1c60);
            }
            else {
              bVar7 = false;
            }
          }
          local_f0 = CONCAT44(uVar10,3);
          uVar3 = FUN__text__001c1e4c(uVar6,*(undefined4 *)(param_1 + 0x30),&local_f0);
          if ((uVar3 & 1) != 0) {
            if ((*(long *)(lVar9 + 0x2d0) == 0) ||
               (uVar3 = FUN__text__003c7ec0(*(long *)(lVar9 + 0x2d0),param_1 + lVar11 * 200 + 0x2050
                                           ), (uVar3 & 1) != 0)) {
              lVar12 = param_1 + lVar11 * 200;
              FUN__text__003c7c60(lVar4,lVar12 + 0x2030,0);
              FUN__text__003c7c60(lVar4,lVar12 + 0x1fb0,0);
              FUN__text__0012c378(lVar5,lVar12 + 0x2048);
            }
            else {
              bVar7 = false;
            }
          }
          local_f0 = CONCAT44(uVar10,4);
          uVar3 = FUN__text__001c1e4c(uVar6,*(undefined4 *)(param_1 + 0x30),&local_f0);
          if ((uVar3 & 1) == 0) break;
          if ((*(long *)(lVar9 + 0x2d0) == 0) ||
             (uVar3 = FUN__text__003c7ec0(*(long *)(lVar9 + 0x2d0),param_1 + lVar11 * 200 + 0x2438),
             (uVar3 & 1) != 0)) {
            lVar12 = param_1 + lVar11 * 200;
            FUN__text__003c7c60(lVar4,lVar12 + 0x2418,0);
            FUN__text__003c7c60(lVar4,lVar12 + 0x2398,0);
            FUN__text__0012c378(lVar5,lVar12 + 0x2430);
            break;
          }
          bVar7 = false;
          local_f0 = CONCAT44(uVar10,5);
          uVar3 = FUN__text__001c1e4c(uVar6,*(undefined4 *)(param_1 + 0x30),&local_f0);
          if ((uVar3 & 1) != 0) goto LAB__text__001b67cc;
LAB__text__001b6540:
          lVar11 = lVar11 + 1;
          if (lVar11 == 5) {
            if (bVar7) {
              *(char *)(param_1 + 0x5b81) = '\0';
              *(int *)(param_1 + 0x5b84) = *(int *)(param_1 + 0x5b84) + 1;
              FUN__text__001a0b8c(*(undefined8 *)(param_1 + 0x38));
            }
            goto LAB__text__001b6a7c;
          }
        }
        local_f0 = CONCAT44(uVar10,5);
        uVar3 = FUN__text__001c1e4c(uVar6,*(undefined4 *)(param_1 + 0x30),&local_f0);
        if ((uVar3 & 1) == 0) goto LAB__text__001b6540;
LAB__text__001b67cc:
        if ((*(long *)(lVar9 + 0x2d0) == 0) ||
           (uVar3 = FUN__text__003c7ec0(*(long *)(lVar9 + 0x2d0),param_1 + lVar11 * 200 + 0x2820),
           (uVar3 & 1) != 0)) {
          lVar12 = param_1 + lVar11 * 200;
          FUN__text__003c7c60(lVar4,lVar12 + 0x2800,0);
          FUN__text__003c7c60(lVar4,lVar12 + 0x2780,0);
          FUN__text__0012c378(lVar5,lVar12 + 0x2818);
          goto LAB__text__001b6540;
        }
        lVar11 = lVar11 + 1;
        bVar7 = false;
      } while (lVar11 != 5);
    }
LAB__text__001b6a7c:
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
  }
  return;
}


