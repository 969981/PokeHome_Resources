/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b1638; name: FUN_.text__003b1638
 */


bool FUN__text__003b1638(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 local_44;
  long **local_40;
  long lStack_38;
  undefined8 local_18;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x7c8) + 0x60);
  if (iVar1 == 0) {
    if ((*(int *)(param_1 + 0x868) != -1) &&
       (plVar2 = (long *)FUN__text__003b8e30(param_1 + 0x788,0xffffffff), plVar2 != (long *)0x0)) {
      lStack_38 = *plVar2;
      local_40 = (long **)&local_18;
      local_18 = (long *)0x0;
      FUN__text__003aa1c0(param_1,&local_40,0);
      FUN__text__003a14e8(local_18,0);
      if (*(code **)(param_1 + 0xc0) != (code *)0x0) {
        local_40 = (long **)*plVar2;
        local_18 = (long *)CONCAT44(local_18._4_4_,*(undefined4 *)(param_1 + 0x868));
        local_44 = (undefined4)plVar2[2];
        (**(code **)(param_1 + 0xc0))(param_1 + 0xe0,&local_18,&local_40,&local_44);
      }
    }
    lVar4 = *(long *)(param_1 + 2000);
    *(undefined1 *)(lVar4 + 0x149) = 1;
    *(undefined8 *)(lVar4 + 0x150) = 0;
    if (*(long *)(lVar4 + 0xb0) == -0x340d631b7bddd9bb || *(long *)(lVar4 + 0xb0) == 0) {
      puVar3 = (undefined8 *)FUN__text__003b8e30(param_1 + 0x788,*(undefined4 *)(param_1 + 0x868));
    }
    else {
      (**(code **)(**(long **)(lVar4 + 0x98) + 0x78))();
      puVar3 = (undefined8 *)FUN__text__003b8e30(param_1 + 0x788,*(undefined4 *)(param_1 + 0x868));
    }
    if (puVar3 != (undefined8 *)0x0) {
      if (*(code **)(param_1 + 0xc0) != (code *)0x0) {
        local_40 = (long **)*puVar3;
        local_44 = *(undefined4 *)(puVar3 + 2);
        local_18._4_4_ = (undefined4)((ulong)local_18 >> 0x20);
        local_18 = (long *)CONCAT44(local_18._4_4_,*(undefined4 *)((long)puVar3 + 0xc));
        (**(code **)(param_1 + 0xc0))(param_1 + 0xe0,&local_18,&local_40,&local_44);
      }
      lStack_38 = *puVar3;
      local_40 = (long **)&local_18;
      local_18 = (long *)0x0;
      FUN__text__003aa1c0(param_1,&local_40,0);
      plVar2 = local_18;
      (**(code **)(*local_18 + 0x38))(local_18,param_1 + 0x870);
      local_40 = (long **)plVar2[0x11];
      (**(code **)(**(long **)(param_1 + 0x98) + 0x60))(*(long **)(param_1 + 0x98),&local_40,1);
    }
  }
  return iVar1 == 0;
}


