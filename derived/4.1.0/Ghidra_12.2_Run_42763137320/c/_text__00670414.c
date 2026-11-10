/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00670414; name: FUN_.text__00670414
 */


undefined8 FUN__text__00670414(long param_1,long *param_2,uint param_3)

{
  if (((param_1 != 0) && (param_2 != (long *)0x0)) &&
     ((param_2[0x98] + param_2[0x9c] == 0 || ((param_3 & 1) != 0)))) {
    if (param_2[0xd] != 0) {
      FUN__text__00654bac(param_1);
      param_2[0xd] = 0;
    }
    FUN__text__00654514(param_1);
    *param_2 = param_1;
    if (*(code **)(param_2[0x84] + 0x60) != (code *)0x0) {
      (**(code **)(param_2[0x84] + 0x60))(param_2,param_3 & 1);
      param_1 = *param_2;
    }
    FUN__text__00666f74(param_1,0x721355,param_2[0xc]);
    FUN__text__0064f2b4(param_2);
    FUN__text__00677d14(param_2,0);
    FUN__text__00677d14(param_2,1);
    if (*(int *)((long)param_2 + 0x25c) != -1) {
      FUN__text__0065031c(param_2);
    }
    if ((int)param_2[0x4b] != -1) {
      FUN__text__0065031c(param_2);
    }
    if ((int)param_2[0x4c] != -1) {
      FUN__text__0065031c(param_2);
    }
    if (*(int *)((long)param_2 + 0x264) != -1) {
      FUN__text__0065031c(param_2);
    }
    FUN__text__006511e0(*param_2,param_2,1);
    FUN__text__00670538(param_2);
  }
  return 0;
}


