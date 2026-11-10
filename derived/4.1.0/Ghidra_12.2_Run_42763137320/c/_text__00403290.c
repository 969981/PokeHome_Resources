/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00403290; name: FUN_.text__00403290
 */


undefined8 *
FUN__text__00403290(int param_1,long param_2,undefined8 *param_3,ulong param_4,size_t param_5,
                   uint param_6)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  size_t __n;
  undefined8 *puVar7;
  
  if (param_3 == (undefined8 *)0x0) {
    __n = 0;
  }
  else {
    uVar4 = *(ulong *)(&DAT_00ae8a50 + (long)param_1 * 0x638) & (ulong)param_3;
    if (*(uint *)(uVar4 + 0xc) < 0x7e) {
      uVar1 = *(uint *)(uVar4 + 0x24);
      uVar5 = (ulong)uVar1;
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = (uint)((int)param_3 - (int)(uVar4 + 0x80)) / uVar1;
      }
      puVar7 = (undefined8 *)(uVar4 + 0x80 + uVar5 * uVar2);
      __n = (uVar5 - (long)param_3) + (long)puVar7;
      if (param_5 != 0) {
        __n = param_5;
      }
      if (param_4 <= uVar5) goto LAB__text__00403308;
    }
    else {
      uVar5 = param_4 + 0x80;
      if (*(uint *)(uVar4 + 0xc) == 0x7e) {
        puVar7 = (undefined8 *)(uVar4 + 0x80);
        uVar6 = uVar5 >> (*(ulong *)(&DAT_00ae8a48 + (long)param_1 * 0x638) & 0x3f);
        if ((*(ulong *)(&DAT_00ae8a50 + (long)param_1 * 0x638) - 1 & uVar5) != 0) {
          uVar6 = uVar6 + 1;
        }
        __n = param_5;
        if (param_5 == 0) {
          __n = (long)puVar7 +
                ((&DAT_00ae8a40)[(long)param_1 * 199] * (ulong)*(uint *)(uVar4 + 0x2c) -
                (long)param_3) + -0x80;
        }
        if (uVar6 <= *(uint *)(uVar4 + 0x2c) && __n >> 1 <= uVar5) {
LAB__text__00403308:
          if ((param_6 & 1) != 0) {
            return puVar7;
          }
          if (puVar7 == param_3) {
            return puVar7;
          }
          memmove(puVar7,param_3,__n);
          return puVar7;
        }
      }
      else {
        puVar7 = (undefined8 *)(uVar4 + 0x80);
        uVar6 = uVar5 >> (*(ulong *)(&DAT_00ae8a30 + (long)param_1 * 0x638) & 0x3f);
        if ((*(long *)(&DAT_00ae8a28 + (long)param_1 * 0x638) - 1U & uVar5) != 0) {
          uVar6 = uVar6 + 1;
        }
        uVar1 = *(uint *)(uVar4 + 0x2c);
        __n = (long)puVar7 +
              (*(long *)(&DAT_00ae8a28 + (long)param_1 * 0x638) * (ulong)uVar1 - (long)param_3) +
              -0x80;
        if (param_5 != 0) {
          __n = param_5;
        }
        if (uVar6 <= uVar1 && uVar1 >> 1 <= uVar6) goto LAB__text__00403308;
      }
    }
  }
  if ((param_6 >> 1 & 1) != 0) {
    return (undefined8 *)0x0;
  }
  uVar4 = __n + (__n >> 2) + (__n >> 3);
  uVar5 = uVar4;
  if (param_4 <= __n) {
    uVar5 = param_4;
  }
  if (param_4 <= uVar4) {
    param_4 = uVar5;
  }
  if (param_4 < 0x401) {
    puVar3 = (undefined8 *)(param_2 + (param_4 + 0xf >> 4) * 0x18 + 8);
    puVar7 = (undefined8 *)*puVar3;
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)FUN__text__00405120(param_1);
    }
    else {
      *puVar3 = *puVar7;
    }
  }
  else if (*(ulong *)(&DAT_00ae8e58 + (long)param_1 * 0x638) < param_4) {
    if ((&DAT_00ae8a40)[(long)param_1 * 199] * 0x20 - 0x80U < param_4) {
      puVar7 = (undefined8 *)FUN__text__00404f90();
    }
    else {
      puVar7 = (undefined8 *)FUN__text__00404df0(param_1,param_2,param_4);
    }
  }
  else {
    puVar7 = (undefined8 *)FUN__text__00404da0(param_1,param_2,param_4);
  }
  puVar3 = puVar7;
  if ((param_3 == (undefined8 *)0x0) || (puVar3 = (undefined8 *)0x0, puVar7 == (undefined8 *)0x0)) {
    return puVar3;
  }
  if ((param_6 & 1) == 0) {
    if (param_4 <= __n) {
      __n = param_4;
    }
    memcpy(puVar7,param_3,__n);
  }
  FUN__text__00402fe0(param_1,param_3);
  return puVar7;
}


