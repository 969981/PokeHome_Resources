/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00107f50; name: FUN_.text__00107f50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00107f50(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = _DAT_0089f6b0;
  puVar2 = (undefined8 *)param_1[0xc];
  param_1[0xc] = 0;
  *param_1 = lVar1 + 0x10;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(*(long *)param_1[0xd] + 0x18))
              ((long *)param_1[0xd],puVar2,param_1[0xe],param_1[0xf]);
  }
  puVar2 = (undefined8 *)param_1[8];
  param_1[8] = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(*(long *)param_1[9] + 0x18))((long *)param_1[9],puVar2,param_1[10],param_1[0xb]);
  }
  puVar2 = (undefined8 *)param_1[4];
  param_1[4] = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(*(long *)param_1[5] + 0x18))((long *)param_1[5],puVar2,param_1[6],param_1[7]);
  }
  operator_delete(param_1);
  return;
}


