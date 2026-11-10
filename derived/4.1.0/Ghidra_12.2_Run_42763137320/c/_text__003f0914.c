/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f0914; name: FUN_.text__003f0914
 */


void FUN__text__003f0914(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_70 [24];
  long local_58;
  long local_50;
  long local_48;
  undefined1 local_28 [4];
  undefined4 local_24;
  
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (*param_2 != 0) {
    local_50 = param_3;
    if (*(char *)(param_1 + 0x10) == '\0') {
      uVar2 = *(undefined4 *)(param_1 + 8);
      FUN__text__005e9290(auStack_70,param_1);
      local_28[0] = 1;
      local_48 = param_3;
      local_24 = uVar2;
      (*(code *)*param_2)(param_2 + 4,&local_24,auStack_70,local_28,&local_48);
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        return;
      }
    }
    else {
      plVar1 = *(long **)(param_1 + 0x20);
      if (*(long **)(param_1 + 0x28) <= plVar1) {
        FUN__text__003f12f0(param_1 + 0x18,param_2,&local_50);
        return;
      }
      uVar4 = tpidr_el0;
      uVar4 = uVar4 & 0xffffffffffffe000;
      if (*(long *)(uVar4 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10();
      }
      *(undefined8 *)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x30);
      *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
      *plVar1 = 0;
      plVar1[1] = 0;
      plVar1[2] = 0;
      plVar1[3] = 0;
      if ((code *)param_2[2] != (code *)0x0) {
        (*(code *)param_2[2])(param_2 + 4,plVar1 + 4);
        lVar3 = param_2[3];
        plVar1[1] = param_2[1];
        plVar1[3] = lVar3;
        lVar3 = *param_2;
        plVar1[2] = param_2[2];
        *plVar1 = lVar3;
      }
      plVar1[0x10] = param_3;
      *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
      *(long **)(param_1 + 0x20) = plVar1 + 0x12;
    }
  }
  return;
}


