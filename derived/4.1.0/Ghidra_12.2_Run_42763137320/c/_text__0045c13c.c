/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045c13c; name: FUN_.text__0045c13c
 */


long FUN__text__0045c13c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                        undefined4 param_5,uint param_6)

{
  long lVar1;
  
  lVar1 = FUN__text__00400f90(5,0x1a0,0x10);
  if (lVar1 != 0) {
    FUN__text__0045bbd0(lVar1,param_2,param_3,param_4,param_5,param_6 & 1);
    if (*param_1 == 0) {
      *param_1 = lVar1;
      *(undefined8 *)(lVar1 + 0x20) = 0;
    }
    else {
      *(long *)(lVar1 + 0x20) = *param_1;
      *param_1 = lVar1;
    }
  }
  return lVar1;
}


