/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003af574; name: FUN_.text__003af574
 */


void FUN__text__003af574(long param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long local_48;
  long *local_40;
  undefined8 uStack_38;
  long local_18;
  
  if (param_3 == 1) {
    lVar4 = *(long *)(param_1 + 0x800);
    iVar2 = FUN__text__003b7414(lVar4,*(undefined4 *)(lVar4 + 0x14),*(undefined4 *)(lVar4 + 0x10));
    lVar4 = FUN__text__003b8ec0(param_1 + 0x788,param_2 + 0x60);
    if (*(int *)(lVar4 + 0xc) != iVar2 || *(char *)(param_1 + 0x853) != '\0') {
      uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x800) + 0x10);
      uVar3 = FUN__text__003b78c0(*(long *)(param_1 + 0x800),*(int *)(lVar4 + 0xc),uVar1);
      FUN__text__003adcc0(param_1,uVar3,uVar1);
      return;
    }
  }
  else if (param_3 == 0) {
    lVar4 = *(long *)(param_1 + 0x800);
    uVar1 = FUN__text__003b7414(lVar4,*(undefined4 *)(lVar4 + 0x14),*(undefined4 *)(lVar4 + 0x10));
    puVar5 = (undefined8 *)FUN__text__003b8e30(param_1 + 0x788,uVar1);
    uStack_38 = *puVar5;
    local_40 = &local_18;
    local_18 = 0;
    FUN__text__003aa1c0(param_1,&local_40,0);
    local_48 = local_18;
    plVar6 = *(long **)(param_1 + 2000);
    if (local_18 != 0) {
      (**(code **)(*(long *)(local_18 + 0x48) + 0x10))();
    }
    (**(code **)(*plVar6 + 0x100))(plVar6,&local_48);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    }
  }
  return;
}


