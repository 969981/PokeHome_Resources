/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065031c; name: FUN_.text__0065031c
 */


undefined4 FUN__text__0065031c(undefined8 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    if (param_1[10] != 0) {
      if ((*(int *)((long)param_1 + 0x25c) != param_2) || (*(char *)((long)param_1 + 0x269) == '\0')
         ) {
        FUN__text__0065c438(*param_1,param_2);
        FUN__text__0065cab0(*param_1,1);
        uVar1 = (*(code *)param_1[10])(param_1[0xb],param_2);
        FUN__text__0065cab0(*param_1,0);
        return uVar1;
      }
      *(undefined1 *)((long)param_1 + 0x269) = 0;
    }
    FUN__text__0065c438(*param_1,param_2);
  }
  nnsocketClose(param_2);
  return 0;
}


