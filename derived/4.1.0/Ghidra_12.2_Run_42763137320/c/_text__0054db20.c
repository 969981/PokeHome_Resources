/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0054db20; name: FUN_.text__0054db20
 */


void FUN__text__0054db20(undefined8 param_1,ulong param_2,float *param_3,void *param_4)

{
  float *pfVar1;
  long lVar2;
  
  memset(param_4,0,(param_2 & 0xff) << 2);
  if ((uint)param_3[2] < 4) {
                    /* WARNING: Could not emulate address calculation at 0x0054db74 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__0054db80 + (ulong)*(byte *)((ulong)(uint)param_3[2] + 0x73e376) * 4))();
    return;
  }
  if ((param_2 & 0xff) != 0) {
    if ((param_2 & 0xff) == 1) {
      lVar2 = 0;
    }
    else {
      lVar2 = 0;
      do {
        pfVar1 = (float *)((long)param_4 + lVar2 * 4);
        lVar2 = lVar2 + 2;
        *pfVar1 = *pfVar1 + *param_3;
        pfVar1[1] = pfVar1[1] + *param_3;
      } while ((param_2 & 0xff) - (param_2 & 1) != lVar2);
    }
    if ((param_2 & 1) != 0) {
      *(float *)((long)param_4 + lVar2 * 4) = *(float *)((long)param_4 + lVar2 * 4) + *param_3;
    }
  }
  return;
}


