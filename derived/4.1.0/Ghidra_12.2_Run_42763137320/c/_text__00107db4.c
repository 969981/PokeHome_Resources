/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00107db4; name: FUN_.text__00107db4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00107db4(long *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  
  lVar1 = _DAT_0089f6a8;
  puVar3 = (undefined8 *)param_1[0x42];
  param_1[0x42] = 0;
  *param_1 = lVar1 + 0x10;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
    (**(code **)(*(long *)param_1[0x43] + 0x18))
              ((long *)param_1[0x43],puVar3,param_1[0x44],param_1[0x45]);
  }
  pcVar2 = (code *)param_1[0x33];
  if (pcVar2 != (code *)0x0) {
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    (*pcVar2)(param_1 + 0x36);
  }
  pcVar2 = (code *)param_1[0x23];
  if (pcVar2 != (code *)0x0) {
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    (*pcVar2)(param_1 + 0x26);
  }
  pcVar2 = (code *)param_1[0x13];
  if (pcVar2 != (code *)0x0) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    (*pcVar2)(param_1 + 0x16);
  }
  pcVar2 = (code *)param_1[3];
  if (pcVar2 != (code *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    (*pcVar2)(param_1 + 6);
  }
  operator_delete(param_1);
  return;
}


