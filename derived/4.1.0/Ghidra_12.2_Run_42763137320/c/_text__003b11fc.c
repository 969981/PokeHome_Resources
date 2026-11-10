/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b11fc; name: FUN_.text__003b11fc
 */


bool FUN__text__003b11fc(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 local_54;
  long **local_50;
  long lStack_48;
  long *local_28;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x7c8) + 0x60);
  if (iVar1 == 0) {
    if ((*(int *)(param_1 + 0x868) != -1) &&
       (plVar3 = (long *)FUN__text__003b8e30(param_1 + 0x788,0xffffffff), plVar3 != (long *)0x0)) {
      lStack_48 = *plVar3;
      local_50 = &local_28;
      local_28 = (long *)0x0;
      FUN__text__003aa1c0(param_1,&local_50,0);
      FUN__text__003a14e8(local_28,0);
      if (*(code **)(param_1 + 0xc0) != (code *)0x0) {
        local_50 = (long **)*plVar3;
        local_28 = (long *)CONCAT44(local_28._4_4_,*(undefined4 *)(param_1 + 0x868));
        local_54 = (undefined4)plVar3[2];
        (**(code **)(param_1 + 0xc0))(param_1 + 0xe0,&local_28,&local_50,&local_54);
      }
    }
    lVar5 = *(long *)(param_1 + 2000);
    *(undefined1 *)(lVar5 + 0x149) = 1;
    *(undefined8 *)(lVar5 + 0x150) = 0;
    if (*(long *)(lVar5 + 0xb0) != -0x340d631b7bddd9bb && *(long *)(lVar5 + 0xb0) != 0) {
      (**(code **)(**(long **)(lVar5 + 0x98) + 0x78))();
    }
    lVar5 = *(long *)(param_1 + 0x800);
    uVar2 = FUN__text__003b7414(lVar5,*(undefined4 *)(lVar5 + 0x14),*(undefined4 *)(lVar5 + 0x10));
    puVar4 = (undefined8 *)FUN__text__003b8e30(param_1 + 0x788,uVar2);
    if (*(code **)(param_1 + 0x2c0) != (code *)0x0) {
      local_28 = (long *)CONCAT44(local_28._4_4_,uVar2);
      local_50 = (long **)CONCAT44(local_50._4_4_,*(undefined4 *)(param_1 + 0x868));
      (**(code **)(param_1 + 0x2c0))(param_1 + 0x2e0,&local_50,&local_28);
    }
    if (*(code **)(param_1 + 0xc0) != (code *)0x0) {
      local_50 = (long **)*puVar4;
      local_28 = (long *)CONCAT44(local_28._4_4_,uVar2);
      local_54 = *(undefined4 *)(puVar4 + 2);
      (**(code **)(param_1 + 0xc0))(param_1 + 0xe0,&local_28,&local_50,&local_54);
    }
    lStack_48 = *puVar4;
    local_50 = &local_28;
    local_28 = (long *)0x0;
    FUN__text__003aa1c0(param_1,&local_50,0);
    (**(code **)(*local_28 + 0x38))(local_28,param_1 + 0x870);
    puVar4 = (undefined8 *)FUN__text__003b8e30(param_1 + 0x788,*(undefined4 *)(param_1 + 0x868));
    if (puVar4 != (undefined8 *)0x0) {
      if (*(code **)(param_1 + 0xc0) != (code *)0x0) {
        local_50 = (long **)*puVar4;
        local_54 = *(undefined4 *)(puVar4 + 2);
        local_28 = (long *)CONCAT44(local_28._4_4_,*(undefined4 *)((long)puVar4 + 0xc));
        (**(code **)(param_1 + 0xc0))(param_1 + 0xe0,&local_28,&local_50,&local_54);
      }
      lStack_48 = *puVar4;
      local_50 = &local_28;
      local_28 = (long *)0x0;
      FUN__text__003aa1c0(param_1,&local_50,0);
      plVar3 = local_28;
      (**(code **)(*local_28 + 0x38))(local_28,param_1 + 0x880);
      local_50 = (long **)plVar3[0x11];
      (**(code **)(**(long **)(param_1 + 0x98) + 0x60))(*(long **)(param_1 + 0x98),&local_50,1);
    }
  }
  return iVar1 == 0;
}


