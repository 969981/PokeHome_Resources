/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019513c; name: FUN_.text__0019513c
 */


undefined8 FUN__text__0019513c(long *param_1,int param_2)

{
  ulong uVar1;
  undefined5 uStack_30;
  undefined3 local_2b;
  undefined5 uStack_28;
  
  if ((((*param_1 == 0) || (uVar1 = FUN__text__00306588(), (uVar1 & 1) != 0)) ||
      (uVar1 = FUN__text__00306a08(*param_1,2), (uVar1 & 1) != 0)) ||
     (uVar1 = FUN__text__00306bcc(*param_1), (uVar1 & 1) != 0)) {
    return 0;
  }
  if (param_2 != 0) {
    uStack_28 = 0;
    uStack_30 = 0;
    local_2b = 0;
    FUN__text__00307180(*param_1,&uStack_30,0xd);
    uVar1 = FUN__text__0016af40(param_2,&uStack_30);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  return 1;
}


