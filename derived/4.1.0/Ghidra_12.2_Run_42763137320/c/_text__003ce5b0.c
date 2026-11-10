/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ce5b0; name: FUN_.text__003ce5b0
 */


void FUN__text__003ce5b0(long *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = (**(code **)(*param_1 + 0xd8))();
  if ((uVar2 & 1) == 0) {
    uVar1 = (**(code **)(*param_1 + 0xc0))(param_1,1);
    FUN__text__003c4b88(0,param_1,uVar1,1,1);
    if (*(char *)((long)param_1 + 0xc9) != '\0') {
      uVar1 = (**(code **)(*param_1 + 0xc0))(param_1,7);
      FUN__text__003c4b88(0,param_1,uVar1,1,1);
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 0xd0))(param_1,0);
    *(undefined1 *)((long)param_1 + 900) = 1;
  }
  return;
}


