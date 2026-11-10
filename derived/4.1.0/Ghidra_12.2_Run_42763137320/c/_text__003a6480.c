/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a6480; name: FUN_.text__003a6480
 */


void FUN__text__003a6480(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar2 = param_1 + 0x138;
  lVar4 = param_1 + 0xa8;
  (**(code **)(**(long **)(param_1 + 0x98) + 0x60))(*(long **)(param_1 + 0x98),lVar2,1);
  *(uint *)(*(long *)(param_1 + 0x260) + 8) = param_2;
  local_60 = 0;
  uStack_58 = 0;
  (**(code **)(**(long **)(param_1 + 0x98) + 0x28))(*(long **)(param_1 + 0x98),lVar2,&local_60);
  lVar1 = lVar4 + (long)(int)param_2 * 0x10;
  (**(code **)(**(long **)(param_1 + 0x98) + 0x108))(*(long **)(param_1 + 0x98),lVar1 + 8,lVar2);
  if (0 < *(int *)(param_1 + 0x290)) {
    uVar5 = 0;
    do {
      while (plVar3 = *(long **)(param_1 + 0x98), param_2 == uVar5) {
        (**(code **)(*plVar3 + 0x100))(plVar3,lVar1,param_1 + 0x510);
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x10;
        if ((long)*(int *)(param_1 + 0x290) <= (long)uVar5) {
          return;
        }
      }
      (**(code **)(*plVar3 + 0x100))(plVar3,lVar4,param_1 + 0x514);
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x10;
    } while ((long)uVar5 < (long)*(int *)(param_1 + 0x290));
  }
  return;
}


