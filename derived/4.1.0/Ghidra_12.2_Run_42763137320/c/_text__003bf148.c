/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003bf148; name: FUN_.text__003bf148
 */


void FUN__text__003bf148(long param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x88) == -0x340d631b7bddd9bb || *(long *)(param_1 + 0x88) == 0) {
    lVar2 = *(long *)(param_1 + 0xf8);
  }
  else {
    bVar1 = (**(code **)(**(long **)(param_1 + 0x98) + 0x68))();
    *(byte *)(param_1 + 0x84) = bVar1 & 1;
    lVar2 = *(long *)(param_1 + 0xf8);
  }
  if ((lVar2 != -0x340d631b7bddd9bb) && (lVar2 != 0)) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x78))();
  }
  plVar3 = (long *)(param_1 + 0xe0);
  if ((*plVar3 == -0x340d631b7bddd9bb) || (*plVar3 == 0)) {
    return;
  }
  (**(code **)(**(long **)(param_1 + 0x98) + 0x78))(*(long **)(param_1 + 0x98),plVar3);
                    /* WARNING: Could not recover jumptable at 0x003bf224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x98) + 0xa0))(*(long **)(param_1 + 0x98),plVar3);
  return;
}


