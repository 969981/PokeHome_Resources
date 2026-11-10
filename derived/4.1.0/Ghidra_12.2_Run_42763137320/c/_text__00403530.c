/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00403530; name: FUN_.text__00403530
 */


void * FUN__text__00403530(int param_1,undefined8 param_2,void *param_3,ulong param_4,ulong param_5,
                          ulong param_6,uint param_7)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 < 0x11) {
    pvVar1 = (void *)FUN__text__00403290(param_1,param_2,param_3,param_5,param_6,param_7);
    return pvVar1;
  }
  if (param_3 == (void *)0x0) {
    uVar2 = 0;
    if (param_5 == 0) goto LAB__text__00403638;
  }
  else {
    uVar4 = *(ulong *)(&DAT_00ae8a50 + (long)param_1 * 0x638) & (ulong)param_3;
    if (*(uint *)(uVar4 + 0xc) < 0x7e) {
      uVar2 = (ulong)*(uint *)(uVar4 + 0x24);
      uVar3 = (long)param_3 + (-0x80 - uVar4);
      uVar4 = 0;
      if (uVar2 != 0) {
        uVar4 = uVar3 / uVar2;
      }
      uVar2 = uVar2 + (uVar4 * uVar2 - uVar3);
    }
    else if (*(uint *)(uVar4 + 0xc) == 0x7e) {
      uVar2 = (uVar4 - (long)param_3) +
              (&DAT_00ae8a40)[(long)param_1 * 199] * (ulong)*(uint *)(uVar4 + 0x2c);
    }
    else {
      uVar2 = (uVar4 - (long)param_3) +
              *(long *)(&DAT_00ae8a28 + (long)param_1 * 0x638) * (ulong)*(uint *)(uVar4 + 0x2c);
    }
    if (param_5 <= uVar2) {
LAB__text__00403638:
      if ((param_4 - 1 & (ulong)param_3) == 0) {
        if (((param_7 >> 1 & 1) != 0) || (uVar2 >> 1 <= param_5)) {
          return param_3;
        }
        goto LAB__text__00403648;
      }
    }
  }
  if ((param_7 >> 1 & 1) != 0) {
    return (void *)0x0;
  }
LAB__text__00403648:
  pvVar1 = (void *)FUN__text__004036d0(param_1,param_2,param_4,param_5);
  if (pvVar1 != (void *)0x0) {
    if ((param_3 != (void *)0x0) && ((param_7 & 1) == 0)) {
      if (param_6 != 0) {
        uVar2 = param_6;
      }
      if (param_5 <= uVar2) {
        uVar2 = param_5;
      }
      memcpy(pvVar1,param_3,uVar2);
    }
    FUN__text__00402fe0(param_1,param_3);
  }
  return pvVar1;
}


