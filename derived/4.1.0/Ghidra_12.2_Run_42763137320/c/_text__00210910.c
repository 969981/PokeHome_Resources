/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00210910; name: FUN_.text__00210910
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00210910(long param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined2 local_35;
  
  if (((*(long *)(param_1 + 0x80) == 0) || (*(long *)(param_1 + 0x68) == 0)) ||
     (puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar5 == (undefined8 *)0x0)) {
LAB__text__00210b0c:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  plVar2 = (long *)(**(code **)*puVar5)(puVar5);
  plVar3 = (long *)FUN__text__0020a9bc();
  if (plVar3 != plVar2) {
    do {
      plVar2 = (long *)*plVar2;
    } while (plVar2 != plVar3 && plVar2 != (long *)0x0);
    if (plVar2 == (long *)0x0) goto LAB__text__00210b0c;
  }
  local_48 = 0;
  local_40 = 1;
  local_38 = 0x101;
  local_36 = 0;
  local_35 = 0;
  plVar2 = (long *)(*(long *)(*(long *)(param_1 + 0x78) + 0x640) + 0x60);
  (**(code **)(*plVar2 + 8))(plVar2,0);
  iVar1 = *(int *)(puVar5 + 0xb);
  if (iVar1 == 2) {
    FUN__text__00210b10(param_1);
  }
  else if (iVar1 == 1) {
    puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
    plVar2 = (long *)(**(code **)*puVar6)(puVar6);
    plVar3 = (long *)FUN__text__0012615c();
    if (plVar3 != plVar2) {
      do {
        plVar2 = (long *)*plVar2;
      } while (plVar2 != plVar3 && plVar2 != (long *)0x0);
    }
    if ((puVar6[0xaf] != 0) && (lVar4 = *(long *)(puVar6[0xaf] + 0xb0), lVar4 != 0)) {
      local_70 = 0xb4161e1425c8b469;
      uStack_68 = _DAT_008a11a8;
      local_60 = 0x1e;
      local_58 = 0;
      FUN__text__00115650(&local_50,lVar4,&local_70,0xb);
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      }
      if (local_50 != 0) {
        lVar4 = *(long *)(local_50 + 0x60);
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
        }
        local_70 = puVar5[0xc];
        FUN__text__005f2d98(lVar4,&local_70,*(undefined8 *)(param_1 + 0x88));
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
        if (local_50 != 0) {
          (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
        }
      }
    }
  }
  else if ((iVar1 == 0) && (*(long *)(param_1 + 0x80) != 0)) {
    local_70 = puVar5[0xc];
    FUN__text__005f2d98(*(long *)(param_1 + 0x80),&local_70,*(undefined8 *)(param_1 + 0x88));
  }
  local_48 = *(undefined8 *)(param_1 + 0x88);
  FUN__text__00131da0(*(undefined8 *)(param_1 + 0x78),&local_48);
  FUN__text__00128ec0(*(undefined8 *)(param_1 + 0x78),0);
  return;
}


