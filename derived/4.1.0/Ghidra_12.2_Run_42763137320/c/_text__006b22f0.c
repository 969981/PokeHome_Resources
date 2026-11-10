/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b22f0; name: FUN_.text__006b22f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006b22f0(undefined8 param_1,float *param_2,long *param_3)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  
  param_2[0] = 1.0;
  puVar4 = _DAT_008a52c0;
  pbVar3 = _DAT_008a52b8;
  puVar2 = _DAT_0089f8a0;
  pbVar1 = _DAT_0089f898;
  param_2[1] = 1.0;
  if (param_3 != (long *)0x0) {
    do {
      if (((*pbVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(pbVar3), iVar5 != 0)) {
        if (((*pbVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(pbVar1), iVar5 != 0)) {
          *puVar2 = 0;
          __cxa_guard_release(pbVar1);
        }
        *puVar4 = puVar2;
        __cxa_guard_release(pbVar3);
      }
      puVar6 = (undefined8 *)(**(code **)(*param_3 + 0x10))(param_3);
      if (puVar6 == puVar4) {
        return;
      }
      do {
        puVar6 = (undefined8 *)*puVar6;
      } while (puVar6 != puVar4 && puVar6 != (undefined8 *)0x0);
      if (puVar6 != (undefined8 *)0x0) {
        return;
      }
      *param_2 = *param_2 * *(float *)(param_3 + 9);
      param_2[1] = param_2[1] * *(float *)((long)param_3 + 0x4c);
      param_3 = (long *)param_3[3];
    } while (param_3 != (long *)0x0);
  }
  return;
}


