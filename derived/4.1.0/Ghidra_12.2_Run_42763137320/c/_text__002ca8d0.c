/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002ca8d0; name: FUN_.text__002ca8d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002ca8d0(ulong param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  undefined4 local_9c;
  long local_98;
  long local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  long local_80;
  long *local_78;
  long local_70;
  long local_68;
  
  FUN__text__003204a0(&local_70);
  lVar3 = FUN__text__002f0d40();
  local_78 = *(long **)(*_DAT_0089f3d8 + 0x2a8);
  FUN__text__002a32ac(&local_80,local_78,&local_78);
  if ((lVar3 != 0) && (iVar1 = *(int *)(local_70 + 0x700fdc), 0 < iVar1)) {
    uVar11 = tpidr_el0;
    iVar8 = 0;
    uVar11 = uVar11 & 0xffffffffffffe000;
    do {
      iVar9 = 0;
      do {
        FUN__text__002e8698(lVar3,iVar8,iVar9,local_78);
        FUN__text__00300448(&local_88,local_70,iVar8,iVar9,local_78);
        uVar4 = FUN__text__00306588(CONCAT44(uStack_84,local_88));
        plVar10 = local_78;
        if ((uVar4 & 1) == 0) {
          lVar5 = FUN__text__00306bc4(CONCAT44(uStack_84,local_88));
          if (*(long *)(uVar11 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
            FUN__text__00102c10();
          }
          *(long **)(uVar11 + *(long *)(uVar11 + 0x98) * 8 + 0x18) = plVar10;
          *(long *)(uVar11 + 0x98) = *(long *)(uVar11 + 0x98) + 1;
          lVar6 = (**(code **)(*plVar10 + 0x10))(plVar10,0x78,8);
          if (lVar6 == 0) {
            (**(code **)(*plVar10 + 0xb8))(plVar10);
          }
          local_68 = lVar5;
          if (lVar5 != 0) {
            (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))((long *)(lVar5 + 0x48));
          }
          FUN__text__002eaa3c(lVar6,&local_68);
          if (local_68 != 0) {
            (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
          }
          *(long **)(lVar6 + 8) = plVar10;
          *(long *)(lVar6 + 0x10) = lVar6;
          *(undefined8 *)(lVar6 + 0x18) = 0x78;
          *(undefined8 *)(lVar6 + 0x20) = 8;
          *(long *)(uVar11 + 0x98) = *(long *)(uVar11 + 0x98) + -1;
          plVar10 = (long *)(lVar6 + 0x48);
          (**(code **)(*plVar10 + 0x10))(plVar10);
          local_90 = lVar6;
          (**(code **)(*plVar10 + 0x10))(plVar10);
          FUN__text__002e87ac(lVar3,&local_90,iVar8,iVar9,1);
          if (local_90 != 0) {
            (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
            local_90 = 0;
          }
          if (((param_1 & 1) != 0) &&
             (uVar4 = FUN__text__00303c94(local_70,iVar8,iVar9), (uVar4 & 1) != 0)) {
            local_98 = local_80;
            if (local_80 != 0) {
              (**(code **)(*(long *)(local_80 + 0x48) + 0x10))();
            }
            FUN__text__002e90cc(lVar3,&local_98,iVar8,iVar9,CONCAT44(uStack_84,local_88) + 0x60);
            if (local_98 != 0) {
              (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
              local_98 = 0;
            }
          }
          (**(code **)(*plVar10 + 0x18))(plVar10);
        }
        if (CONCAT44(uStack_84,local_88) != 0) {
          (**(code **)(*(long *)(CONCAT44(uStack_84,local_88) + 0x48) + 0x18))();
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 != 0x1e);
      iVar8 = iVar8 + 1;
    } while (iVar8 != iVar1);
  }
  uVar7 = FUN__text__002f0cb0();
  uVar2 = FUN__text__002e3628(uVar7,0);
  if (uVar2 != 0) {
    uVar11 = 0;
    do {
      lVar3 = FUN__text__00321ac0();
      local_9c = 0;
      local_68 = *(long *)(lVar3 + uVar11 * 8 + 0x7cda0);
      local_88 = 0;
      FUN__text__00303cd8(local_70,&local_68,&local_88,&local_9c);
      FUN__text__002e4338(uVar7,0,uVar11 & 0xffffffff,local_88,local_9c);
      uVar11 = uVar11 + 1;
    } while (uVar2 != uVar11);
  }
  uVar2 = FUN__text__002e3628(uVar7,1);
  if (uVar2 != 0) {
    uVar11 = 0;
    do {
      lVar3 = FUN__text__00321ac0();
      local_9c = 0;
      local_68 = *(long *)(lVar3 + uVar11 * 8 + 0x7cdd0);
      local_88 = 0;
      FUN__text__00303cd8(local_70,&local_68,&local_88,&local_9c);
      FUN__text__002e4338(uVar7,1,uVar11 & 0xffffffff,local_88,local_9c);
      uVar11 = uVar11 + 1;
    } while (uVar2 != uVar11);
  }
  uVar2 = FUN__text__002e3628(uVar7,2);
  if (uVar2 != 0) {
    uVar11 = 0;
    do {
      lVar3 = FUN__text__00321ac0();
      local_9c = 0;
      local_68 = *(long *)(lVar3 + uVar11 * 8 + 0x7ce00);
      local_88 = 0;
      FUN__text__00303cd8(local_70,&local_68,&local_88,&local_9c);
      FUN__text__002e4338(uVar7,2,uVar11 & 0xffffffff,local_88,local_9c);
      uVar11 = uVar11 + 1;
    } while (uVar2 != uVar11);
  }
  uVar2 = FUN__text__002e3628(uVar7,3);
  if (uVar2 != 0) {
    uVar11 = 0;
    do {
      lVar3 = FUN__text__00321ac0();
      local_9c = 0;
      local_68 = *(long *)(lVar3 + uVar11 * 8 + 0x7ce30);
      local_88 = 0;
      FUN__text__00303cd8(local_70,&local_68,&local_88,&local_9c);
      FUN__text__002e4338(uVar7,3,uVar11 & 0xffffffff,local_88,local_9c);
      uVar11 = uVar11 + 1;
    } while (uVar2 != uVar11);
  }
  uVar2 = FUN__text__002e3628(uVar7,4);
  if (uVar2 != 0) {
    uVar11 = 0;
    do {
      lVar3 = FUN__text__00321ac0();
      local_9c = 0;
      local_68 = *(long *)(lVar3 + uVar11 * 8 + 0x7ce60);
      local_88 = 0;
      FUN__text__00303cd8(local_70,&local_68,&local_88,&local_9c);
      FUN__text__002e4338(uVar7,4,uVar11 & 0xffffffff,local_88,local_9c);
      uVar11 = uVar11 + 1;
    } while (uVar2 != uVar11);
  }
  uVar2 = FUN__text__002e3628(uVar7,5);
  if (uVar2 != 0) {
    uVar11 = 0;
    do {
      lVar3 = FUN__text__00321ac0();
      local_9c = 0;
      local_68 = *(long *)(lVar3 + uVar11 * 8 + 0x7ce90);
      local_88 = 0;
      FUN__text__00303cd8(local_70,&local_68,&local_88,&local_9c);
      FUN__text__002e4338(uVar7,5,uVar11 & 0xffffffff,local_88,local_9c);
      uVar11 = uVar11 + 1;
    } while (uVar2 != uVar11);
  }
  FUN__text__002e4480(uVar7,0x20);
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
  }
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
  }
  return;
}


