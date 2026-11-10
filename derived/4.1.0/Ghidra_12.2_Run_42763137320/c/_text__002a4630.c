/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002a4630; name: FUN_.text__002a4630
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN__text__002a4630(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  int local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_48;
  
  lVar2 = DAT_008e1600;
  if (*(char *)(param_1 + 0x9a36) == '\0') {
    lVar6 = *(long *)(DAT_008e1600 + 0x60);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    FUN__text__003204a0(&local_48);
    lVar7 = *(long *)(lVar6 + 0xb8);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    lVar8 = *(long *)(lVar6 + 0xb0);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    uVar9 = *(undefined8 *)(*_DAT_0089f3d8 + 0x2a8);
    FUN__text__002a2ed0(lVar7);
    iVar1 = *(int *)(local_48 + 0x700fdc);
    if (0 < iVar1) {
      iVar10 = 0;
      do {
        iVar12 = 0;
        do {
          FUN__text__00300448(&local_68,local_48,iVar10,iVar12,uVar9);
          uVar4 = FUN__text__00306588(local_68);
          if ((uVar4 & 1) == 0) {
            local_70 = local_68;
            if (local_68 != 0) {
              (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
            }
            FUN__text__002a34bc(lVar7,&local_70,uVar9,iVar10,iVar12);
            if (local_70 != 0) {
              (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
              local_70 = 0;
            }
            uVar4 = FUN__text__00308388(local_68);
            if ((uVar4 & 1) != 0) {
              FUN__text__002a3bc8(lVar7,iVar10,iVar12,1);
            }
          }
          if (local_68 != 0) {
            (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 != 0x1e);
        iVar10 = iVar10 + 1;
      } while (iVar10 != iVar1);
    }
    lVar13 = 0x7cda0;
    FUN__text__002a2dfc(lVar8,0x28);
    FUN__text__003204a0(&local_68);
    uVar4 = 0;
    do {
      FUN__text__0029e7e4(&local_78,lVar2);
      uVar3 = FUN__text__002a2c60(local_78,uVar4 & 0xffffffff);
      if (local_78 != 0) {
        (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
      }
      if (uVar3 != 0) {
        uVar11 = 0;
        do {
          lVar5 = FUN__text__00321ac0();
          local_78 = *(long *)(lVar5 + lVar13 + uVar11 * 8);
          local_80 = 0;
          FUN__text__00303cd8(local_68,&local_78,(long)&local_80 + 4,&local_80);
          FUN__text__0029e7e4(&local_88,lVar2);
          FUN__text__002a2cb4(CONCAT44(uStack_84,local_88),uVar4 & 0xffffffff,uVar11 & 0xffffffff,
                              local_80._4_4_,local_80 & 0xffffffff);
          if (CONCAT44(uStack_84,local_88) != 0) {
            (**(code **)(*(long *)(CONCAT44(uStack_84,local_88) + 0x48) + 0x18))();
          }
          uVar11 = uVar11 + 1;
        } while (uVar3 != uVar11);
      }
      uVar4 = uVar4 + 1;
      lVar13 = lVar13 + 0x30;
    } while (uVar4 != 6);
    FUN__text__0029e8a4(&local_78,lVar2);
    FUN__text__002a4144(local_78);
    uVar4 = 0;
    lVar13 = 0x7cec8;
    do {
      lVar5 = FUN__text__00321ac0();
      if (*(long *)(lVar5 + lVar13) != 0) {
        local_88 = -1;
        local_80 = CONCAT44(0xffffffff,(undefined4)local_80);
        FUN__text__00303cd8(local_68,(long *)(lVar5 + lVar13),&local_88,(long)&local_80 + 4);
        if ((-1 < local_88) && (-1 < (long)local_80)) {
          FUN__text__002a412c(local_78,uVar4 & 0xffffffff);
        }
      }
      uVar4 = uVar4 + 1;
      lVar13 = lVar13 + 8;
    } while (uVar4 != 99);
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    }
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    }
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    }
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    }
  }
  FUN__text__0029e3cc(lVar2);
  uVar4 = FUN__text__0029e598(lVar2);
  while ((uVar4 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar4 = FUN__text__0029e598(lVar2);
  }
  return *(int *)(lVar2 + 0x400088) == 0;
}


