/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001dcfd4; name: FUN_.text__001dcfd4
 */


void FUN__text__001dcfd4(long param_1,ulong param_2,ulong param_3)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined8 local_84;
  char local_7c [4];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar7 = *(long *)(param_1 + 0x18);
  if (((lVar7 == 0) || (lVar8 = *(long *)(lVar7 + 0x10), lVar8 == 0)) ||
     (*(long *)(lVar7 + 0x718) == 0)) {
LAB__text__001dd1f0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  lVar6 = *(long *)(*(long *)(lVar7 + 0x718) + 0x168);
  if (lVar6 == 0) {
    return;
  }
  lVar11 = *(long *)(param_1 + 8);
  if (*(long *)(lVar11 + 0x2d0) == 0) {
    return;
  }
  uVar1 = *(undefined4 *)
           (*(long *)(*(long *)(param_1 + 0x89d0) + 0xe0) + (param_2 & 0xffffffff) * 8);
  plVar4 = (long *)(*(long *)(lVar11 + 0x2d0) + 0x48);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  local_7c[0] = '\0';
  local_68 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN__text__0019a164(param_1 + 0x89f0,uVar1,local_7c);
  local_8c = (undefined4)local_78;
  uStack_88 = local_78._4_4_;
  local_84 = local_70;
  if ((local_7c[0] != '\0') &&
     (uVar3 = FUN__text__001934c4(lVar8,local_7c,&local_8c), (uVar3 & 1) == 0))
  goto LAB__text__001dd1c0;
  lVar8 = *(long *)(lVar7 + 0x158);
  if (lVar8 == 0) goto LAB__text__001dd1f0;
  plVar9 = (long *)(lVar8 + 0x48);
  (**(code **)(*plVar9 + 0x10))(plVar9);
  local_90 = 0;
  uVar3 = FUN__text__001c6650(lVar6,&local_8c);
  if ((uVar3 & 1) == 0) {
    lVar10 = *(long *)(lVar7 + 0x718);
    if (lVar10 == 0) goto LAB__text__001dd1f0;
    local_98 = lVar8;
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))(plVar9);
    uVar3 = FUN__text__001a0e18(lVar10,&local_98,&local_8c,&local_90);
    if (local_98 != 0) {
      (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
      local_98 = 0;
    }
    if ((uVar3 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x89d8) = 4;
      **(undefined4 **)(lVar7 + 0x88) = local_90;
    }
    else {
      uVar3 = FUN__text__001c639c(lVar6,&local_8c);
      if ((uVar3 & 1) != 0) goto LAB__text__001dd164;
    }
  }
  else {
    FUN__text__001c65c0(lVar6,&local_8c);
LAB__text__001dd164:
    FUN__text__001beccc(lVar11 + 0x110,lVar7,local_7c,param_1 + (param_3 & 0xffffffff) * 200 + 0x48)
    ;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  iVar2 = FUN__text__001c693c(lVar6);
  FUN__text__001d911c(uVar5,iVar2 != 0);
  if (*(long *)(lVar11 + 0x4e0) != 0) {
    FUN__text__003c02e4();
  }
  (**(code **)(*plVar9 + 0x18))(plVar9);
LAB__text__001dd1c0:
  (**(code **)(*plVar4 + 0x18))(plVar4);
  return;
}


