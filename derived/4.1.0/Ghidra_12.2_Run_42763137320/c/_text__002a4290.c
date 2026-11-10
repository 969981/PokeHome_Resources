/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002a4290; name: FUN_.text__002a4290
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002a4290(ulong param_1,undefined8 param_2,void *param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  int local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_38;
  
  uVar5 = *_DAT_0089f5b0;
  if ((param_1 & 1) == 0) {
    FUN__text__003204a0(&local_38);
    FUN__text__0029e7c4(&local_58,uVar5);
    FUN__text__0029e7e4(&local_60,uVar5);
    uVar6 = *(undefined8 *)(DAT_008e1518 + 0x2a8);
    FUN__text__002a2ed0(local_58);
    iVar1 = *(int *)(local_38 + 0x700fdc);
    if (0 < iVar1) {
      iVar7 = 0;
      do {
        iVar9 = 0;
        do {
          FUN__text__00300448(&local_68,local_38,iVar7,iVar9,uVar6);
          uVar3 = FUN__text__00306588(local_68);
          lVar10 = local_58;
          if ((uVar3 & 1) == 0) {
            local_70 = local_68;
            if (local_68 != 0) {
              (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
            }
            FUN__text__002a34bc(lVar10,&local_70,uVar6,iVar7,iVar9);
            if (local_70 != 0) {
              (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
              local_70 = 0;
            }
            uVar3 = FUN__text__00308388(local_68);
            if ((uVar3 & 1) != 0) {
              FUN__text__002a3bc8(local_58,iVar7,iVar9,1);
            }
            uVar3 = FUN__text__00303c94(local_38,iVar7,iVar9);
            if ((uVar3 & 1) != 0) {
              FUN__text__002a3654(local_58,iVar7,iVar9,local_68 + 0x60,uVar6);
            }
          }
          if (local_68 != 0) {
            (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 != 0x1e);
        iVar7 = iVar7 + 1;
      } while (iVar7 != iVar1);
    }
    lVar10 = 0x7cda0;
    FUN__text__002a2dfc(local_60,0x28);
    FUN__text__003204a0(&local_68);
    uVar3 = 0;
    do {
      FUN__text__0029e7e4(&local_78,uVar5);
      uVar2 = FUN__text__002a2c60(local_78,uVar3 & 0xffffffff);
      if (local_78 != 0) {
        (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
      }
      if (uVar2 != 0) {
        uVar8 = 0;
        do {
          lVar4 = FUN__text__00321ac0();
          local_78 = *(long *)(lVar4 + lVar10 + uVar8 * 8);
          local_80 = 0;
          FUN__text__00303cd8(local_68,&local_78,(long)&local_80 + 4,&local_80);
          FUN__text__0029e7e4(&local_88,uVar5);
          FUN__text__002a2cb4(CONCAT44(uStack_84,local_88),uVar3 & 0xffffffff,uVar8 & 0xffffffff,
                              local_80._4_4_,local_80 & 0xffffffff);
          if (CONCAT44(uStack_84,local_88) != 0) {
            (**(code **)(*(long *)(CONCAT44(uStack_84,local_88) + 0x48) + 0x18))();
          }
          uVar8 = uVar8 + 1;
        } while (uVar2 != uVar8);
      }
      uVar3 = uVar3 + 1;
      lVar10 = lVar10 + 0x30;
    } while (uVar3 != 6);
    FUN__text__0029e8a4(&local_78,uVar5);
    FUN__text__002a4144(local_78);
    uVar3 = 0;
    lVar10 = 0x7cec8;
    do {
      lVar4 = FUN__text__00321ac0();
      if (*(long *)(lVar4 + lVar10) != 0) {
        local_88 = -1;
        local_80 = CONCAT44(0xffffffff,(undefined4)local_80);
        FUN__text__00303cd8(local_68,(long *)(lVar4 + lVar10),&local_88,(long)&local_80 + 4);
        if ((-1 < local_88) && (-1 < (long)local_80)) {
          FUN__text__002a412c(local_78,uVar3 & 0xffffffff);
        }
      }
      uVar3 = uVar3 + 1;
      lVar10 = lVar10 + 8;
    } while (uVar3 != 99);
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    }
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    }
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    }
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
  }
  FUN__text__0029e8c4(&local_38,uVar5);
  memcpy((void *)(local_38 + 0x58),param_3,0x90);
  (**(code **)(*(long *)(local_38 + 0x48) + 0x18))((long *)(local_38 + 0x48));
  FUN__text__0029e630(uVar5);
  return;
}


