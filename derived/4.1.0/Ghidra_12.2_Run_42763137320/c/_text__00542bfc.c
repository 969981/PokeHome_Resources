/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00542bfc; name: FUN_.text__00542bfc
 */


void FUN__text__00542bfc(long param_1,long param_2)

{
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double dStack_68;
  double local_60;
  double dStack_58;
  double local_50;
  double dStack_48;
  undefined8 local_40;
  long lStack_38;
  undefined4 local_14;
  
  FUN__text__00542adc();
  FUN__text__0051e138(param_2,param_1);
  FUN__text__0051e2d0(&local_a0,param_2);
  if ((((*(char *)(*(long *)(param_2 + 8) + 0xc3) != '\0') && (local_a0 <= local_88)) &&
      (local_98 <= local_80)) && (local_90 <= local_78)) {
    if (*(long *)(param_1 + 0x10) != 0) {
      local_40 = 0;
      local_60 = local_90;
      dStack_58 = local_88;
      local_50 = local_80;
      dStack_48 = local_78;
      local_70 = local_a0;
      dStack_68 = local_98;
      local_14 = 1;
      lStack_38 = param_2;
      FUN__text__005450e0(param_1 + 8,&local_70,(long *)(param_1 + 0x10),0,&local_14);
    }
    *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) | 8;
  }
  return;
}


