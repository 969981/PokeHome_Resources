/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00435a30; name: FUN_.text__00435a30
 */


void FUN__text__00435a30(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_2c = 0.0;
  FUN__text__00434be0(param_1,(ulong)CONCAT14(*(undefined1 *)((long)param_2 + 0xd),*param_2),param_3
                      ,&local_2c,0);
  fVar2 = local_2c;
  if ((float)param_2[0xc] == local_2c) {
    fVar3 = (float)param_2[0xe];
  }
  else {
    if ((float)param_2[0xd] != local_2c) goto LAB__text__00435ac4;
    fVar3 = (float)param_2[0xf];
  }
  if (fVar3 != 3.4028235e+38) {
    return;
  }
LAB__text__00435ac4:
  if (*(long *)(param_2 + 6) == 0) {
    local_28 = 0;
  }
  else {
    local_24 = param_2[10];
    local_28 = 0;
    FUN__text__0041a060(local_2c,param_2 + 6,&local_24,&local_28);
    param_2[10] = local_24;
  }
  bVar1 = *(byte *)(param_2 + 5);
  *(byte *)(param_2 + 5) = bVar1 ^ 1;
  param_2[(ulong)bVar1 + 0xc] = fVar2;
  param_2[(ulong)bVar1 + 0xe] = local_28;
  return;
}


