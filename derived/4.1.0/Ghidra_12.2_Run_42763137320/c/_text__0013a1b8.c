/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0013a1b8; name: FUN_.text__0013a1b8
 */


void FUN__text__0013a1b8(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  undefined8 local_18;
  
  if (param_2 < 9) {
    local_18 = *(undefined8 *)(*(long *)((long)(int)param_2 * 8 + 0x869c48) + (ulong)param_3 * 8);
  }
  else {
    local_18 = 0xcbf29ce484222645;
  }
  lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_18);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) | 1;
  return;
}


