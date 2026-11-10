/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0016aac0; name: FUN_.text__0016aac0
 */


ulong FUN__text__0016aac0(byte *param_1)

{
  ulong uVar1;
  uint uVar2;
  undefined8 local_8;
  
  if (*param_1 - 100 < 7) {
                    /* WARNING: Could not emulate address calculation at 0x0016aaec */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&UNK__text__0016aaf8 +
                      (ulong)*(byte *)((ulong)(*param_1 - 100) + 0x7252de) * 4))();
    return uVar1;
  }
  local_8 = 0x736e61482d687a;
  uVar1 = FUN__text__0016aa10(param_1,&local_8);
  if ((uVar1 & 1) != 0) {
    return 9;
  }
  local_8 = 0x6f6b;
  uVar1 = FUN__text__0016aa10(param_1,&local_8);
  if ((uVar1 & 1) != 0) {
    return 8;
  }
  local_8 = 0x6c6e;
  uVar1 = FUN__text__0016aa10(param_1,&local_8);
  if ((uVar1 & 1) != 0) {
    return 2;
  }
  local_8 = 0x7470;
  uVar1 = FUN__text__0016aa10(param_1,&local_8);
  if ((uVar1 & 1) != 0) {
    return 2;
  }
  local_8 = 0x7572;
  uVar1 = FUN__text__0016aa10(param_1,&local_8);
  if ((uVar1 & 1) != 0) {
    return 2;
  }
  local_8 = 0x746e61482d687a;
  uVar1 = FUN__text__0016aa10(param_1,&local_8);
  if ((uVar1 & 1) != 0) {
    return 10;
  }
  local_8 = 0x42472d6e65;
  uVar1 = FUN__text__0016aa10(param_1,&local_8);
  if ((uVar1 & 1) != 0) {
    return 2;
  }
  local_8 = 0x41432d7266;
  uVar1 = FUN__text__0016aa10(param_1,&local_8);
  if ((uVar1 & 1) != 0) {
    return 3;
  }
  local_8 = 0x3931342d7365;
  uVar1 = FUN__text__0016aa10(param_1,&local_8);
  uVar2 = 0xb;
  if ((uVar1 & 1) == 0) {
    uVar2 = 2;
  }
  return (ulong)uVar2;
}


