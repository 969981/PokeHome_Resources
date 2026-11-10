/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005c5508; name: FUN_.text__005c5508
 */


void FUN__text__005c5508(long *param_1)

{
  long lVar1;
  
  FUN__text__006f4420(param_1 + 0x44);
  FUN__text__006f4420(param_1 + 0x3e);
  FUN__text__006f4420(param_1 + 0x38);
  FUN__text__006f4420(param_1 + 0x32);
  FUN__text__006f4838((long)param_1 + 0x174);
  FUN__text__006f4838(param_1 + 0x2b);
  FUN__text__006f4838((long)param_1 + 0x13c);
  FUN__text__006f4838(param_1 + 0x24);
  FUN__text__006f45f4(param_1 + 0x1f);
  FUN__text__006f45f4(param_1 + 0x1a);
  FUN__text__006f45f4(param_1 + 0x15);
  FUN__text__006f45f4(param_1 + 0x10);
  lVar1 = param_1[0xc];
  param_1[0xc] = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)param_1[0xd] + 0x18))
              ((long *)param_1[0xd],lVar1,param_1[0xe],param_1[0xf]);
  }
  lVar1 = param_1[8];
  param_1[8] = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)param_1[9] + 0x18))((long *)param_1[9],lVar1,param_1[10],param_1[0xb]);
  }
  lVar1 = param_1[4];
  param_1[4] = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)param_1[5] + 0x18))((long *)param_1[5],lVar1,param_1[6],param_1[7]);
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005c5608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[1] + 0x18))((long *)param_1[1],lVar1,param_1[2],param_1[3]);
  return;
}


