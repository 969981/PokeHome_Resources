/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c1cd0; name: FUN_.text__001c1cd0
 */


uint FUN__text__001c1cd0(long param_1,int param_2,uint *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long local_60;
  undefined1 auStack_54 [20];
  
  if (*(char *)(param_1 + (long)param_2 * 0x38 + 0x20) == '\0') {
    uVar1 = 0;
  }
  else if (*(char *)(param_1 + (long)param_2 * 0x38 + (ulong)param_3[1] + (ulong)*param_3 * 5 + 0x38
                    ) == '\0') {
    lVar2 = *(long *)(param_1 + 0x18);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl();
    }
    uVar3 = *(undefined8 *)(lVar2 + 0x10);
    lVar2 = *(long *)(lVar2 + 0x158);
    if (lVar2 == 0) {
      FUN__text__00191328(auStack_54,param_1 + (long)param_2 * 0x38 + 0x24,param_3);
      local_60 = 0;
    }
    else {
      plVar4 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN__text__00191328(auStack_54,param_1 + (long)param_2 * 0x38 + 0x24,param_3);
      local_60 = lVar2;
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
    uVar1 = FUN__text__00194730(uVar3,&local_60,auStack_54);
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
    if ((uVar1 & 1) != 0) {
      *(undefined1 *)
       (param_1 + (long)param_2 * 0x38 + (ulong)param_3[1] + (ulong)*param_3 * 5 + 0x38) = 1;
    }
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1 & 1;
}


