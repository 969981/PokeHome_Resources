/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001855d4; name: FUN_.text__001855d4
 */


void FUN__text__001855d4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 local_28;
  
  lVar1 = FUN__text__00321ac0();
  if (*(int *)(lVar1 + 0x1935b8) != 0) {
    local_28 = 0x18803adbad17b81f;
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_2 + 0x1c0),&local_28);
    if (lVar1 != 0) {
      lVar2 = FUN__text__00321ac0();
      *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe | *(byte *)(lVar2 + 0x1935bc);
    }
  }
  local_28 = 0x98348da31419e63c;
  lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_2 + 0x1c0),&local_28);
  if (lVar1 != 0) {
    lVar2 = FUN__text__00321ac0();
    *(byte *)(lVar1 + 0x58) =
         *(byte *)(lVar1 + 0x58) & 0xfe | *(short *)(&DAT__text__00193770 + lVar2) != 0;
  }
  return;
}


