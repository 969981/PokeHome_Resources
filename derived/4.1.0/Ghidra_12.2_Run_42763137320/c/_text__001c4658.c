/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c4658; name: FUN_.text__001c4658
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001c4658(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = _DAT_008a0ed0;
  puVar2 = (undefined8 *)param_1[0x31];
  param_1[0x31] = 0;
  *param_1 = lVar1 + 0x10;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(*(long *)param_1[0x32] + 0x18))
              ((long *)param_1[0x32],puVar2,param_1[0x33],param_1[0x34]);
  }
  lVar1 = param_1[0x2d];
  param_1[0x2d] = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)param_1[0x2e] + 0x18))
              ((long *)param_1[0x2e],lVar1,param_1[0x2f],param_1[0x30]);
  }
  puVar2 = (undefined8 *)param_1[0x29];
  param_1[0x29] = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(*(long *)param_1[0x2a] + 0x18))
              ((long *)param_1[0x2a],puVar2,param_1[0x2b],param_1[0x2c]);
  }
  puVar2 = (undefined8 *)param_1[0x25];
  param_1[0x25] = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(*(long *)param_1[0x26] + 0x18))
              ((long *)param_1[0x26],puVar2,param_1[0x27],param_1[0x28]);
  }
  puVar2 = (undefined8 *)param_1[0x21];
  param_1[0x21] = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(*(long *)param_1[0x22] + 0x18))
              ((long *)param_1[0x22],puVar2,param_1[0x23],param_1[0x24]);
  }
  puVar2 = (undefined8 *)param_1[0x1d];
  param_1[0x1d] = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(*(long *)param_1[0x1e] + 0x18))
              ((long *)param_1[0x1e],puVar2,param_1[0x1f],param_1[0x20]);
  }
  puVar2 = (undefined8 *)param_1[0x19];
  param_1[0x19] = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(*(long *)param_1[0x1a] + 0x18))
              ((long *)param_1[0x1a],puVar2,param_1[0x1b],param_1[0x1c]);
  }
  puVar2 = (undefined8 *)param_1[0x15];
  param_1[0x15] = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(*(long *)param_1[0x16] + 0x18))
              ((long *)param_1[0x16],puVar2,param_1[0x17],param_1[0x18]);
  }
  puVar2 = (undefined8 *)param_1[0x11];
  param_1[0x11] = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(*(long *)param_1[0x12] + 0x18))
              ((long *)param_1[0x12],puVar2,param_1[0x13],param_1[0x14]);
  }
  puVar2 = (undefined8 *)param_1[0xd];
  param_1[0xd] = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(*(long *)param_1[0xe] + 0x18))
              ((long *)param_1[0xe],puVar2,param_1[0xf],param_1[0x10]);
  }
  puVar2 = (undefined8 *)param_1[9];
  param_1[9] = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(*(long *)param_1[10] + 0x18))((long *)param_1[10],puVar2,param_1[0xb],param_1[0xc])
    ;
  }
  puVar2 = (undefined8 *)param_1[5];
  param_1[5] = 0;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  (**(code **)*puVar2)(puVar2);
                    /* WARNING: Could not recover jumptable at 0x001c48d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],puVar2,param_1[7],param_1[8]);
  return;
}


