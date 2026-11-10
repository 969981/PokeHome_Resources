/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00185c60; name: FUN_.text__00185c60
 */


void FUN__text__00185c60(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x725800);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe | param_2 == 0;
  }
  lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x725808);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe | param_2 == 1;
  }
  lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x725810);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe | param_2 == 2;
  }
  lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x725818);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe | param_2 == 3;
  }
  lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x725820);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe | param_2 == 4;
  }
  lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x725828);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe | param_2 == 5;
  }
  lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x725830);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe | param_2 == 6;
  }
  return;
}


