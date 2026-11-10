/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00309e74; name: FUN_.text__00309e74
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00309e74(long *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long local_60 [6];
  long local_18;
  
  lVar5 = *param_1;
  local_18 = lVar5 + 0x199;
  if ((*(byte *)(lVar5 + 0x198) & 1) != 0) {
    local_18 = *(long *)(lVar5 + 0x1a8);
  }
  FUN__text__002148dc(local_60,&local_18);
  iVar2 = FUN__text__005dd2a0(local_60);
  if (iVar2 == 0) {
    uVar3 = 0;
    *(undefined1 *)(lVar5 + 0x20d) = 1;
  }
  else {
    FUN__text__00113bb0(&local_18,*_DAT_0089f550,0,local_60,0,*(undefined8 *)(lVar5 + 0x1f8),0);
    if (*(long *)(lVar5 + 0x78) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar5 + 0x78) + 0x48) + 0x18))();
    }
    lVar1 = local_18;
    *(long *)(lVar5 + 0x78) = local_18;
    uVar3 = 0;
    if (local_18 != 0) {
      plVar4 = (long *)(local_18 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      if (*(long *)(lVar5 + 0x80) != 0 || *(long *)(lVar5 + 0x100) != 0) {
        FUN__text__005d9010(lVar1,lVar5 + 0x70,1);
      }
      FUN__text__005d8de0(lVar1);
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))(plVar4);
      uVar3 = 1;
    }
  }
  if ((local_60[3] != 0) && (local_60[0] != 0)) {
    (**(code **)(*(long *)(local_60[0] + 0x48) + 0x18))();
  }
  local_60[0] = 0;
  local_60[1] = 0xcbf29ce484222645;
  local_60[2] = 0x70f683;
  local_60[3] = 0;
  if (local_60[4] != 0) {
    (**(code **)(*(long *)(local_60[4] + 0x48) + 0x18))();
  }
  return uVar3;
}


