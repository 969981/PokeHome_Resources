/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002aa604; name: FUN_.text__002aa604
 */


void FUN__text__002aa604(long param_1,long *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  void *__dest;
  void *__dest_00;
  
  if (*(long *)(param_1 + 8) == 0 || *(long *)(param_1 + 0x10) == 0) {
    lVar1 = (**(code **)(*param_2 + 0x10))(param_2,param_3);
    lVar2 = (**(code **)(*param_2 + 0x10))(param_2,param_3);
    if (lVar1 == 0 || lVar2 == 0) {
      if (lVar1 != 0) {
        (**(code **)(*param_2 + 0x18))(param_2,lVar1,param_3);
      }
      if (lVar2 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x002aa6b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x18))(param_2,lVar2,param_3);
      return;
    }
    *(long *)(param_1 + 8) = lVar1;
    *(long *)(param_1 + 0x10) = lVar2;
  }
  else {
    if (param_3 <= *(ulong *)(param_1 + 0x18)) {
      *(ulong *)(param_1 + 0x20) = param_3;
      return;
    }
    __dest = (void *)(**(code **)(*param_2 + 0x10))(param_2,param_3);
    __dest_00 = (void *)(**(code **)(*param_2 + 0x10))(param_2,param_3);
    memcpy(__dest,*(void **)(param_1 + 8),*(size_t *)(param_1 + 0x20));
    memcpy(__dest_00,*(void **)(param_1 + 0x10),*(size_t *)(param_1 + 0x20));
    (**(code **)(*param_2 + 0x18))
              (param_2,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x18));
    (**(code **)(*param_2 + 0x18))
              (param_2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
    *(void **)(param_1 + 8) = __dest;
    *(void **)(param_1 + 0x10) = __dest_00;
  }
  *(ulong *)(param_1 + 0x18) = param_3;
  *(ulong *)(param_1 + 0x20) = param_3;
  return;
}


