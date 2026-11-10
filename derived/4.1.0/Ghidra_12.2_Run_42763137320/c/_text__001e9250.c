/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001e9250; name: FUN_.text__001e9250
 */


void FUN__text__001e9250(long param_1,ulong param_2)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  if (0x464 < ((uint)(param_2 >> 4) & 0xfffffff)) {
                    /* WARNING: Subroutine does not return */
    FUN__text__0011a180(0x717b65);
  }
  lVar1 = param_1 + (long)*(int *)(param_1 + 0x17c) * 4;
  uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x180) + (param_2 & 0xffffffff) * 4);
  *(undefined4 *)(lVar1 + 0xbc) = uVar2;
  *(undefined4 *)(lVar1 + 0x11c) = uVar2;
  puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar3 = (long *)(**(code **)*puVar5)(puVar5);
  plVar4 = (long *)FUN__text__0012615c();
  if (plVar4 != plVar3) {
    do {
      plVar3 = (long *)*plVar3;
    } while (plVar3 != plVar4 && plVar3 != (long *)0x0);
  }
  local_50 = 0x54b55ab916d8b464;
  uStack_48 = 0x717bd2;
  local_40 = 0x1b;
  local_38 = 0;
  plVar3 = (long *)FUN__text__00137c10(puVar5[0xaf],&local_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  (**(code **)(*plVar3 + 0x90))(plVar3);
  *(undefined4 *)(param_1 + 0x98) = 0;
  return;
}


