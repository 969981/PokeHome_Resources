/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00542adc; name: FUN_.text__00542adc
 */


void FUN__text__00542adc(long param_1,long param_2)

{
  long lVar1;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  long local_68;
  double local_60;
  double dStack_58;
  double local_50;
  double dStack_48;
  double local_40;
  double dStack_38;
  undefined4 local_14;
  
  local_68 = param_2;
  lVar1 = FUN__text__0051e130(param_2);
  if (lVar1 != 0) {
    FUN__text__0051e138(param_2,0);
    FUN__text__0051e2d0(&local_98,param_2);
    *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) | 8;
    if ((((*(char *)(*(long *)(param_2 + 8) + 0xc3) != '\0') && (local_98 <= local_80)) &&
        (local_90 <= local_78)) && (local_88 <= local_70)) {
      if (*(long *)(param_1 + 0x10) != 0) {
        local_50 = local_88;
        dStack_48 = local_80;
        local_40 = local_78;
        dStack_38 = local_70;
        local_60 = local_98;
        dStack_58 = local_90;
        local_14 = 1;
        FUN__text__00544830(param_1 + 8,&local_60,&local_68,(long *)(param_1 + 0x10),&local_14);
        param_2 = local_68;
      }
      FUN__text__0051f6b0(param_2);
    }
  }
  return;
}


