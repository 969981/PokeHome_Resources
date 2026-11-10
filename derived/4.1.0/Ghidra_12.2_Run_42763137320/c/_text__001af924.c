/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001af924; name: FUN_.text__001af924
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001af924(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long local_70;
  long local_68;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined4 local_44;
  
  lVar8 = *(long *)(param_1 + 0x18);
  if (((lVar8 == 0) || (lVar10 = *(long *)(lVar8 + 0x10), lVar10 == 0)) ||
     (lVar8 = *(long *)(lVar8 + 0x250), lVar8 == 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  plVar9 = (long *)(lVar8 + 0x48);
  (**(code **)(*plVar9 + 0x10))(plVar9);
  local_44 = 0;
  local_50 = 0;
  local_58 = lVar8;
  (**(code **)(*plVar9 + 0x10))(plVar9);
  uVar6 = FUN__text__001949dc(lVar10,&local_58,&local_44,param_2,1);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if ((uVar6 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))(plVar9);
    local_60 = *(undefined8 *)(*_DAT_0089f3d8 + 0x2a8);
    local_50 = lVar8;
    FUN__text__0018d370(&local_68,local_60,&local_60);
    local_70 = local_68;
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
    }
    FUN__text__0019485c(lVar10,&local_70,param_2);
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
    lVar10 = FUN__text__00325bc0();
    cVar2 = FUN__text__00194b7c(*(undefined4 *)(lVar10 + 0x2c));
    cVar3 = FUN__text__00194b7c(local_44);
    if (cVar3 == cVar2) {
      uVar7 = FUN__text__00306734(lVar8);
      uVar4 = FUN__text__0016b220(uVar7,local_44);
    }
    else {
      FUN__text__00306bc4(local_68);
      uVar4 = FUN__text__006312f0();
    }
    if (((cVar2 == '\x02') && (cVar3 == '\x02')) &&
       (uVar6 = FUN__text__00307e54(local_68), (uVar6 & 1) != 0)) {
      iVar5 = FUN__text__00306734(local_68);
      uVar1 = 4;
      if (iVar5 != 0x1b) {
        uVar1 = uVar4;
      }
      uVar4 = uVar1;
    }
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    }
  }
  FUN__text__001ae650(param_1,&local_50,local_44,uVar4);
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
  }
  (**(code **)(*plVar9 + 0x18))(plVar9);
  return;
}


