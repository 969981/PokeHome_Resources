/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066bf98; name: FUN_.text__0066bf98
 */


undefined8 *
FUN__text__0066bf98(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_4 == (undefined8 *)0x0) {
    return param_3;
  }
  if (param_3 == (undefined8 *)0x0) {
    *param_4 = 0;
    param_4[1] = 0;
  }
  else {
    puVar1 = (undefined8 *)FUN__text__0066be80(param_1,param_2);
    lVar2 = puVar1[4];
    if ((param_1 == lVar2) && (*(int *)(puVar1 + 5) == (int)param_2)) {
      param_4[2] = puVar1;
      param_4[4] = 0xffffffffffffffff;
      param_4[5] = 0xffffffffffffffff;
      param_4[3] = puVar1[3];
      *(undefined8 **)(puVar1[3] + 0x10) = param_4;
      goto LAB__text__0066c04c;
    }
    if ((param_1 < lVar2) || ((param_1 <= lVar2 && ((int)param_2 < *(int *)(puVar1 + 5))))) {
      *param_4 = *puVar1;
      param_4[1] = puVar1;
      *puVar1 = 0;
    }
    else {
      uVar3 = puVar1[1];
      *param_4 = puVar1;
      param_4[1] = uVar3;
      puVar1[1] = 0;
    }
  }
  param_4[4] = param_1;
  param_4[5] = param_2;
  param_4[2] = param_4;
  puVar1 = param_4;
LAB__text__0066c04c:
  puVar1[3] = param_4;
  return puVar1;
}


