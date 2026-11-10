/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00195c10; name: FUN_.text__00195c10
 */


int FUN__text__00195c10(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long local_58;
  
  if (*(int *)(param_3 + 8) == 0) {
    iVar2 = 0;
  }
  else {
    uVar5 = 0;
    iVar2 = 0;
    puVar6 = (undefined8 *)(param_3 + 0x10);
    do {
      uVar4 = *puVar6;
      local_58 = *param_2;
      if (local_58 == 0) {
        iVar1 = FUN__text__001959e0(param_1,&local_58,uVar4);
      }
      else {
        plVar3 = (long *)(local_58 + 0x48);
        (**(code **)(*plVar3 + 0x10))(plVar3);
        iVar1 = FUN__text__001959e0(param_1,&local_58,uVar4);
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
      uVar5 = uVar5 + 1;
      iVar2 = iVar1 + iVar2;
      puVar6 = puVar6 + 4;
    } while (uVar5 < *(uint *)(param_3 + 8));
  }
  return iVar2;
}


