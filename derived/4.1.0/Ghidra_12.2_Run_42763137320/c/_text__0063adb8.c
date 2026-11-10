/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0063adb8; name: FUN_.text__0063adb8
 */


void FUN__text__0063adb8(long *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x50))(param_1,0);
  uVar2 = (**(code **)(*param_2 + 0x58))(param_2,0);
  thunk_FUN__text__00631018(uVar1,uVar2);
  uVar1 = (**(code **)(*param_1 + 0x50))(param_1,1);
  uVar2 = (**(code **)(*param_2 + 0x58))(param_2,1);
  thunk_FUN__text__00631018(uVar1,uVar2);
  uVar1 = (**(code **)(*param_1 + 0x50))(param_1,2);
  uVar2 = (**(code **)(*param_2 + 0x58))(param_2,2);
  thunk_FUN__text__00631018(uVar1,uVar2);
  uVar1 = (**(code **)(*param_1 + 0x50))(param_1,3);
  uVar2 = (**(code **)(*param_2 + 0x58))(param_2,3);
  thunk_FUN__text__00631018(uVar1,uVar2);
  uVar1 = (**(code **)(*param_1 + 0x50))(param_1,4);
  uVar2 = (**(code **)(*param_2 + 0x58))(param_2,4);
  thunk_FUN__text__00631018(uVar1,uVar2);
  uVar1 = (**(code **)(*param_1 + 0x50))(param_1,5);
  uVar2 = (**(code **)(*param_2 + 0x58))(param_2,5);
  thunk_FUN__text__00631018(uVar1,uVar2);
  *(char *)(param_1 + 0x11) = (char)param_2[0x11];
  return;
}


