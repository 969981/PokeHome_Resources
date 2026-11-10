/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00214ab0; name: FUN_.text__00214ab0
 */


undefined8 FUN__text__00214ab0(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  long local_70;
  long *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_38;
  
  piVar8 = (int *)*param_3;
  if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  lVar9 = *param_1;
  lVar4 = FUN__text__002155d0(*(undefined8 *)(lVar9 + 0x418));
  if (lVar4 == 0) {
    return 0;
  }
  uVar5 = FUN__text__002155d0(*(undefined8 *)(lVar9 + 0x418));
  FUN__text__002164e0(&local_70,uVar5,param_1[2],1);
  if (local_70 == 0) {
    return 0;
  }
  lVar4 = param_1[1];
  local_38 = lVar4 + 9;
  if ((*(byte *)(lVar4 + 8) & 1) != 0) {
    local_38 = *(long *)(lVar4 + 0x18);
  }
  FUN__text__002148dc(&local_a0,&local_38,param_2);
  local_38 = 0;
  uVar2 = FUN__text__002167e8(local_70);
  iVar3 = FUN__text__00214dfc(&local_38,&local_a0,uVar2,0);
  *piVar8 = iVar3;
  if (iVar3 == 0) {
    FUN__text__005dc04c(local_38,0,0);
    uVar5 = FUN__text__002167f0(local_70);
    uVar2 = FUN__text__002167e8(local_70);
    iVar3 = FUN__text__005dc198(local_38,uVar5,uVar2);
    *piVar8 = iVar3;
    if (iVar3 == 0) {
      iVar3 = FUN__text__005dc190(local_38);
      *piVar8 = iVar3;
      if (iVar3 == 0) {
        FUN__text__005dc014(local_38);
        bVar1 = true;
        goto joined_r0x00214bc8;
      }
    }
    bVar1 = false;
  }
  else {
    bVar1 = false;
  }
joined_r0x00214bc8:
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  if ((local_88 != 0) && (local_a0 != 0)) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
  }
  local_a0 = 0;
  uStack_98 = 0xcbf29ce484222645;
  local_90 = 0x70f683;
  local_88 = 0;
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
  }
  lVar4 = local_70;
  local_70 = 0;
  if (lVar4 != 0) {
    lVar7 = *(long *)(lVar4 + 0xe8);
    *(undefined8 *)(lVar4 + 0xe8) = 0;
    if (lVar7 != 0) {
      (**(code **)(**(long **)(lVar4 + 0xf0) + 0x18))
                (*(long **)(lVar4 + 0xf0),lVar7,*(undefined8 *)(lVar4 + 0xf8),
                 *(undefined8 *)(lVar4 + 0x100));
    }
    lVar7 = *(long *)(lVar4 + 0x48);
    *(undefined8 *)(lVar4 + 0x48) = 0;
    if (lVar7 != 0) {
      (**(code **)(**(long **)(lVar4 + 0x50) + 0x18))
                (*(long **)(lVar4 + 0x50),lVar7,*(undefined8 *)(lVar4 + 0x58),
                 *(undefined8 *)(lVar4 + 0x60));
    }
    lVar7 = *(long *)(lVar4 + 8);
    *(undefined8 *)(lVar4 + 8) = 0;
    if (lVar7 != 0) {
      (**(code **)(**(long **)(lVar4 + 0x10) + 0x18))
                (*(long **)(lVar4 + 0x10),lVar7,*(undefined8 *)(lVar4 + 0x18),
                 *(undefined8 *)(lVar4 + 0x20));
    }
    (**(code **)(*local_68 + 0x18))(local_68,lVar4,uStack_60,local_58);
  }
  if (!bVar1) {
    return 0;
  }
  FUN__text__002148dc(&local_a0,&DAT_008aa4e0,param_2);
  lVar9 = lVar9 + 0x18;
  local_70 = 0;
  uVar5 = FUN__text__00213f68(lVar9);
  iVar3 = FUN__text__00214dfc(&local_70,&local_a0,uVar5,0);
  *piVar8 = iVar3;
  if (iVar3 == 0) {
    FUN__text__005dc04c(local_70,0,0);
    uVar5 = FUN__text__00213f64(lVar9);
    uVar6 = FUN__text__00213f68(lVar9);
    iVar3 = FUN__text__005dc198(local_70,uVar5,uVar6);
    uVar5 = 0;
    *piVar8 = iVar3;
    if (iVar3 != 0) goto joined_r0x00214d68;
    iVar3 = FUN__text__005dc190(local_70);
    *piVar8 = iVar3;
    if (iVar3 == 0) {
      FUN__text__005dc014(local_70);
      uVar5 = 1;
      goto joined_r0x00214d68;
    }
  }
  uVar5 = 0;
joined_r0x00214d68:
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
  }
  if ((local_88 != 0) && (local_a0 != 0)) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
  }
  local_a0 = 0;
  uStack_98 = 0xcbf29ce484222645;
  local_90 = 0x70f683;
  local_88 = 0;
  if (local_80 == 0) {
    return uVar5;
  }
  (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
  return uVar5;
}


