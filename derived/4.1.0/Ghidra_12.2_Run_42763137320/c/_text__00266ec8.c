/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00266ec8; name: FUN_.text__00266ec8
 */


void FUN__text__00266ec8(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x72cf60);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe | param_2 == 1;
  }
  lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x72cf68);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe | param_2 == 2;
  }
  if (param_2 == 2) {
    FUN__text__002671d0(param_1);
    return;
  }
  if (param_2 == 1) {
    FUN__text__00266f70(param_1);
    return;
  }
  return;
}


