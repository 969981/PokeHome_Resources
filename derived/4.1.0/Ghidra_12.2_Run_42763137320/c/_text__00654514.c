/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00654514; name: FUN_.text__00654514
 */


void FUN__text__00654514(long param_1)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_8;
  
  if ((*(long *)(param_1 + 0xc08) != -1) && (*(long *)(param_1 + 200) != 0)) {
    if (*(long *)(param_1 + 0xe8) != 0) {
      FUN__text__00667a44(param_1,3,2);
    }
    local_8 = 0;
    FUN__text__00679878(&local_8);
    local_30 = *(undefined8 *)(param_1 + 0xc08);
    uStack_28 = local_8;
    FUN__text__0065413c(*(undefined8 *)(param_1 + 200),&local_30,&LAB__text__00655164);
    if (*(long *)(param_1 + 0xe8) != 0) {
      FUN__text__00667a8c(param_1,3);
    }
  }
  return;
}


