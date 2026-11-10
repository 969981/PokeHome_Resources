/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0063b000; name: FUN_.text__0063b000
 */


undefined8 FUN__text__0063b000(long *param_1,long param_2,uint param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = (**(code **)(*param_1 + 0x58))(param_1,0);
  if ((param_3 & 1) == 0) {
    FUN__text__0063758c(uVar2,param_2);
    uVar2 = (**(code **)(*param_1 + 0x58))(param_1,1);
    FUN__text__0063758c(uVar2,param_2 + 0x158);
    uVar2 = (**(code **)(*param_1 + 0x58))(param_1,2);
    FUN__text__0063758c(uVar2,param_2 + 0x2b0);
    uVar2 = (**(code **)(*param_1 + 0x58))(param_1,3);
    FUN__text__0063758c(uVar2,param_2 + 0x408);
    uVar2 = (**(code **)(*param_1 + 0x58))(param_1,4);
    FUN__text__0063758c(uVar2,param_2 + 0x560);
    uVar2 = (**(code **)(*param_1 + 0x58))(param_1,5);
    FUN__text__0063758c(uVar2,param_2 + 0x6b8);
  }
  else {
    thunk_FUN__text__0063758c();
    uVar2 = (**(code **)(*param_1 + 0x58))(param_1,1);
    thunk_FUN__text__0063758c(uVar2,param_2 + 0x158);
    uVar2 = (**(code **)(*param_1 + 0x58))(param_1,2);
    thunk_FUN__text__0063758c(uVar2,param_2 + 0x2b0);
    uVar2 = (**(code **)(*param_1 + 0x58))(param_1,3);
    thunk_FUN__text__0063758c(uVar2,param_2 + 0x408);
    uVar2 = (**(code **)(*param_1 + 0x58))(param_1,4);
    thunk_FUN__text__0063758c(uVar2,param_2 + 0x560);
    uVar2 = (**(code **)(*param_1 + 0x58))(param_1,5);
    thunk_FUN__text__0063758c(uVar2,param_2 + 0x6b8);
  }
  *(char *)(param_2 + 0x810) = (char)param_1[0x11];
  uVar1 = *(undefined1 *)((long)param_1 + 0x89);
  *(undefined2 *)(param_2 + 0x812) = 0;
  *(undefined1 *)(param_2 + 0x811) = uVar1;
  return 0x814;
}


