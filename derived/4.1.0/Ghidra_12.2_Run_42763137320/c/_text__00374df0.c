/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00374df0; name: FUN_.text__00374df0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00374df0(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  *param_1 = _DAT_008a2ea8 + 0x10;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0xf));
  puVar2 = (undefined8 *)param_1[0xb];
  param_1[0xb] = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(*(long *)param_1[0xc] + 0x18))
              ((long *)param_1[0xc],puVar2,param_1[0xd],param_1[0xe]);
  }
  puVar2 = (undefined8 *)param_1[7];
  param_1[7] = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(*(long *)param_1[8] + 0x18))((long *)param_1[8],puVar2,param_1[9],param_1[10]);
  }
  lVar1 = param_1[1];
  if (lVar1 == 0) {
    return;
  }
  param_1[2] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00374ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[4] + 0x18))((long *)param_1[4],lVar1,param_1[3] - lVar1,8);
  return;
}


