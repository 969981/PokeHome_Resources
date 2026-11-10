/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004fa480; name: FUN_.text__004fa480
 */


void FUN__text__004fa480(long param_1,long param_2,uint param_3,long *param_4)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x48);
  if ((((*(byte *)(param_1 + 0x48) & 1) != 0) && (param_2 <= *(long *)(param_1 + 0x20))) &&
     (*(long *)(param_1 + 0x20) < (long)(param_2 + (ulong)param_3))) {
    FUN__text__004ebee4(*(undefined8 *)(param_1 + 8),param_1 + 0x28);
    uVar2 = *(byte *)(param_1 + 0x48) & 0xfe;
    *(char *)(param_1 + 0x48) = (char)uVar2;
  }
  if ((((uVar2 >> 1 & 1) != 0) &&
      (lVar3 = *(long *)(param_1 + 0x38), lVar3 < (long)(param_2 + (ulong)param_3))) &&
     (param_2 <= lVar3)) {
    FUN__text__004ec010(*(undefined8 *)(param_1 + 8),param_1 + 0x40,(int)lVar3 - (int)param_2);
    *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) & 0xfd;
  }
  bVar1 = *(byte *)(*(long *)(param_1 + 8) + 0x5a);
  if ((bVar1 & 3) == 0 || (bVar1 & 0x10) != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    lVar3 = *(long *)(param_1 + 0x10);
    if ((char)param_4[1] == '\0') {
      *param_4 = lVar3;
      *(undefined1 *)(param_4 + 1) = 1;
    }
    else if (lVar3 < *param_4) {
      *param_4 = lVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x004fa59c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0xa8))(*(long **)(param_1 + 8),param_2,param_3,param_4);
  return;
}


