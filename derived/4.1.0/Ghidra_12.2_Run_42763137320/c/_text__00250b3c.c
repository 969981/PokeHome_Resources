/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00250b3c; name: FUN_.text__00250b3c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00250b3c(long param_1,ulong param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  long lVar2;
  long local_18;
  
  lVar2 = *(long *)(_DAT_008a1cb0 + (ulong)param_4 * 8);
  if (lVar2 == -0x340d631b7bddd9bb || lVar2 == 0) {
    iVar1 = *(int *)(param_1 + (param_2 & 0xffffffff) * 4 + 0x648);
  }
  else {
    local_18 = lVar2;
    FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),&local_18);
    iVar1 = *(int *)(param_1 + (param_2 & 0xffffffff) * 4 + 0x648);
  }
  if (iVar1 - 1U < 10) {
                    /* WARNING: Could not recover jumptable at 0x00250be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__00250be4 + (ulong)*(byte *)((ulong)(iVar1 - 1U) + 0x72be45) * 4))();
    return;
  }
  return;
}


